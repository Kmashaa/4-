#include <iostream>
using namespace std;

int main()
{
    int m = 1;
    int n;
    cin >> n;
    int** a = new int* [n]; // ��������� ������ ��� �������
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
    }
   

    if (n % 2 != 0) {
        a[(n / 2)][(n / 2)] = (n * n);      // ���� N - �������� �� ������� ����� ������� � ��������� ��� ������ N * N
    }

    for (int i = 0; i < (n / 2); i++) {
        for (int j = i; j < (n - i); j++) {   // (n - i) - ���� � ������ ����� ������� ����������� ������
            a[i][j] = m;
            m++;
        }
        for (int j = 1; j < (n - i - i); j++) {   // �������� � ������� ��. ���-��� ������� ��� �������
            a[(j + i)][(n - i) - 1] = m;    // (n - i) - 1 - �������� 1 ���� �� �������� �� ����� �������
            m++;
        }
        for (int j = (n - 2) - i; j >= i; j--) {  // (n - 2) - i - �������� 1 ���� �� �������� �� ����� ������� � ��� ���� 1 
            a[(n - i) - 1][(j)] = m;            // ������-��� ���������� ��. ��� ��������.
            m++;
        }
        for (int j = ((n - i) - 2); j > i; j--) {
            a[j][i] = m;
            m++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            cout << a[i][j] << " ";
        }
        cout << a[i][n - 1] << endl;
    }
    return 0;
}