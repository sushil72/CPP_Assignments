#include<iostream>
using namespace std;

class Complex
{
    int real;
    int img;

public :
    Complex(int x)
    {
        real = x;
        img = x;
    }
    Complex()
    {

    }

    void display()
    {
        cout<<"Real is "<<real<<" Img is "<<img<<endl;
    }
};

int main()
{
    Complex c;
    c = 5;



    c.display();

    return 0;
}
