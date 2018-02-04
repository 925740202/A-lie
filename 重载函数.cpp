#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
void print_spaced(char a[])
{
    int i,j;
//    while(a[i]!='\0')
//    {
//        i++;
//    }
    i=strlen(a);
    for(j=0;j<i-1;j++)
    {
        cout<<a[j]<<" ";
    }
    cout<<a[i-1]<<endl;
}
void print_spaced(string a)
{
    int i,j;
    i=sizeof(a)-1;
    for(j=0;j<=i;j++)
    {
        cout<<a[j]<<" ";
    }
    cout<<a[i+1];
}
//void print_spaced(string s)
//{
// for(int i=0;i<s.size()-1;i++)
// {
//  cout<<s[i]<<" ";
// }
// cout<<s[s.size()-1]<<endl;
//}
int main()
{
    char a[101];
    string str;
    cin>>a;
    cin>>str;
    print_spaced(a);
    print_spaced(str);
	return 0;
}

