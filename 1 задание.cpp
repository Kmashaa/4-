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
		cin >> irr[i];							//вводим элементы массива
		sum += irr[i];							//считаем сумму

		}
	c = sum / (k);								//считаем среднее значение всех элементов
	int s=0;
	for (int n = 0; n < k; n++)
	{
		if (irr[n] > c) { s++; }				//считаем кол-во элементов, больше среднего

	}
	cout << s;									//выводим их кол-во
	}