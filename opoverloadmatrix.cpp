#include <iostream>
#include <iomanip>

using namespace std;

class Matrix {
private:
    int arr[3][3];

public:
    void input() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> arr[i][j];
            }
        }
    }

    void display() const {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << arr[i][j] << setw(5);
            }
            cout << endl;
        }
    }

    Matrix operator+(const Matrix& m2) const {
        Matrix result;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result.arr[i][j] = arr[i][j] + m2.arr[i][j];
            }
        }
        return result;
    }

    Matrix operator-(const Matrix& m2) const {
        Matrix result;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result.arr[i][j] = arr[i][j] - m2.arr[i][j];
            }
        }
        return result;
    }

    Matrix operator*(const Matrix& m2) const {
        Matrix result;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result.arr[i][j] = 0;
                for (int k = 0; k < 3; k++) {
                    result.arr[i][j] += arr[i][k] * m2.arr[k][j];
                }
            }
        }
        return result;
    }
};

ostream& operator<<(ostream& out, const Matrix& m) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            out << m.arr[i][j] << setw(5);
        }
        out << endl;
    }
    return out;
}

istream& operator>>(istream& in, Matrix& m) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            in >> m.arr[i][j];
        }
    }
    return in;
}

int main() {
    Matrix m1, m2;
    cout << "Enter 1st matrix elements:" << endl;
    cin >> m1;
    cout << "Matrix is:" << endl;
    cout << m1;

    cout << "Enter 2nd matrix elements:" << endl;
    cin >> m2;
    cout << "Matrix is:" << endl;
    cout << m2;

    cout << "Addition is:" << endl;
    cout << m1 + m2;

    cout << "Subtraction is:" << endl;
    cout << m1 - m2;

    cout << "Multiplication is:" << endl;
    cout << m1 * m2;

    return 0;
}
