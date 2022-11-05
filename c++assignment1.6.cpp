#include<iostream>
using namespace std;
int main()
{
    int sum=0,a,b,c;
    float avg=0;
    cout<<"enter the one number"<<endl;
    cin>>a;
    cout<<"enter the two number"<<endl;
    cin>>b;
    cout<<"enter the three number"<<endl;
    cin>>c;
    sum=a+b+c;
    avg = sum/3.0;
    cout<<"avg of three numbers is"<<avg<<endl;
    return 0;

}
