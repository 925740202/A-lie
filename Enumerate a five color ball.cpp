#include<iostream>
#include<cmath>
using namespace std;
enum color{red,yellow,blue,green,purple};                                  //ö������������ɫ
int main()
{
    enum color first,second,third;                                        //����ö�ٱ���
    for(first=red;first<=blue;first=(color)(first+1))                     //��һ�������ɫ
    {
        for(second=(color)(first+1);second<=green;second=(color)(second+1))   //�ڶ��������ɫ
        {
            for(third=(color)(second+1);third<=purple;third=(color)(third+1))   //�����������ɫ
            {
                int i;
                for(i=0;i<3;i++)                                                 //ѭ����ӡ���������ɫ
                {
                    color temp;                                                  //��ʱ����
                    if(i==0) temp=first;
                    if(i==1) temp=second;
                    if(i==2) temp=third;
                    switch(temp)
                    {
                        case red:cout<<"red\t";break;
                        case yellow:cout<<"yellow\t";break;
                        case blue:cout<<"blue\t";break;
                        case green:cout<<"green\t";break;
                        case purple:cout<<"purple\t";break;
                    }
                }
                cout<<endl;
            }
        }
    }
	return 0;
}

