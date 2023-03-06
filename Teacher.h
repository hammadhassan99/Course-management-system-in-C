#pragma once
# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include "Members_of_Institute.h"
# include "Student.h"
using namespace std;
class Teacher :public Members
{
public:
	Admin* A9;
	int size = 50;
	int** marks = new int* [size];
	Teacher() {
		for (int i = 0; i < size; i++) {
			marks[i] = new int[2];
			*marks[i] = 1;
		}
	}
	float add_weightage() {
		float weighatge;
		cout << "Enter weightage: " << endl;
		cin >> weighatge;
		return weighatge;
	}
	void add_marks(Student S) {
		system("CLS");
		int ro, ro_total;
		int e = S.getID();
		string nm;
		float weight = add_weightage();
		fstream myfile2;
		//cout << "Press Enter Key" << endl;
		myfile2.open("marks.txt", ios::app);
		cin.ignore();
		cout << "Enter Course name for marks: " << endl;
		getline(cin, nm);
		string exam_type;
		int choice = 0;
		int id;
		cout << "Select 1 option: " << endl;
		cout << "\tFor, Quiz press 1\n";
		cout << "\tFor, Assignment press 2\n";
		cout << "\tFor, Mid press 3\n";;
		cout << "\tFor, Final press 4\n";
		cin >> choice;
		cin.ignore();
		if (choice == 1)
		{
			cout << "\Enter quiz number: \n";
			getline(cin, exam_type);
			cout << "Enter marks for uploading: ";
			cin >> ro;
			cout << "Enter Total marks: ";
			cin >> ro_total;
			cin.ignore();
			if (nm == "AI") {
				id = 100;
			}
			else if (nm == "CN") {
				id = 101;
			}
			else if (nm == "DIP") {
				id = 102;
			}
			else if (nm == "ADB") {
				id = 103;
			}
			else if (nm == "PF") {
				id = 109;
			}
			else if (nm == "OOP") {
				id = 107;
			}
			else if (nm == "DS") {
				id = 108;
			}
			else if (nm == "OS") {
				id = 104;
			}
			else if (nm == "DB") {
				id = 105;
			}
			else if (nm == "ALGO") {
				id = 106;
			}
			else if (nm == "Linear Algebra") {
				id = 110;
			}
			myfile2 << "\n" << id << endl;
			myfile2 << e << endl;
			myfile2 << exam_type << endl;
			myfile2 << ro << endl;
			myfile2 << ro_total << endl;
			myfile2 << weight;
			myfile2.close();
			cout << "Added to record" << endl;
		}
		else if (choice == 2)
		{
			cout << "\Enter assignment number: \n";
			getline(cin, exam_type);
			cout << "Enter marks for uploading: ";
			cin >> ro;
			cout << "Enter Total marks: ";
			cin >> ro_total;
			cin.ignore();
			if (nm == "AI") {
				id = 100;
			}
			else if (nm == "CN") {
				id = 101;
			}
			else if (nm == "DIP") {
				id = 102;
			}
			else if (nm == "ADB") {
				id = 103;
			}
			else if (nm == "PF") {
				id = 109;
			}
			else if (nm == "OOP") {
				id = 107;
			}
			else if (nm == "DS") {
				id = 108;
			}
			else if (nm == "OS") {
				id = 104;
			}
			else if (nm == "DB") {
				id = 105;
			}
			else if (nm == "ALGO") {
				id = 106;
			}
			else if (nm == "Linear Algebra") {
				id = 110;
			}
			myfile2 << "\n" << id << endl;
			myfile2 << e << endl;
			myfile2 << exam_type << endl;
			myfile2 << ro << endl;
			myfile2 << ro_total << endl;
			myfile2 << weight;
			myfile2.close();
			cout << "Added to record" << endl;
		}
		else if (choice == 3)
		{
			cout << "\Enter mid number: \n";
			getline(cin, exam_type);
			cout << "Enter marks for uploading: ";
			cin >> ro;
			cout << "Enter Total marks: ";
			cin >> ro_total;
			cin.ignore();
			if (nm == "AI") {
				id = 100;
			}
			else if (nm == "CN") {
				id = 101;
			}
			else if (nm == "DIP") {
				id = 102;
			}
			else if (nm == "ADB") {
				id = 103;
			}
			else if (nm == "PF") {
				id = 109;
			}
			else if (nm == "OOP") {
				id = 107;
			}
			else if (nm == "DS") {
				id = 108;
			}
			else if (nm == "OS") {
				id = 104;
			}
			else if (nm == "DB") {
				id = 105;
			}
			else if (nm == "ALGO") {
				id = 106;
			}
			else if (nm == "Linear Algebra") {
				id = 110;
			}
			myfile2 << "\n" << id << endl;
			myfile2 << e << endl;
			myfile2 << exam_type << endl;
			myfile2 << ro << endl;
			myfile2 << ro_total << endl;
			myfile2 << weight;
			myfile2.close();
			cout << "Added to record" << endl;
		}
		else if (choice == 4)
		{
			cout << "\Enter final: \n";
			getline(cin, exam_type);
			cout << "Enter marks for uploading: ";
			cin >> ro;
			cout << "Enter Total marks: ";
			cin >> ro_total;
			cin.ignore();
			if (nm == "AI") {
				id = 100;
			}
			else if (nm == "CN") {
				id = 101;
			}
			else if (nm == "DIP") {
				id = 102;
			}
			else if (nm == "ADB") {
				id = 103;
			}
			else if (nm == "PF") {
				id = 109;
			}
			else if (nm == "OOP") {
				id = 107;
			}
			else if (nm == "DS") {
				id = 108;
			}
			else if (nm == "OS") {
				id = 104;
			}
			else if (nm == "DB") {
				id = 105;
			}
			else if (nm == "ALGO") {
				id = 106;
			}
			else if (nm == "Linear Algebra") {
				id = 110;
			}
			myfile2 << "\n" << id << endl;
			myfile2 << e << endl;
			myfile2 << exam_type << endl;
			myfile2 << ro << endl;
			myfile2 << ro_total << endl;
			myfile2 << weight;
			myfile2.close();
			cout << "Added to record" << endl;
		}
		else {
			cout << "Course not found :(" << endl;
		}
	}
	void add_grade();
	void add_assignment();
	~Teacher() {
		delete[] marks;
	}
};