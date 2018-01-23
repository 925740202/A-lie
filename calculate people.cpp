/*现有n块砖，要由n人一次搬完，假定男人一次可以搬4块，女人一次可以搬3块，两个小孩搬1块，计算这n人中男人、女人和小孩的人数。输入人数和砖数n，输出可能的解决方案。
程序运行结果如下：
50
men0
women10
children40
men5
women3
children42
如果没有满足的情况，显示提示信息“no result!”
程序运行结果如下：
1
no result!*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,n;
    int man=0,woman=0,children=0;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            if(7*i+5*j==n)
            {cout<<"man"<<i<<endl;
            cout<<"woman"<<j<<endl;
            cout<<"children"<<n-j-i<<endl;
            man=i,woman=j,children=n-i-j;
            }
        }
    }
    if(man+woman+children==0)
    cout<<"no result";
	return 0;
}

