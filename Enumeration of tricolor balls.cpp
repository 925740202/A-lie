#include<iostream>
#include<cmath>
using namespace std;
enum color{red,yellow,blue};
int main()
{
    enum color first,second;                      //定义枚举变量
    for(first=red;first<=yellow;first=(color)(first+1))     //第一个球的颜色
    {
        for(second=(color)(first+1);second<=blue;second=(color)(second+1))    //第二个球的颜色
        {
            int i;
            for(i=0;i<2;i++)                                                //循环打印
            {
                color temp;                                                 //临时变量
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

