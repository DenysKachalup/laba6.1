//¬ар≥ант 11
#include<iostream>
#include<ctime>
#include<Windows.h>

using namespace std;

void Creat(int c[], const int size)
{
	int b;
	for (int i = 0; i < size; i++)
	{

		b = false;
		b = (-36) + rand() % (25 - (-36) + 1);
		if (b < 0)
		{
			if (b % 2 == 0)
			{
				while (b % 2 == 0)
				{
					b = (-36) + rand() % (25 - (-36) + 1);

				}
				c[i] = b;
			}
			else
				c[i] = b;
		}
		else
			c[i] = b;

		cout << " " << c[i];

	}
}
int Sum(int c[], const int size)
{

	if (size < 0)
		return 0;
	else
		return c[size] + Sum(c, size - 1);

}
int number(int mas[], const int size)
{
	int k = 0;
	for (int i = 0; i < size; i++)
	{
		
		if ((mas[i] > 0) || (mas[i] % 2 != 0))
			k++;
		
	
	}
	return k;
}
int main()
{
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int n = 27;

	int c[n];
	int b;

	Creat(c, n);
	cout << endl;
	cout << endl;

	number(c, n);
	cout << " ≥льк≥сть чисел,€к≥ задов≥льн€ють умову:  " << number(c, n) << endl;
	cout << endl;

	int s =Sum(c, n-1);
	cout <<"—ума чисел, €к≥ задов≥льн€ють умову: "<< s;
	cout << endl;

	return 0;
}