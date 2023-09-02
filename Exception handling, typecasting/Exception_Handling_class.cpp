#include<iostream>
using namespace std;
class A
{
    int x;
public :
    // f1()
};
int main()
{
    int a, b,c;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;

    try
    {
      if(b == 0)
        throw "Divide by Zero Error";

      if(b == 1)
        throw b;

      if(b == 2)
        throw exception();

      c = a/b;

    }catch(const char * msg)
    {
        cout<<msg<<endl;
    }catch(int x)
    {
        cout<<"Me hu shaktimaan "<<x<<endl;
    }catch(...)
    {
        cout<<"Rajnikant is here then no fear"<<endl;
    }


    cout<<"Result = "<<c;

    return 0;
}
