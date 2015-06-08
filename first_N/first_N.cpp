#include "stdafx.h"
#include <vector>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
vector <int> numbers;
vector <int> primes;
vector <int> primes_cut;
void fill(int x)
{
	for (int y = 0; y <= x; ++y)
	{
		numbers.push_back(y);
	}
	numbers[1] = 0;
}
void prime_sorter(vector <int> z)
{
	int n = 2;
	int b = z[z.size() - 1];
	int d = sqrt(b);
	for (int m = 2; m <= d; ++m)
	{
		for (int n = 2; n*m <= 30; ++n)
		{
			z[n*m] = 0;
		}
	}
	for (int a : z)
	{
		if (z[a] == 0)
		{

		}
		else
		{
			primes.push_back(a);
		}
	}
}
void prime_cut(int x)
{
	for (int y = 0; x != primes_cut.size(); ++y)
	{
		primes_cut.push_back(primes[y]);
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	int inp = 0;
	cout << "Enter the first N number of primes you would like to find: ";
	cin >> inp;
	fill(inp * inp);
	prime_sorter(numbers);
	prime_cut(inp);
	for (int a : primes_cut)
	{
		cout << a << "\t";
	}
	system ("pause");
	return 0;
}

