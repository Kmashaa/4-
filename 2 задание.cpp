#pragma hdrstop
#include <iostream>
#include <conio.h>
#include<math.h>
using namespace std;
int main()
{
	int irr[50][50];
	int n,m;
	float sum, c;
	sum = 0;
	cout << "Enter n = ";
	cin >> n;													//вводим кол-во строк
	cout << "Enter m = ";
	cin >> m;													//вводим кол-во столбцов
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "irr[" << i+1 << "] [" << j+1 << "] =";
			cin>>irr[i][j];										//вводим элементы массива
			if ((i+1)%2 == 0) { sum += irr[i][j]; }				//находим сумму
		}
		cout << sum;
	}
}