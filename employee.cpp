#include <iostream>
#include <iomanip> // for setw
using namespace std;

class Employee {
public:
    char srl[5], name[20], id[20], monum[20], des[20];
    float bs, da, hra, ts;

    void getData() {
        Employee e[50];
        int i, n;
        cout << setw(10) << "Enter no. of Employees: ";
        cin >> n;
        cout << setw(10) << "Enter the employee details:" <<endl;
        for (i = 0; i < n; i++) {
            cout << setw(10) << "Sr.no: ";
            cin >> e[i].srl;
            cout << "Enter name: ";
            cin >> e[i].name;
            cout << "Enter employee id: ";
            cin >> e[i].id;
            cout << "Enter mobile number: ";
            cin >> e[i].monum;
            cout << "Enter designation: ";
            cin >> e[i].des;
            cout << "Enter basic salary: ";
            cin >> e[i].bs;
            e[i].da = (80 * e[i].bs) / 100;
            e[i].hra = (20 * e[i].bs) / 100;
            e[i].ts = e[i].bs + e[i].da + e[i].hra;

            cout << setw(10) << "-----------------------------------------" << endl;
        }
        cout << setw(10) << "Employee details" << endl;
cout << setw(10) << left << "Sr.no" << setw(10) << "Name" << setw(10) << "ID" << setw(10) << "Mo.num" << setw(10) << "Des" << setw(10) << "Basic Salary" << endl;
for (i = 0; i < n; i++) {
    cout << setw(10) << left << e[i].srl << setw(10) << e[i].name << setw(10) << e[i].id << setw(10) << e[i].monum << setw(10) << e[i].des << setw(10) << e[i].bs << endl;
}
cout << setw(10) << left << "\n-----------------------------------------" << endl;
cout << setw(10) << "Salary details" << endl;
cout << setw(10) << left << "Sr.no" << setw(10) << "Name" << setw(10) << "DA" << setw(10) << "HRA" << setw(10) << "Ts" << endl;
for (i = 0; i < n; i++) {
    cout << setw(10) << left << e[i].srl << setw(10) << e[i].name << setw(10) << e[i].da << setw(10) << e[i].hra << setw(10) << e[i].ts << endl;
}

    }
};

int main() {
    Employee e;
    e.getData();
    return 0;
}

