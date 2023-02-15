#include<iostream>
using namespace std;

int main()
{
    int n,num,rev=0;
    cout<<"enter any digit:";
    cin>>n;
    int n1=n;
    while(n!=0)
    {
        num=n%10;
        rev=rev*10+num;
        n=n/10;
    }
    cout<<"reverse of "<<n1<<" is "<<rev;
}