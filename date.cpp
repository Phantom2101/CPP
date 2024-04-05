#include<bits/stdc++.h>

using namespace std;

class date {
private:
    int Date, month, year;

public:
    date(int d, int m, int y) {
        Date = d;
        month = m;
        year = y;
    }

    void display() {
        cout << Date << "-";
        
        if (month == 1) {
            cout << "JAN";
        }	
        else if (month == 2) {
            cout << "FEB";
        }
        else if (month == 3) {
            cout << "MAR";
        }
        else if (month == 4) {
            cout << "APR";
        }
        else if (month == 5) {
            cout << "MAY";
        }
        else if (month == 6) {
            cout << "JUN";
        }
        else if (month == 7) {
            cout << "JUL";
        }
        else if (month == 8) {
            cout << "AUG";
        }
        else if (month == 9) {
            cout << "SEP";
        }
        else if (month == 10) {
            cout << "OCT";
        }
        else if (month == 11) {
            cout << "NOV";
        }
        else {
            cout << "DEC";
        }

        cout << "-" << year << endl;	
    }

    void dis() {
        cout << Date << "/" << month << "/" << year << endl;
    }
    
     void incrementDay() {
        Date++;
        if (Date > daysInMonth(month, year)) {
            Date = 1;
            incrementMonth();
        }
    }

    void incrementMonth() {
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }



    int daysInMonth(int m, int y) const {
        if (m == 2) {
            return isLeapYear(y) ? 29 : 28;
        } else if (m == 4 || m == 6 || m == 9 || m == 11) {
            return 30;
        } else {
            return 31;
        }
    }

    bool isLeapYear(int y) const {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }
    
void cacli()
{
    int d1, m1, y1, d2, m2, y2;
    cout << "Enter first date : ";
    cin >> d1 >> m1 >> y1;
    cout << "Enter second date : ";
    cin >> d2 >> m2 >> y2;
    
    int td1 = y1 * 365 + m1 * 30 + d1;
    int td2 = y2 * 365 + m2 * 30 + d2;
    int diff = td2 - td1;
    
    int yy = diff / 365;
    int mm = (diff % 365) / 30;
    int dd = (diff % 365) % 30;
    
     if(dd<0)
    {
    	dd=dd*(-1);
	}
	   if(mm<0)
    {
    	mm=mm*(-1);
	}
    cout << yy << " Years, " << mm << " Months, and " << dd << " Days." << endl;
    cout<<"Count in days:-"<<endl;
    int count=(yy*365)+(mm*12)+dd;
    cout<<count<<" is the difference in terms of days.";
}

};

int main() {
    int d, m, y;
    cout << "Enter Date:";
    cin >> d;
    cout << "Enter Month:";
    cin >> m;
    cout << "Enter Year:";
    cin >> y;
    date D(d, m, y);
    D.dis();
    D.display();
    cout <<  endl;
   // int d, m, y;
    //date D(d, m, y);
    cout<<"Calculation of days:-"<<endl;
    D.cacli();
    
    D.incrementDay();
    D.incrementMonth();
	cout <<  endl;
    cout << "Date after incrementing day and month:" << endl;
    
    D.display();
    D.dis();

    return 0;
}