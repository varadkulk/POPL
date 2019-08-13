#include <iostream>
#include <string>

using namespace std;

class student
{

public:
	int rollno;
	std::string name, div;

	void accept(int x)
	{
		cout << "\nStudent number " << x << ":\nEnter roll no.: ";
		cin >> rollno;
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter division: ";
		cin >> div;
	}

	void display(int x)
	{
		cout << x << "\t" << this->rollno << "\t\t" << this->name << "\t" << this->div << endl;
	}

	void modify(int x)
	{
		cout << "\nModyfing details of Student no. " << x << "\n Current details: Roll No.: " << this->rollno << "\nName: " << this->name << "\nDivison: " << this->div << "\nEnter new details::\nRoll no.: ";
		cin >> this->rollno;
		cout << "Name: ";
		cin >> this->name;
		cout << "Division: ";
		cin >> this->div;
	}

	void del(int x)
	{
		this->rollno = 0;
		this->name = "";
		this->div = "";
		cout << "Sr. No. " << x << " deleted";
	}
};

int main()
{
	int n, c = 1, x;
	bool d = true;
	cout << "Enter the total number of students: ";
	cin >> n;
	student s[n];
	for (int i = 0; i < n; i++)
		s[i].accept(i + 1);
	while (c != 0)
	{
		switch (c)
		{
		case 1:
			if (!d)
				cout << "Updated databse:\n";
			cout << "\nSr. No.\tRoll no.\tName\tDivison" << endl;
			for (int i = 0; i < n; i++)
				s[i].display(i + 1);
			d = true;
			break;
		case 2:
			x = 0;
			cout << "Enter the Sr. no. :";
			while (x <= 0 || x > n)
			{
				cin >> x;
				if (x <= 0 || x > n)
					cout << "Invalid value!!";
				else
					s[x - 1].modify(x);
			}
			d = false;
			c = 1;
			break;
		case 3:
			x = 0;
			cout << "Enter the Sr. no. :";
			while (x <= 0 || x > n)
			{
				cin >> x;
				if (x <= 0 || x > n)
					cout << "Invalid value!!";
				else
					s[x - 1].del(x);
			}
			d = false;
			c = 1;
			break;
		default:
			cout << "Invalid input!!!";
			break;
		}
		if (d)
		{
			cout << "\nEnter\n2.to display database\n3.to modify data\n4.to delete data\n0.to exit\nInput: ";
			cin >> c;
			if (c == 0)
				cout << "\nThank You!!\n";
		}
	}

	return 0;
}
