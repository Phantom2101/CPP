#include <iostream>
#include <iomanip>
using namespace std;

class person
{
public:
    string name;
    string mobile;
    string email;
    string address;

    void getPerson()
    {
        cout << "Enter Person's name: ";
        cin >> name;
        cout << endl;

        cout << "Enter Person's Mobile number: ";
        cin >> mobile;
        cout << endl;

        cout << "Enter Person's E-mail: ";
        cin >> email;
        cout << endl;

        cout << "Enter Person's Address(city name): ";
        cin >> address;
        cout << endl;
    }
    void disPerson()
    {

        cout << "Name" << setw(15) << "Mobile" << setw(15) << "E-mail" << setw(19) << "Address" << endl;
        cout << name << setw(15) << mobile << setw(25) << email << setw(15) << address << endl;
    }
};

class employee : public person
{
public:
    string emp_id;
    string dsgn;
    string salary;

    void getEmployee()
    {
        person ::getPerson();
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cout << endl;

        cout << "Enter Employee Designation: ";
        cin >> dsgn;
        cout << endl;

        cout << "Enter Employee Salary: ";
        cin >> salary;
        cout << endl;
    }

    void disEmployee()
    {
        disPerson();
        cout << "ID" << setw(24) << "Designation" << setw(15) << "Salary" << endl;
        cout << emp_id << setw(15) << dsgn << setw(15) << salary << endl;
    }
};

class student : public person
{
public:
    string prn;
    string cls;
    string grade;

    void getStudent()
    {
        person ::getPerson();
        cout << "Enter PRN: ";
        cin >> prn;
        cout << endl;

        cout << "Enter Class: ";
        cin >> cls;
        cout << endl;

        cout << "Enter Grade: ";
        cin >> grade;
        cout << endl;
    }

    void disStudent()
    {
        disPerson();
        cout << "PRN" << setw(18) << "Class" << setw(15) << "Grade" << endl;
        cout << prn << setw(15) << cls << setw(15) << grade << endl;
    }
};

int main()
{
    int n = 0;
    char option = 'y';
    while (option == 'y' || option == 'Y')
    {
        int choice;
        cout << "Enter Choice of whose details you wanna fill(1=student OR 2=employee): ";
        cin >> choice;
        cout << endl;

        employee *e;
        student *s;

        if (choice == 1)
        {
            s = new student();
            s->getStudent();
            s->disStudent();
            delete s;
        }
        else if (choice == 2)
        {
            e = new employee();
            e->getEmployee();
            e->disEmployee();
            delete e;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
        n++;

        cout << "Do You Wanna Continue(Yes=y;No=n)?: ";
        cin >> option;
        cout << endl;
    }

    cout << "Total persons entered: " << n << endl;
    return 0;
}