
#include <iostream>
using namespace std;

int natural(int num);


int main()

{
	int num;
	cout << "Enter the number :";
	cin >> num;
	cout << "sum:";
	cout<<natural(num);

	return 0;

}
int natural(int num)
{
	if (num == 0)
		return 0;
	else
		return num + natural(num - 1);
	
}
