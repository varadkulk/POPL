#include <iostream>

using namespace std;

class timer
{
private:
	int d, h, m, s;

public:
	void accept()
	{
		cout << "Enter:\nHH:";
		cin >> h;
		cout << "MM:";
		cin >> m;
		cout << "SS:";
		cin >> s;
		d = 0;
	}
	void checker()
	{
		if (this->s < 0)
			this->s *= -1;
		if (this->m < 0)
			this->m *= -1;
		if (this->h < 0)
			this->h *= -1;
		if (this->d < 0)
			this->d *= -1;
		while (this->s >= 60)
		{
			this->m++;
			this->s %= 60;
		}
		while (this->m >= 60)
		{
			this->h++;
			this->m %= 60;
		}
		while (this->h >= 24)
		{
			this->d++;
			this->h %= 24;
		}
	}
	void display()
	{
		cout << "DD:HH:MM:SS : ";
		if (d < 10)
			cout << "0";
		cout << d << ":";
		if (h < 10)
			cout << "0";
		cout << h << ":";
		if (m < 10)
			cout << "0";
		cout << m << ":";
		if (s < 10)
			cout << "0";
		cout << s;
	}
	timer()
	{
		this->accept();
		this->checker();
		this->display();
	}
	timer(int dx, int hx, int mx, int sx)
	{
		d = dx;
		h = hx;
		m = mx;
		s = sx;
		this->display();
	}
	timer(int x)
	{
		s = x % 60;
		x /= 60;
		m = x % 60;
		x /= 60;
		h = x % 24;
		x /= 24;
		d = x;
		display();
	}
	void add(timer t)
	{
		int a = (((((this->d * 24) + this->h) * 60) + this->m) * 60) + this->s;
		int b = (((((t.d * 24) + t.h) * 60) + t.m) * 60) + t.s;
		cout << "\n\nThe addition of two times is: ";
		timer x(a + b);
	}
	void dif(timer t)
	{
		int a = (((((this->d * 24) + this->h) * 60) + this->m) * 60) + this->s;
		int b = (((((t.d * 24) + t.h) * 60) + t.m) * 60) + t.s;
		cout << "\n\nThe difference of two times is: ";
		if (a > b)
			timer x(a - b);
		else
			timer x(b - a);
	}
};
int main()
{
	cout << "Timer 1:\n";
	timer t1;
	cout << "\n\nTimer 2:\n";
	timer t2;
	t1.add(t2);
	t1.dif(t2);
	return 0;
}
/*Output
Timer 1:
Enter:
HH:25
MM:12
SS:32
DD:HH:MM:SS : 01:01:12:32

Timer 2:
Enter:
HH:15
MM:45
SS:12
DD:HH:MM:SS : 00:15:45:12

The addition of two times is: DD:HH:MM:SS : 01:16:57:44

The difference of two times is: DD:HH:MM:SS : 00:09:27:20
*/