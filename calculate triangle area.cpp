#include<iostream>
#include<cmath>
using namespace std;
 main()
{
	double a,b,c;                                        //��������
	double s,area;                                        //��������
	cout<<"Please input the length of three edges:"<<endl; //�����������߳���
	cin>>a>>b>>c;                                         //input
	s=(a+b+c)/2.0;                                          //calculate s
	area=sqrt(s*(s-a)*(s-b)*(s-c));                         //calculate area
	cout<<"The area of triangle:"<<area;                     //output area
	return 0;
}

