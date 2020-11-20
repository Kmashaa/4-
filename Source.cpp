#pragma hdrstop
#include <iostream>
#include <conio.h>
#include<math.h>
using namespace std;
int main()
{
	int irr[50];
	int k;
	float sum,c;
	sum = 0;
	cout << "Enter k = ";
	cin >> k;
	for (int i = 0; i < k; i++) 
		{
		cout  <<"irr[" << i + 1 << "] = ";
		cin >> irr[i];
		sum += irr[i];

		}
	c = sum / (k);
	cout << sum<<endl;
	cout << c << endl;;
	int s=0;
	for (int n = 0; n < k; n++)
	{
		if (irr[n] > c) { s++; }

	}
	cout << s;
	}