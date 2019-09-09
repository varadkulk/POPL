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
	void accept()
	{
		cout << "Enter roll no.: ";
		cin >> rollno;
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter marks M1: ";
		cin >> m1;
		cout << "Enter marks M2: ";
		cin >> m2;
		cout << "Enter marks M3: ";
		cin >> m3;
	}
	void display()
	{
		cout << "Roll No: " << this->rollno << "\nName: "
			 << this->name << "\nMarks:\nM1: " << this->m1 << "\nM2: " << this->m2 << "\nM3: " << this->m3 << endl;
	}
	student()
	{
		accept();
	}
};

class result : public student
{
private:
	char sgrade;
	int total;
	float per;

public:
	void accepts()
	{
		cout << "Enter sports grade(A,B,C,D,F): ";
		cin >> sgrade;
	}
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
		cout << "Sports Grade: " << sgrade << "\nTotal: " << total << "\nPercentage: " << per;
	}
	result()
	{
		accepts();
		display();
		calculate();
	}
};
int main()
{
	result r;
	return 0;
}