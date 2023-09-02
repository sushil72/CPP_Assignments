/*Extend the above program to display the area of circles. This requires the addition of
a new derived class 'circle' that computes the area of a circle. Remember, for a circle
we need only one value, its radius, but the get_data() function in the base class
requires two values to be passed. (Hint: Make the second argument of get_data()
function as a default one with zero value*/


/*Create a base class called shape. Use this class to store two double type values that
could be used to compute the area of figures. Derive two specific classes called
triangle and rectangle from the base shape. Add to the base class, a member
function get_data() to initialise base class data members and another member
function display_area() to compute and display the area of figures. Make
display_area() as a virtual function and redefine this function in the derived classes to
suit their requirements.
Using these three classes, design a program that will accept dimensions of a
triangle or a rectangle interactively, and display the area.
Remember the two values given as input will be treated as lengths of two sides in
the case of rectangles, and as base and height in the case of the triangles, and used
as follows:
Area of rectangle = x * y Area of triangle = 1/2 * x * y */

#include<iostream>
using namespace std;
class shape
{
    protected:
    double x, y,area;
    public:
    shape(double a, double b=0)
    {
        x=a;
        y=b;
    }

   virtual void display_area()
   {
        cout<<"Base class displaye"<<endl;
   }
};
class triangle : public  shape
{
    public:
    triangle(double a, double b) : shape(a,b)
    {

    }
    void display_area()
    {
        area=0.5*x*y;
        cout<<"Area of the triangle is :"<<area<<endl;
    }
};
class rectangle : public shape
{
    public:
    rectangle(double a, double b):shape(a,b)
    {}
    void display_area()
    {
        area=x*y;
        cout<<"area of the rectangle is :"<<area<<endl;
    }
};

class circle : public shape
{
    public:
    circle(double radius) : shape(radius)
    {

    }
    void display_area()
    {
        area=3.14*x*x;
        cout<<"area of the circle is :"<<area<<endl;
    }

};


int main()
{
    triangle t(10,20);
    rectangle r(10,20);
    circle c(5.78);
    // t.display_area();
    // r.display_area();
    shape s(12.32,10.5),*ptr;
    ptr=&t;
    ptr->display_area();
    ptr=&r;
    ptr->display_area();
    ptr=&c;
    ptr->display_area();


return 0;
}