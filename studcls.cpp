#include<iostream>
#include<iomanip>
using namespace std;

class Student
{ 	
	public:char srl[10];
  	public:char name[25];
  	public:char mob[15];
  	public:char prn[10];
  	public:char cls[10];
  	public:char mail[50];
  	public:char add[50];
  	public:float grade;
	public:void getdata();
	public:void putdata();
}s[10];
  
void Student::getdata()
{
	int i,n;
	cout<<"Enter No. of students:";
	cin>>n;

for(i=0;i<n;i++)
{
cout<<"\nSr.No:";
cin>>s[i].srl;

cout<<"Enter Name:";
cin>>s[i].name;

cout<<"Enter Mobile no.:";
cin>>s[i].mob;

cout<<"Enter PRN:";
cin>>s[i].prn;

cout<<"Enter class:";
cin>>s[i].cls;

cout<<"Enter E-Mail:";
cin>>s[i].mail;

cout<<"Enter Addrress(city name):";
cin>>s[i].add;

cout<<"Enter C.G.P.A:";
cin>>s[i].grade;
}
}

void Student:: putdata()
{
    int i, n;
    cout << "\nEnter total no. of students:";
    cin >> n;
    cout << "\n----------------------------------------------------------------------------------\n";

    cout << "\nPERSONAL DETAILS->";

    cout <<endl<< "Sr.No."<<setw(10)<<"Name"<<setw(12)<<"Mobile"<<setw(15)<<"E-Mail"<<setw(25)<<"Address"<<endl;
    for(i = 0; i < n; i++)
    {
        cout << s[i].srl <<  setw(15) << s[i].name <<  setw(15) << s[i].mob <<  setw(25) << s[i].mail <<  setw(15) << s[i].add << endl;
    }
    cout << "----------------------------------------------------------------------------------\n";

    cout << "\nACADEMIC DETAILS->";

    cout <<endl<< "Sr.No."<<setw(10)<<"Name"<< setw(12) <<"cls" <<setw(15)<< "PRN"<<setw(16)<<"C.G.P.A"<<endl;
    for(i = 0; i < n; i++)
    {
        cout << s[i].srl << setw(15) << s[i].name <<  setw(15) << s[i].cls <<  setw(15) << s[i].prn << setw(10) << s[i].grade << endl;
    }
    cout << endl;
}

int main()
{ 
int i;
s[i].getdata();
s[i].putdata();
   cout << "----------------------------------------------------------------------------------\n";
}
  



