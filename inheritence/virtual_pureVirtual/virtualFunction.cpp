#include<iostream>
using namespace std;
class Flight
{
    public:
    void Search()
    {
        cout<<"searching flight"<<endl;
    }
   virtual void book()
    {
        cout<<"book Flight"<<endl;
    }
};

class Airindia : public Flight
{
    public:
    void book()
    {
        cout<<"Air india book Flight"<<endl;
    }
};

class spiceJet :public Flight
{
    public:
    void book()
    {
        cout<<"spice Jet book Flight"<<endl;
    }
};
using namespace std;
int main()
{
        Airindia a1;
        spiceJet s1;
        Flight *f;
        f=&a1;
        f->book();
        f=&s1;
        f->book();
return 0;
}