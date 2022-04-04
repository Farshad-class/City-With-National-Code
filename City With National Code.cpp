#include <iostream>
#include <iomanip>
#include <conio.h>
#include <ctime>
#include <cstdint>
#include <cinttypes>

#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
using namespace std;

void f(int64_t);
void g(int64_t);
int t = 0, t1 = 0;
int main()
{

	int64_t n;
	cout << "Please enter national code :";
	cin >> n;
	if (n == 1111111111 || n == 2222222222 || n == 3333333333 || n == 4444444444 || n == 5555555555 || n == 6666666666 || n == 7777777777 || n == 8888888888 || n == 9999999999 || n == 0000000000)
		do
		{
			cout << "Please enter national code :";
			cin >> n;
		} while (false);

		f(n);
		cout << endl;
		g(n);

		getch();

}

void f(int64_t n)
{
	int64_t k;
	int64_t m, r;
	int64_t sum = 0;
	int64_t a[10];
	for (int i = 0; i <= 9;i++)
	{
		k = n % 10;
		n = n / 10;
		a[i] = k;
	}
	for (int j = 1; j <= 9;j++)
	{
		sum = sum + a[j] * (j + 1);
	}
	m = sum % 11;
	if (m < 2)
	{
		if (m == a[0])
		{
			cout << "national code is true";
			t = 1;
		}
		else
		{
			cout << "national code is false";
		}
	}
	else
	{
		r = 11 - m;
		if (r == a[0])
		{
			cout << "national code is true";
			t1 = 1;
		}
		else
		{
			cout << "national code is false";
		}
	}

}

void g(int64_t n)
{
	if (t == 1 || t1 == 1)
	{
		int64_t k;
		int64_t m, r;
		int64_t sum = 0;
		int64_t a[10];
		int b[3];
		int k1;
		int c[10] = { 001,002,003,004,005,006,007,137,138,139 };
		string h[10] = { "Tehran-Center","Tehran-Center","Tehran-Center","Tehran-Center","Tehran-Center","Tehran-Center","Tehran-Center","Tabriz","Tabriz","Tabriz" };
		k = n / 10000000;
		for (int i = 0; i <= 9; i++)
		{
			if (k == c[i])
			{
				cout << "Code meli vared shodeh  marbot be shahre : " << h[i] << endl;
				break;
			}

		}
	}
	else
	{
		cout << "in code meli sahih naboudeh va shahri barayash ghabel namayesh nist" << endl;
	}
}