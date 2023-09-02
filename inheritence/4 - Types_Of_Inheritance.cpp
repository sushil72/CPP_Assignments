#include<iostream>
using namespace std;

class A
{
    public :
      void fun1()
      {
          cout<<"fun1() of A"<<endl;
      }
    protected :
      void fun2()
      {
          cout<<"fun2() of A"<<endl;
      }
    private :
        void fun3()
        {
            cout<<"fun3() of A"<<endl;
        }
};

class B : private A
{
    public : void checkProtected()
            {
               fun1();  // Only public and Protected
               fun2();  // are accessible in child class
              // fun3();
            }

};
class C : public B
{
   // fun1();  == Protected
   // fun2();  == Protected
   public : void checkProtected()
            {
              //  fun1();  //Only public and Protected
              //  fun2();  //are accessible in child class
             //  fun3();
            }

};
int main()
{
    A a;
    a.fun1();
   // a.fun2();
  //  a.fun3();

    // B b;
   // b.fun1(); //Accessible of Public Inheritance is done
  //  b.fun2(); //Protected
  //  b.fun3(); //Private
  //  b.checkProtected();

    // C c;
  //  c.fun1();
   // c.fun2();
  //  c.checkProtected();

    return 0;
}
