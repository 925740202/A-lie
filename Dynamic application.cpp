#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int *new_array(int n)
{
    int *array;
    array=new int[n];
    return array;
}
void init_array(int *p, int n,int c)
{
    for(int i=0;i<n;i++)
       p[i]=c;
    for(int i=0;i<n-1;i++)
       cout<<p[i]<<" ";
    cout<<p[n-1];
}
int main()
{
    int n,c;
    cout<<"请输入需要开辟的数组元素个数及初始值："<<endl;
    cin>>n>>c;
    init_array(new_array(n),n,c);
//    for(int i=0;i<n-1;i++)
//       cout<<array[i]<<" ";
//    cout<<array[n-1];
	return 0;
}

