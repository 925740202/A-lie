#include<iostream>
#include<cmath>
using namespace std;
enum color{red,yellow,blue};
int main()
{
    enum color first,second;                      //����ö�ٱ���
    for(first=red;first<=yellow;first=(color)(first+1))     //��һ�������ɫ
    {
        for(second=(color)(first+1);second<=blue;second=(color)(second+1))    //�ڶ��������ɫ
        {
            int i;
            for(i=0;i<2;i++)                                                //ѭ����ӡ
            {
                color temp;                                                 //��ʱ����
                if(i==0) temp=first;
                if(i==1) temp=second;
                switch(temp)
                {
                    case red:cout<<"red\t";break;
                    case yellow:cout<<"yellow\t";break;
                    case blue:cout<<"blue\t";break;
                }
            }
            cout<<endl;
        }
    }
	return 0;
}

