# include <iostream>
# include <string>
# include <fstream>
# include <vector>
# include "Members_of_Institute.h"
using namespace std;
class Student :public Admin
{
public:
	Members* m8;
	int exam_id; static int ID; int password; 
	string name, cgpa, curr_sem, dummy;
	Student() {
		exam_id = 0;
		
	}
	void setID() {
		ID = ID + 1;
	}

	void setInfo() {
		ID += 1;
		fstream myfile;
		string nm, cgp, semester;
		//cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Enter name: " << endl;
		getline(cin, nm);
		cout << "Enter cgpa" << endl;
		getline(cin, cgp);
		cout << "Enter semester" << endl;
		getline(cin, semester);
		//getline(cin, dummy);
		name = nm;
		cgpa = cgp;
		curr_sem = semester;
		myfile.open("students.txt", ios::app);
		myfile << "\n" << ID << endl;
		myfile << name << endl;
		myfile << cgpa << endl;
		myfile << curr_sem;
	}
	int getID() {
		return ID;
	}
	void showinfo() {
		cout << ID << endl;
		cout << name << endl;
		cout << cgpa << endl;
		cout << curr_sem << endl;
	}
	void view_marks() {
		cout << "Hehe";
	}
	void add_course()
	{
		Admin a5;
		int cr_ID = 112;
		string course_name, department, credits;
		cout << "\nEnter course name: ";
		getline(cin, course_name);
		cout << "Enter department: ";
		getline(cin, department);
		cout << "Enter credit hours: ";
		cin >> credits;
		cout << course_name << "  " << department << "   " << credits << "  " << endl;
		fstream myfile;
		myfile.open("student_course.txt", ios::app);
		myfile << "\n" << cr_ID << endl;
		myfile << ID <<endl;
		myfile << course_name << endl;
		myfile << department << endl;
		myfile << credits;
		myfile.close();
		cout << "Added to your courses" << endl;
	}
	~Student() {

	}
};
int Student::ID = 2743;