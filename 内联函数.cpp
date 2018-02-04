#include<iostream>
#include<cmath>
using namespace std;
inline int c(int a,int b)
{
    int c;
    c=(a+b)*2;
    return c;
}
inline int area(int a,int b)
{
    int area;
    area=a*b;
    return area;
}
int main()
{
    cout<<"Please input the length and width of the rectangle:"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<area(a,b)<<" "<<c(a,b);
	return 0;
}

