

#include <iostream>
#include<math.h>
using namespace std;
int power(int base ,int exponent);
int main()
{
	int term,exponent;
	cout << "Enter the base:";
	cin >> term;
	cout << "Enter exponent:";
	cin >> exponent;
	cout << power(term, exponent);
}
int power(int base, int exponent)
{
	if (exponent > 1)
	{
		return base * (power(base, exponent - 1));
	}
		return base;

}


