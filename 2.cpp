#include<iostream>
#include<conio.h>
using namespace std;
int binsearch(int low, int high, int x, int s[])
{
	int mid;
	if (low > high)
		return (-1);
	else
	{
		mid = (low + high) / 2;
		if (x == s[mid])
			return mid;
		else if (x < s[mid])
			return binsearch(low, mid - 1, x, s);
		else
			return binsearch(mid + 1, high, x, s);
	}
}
int main()
{
	int i, x, z, l = 0, h = 6, s[6];
	cout << "Enter the 6-numbers: " << endl;
	for (i = 0; i < 6; i++)
	{
		cout << "number " << i + 1 << " :";
		cin >> s[i];
	}
	cout << "Enter the number Search:" << endl;
	cin >> x;
	z = binsearch(l, h, x, s);
	if (z == (-1))
		cout << "Not found";
	else
		cout << "The place is :" << z + 1;
	
	_getch();
	return 0;
}


