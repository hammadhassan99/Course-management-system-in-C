#pragma once
# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include "Members_of_Institute.h"
using namespace std;

string course[50] = { "AI", "CN", "DIP", "ADB", "OS", "DB", "ALGO", "OOP", "DS", "PF" };
class Admin :public Members
{
	//string course[50]; 
	string section, department, dummy;
	static int course_ID, t; int credit_hours;
public:
	Admin() {
		section = "\0";
	}
	void add_admin(Members& m)
	{
		m.set_member_attributes();
		return;
	}
	void add_teacher(Members& m)
	{
		m.set_member_attributes();
		return;
	}
	void add_student(Members& m)
	{
		m.set_member_attributes();
		return;
	}
	int add_section() {
		int no_section;
		cout << "Enter number of sections for the subject: ";
		cin >> no_section;
		return no_section;
	}
	void readCourseData()
	{
		//Course c;
		ifstream read;
		read.open("courses.txt");
		read >> course_ID;
		read.ignore();
		getline(read, course[t]);
		getline(read, department);
		read >> credit_hours;
		while (!read.eof())
		{
			read >> course_ID;
			read.ignore();
			getline(read, course[t]);
			getline(read, department);
			read >> credit_hours;
		}
		read.close();
	}
	int searchCourseData(int id3)
	{
		int id=id3;
		ifstream read;
		read.open("courses.txt", ios::in);
		read >> course_ID;
		read.ignore();
		getline(read, course[t]);
		getline(read, department);
		read >> credit_hours;
		int id2;
		while (!read.eof())
		{
			if (course_ID == id)
			{
				printf("Found\n");
				id2 = course_ID;
				break;
			}
			read >> course_ID;
			read.ignore();
			getline(read, course[t]);
			getline(read, department);
			read >> credit_hours;
		}
		return id2;
	}
	virtual void add_course()
	{
		Admin a5;
		t = t + 1;
		course_ID += 1;
		cout << "\nEnter course name: ";
		getline(cin, course[t]);
		cout << "Enter department: ";
		getline(cin, department);
		cout << "Enter credit hours: ";
		cin>>credit_hours;
		int sect = add_section();
		getline(cin, dummy);
		cout << course[t] << "  " << department << "   " << credit_hours << "  " << sect << endl;
		fstream myfile;
		myfile.open("courses.txt", ios::app);
		myfile <<"\n"<< course_ID << endl;
		myfile << course[t] << endl;
		myfile << department << endl;
		myfile << credit_hours << endl;
		myfile << sect;
		myfile.close();
		cout << "Added to courses" << endl;
	}
	void remove_course(int id3) {
		int id = searchCourseData(id3);
		ofstream tfile;
		tfile.open("temporary_file.txt");
		ifstream read;
		read.open("courses.txt");
		read >> course_ID;
		read.ignore();
		getline(read, course[t]);
		getline(read, department);
		read >> credit_hours;
		while (!read.eof())
		{
			if (course_ID != id)
			{
				tfile << course_ID << "\n";
				tfile << course[t] << "\n";
				tfile << department << "\n";
				tfile << credit_hours << "\n";
			}
			read >> course_ID;
			read.ignore();
			getline(read, course[t]);
			getline(read, department);
			read >> credit_hours;
		}
		read.close();
		tfile.close();
		remove("courses.txt");
		rename("temporary_file.txt", "courses.txt");
		cout << "\nCourse Deleted\n" << endl;
	}
	void update_course(int cr_id) {
		
		int id = searchCourseData(cr_id);
		string temp;
		string temp_name;
		string temp_depart;
		string temp_credit;
		fstream myfile;
		myfile.open("courses.txt", ios::app);
		int er = cr_id;
		while (1) {
			if (!myfile.eof()) {
				getline(myfile, temp);
				if (temp.find(cr_id) == string::npos || er<110 || er >course_ID) {
					cout << "Press enter to proceed" << endl;
					cin.ignore();
					cout << "Enter new name: ";
					t = t + 1;
					getline(cin, course[t]);
					cout << "Enter new department: ";
					getline(cin, temp_depart);
					cout << "Enter new credit hours: ";
					getline(cin, temp_credit);
				}
				else if (temp.find(cr_id) != string::npos) {
					cout << "Not Found\n";
				}
			}
			else  if (myfile.eof()){
				break;
			}
			
		}
		myfile << "\n" << course_ID << endl;
		myfile << temp_name << endl;
		myfile << temp_depart << endl;
		myfile << temp_credit;
		cout << "Following record updated successfully: " << endl;
		cout << course[t] << " --" << temp_depart << " --" << temp_credit << " " << endl;
		myfile.close();
	}
	void print_courses() {
		for (int i = 0; i <= t; i++){
			cout << course[i] << "  ";
		}
		cout << endl;
	}
	
	void storeDataInFile()
	{
		Admin a;
		a.add_course();
		ofstream fout;
		fout.open("CourseData.txt");
		fout.write((char*)&a, sizeof(class Admin));
		fout.close();
	}
	void getFile()
	{
		Admin a;
		ifstream fin;
		fin.open("CourseData.txt");
		fin.read((char*)&a, sizeof(class Admin));
		while (!fin.eof())
		{
			a.print_courses();
			fin.read((char*)&a, sizeof(class Admin));
		}
		fin.close();
	}
	~Admin() {

	}
};
int Admin::course_ID = 109;
int Admin::t = 9;