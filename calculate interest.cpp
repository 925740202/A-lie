#include<iostream>
#include<cmath> 
using namespace std;
main()
{
	double sum,money,rate,years;                   //�����������������ʣ�ʱ�� 
	char s;                                        //�Ƿ������ַ� 
	cout<<"�������뱾��"<<endl;                    //���뱾�� 
	cin>>money;                               
	cout<<"����������ʱ��"<<endl;                //������ʱ�� 
	cin>>years;
	cout<<"��������������"<<endl;                //������� 
	cin>>rate;
	while(money>0)                                 //ѭ������ 
	{
		sum=money*pow((1+rate),years);             //���㹫ʽ 
		cout<<"������Ľ��Ϊ"<<sum<<endl;       //��������� 
		cout<<"�Ƿ�������� Y or N"<<endl;
		cin>>s;
		if(s=='Y')
		{
			cout<<"�������뱾��"<<endl;            //���뱾�� 
	        cin>>money;                               
	        cout<<"����������ʱ��"<<endl;        //������ʱ�� 
	        cin>>years;
	        cout<<"��������������"<<endl;        //������� 
	        cin>>rate;	
		} 
		else break;
	} 
     if(money<0)                                   //�жϱ����Ƿ�Ϊ�� 
	 	cout<<"������ı�������" <<endl;           //�������Ϊ���� 
	return 0;
}
