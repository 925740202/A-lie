#include<iostream>
#include<cmath>
#include<cstring>
#include<stdio.h>
using namespace std;
class pet
{
    public:
           virtual void speak(){cout<<"zzz";};
};
class cat:public pet
{
    public:
           void speak(){cout<<"miaomiao";}
};
class dog:public pet
{
    public:
           void speak(){cout<<"wangwang";}
};
int main()
{
    pet pet1,*p=&pet1;
    cat cat1;
    dog dog1;
    int x;
    cin>>x;
    if(x==1) p=&cat1;
    if(x==2) p=&dog1;
    p->speak();
	return 0;
}

