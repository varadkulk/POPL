#include <iostream>
#include <string>
using namespace std;
class student
{
public:
	int rollno;
	string name, div;
	void accept(int srno)
	{
		cout << "\nStudent number " << srno << ":\nEnter roll no.: ";
		cin >> rollno;
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter division: ";
		cin >> div;
	}
	void display(int srno)
	{
		cout << srno << "\t" << this->rollno << "\t\t" << this->name << "\t" << this->div << endl;
	}
	void modify(int srno)
	{
		cout << "\nModyfing details of Student no. " << srno << "\n Current details:\nRoll No.: " << this->rollno << "\nName: " << this->name << "\nDivison: " << this->div << "\nEnter new details::\nRoll no.: ";
		cin >> this->rollno;
		cout << "Name: ";
		cin >> this->name;
		cout << "Division: ";
		cin >> this->div;
	}
};
void display(student s[], int currentValue)
{
	cout << "\nSr. No.\tRoll no.\tName\tDivison" << endl;
	for (int i = 0; i < currentValue; i++)
		s[i].display(i + 1);
}
int del(student s[], int currentValue, int srno)
{
	currentValue--;
	for (int i = srno - 1; i < currentValue; i++)
		s[i] = s[i + 1];
	return currentValue;
}
int main()
{
	int n, choice = 1, srno, currentValue = 0;
	cout << "Enter the maximum size of student database (maximum number of sr. nos.): ";
	cin >> n;
	student s[n];
	while (choice != 0)
	{
		cout << "\nEnter\n1.to add student\n2.to display database\n3.to modify data\n4.to delete data\n0.to exit\nInput: ";
		cin >> choice;
		switch (choice)
		{
		case 0:
			cout << "\nThank You!!\n";
			break;
		case 1:
			if (currentValue < n)
				s[currentValue++].accept(currentValue);
			else
				cout << "\nDatabase full!!!\n";
			break;
		case 2:
			cout << "Updated databse:\n";
			display(s, currentValue);
			break;
		case 3:
			srno = 0;
			cout << "Enter the Sr. no. :";
			while (srno <= 0 || srno > currentValue)
			{
				cin >> srno;
				if (srno <= 0 || srno > currentValue)
					cout << "Invalid value!!";
				else
					s[srno - 1].modify(srno);
			}
			break;
		case 4:
			srno = 0;
			cout << "Enter the Sr. no. :";
			while (srno <= 0 || srno > n)
			{
				cin >> srno;
				if (srno <= 0 || srno > currentValue)
					cout << "Invalid value!!";
				else
					currentValue = del(s, currentValue, srno);
			}
			break;
		default:
			cout << "Invalid input!!!";
			break;
		}
	}
	return 0;
}

/*
Output:
Enter the maximum size of student database (maximum number of sr. nos.): 2

Enter
1.to add student     
2.to display database
3.to modify data     
4.to delete data     
0.to exit
Input: 1

Student number 1:
Enter roll no.: 37
Enter name: Varad
Enter division: TYE

Enter
1.to add student     
2.to display database
3.to modify data     
4.to delete data     
0.to exit
Input: 1

Student number 2:
Enter roll no.: 49
Enter name: Ajit
Enter division: TYD

Enter
1.to add student     
2.to display database
3.to modify data     
4.to delete data     
0.to exit
Input: 2
Updated databse:

Sr. No. Roll no.        Name    Divison
1       37              Varad   TYE    
2       49              Ajit    TYD

Enter
1.to add student
2.to display database
3.to modify data
4.to delete data
0.to exit
Input: 3
Enter the Sr. no. :1

Modyfing details of Student no. 1
 Current details:
Roll No.: 37
Name: Varad
Divison: TYE
Enter new details::
Roll no.: 38
Name: Varad
Division: TYC

Enter
1.to add student
2.to display database
3.to modify data
4.to delete data
0.to exit
Input: 2
Updated databse:

Sr. No. Roll no.        Name    Divison
1       38              Varad   TYC
2       49              Ajit    TYD

Enter
1.to add student
2.to display database
3.to modify data
4.to delete data
0.to exit
Input: 4
Enter the Sr. no. :2

Enter
1.to add student
2.to display database
3.to modify data
4.to delete data
0.to exit
Input: 2
Updated databse:

Sr. No. Roll no.        Name    Divison
1       38              Varad   TYC

Enter
1.to add student
2.to display database
3.to modify data
4.to delete data
0.to exit
Input: 0

Thank You!!
*/