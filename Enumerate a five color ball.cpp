#include<iostream>
#include<cmath>
using namespace std;
enum color{red,yellow,blue,green,purple};                                  //枚举所有五种颜色
int main()
{
    enum color first,second,third;                                        //定义枚举变量
    for(first=red;first<=blue;first=(color)(first+1))                     //第一个球的颜色
    {
        for(second=(color)(first+1);second<=green;second=(color)(second+1))   //第二个球的颜色
        {
            for(third=(color)(second+1);third<=purple;third=(color)(third+1))   //第三个球的颜色
            {
                int i;
                for(i=0;i<3;i++)                                                 //循环打印三个球的颜色
                {
                    color temp;                                                  //临时变量
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

