#include <iostream>

using namespace std;

class number
{
private:
	int r, i;

public:
	number()
	{
		r = i = 0;
	}
	number(int rx, int ix)
	{
		r = rx;
		i = ix;
	}
	number(number &x)
	{
		r = x.r;
		i = x.i;
	}
	void accept()
	{
		cout << "Enter the value of real part of the number: ";
		cin >> r;
		cout << "Enter the value of imaginary part of the number: ";
		cin >> i;
	}
	void display()
	{
		cout << this->r;
		if (this->i != 0)
		{
			if (this->i > 0)
				cout << " + ";
			if (this->i != 1)
				cout << this->i;
			cout << "i";
		}
		cout << endl;
	}
	void add(number x)
	{
		number a(
			this->r + x.r, this->i + x.i);
		a.display();
	}
	void sub(number x)
	{
		number s(
			this->r - x.r, this->i - x.i);
		s.display();
	}
	void mul(number x)
	{
		number s(((this->r * x.r) - (this->i * x.i)), ((this->i * x.r) + (this->r * x.i)));
		s.display();
	}
	void div(number x)
	{
		int a = (this->r * x.r) + (this->i * x.i);
		int b = (this->i * x.r) - (this->r * x.i);
		int c = (x.r * x.r) + (x.i * x.i);
		if (c < 0)
		{
			a *= -1;
			b *= -1;
			c *= -1;
		}
		number s(a, b);
		s.display();
		if (c > 1)
		{
			int ax = a;
			int bx = b;
			while (ax != 0)
			{
				cout << "-";
				ax /= 10;
			}
			if (b != 0)
			{
				cout << " ";
				while (bx != 0)
				{
					cout << "-";
					bx /= 10;
				}
			}
			cout << "\n";
			ax = a;
			bx = b;
			int cx = c;
			ax /= 10;
			cout << c;
			while (cx != 0)
			{
				ax /= 10;
				cx /= 10;
			}
			while (ax != 0)
			{
				cout << " ";
				ax /= 10;
			}
			if (b != 0)
			{
				cout << " ";
				int cx = c;
				bx /= 10;
				cout << c;
				while (cx != 0)
				{
					bx /= 10;
					cx /= 10;
				}
				while (bx != 0)
				{
					cout << " ";
					bx /= 10;
				}
			}
		}
	}
};
int main()
{
	number n1, n2;
	cout << "Number 1:\n";
	n1.accept();
	cout << "The number is: ";
	n1.display();
	cout << "Number 2:\n";
	n2.accept();
	cout << "The number is: ";
	n2.display();
	cout << "\nThe addition of numbers is: ";
	n1.add(n2);
	cout << "\nThe subtraction of numbers is: ";
	n1.sub(n2);
	cout << "\nThe multiplication of numbers is: ";
	n1.mul(n2);
	cout << "\nThe division of numbers is:\n";
	n1.div(n2);
	return 0;
}
