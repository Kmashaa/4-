#include <iostream>
using namespace std;

int main()
{
    int n;                            // размер массива
    cout << "n= ";
    cin >> n;                        // получение размера массива
    int sum = 0;
    double pr = 1;

    int** matr = new int* [n];      // ¬ыделение пам€ти дл€ массива
    for (int i = 0; i < n; i++)
    {
        matr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {

            cout << "matr[" << i + 1 << "] [" << j + 1 << "] =";
            cin >> matr[i][j];
        }
    }
    if (n % 2 != 0)
    {
        sum += matr[n / 2][n / 2];
        pr *= matr[n / 2][n / 2];

    }
    for (int i = 0; i < (n / 2); i++)
    {
        for (int j = i; j < (n - i); j++)
        {
            sum += matr[i][j];
            pr *= matr[i][j];
        }


        for (int j = (n - 1) - i; j >= i; j--)
        {
            sum += matr[n - 1 - i][j];
            pr *= matr[n - 1 - i][j];
        }

    }

    cout << "sum= " << sum << endl;
    cout << "pr= " << pr;;


    delete[] matr; // очистка пам€ти
}