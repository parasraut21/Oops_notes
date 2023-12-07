#include <iostream>
using namespace std;

class student
{

public:
	char name;
	int rollno;
	int counterr;

	void setstudent(void);
	void displaystudent(void);
};

void student::setstudent(void)
{
	for (int i = 0; i < counterr; i++)
	{
		cout << "Enter the student name..";
		cin >> name;
		cout << "Enter rollno" << endl;
		cin >> rollno;
	}
}
	void student ::displaystudent(void)
	{

		cout << "The roll of " << name << "is " << rollno << endl;
	}

	int main()

	{
		
		int counterr;
		cout << "Enter the no. students..";
		cin >> counterr;
		student s1[counterr];
		for (int i = 0; i < counterr; i++)
		{
			cout << "Enter details.." << endl;
			cout << "Enter for the student" << i << endl;
			s1[i].setstudent();
			s1[i].displaystudent();
		}

		return 0;
	}