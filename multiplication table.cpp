#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j;                           //����ѭ������
    for(i=1;i<=9;i++)                   //��ѭ����
    {
        for(j=1;j<=i;j++)              //Ƕ��ѭ��
        {
            cout<<j<<"*"<<i<<"="<<i*j<<"\t";  //����˷�����Ʊ��
        }
        cout<<endl;                      //����
    }
	return 0;
}

