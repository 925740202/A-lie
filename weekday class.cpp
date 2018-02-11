#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class Weekday                      //define  class of Weekday
{
    private:                        //private members: 字符串day和记录天数的nd
           string day;
           int nd;
    public:                         //public functions: setday incday nowday
           void SetDay(int);         //initial nd
           int IncDay();             //advance one day
           void NowDay();            //print the current date
};
void Weekday::SetDay(int n)         //setday function
{
    nd=n;
}
int Weekday::IncDay()             //incday function
{
/*circular printing*/
   if(nd==6)
     nd=nd-6;
   else
     nd++;
   //cout<<nd;
   return nd;
}
void Weekday::NowDay()             //nowday function    printi now day
{
     switch(nd)
    {
        case 0: day="星期日";break;
        case 1: day="星期一";break;
        case 2: day="星期二";break;
        case 3: day="星期三";break;
        case 4: day="星期四";break;
        case 5: day="星期五";break;
        case 6: day="星期六";break;
        default: return;
    }
    cout<<day<<endl;
}
int main()
{
    Weekday weekday;            //define class of Weekday
    int n;
    cin>>n;                       //input
    weekday.SetDay(n);
    for(int i=0;i<3;i++)           //loop print   current day,next day and the day after tomorrow
    {
        weekday.NowDay();
        weekday.IncDay();
         //weekday.NowDay();
    }
	return 0;
}

