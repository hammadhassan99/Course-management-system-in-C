# include <iostream>
# include <string>
# include "Admin.h"
# include "Teacher.h"
using namespace std;
int main()
{
	cout << "Welcome to ABC LMS powered by SAmSoft" << endl;
	cout << "Loading data....\n";
	cout << "Loading dll's....\n";
	cout << "Synchronising binary assets....\n";
	cout << "Establishing connection with server....\n";
	cout << "Connected with linkages....\n";
	cout << "Genterating preview....\n";
	cout << "Loading dashboard....\n";
	cout << "!!!\n";
	cout << ".............\n";
	cout << "Welcome to ABC :)\n";
	cout << ".............\n";
	int R;
	cout << "Press 1 to proceed or any other key to exit:  ";
	cin >> R;
	if (R == 1) {
		system("cls");
	}
	else if (R != 1) {
		return 0;
	}
	//Employees* E1;
	Student s5;
	Admin* A8;
	A8 = &s5;
	cout << ".............\n";
	cout << ".............\n";
	int choice = 0;
	string exe;
	Admin a1; Admin a2;
	Members m1; Members m2;
	Student S; Teacher t1;
	int main_option = R;
	int user_type;
	//cin >> user_type;
	string login_pass;
	string login_id;
	fstream myfile3;
	string temp;
	int status;
	myfile3.open("login.txt");
	do {
		system("CLS");
		cout << "Enter 1 if you are an admin\n";
		cout << "Enter 2 if you are a teacher\n";
		cout << "Enter 3 if you are a student\n";
		cout << "Enter 0 to exit :( \n";
		cin >> main_option;
		if (main_option == 1) {
			cin.ignore();
			cout << "Enter ID: "; getline(cin, login_id);
			cout << "Enter password: "; cin >> login_pass;
			
			while (!myfile3.eof())
			{
				getline(myfile3, temp);
				if (temp == login_id) {
					status = 1;
					break;
				}
				else if (temp != login_id) {
					//cout << "invalid Creditenials. Going back to main screen\n";
					status = 0;
				}
			}
			if (status == 1) {
				system("CLS");
				cout << "Password matched!. Successful Login...\n";
				cout << "\n<<<<<|>>>>>\n\n";
				cout << "Hola Admin" << endl;
				while (1) {
					cout << endl;
					cout << "Enter 1 to add new admin\n";
					cout << "Enter 2 to add new teacher\n";
					cout << "Enter 3 to add new student\n";
					cout << "Enter 4 to add a new course\n";
					cout << "Enter 5 to update an existing course\n";
					cout << "Enter 6 to print course details\n";
					cout << "Enter 7 to view student profile\n";
					cout << "Enter 8 to delete a course\n";
					cout << "Enter 9 to view marks\n";
					cout << "Enter 0 to go back to the previous screen\n";
					cout << endl;
					cin >> choice;
					getline(cin, exe);
					if (choice == 1) {

						a1.add_admin(m1);
					}
					else if (choice == 2) {
						t1.add_marks(S);
					}
					else if (choice == 3) {
						a1.add_student(m1);
					}
					else if (choice == 4) {
						a1.add_course();
					}
					else if (choice == 5) {
						int sf;
						cout << "Enter course id: ";
						cin >> sf;
						a1.update_course(sf);
					}
					else if (choice == 6) {
						a1.print_courses();
					}
					else if (choice == 7) {
						cout << "Press Enter" << endl;
						cin.ignore();
						S.setInfo();
					}
					else if (choice == 8) {
						int sf;
						cout << "Enter course id: ";
						cin >> sf;
						a1.remove_course(sf);
					}
					else if (choice == 9) {
						t1.add_marks(S);
					}
					else if (choice == 0) {
						break;
					}
				}
			}
			else if (status == 0) {
				cout << "invalid Creditenials. Quitting\n";
				break;
			}
		}
		else if (main_option == 2) {
			cin.ignore();
			cout << "Enter ID: "; getline(cin, login_id);
			cout << "Enter password: "; cin >> login_pass;
			while (!myfile3.eof())
			{
				getline(myfile3, temp);
				if (temp == login_id) {
					status = 1;
					break;
				}
				else if (temp != login_id) {
					status = 0;
				}
			}
			if (status == 1) {
				system("CLS");
				cout << "Password matched!. Successful Login...\n";
				cout << "\n{{{{{{---}}}}}}\n\n";
				cout << "Greetings Teacher" << endl;
				while (1) {
					cout << endl;
					cout << "Enter 1 to print course details\n";
					cout << "Enter 2 to view student profile\n";
					cout << "Enter 3 to view marks\n";
					cout << "Enter 0 to go back to the previous screen\n";
					cout << endl;
					cin >> choice;
					getline(cin, exe);
					if (choice == 1) {
						a1.print_courses();
					}
					else if (choice == 2) {
						cout << "Press Enter" << endl;
						cin.ignore();
						S.setInfo();
					}
					else if (choice == 3) {
						t1.add_marks(S);
					}
					else if (choice == 0) {
						break;
					}
				}
			}
			else if (status == 0) {
				cout << "invalid Creditenials. Going back\n";
				break;
			}
		}
		else if (main_option == 3) {
			cin.ignore();
			cout << "Enter ID: "; getline(cin, login_id);
			cout << "Enter password: "; cin >> login_pass;
			while (!myfile3.eof())
			{
				getline(myfile3, temp);
				if (temp == login_id) {
					status = 1;
					break;
				}
				else if (temp != login_id) {
					status = 0;
				}
			}
			if (status == 1) {
				system("CLS");
				cout << "Password matched!. Successful Login...\n";
				cout << "\nooooooooo$ooooooooo\n\n";
				cout << "Hello! young mind :) " << endl;
				while (1) {
					cout << endl;
					cout << "Enter 1 to add a new course\n";
					cout << "Enter 2 view semester details\n";
					cout << "Enter 3 to print course details\n";
					cout << "Enter 4 to view student profile\n";
					cout << "Enter 0 to go back to the previous screen\n";
					cout << endl;
					cin >> choice;
					getline(cin, exe);
					if (choice == 1) {
						A8->add_course();
					}
					else if (choice == 2) {
						S.showinfo();
					}
					else if (choice == 3) {
						a1.print_courses();
					}
					else if (choice == 4) {
						t1.add_marks(S);
					}
					else if (choice == 0) {
						break;
					}
				}
			}
			else if (status == 0) {
				cout << "invalid Creditenials. Exiting\n";
				break;
			}
		}
	} while (main_option != 0);


	return 0;
}