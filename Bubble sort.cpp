#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a[100];                                                              //���徲̬����
    cout<<"Please input the numbers to be sorted and end with 99999"<<endl;
    int n=-1;
/**********���ݵ�����**********/
    do
    {
        n++;
        cin>>a[n];
    }while(a[n]!=99999&&n<100);
/**********��������***********/
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            double temp;                                              //��ʱ����
            if(a[j]>a[j+1])                                           //�Ƚϴ�С���н���
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
/***********���ݵ����***********/
    int k;
    cout<<"You have entered the total "<<n<<" numbers:"<<endl;
    for(k=0;k<n;k++)
     {
         cout<<a[k]<<"\t";
         if((k+1)%5==0) cout<<endl;                                         //�ж�ÿһ���Ƿ��������
     }

	return 0;
}

