#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class Weekday                      //define  class of Weekday
{
    private:                        //private members: �ַ���day�ͼ�¼������nd
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
        case 0: day="������";break;
        case 1: day="����һ";break;
        case 2: day="���ڶ�";break;
        case 3: day="������";break;
        case 4: day="������";break;
        case 5: day="������";break;
        case 6: day="������";break;
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

