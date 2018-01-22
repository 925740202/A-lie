#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j;                           //声明循环变量
    for(i=1;i<=9;i++)                   //大循环体
    {
        for(j=1;j<=i;j++)              //嵌套循环
        {
            cout<<j<<"*"<<i<<"="<<i*j<<"\t";  //输出乘法表加制表符
        }
        cout<<endl;                      //换行
    }
	return 0;
}

