#include<iostream>
using namespace std;
class Dollar
{
    float d;
  public:
    Dollar()
    {
        cout<<"DC for Dollar"<<endl;
    }
    Dollar(float y)
    {
        cout<<"PC called for Dollar"<<endl;
        d = y;
    }
    float getD()
    {
        return d;
    }
    void display()
    {
        cout<<d<<endl;
    }

    operator float()
    {
      cout<<"float() called for Dollar"<<endl;
      return d;
    }

};
class Rupee
{
   float r;

   public :
       Rupee(){ cout<<"DC of Rupee"<<endl;}

      Rupee(Dollar d1)
     {
          cout<<"Rupee(Dollar) called for Rupee"<<endl;
          r = d1.getD()*100;
     }

     operator Dollar()
     {
         cout<<"Dollar() called for Rupee"<<endl;
         return r/100;
     }
       Rupee(float x)
       {
           r = x;
           cout<<"PC of Rupee"<<endl;
       }
       void display()
       {
           cout<<"Display of Rupee "<<r<<endl;
       }

        operator float()
        {
            cout<<"float() of Rupee called"<<endl;
            return r;
        }
};

int main()
{
    float x = 10;
    Rupee r1 = x;

    r1.display();

    float y;
    y = (float)r1;

    cout<<y<<endl;

    float a = 20;
    Dollar d1 = a;

    d1.display();

    a = (float)d1;
    cout<<a<<endl;

    r1 = (Rupee)d1;
    r1.display();

    d1 = r1;
    d1.display();

    return 0;
}
