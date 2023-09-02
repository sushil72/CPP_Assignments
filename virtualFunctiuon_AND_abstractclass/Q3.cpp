/*Using the concept of pointers, write a function that swaps the private data values of
two objects of the same class type.*/
#include<iostream>
#include<cstring>
using namespace std;
class Student{
    public:    
    int rollno;
    char name[20];
    public:
    void getdata(){
       
    cout<<"Enter rollno, name: ";
    cin>>rollno>>name;
     cin.ignore();
    }
    void putdata(){
        cout<<"Rollno: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        }
        void swap(Student *S)
        {
            Student temp;
            strcpy(temp.name,name);
            temp.rollno=rollno;
            strcpy(name,S->name);
            rollno=S->rollno;
            strcpy(S->name,temp.name);
            S->rollno=temp.rollno;
        }
        void display()
        {
            cout<<"Name : "<<name<<endl;
            cout<<" Roll number : "<<rollno<<endl;
        }   
        };
        
int main()
{
    Student s1,s2;
    s1.getdata();
    s2.getdata();
    s1.swap(&s2);
    s1.display();
    s2.display();
    

    return 0;
}