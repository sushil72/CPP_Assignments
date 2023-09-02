#include<iostream>
using namespace std;
class A
{
    public :
       void printX()
       {
           cout<<"printX of A"<<endl;
       }
};
class B
{
    public :
      void printX()
       {
           cout<<"printX of B"<<endl;
       }
};
class C : public A,public B
{

};

int main()
{
    C c;
    c.A::printX();
    c.B::printX();

    return 0;
}
