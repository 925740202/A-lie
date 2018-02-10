#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    int n;
    cout<<"Please input the number of the array elements:"<<endl;
    cin>>n;
    int a[20],*p;
    for(int i=0;i<n;i++)
       {cin>>a[i];}
    for(p=a;p<a+n-1;p++)
    {
        cout<<*p<<" ";
    }
    cout<<*p;
	return 0;
}

