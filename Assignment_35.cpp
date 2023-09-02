#include<iostream>

using namespace std;
/*Write a C++ program to demonstrate the addition of multiple types of data using
generic functions or templates*/
// template  <class T>  T sum(T x, T y)
// {
//     return(x+y);
// }

// template <class F, class T> T big(F a, T b)
// {
//     return (a>b?a:b);
// }
// template <class V,class A> V bigger(V v, A a, V c)
// {
//     if(v > a && v>c)
//     return v;
//     else
//     if(a > v && a > c)
//     return a;
//     else return c;
// }
//swap using reference?
//Write a C++ Program to Swap data using function template?

/*
int main()
{

    // cout<<"sum is="<<sum(12.3,23.3)<<endl;
    // cout<<"sum is="<<sum(12,23)<<endl;
    // cout<<"biger is :"<<big('a',5.5)<<endl;
    // cout<<"biggest number is "<<bigger(5.5,6,4.5)<<endl;
   
return 0;
}
*/
/*

template<class T>void swap1(T &a,T &b)
{
	T t;
	t=a;
	a=b;
	b=t;
} 
int main()
{
	int x,y;
	cout<<"Enter the valye of x and y : ";
	cin>>x>>y;
	cout<<"value before Swap"<<"x="<<x<<"y="<<y<<endl;
	swap1(x,y);
	cout<<" value After Swap"<<"x="<<x<<"y="<<y<<endl;
	
	char ch1,ch2;
	cout<<"Enter the character : ";
    cin>>ch1>>ch2;
	cout<<"value before Swap"<<"ch1="<<ch1<<"ch2= "<<ch2<<endl;
	swap1(ch1,ch2);
	cout<<" value After Swap"<<"ch1="<<ch1<<"ch2="<<ch2<<endl;
}
*/
//Write a C++ Program to find Sum of Array using
//function template.?

// Write a C++ Program to find Sum of Array using function template.

template <class T>

T sumOfArray(T x[], int size)
{
    T sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += x[i];
    }

    return sum;
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    float arr2[5] = {1.2, 2.3, 4.5, 65.4, 53.4};
    int size = 5;

    cout << "Sum of arr1 is " << sumOfArray<int>(arr1, size) << endl;
    cout << "Sum of arr2 is " << sumOfArray<float>(arr2, size) << endl;
    return 0;
}