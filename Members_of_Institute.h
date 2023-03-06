#pragma once
# include <iostream>
# include <string>
using namespace std;
class Members
{
	static int id;		
	string phone_number;
	string name;	
	string DOB;		
	string email;
public:
	Members() {
		phone_number = "\0"; name = "\0"; DOB = "\0"; email = "\0";
	}
	virtual void set_member_attributes() {
		id = id + 1;
		cout << "\nEnter name: ";
		getline(cin, name);
		cout << "Enter dob: ";
		getline(cin, DOB); 
		cout << "Enter phone#: ";
		getline(cin, phone_number);
		cout << "Enter email: ";
		getline(cin, email);
		cout << endl;
	}
	//void setID();
	string get_attributes() {
		return (name, DOB, email);
	}
	void print_attributes() {
		cout << "Id is: " << id << endl;
		cout << "Name is: " << name << endl;
		cout << "DOB is: " << DOB << endl;
		cout << "Phone# is: " << phone_number << endl;
		cout << "Email-Id is: " << email << endl;
	}
	void print_emp_info() {
		cout << "Admin Id is: " << id << endl;
		cout << "Name is: " << name << endl;
	}
	~Members() {

	}
};
int Members::id = 999;