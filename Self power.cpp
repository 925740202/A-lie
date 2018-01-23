#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;                  //声明n位数
    int start,end,m,sum,d;  //声明开始数，结尾数，中间数，总和，每一位数
    while(1)                //进入寻找自幂数循环
    {
    cout<<"Please input n:"<<endl;     //输出：请输入位数n
    cin>>n;                             //输入位数n
    if(n<=0)                           //判定n是否大于0
       break;                              //n小于等于0则跳出循环
    else
    {cout<<n<<"位数的自幂数有：";   //输出：n位自幂数有：
    start=pow(10,n-1);                    //定义开始的第一个数
    end=pow(10,n)-1;                       //定义结束的最后一个数
    for(int i=start;i<=end;i++)            //进入循环开始寻找
    {
        m=i;                                //令中间数m首先等于i
        sum=0;                               //总和初始化
        while(m!=0)                          //进入拆分i的循环
        {

        d=m%10;                              //拆分i
        sum=sum+pow(d,n);                     //总和累加
        m=m/10;                               //m更新
        }
       if(sum==i)                             //判定总和是否等于i
         cout<<i<<" ";
    }cout<<endl;
    }
    }
	return 0;
}

