#pragma once
# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
using namespace std;
class Employees {
private:
	int emp_ID;
	string name;
public:
	Employees() {
		emp_ID = 0;
		name = "\0";
	}
	virtual void Set_emp_info() = 0;
	virtual void print_emp_info() = 0;
	~Employees() {

	}
};