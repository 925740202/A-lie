#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a[100];                                                              //定义静态数组
    cout<<"Please input the numbers to be sorted and end with 99999"<<endl;
    int n=-1;
/**********数据的输入**********/
    do
    {
        n++;
        cin>>a[n];
    }while(a[n]!=99999&&n<100);
/**********进行排序***********/
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            double temp;                                              //临时变量
            if(a[j]>a[j+1])                                           //比较大小进行交换
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
/***********数据的输出***********/
    int k;
    cout<<"You have entered the total "<<n<<" numbers:"<<endl;
    for(k=0;k<n;k++)
     {
         cout<<a[k]<<"\t";
         if((k+1)%5==0) cout<<endl;                                         //判断每一行是否有五个数
     }

	return 0;
}

