#include<iostream>
using namespace std;
int main()
{
    int a,b;

    cout<<"enter the frist number a = ";
    cin>>a;
    cout<<endl;
    cout<<"enter the second number b = ";
    cin>>b;
    cout<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"number after swapping a = "<<a<<" b = "<<b<<endl;
    return 0;

}
