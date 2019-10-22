#include <iostream>
#include <string>
using namespace std;
class student
{
private:
	int rollno;
	string name;

protected:
	int m1, m2, m3;

public:
	void acceptStudent()
	{
		cout << "Enter roll no.: ";
		cin >> rollno;
		cout << "Enter name: ";
		cin >> name;
	}
	void displayStudent()
	{
		cout << "Roll No: " << this->rollno << "\nName: "
			 << this->name << endl;
	}
	student()
	{
		acceptStudent();
	}
};
class academic : virtual public student
{
protected:
	int m1, m2, m3;

public:
	void acceptAceademic()
	{
		cout << "Enter marks M1: ";
		cin >> m1;
		cout << "Enter marks M2: ";
		cin >> m2;
		cout << "Enter marks M3: ";
		cin >> m3;
	}
	void displayAceademic()
	{
		cout << "Marks:\nM1: " << this->m1 << "\nM2: " << this->m2 << "\nM3: " << this->m3 << endl;
	}
	academic()
	{
		acceptAceademic();
	}
};
class sports : public virtual student
{

protected:
	char sgrade;

public:
	void acceptSports()
	{
		cout << "Enter sports grade(A,B,C,D,F): ";
		cin >> sgrade;
	}
	void displaySports()
	{
		cout << "Sports Grade: " << sgrade;
	}
	sports()
	{
		acceptSports();
	}
};

class result : public academic, public sports
{
private:
	int total;
	float per;

public:
	void calculate()
	{
		total = m1 + m2 + m3;
		if (sgrade == 'A')
			total += 100;
		else if (sgrade == 'B')
			total += 80;
		else if (sgrade == 'C')
			total += 60;
		else if (sgrade == 'D')
			total += 40;
		per = total / 4;
	}
	void display()
	{
		cout << "\nTotal: " << total << "\nPercentage: " << per;
	}
	result()
	{
		calculate();
		displayStudent();
		displayAceademic();
		displaySports();
		display();
	}
};
int main()
{
	result r;
	return 0;
}

/*
Output:
Enter roll no.: 38
Enter name: Varad
Enter marks M1: 50
Enter marks M2: 40
Enter marks M3: 60
Enter sports grade(A,B,C,D,F): A
Roll No: 38
Name: Varad
Marks:
M1: 50
M2: 40
M3: 60
Sports Grade: A
Total: 250
Percentage: 62
D:\Programming\VIT\POPL\studentResult\Single>cd..

D:\Programming\VIT\POPL\studentResult>cd Hybrid\]
The system cannot find the path specified.

D:\Programming\VIT\POPL\studentResult>cd Hybrid\

D:\Programming\VIT\POPL\studentResult\Hybrid>studentResultHybrid.bat

g++ studentResultHybrid.cpp   && .\a.exe
Enter roll no.: 38
Enter name: Varad
Enter marks M1: 50
Enter marks M2: 40
Enter marks M3: 60
Enter sports grade(A,B,C,D,F): A
Roll No: 38
Name: Varad
Marks:
M1: 50
M2: 40
M3: 60
Sports Grade: A
Total: 250
Percentage: 62
*/