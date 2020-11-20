#pragma hdrstop
#include <iostream>
#include <conio.h>
#include<math.h>
using namespace std;
int main()
{
    int n; // размер массива
    cout << "n= ";
    cin >> n; // получение от пользователя размера массива
    int p = 0;
    int m = 0;

    int** matr1 = new int* [n]; // Выделение памяти для массива
    for (int i = 0; i < n; i++)
    {
        matr1[i] = new int[n];
    }
    for (int k = 0; k < n; k++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << "matr1[" << k + 1 << "] [" << j + 1 << "] =";
            cin >> matr1[k][j];

        }

    }


    int** matr2 = new int* [n]; // Выделение памяти для массива
    for (int i = 0; i < n; i++)
    {
        matr2[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << "matr2[" << i + 1 << "] [" << j + 1 << "] =";
            cin >> matr2[i][j];

        }

    }
    for (int i = 0; i < n; i++)      //1 p
    {
        for (int j = i; j < n; j++)
        {
            p = matr1[i][j];
            matr1[i][j] = matr1[j][i];
            matr1[j][i] = p;

        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matr1[i][j] == matr2[i][j]) { m++; }

        }

    }
    if (m == 9) { cout << "yes"; exit(1); }
    else { m = 0; }




    for (int i = 0; i < n; i++)      //2 p
    {
        for (int j = n - 1 - i; j >= 0; j--)
        {
            p = matr1[i][j];
            matr1[i][j] = matr1[n - j - 1][n - i - 1];
            matr1[n - j - 1][n - i - 1] = p;

        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matr1[i][j] == matr2[i][j]) { m++; }

        }

    }
    if (m == 9) {
        cout << "yes"; exit(1);
    }
    else { m = 0; }

    for (int i = 0; i < n; i++)      //3 p
    {
        for (int j = i; j < n; j++)
        {
            p = matr1[i][j];
            matr1[i][j] = matr1[j][i];
            matr1[j][i] = p;

        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matr1[i][j] == matr2[i][j]) { m++; }

        }

    }
    if (m == 9) { cout << "yes"; exit(1); }
    else { m = 0; }




    for (int i = 0; i < n; i++)      //4 p
    {
        for (int j = n - 1 - i; j >= 0; j--)
        {
            p = matr1[i][j];
            matr1[i][j] = matr1[n - j - 1][n - i - 1];
            matr1[n - j - 1][n - i - 1] = p;

        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matr1[i][j] == matr2[i][j]) { m++; }

        }

    }
    if (m == 9) { cout << "yes"; }
    else { cout << "no"; }

    delete[] matr1;
    delete[] matr2;
}