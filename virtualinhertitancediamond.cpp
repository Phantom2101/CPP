#include<bits/stdc++.h>
using namespace std;

class B{
    public:
    void display()
    {
        cout << "This is Base Display" << endl;
    }
    void view()
    {
        cout << "This is a Base view" << endl;
    }
};
class D1: virtual public B
{
     public:
    void display()
    {
        cout << "This is D1 Display" << endl;
    }
    void view()
    {
        cout << "This is a D1 view" << endl;
    }

};

class D2:virtual public B
{
     public:
    void display()
    {
        cout << "This is D2 Display" << endl;
    }
    void view()
    {
        cout << "This is a D2 view"<< endl;
    }
};

class D3:public D1,public D2
{
     public:
    void display()
    {
        cout << "This is D3 Display" << endl;
    }
    void view()
    {
        cout << "This is a D3 view" << endl;
    }
};

int main()
{
    B *b;
    D3 d;
    b=&d;
    b->display();
    b->view();
    return 0;
}