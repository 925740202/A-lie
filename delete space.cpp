#include<iostream>
#include<cmath>
#include<string>
using namespace std;
void delete_space(char *a)
{
    char *p_start=a,*p_end=a;
    while(*p_start==' ')*p_start++;
    //a=*p_start;
    while(*p_end!='#')*p_end++;
    while(*(--p_end)==' ')
    {

    }
    //*(p_end+1)='#';
    for(p_start;p_start<=p_end;p_start++)
    {
        cout<<*p_start;
    }
    cout<<"#";
}
int main()
{
    char a[100];
    cin.getline(a,100);
    delete_space(a);
   // cout<<a;
	return 0;
}

