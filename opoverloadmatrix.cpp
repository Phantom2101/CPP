#include <bits/stdc++.h>
using namespace std;

class Matrix
{
public:
    int arr[3][3];

public:
    void input()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    void display()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j];
                cout << setw(5);
            }
            cout << endl;
        }
    }
    Matrix operator+(const Matrix &m2)
    {
        Matrix result;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                result.arr[i][j] = arr[i][j] + m2.arr[i][j];
            }
        }
        return result;
    }
    Matrix operator-(const Matrix &m2)
    {
        Matrix result;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                result.arr[i][j] = arr[i][j] - m2.arr[i][j];
            }
        }
        return result;
    }
    Matrix operator*(const Matrix &m2)
    {
        Matrix result;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                result.arr[i][j] = 0;
                for (int k = 0; k < 3; k++)
                {
                    result.arr[i][j] += arr[i][k] * m2.arr[k][j];
                }
            }
            return result;
        }
    }
};

int main()
{
    Matrix m1, m2;
    cout << "Enter 1st matrix elements:-" << endl;
    m1.input();
    cout << "Matrix is: " << endl;
    cout << setw(5);
    m1.display();

    cout << "Enter 2nd matrix elements:-" << endl;
    m2.input();
    cout << "Matrix is: " << endl;
    cout << setw(5);
    m2.display();

    cout << "Addition is: " << endl;
    cout << setw(5);
    (m1 + m2).display();

    cout << "Subtraction is:" << endl;
    cout << setw(5);
    (m1 - m2).display();

    cout << "Multiplication is:" << endl;
    cout << setw(5);
    (m1 * m2).display();

    return 0;
}
