#include <iostream>
using namespace std;
class Rupee
{
private:
    float R;

public:
    Rupee() { cout << "DC called Rupee wala" << endl; }
    Rupee(float f)
    {
        cout << "PC Caleed Rupee wala" << endl;
        R = f;
    }
    void display()
    {
        cout << "Rupee=" << R;
    }
    operator float()
    {
        cout << "float() called rupee wala" << endl;
        return R;
    }

};

class Dollar
{
private:
    float D;

public:
    Dollar()
    {
        cout << "DC called Dollar wala" << endl;
    }
    Dollar(float f)
    {
        cout << "PC called dollar wala" << endl;
        D = f;
    }
    Dollar(Rupee r)
    {
        cout<<"Dollar(Rupee r) constructor  called Dolar wala"<<endl;
        D=r/82.24;
    }

    operator Rupee()
    {
        cout<<"operator called Dollar wala"<<endl;
        return D*82.24;
    }
    
    void display()
    {
        cout << "dollar=" << D << endl;
        
    }

};
int main()
{
    float x = 100;
    Rupee r1;
    Dollar d1;
    /*float to rupee*/
    r1 = (Rupee)x; // constructor lagega
    r1.display();
    /*rupee to float*/
    // x = (float)r1; //operator lagega
    // /*rupee to dollar*/
    // d1 = (float)x; // operator lagega
    // d1.display();
    // d1 = (Dollar)r1; // 1. constructor, 2. operator (in lower class )
    // d1.display();
    // /*dollar to rupee*/
    // r1 = (Rupee)d1; //1. constructor ,2. operator
    // r1.display();

    return 0;
}