#include<iostream>

using namespace std;
class initlist{
int y;
    int x;

    public:
    initlist(int a, int b):y(x),x(b){}
    void display()
    {
        cout<<"x="<<x;
        cout<<"\ny="<<y;
    }
};
int main()
{
initlist LI(2,3); 
// initlist LI(2,3); 
LI.display();
return 0;
}