#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;                  //����nλ��
    int start,end,m,sum,d;  //������ʼ������β�����м������ܺͣ�ÿһλ��
    while(1)                //����Ѱ��������ѭ��
    {
    cout<<"Please input n:"<<endl;     //�����������λ��n
    cin>>n;                             //����λ��n
    if(n<=0)                           //�ж�n�Ƿ����0
       break;                              //nС�ڵ���0������ѭ��
    else
    {cout<<n<<"λ�����������У�";   //�����nλ�������У�
    start=pow(10,n-1);                    //���忪ʼ�ĵ�һ����
    end=pow(10,n)-1;                       //������������һ����
    for(int i=start;i<=end;i++)            //����ѭ����ʼѰ��
    {
        m=i;                                //���м���m���ȵ���i
        sum=0;                               //�ܺͳ�ʼ��
        while(m!=0)                          //������i��ѭ��
        {

        d=m%10;                              //���i
        sum=sum+pow(d,n);                     //�ܺ��ۼ�
        m=m/10;                               //m����
        }
       if(sum==i)                             //�ж��ܺ��Ƿ����i
         cout<<i<<" ";
    }cout<<endl;
    }
    }
	return 0;
}

