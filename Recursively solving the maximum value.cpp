#include<iostream>
#include<cmath>
using namespace std;
int maximum_value(int a[],int n)
{
    int maximum;
    if(n==1)return a[0];
    else
    {
      maximum=maximum_value(a,n-1);
      return maximum>a[n-1]?maximum:a[n-1];
    }
}
int main()
{
/*****************输入数据*******************/
    int n;
    int arry[100];
    cout<<"Please input the length of the arry to be sorted:"<<endl;
    cin>>n;
    cout<<"Please input the arry element:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arry[i];
    }
/*****************排序并输出最大值***************/
    cout<<maximum_value(arry,n)<<endl;
	return 0;
}

