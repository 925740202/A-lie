#include<iostream>
#include<cmath> 
using namespace std;
main()
{
	double sum,money,rate,years;                   //声明变量，本金，利率，时间 
	char s;                                        //是否输入字符 
	cout<<"请您输入本金"<<endl;                    //输入本金 
	cin>>money;                               
	cout<<"请您输入存款时间"<<endl;                //输入存款时间 
	cin>>years;
	cout<<"请您输入存款利率"<<endl;                //存款利率 
	cin>>rate;
	while(money>0)                                 //循环输入 
	{
		sum=money*pow((1+rate),years);             //计算公式 
		cout<<"您存款后的金额为"<<sum<<endl;       //输出存款后金额 
		cout<<"是否继续输入 Y or N"<<endl;
		cin>>s;
		if(s=='Y')
		{
			cout<<"请您输入本金"<<endl;            //输入本金 
	        cin>>money;                               
	        cout<<"请您输入存款时间"<<endl;        //输入存款时间 
	        cin>>years;
	        cout<<"请您输入存款利率"<<endl;        //存款利率 
	        cin>>rate;	
		} 
		else break;
	} 
     if(money<0)                                   //判断本金是否为正 
	 	cout<<"您输入的本金有误" <<endl;           //输出本金为错误 
	return 0;
}
