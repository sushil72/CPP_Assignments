#include<iostream>
using namespace std;
class Shape // You cannot create an object of Abstract class
{
    public:
     virtual void area() = 0; // Pure virtual Function
};
class Rectangle : public Shape
{
    public :
      void area()
      {
          cout<<"Rectangle Area called"<<endl;
      }
};
class Triangle : public Shape
{
 public :
      void area()
      {
          cout<<"Traingle Area called"<<endl;
      }
};
class Object : public Rectangle , public Triangle
{
    public :
        void area()
        {
           Rectangle::area();
           Triangle::area();
        }
};
int main()
{
    Object obj;
    obj.area();
    return 0;
}
