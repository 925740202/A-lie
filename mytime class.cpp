#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class mytime                          //define class of mytime
{
    private:                           //private members : hour minute seconds
            int hour;
            int minute;
            int seconds;
    public:                              //public functions: settime print in 12/print in 24
            void SetTime(int,int,int);
            void print_12();
            void print_24();
};
void mytime::SetTime(int h,int m,int s)             //settime function
{
    if(h>=0&&h<=24)
        hour=h;
    else return;
    if(m>=0&&m<=59)
        minute=m;
    else return;
    if(s>=0&&s<=59)
        seconds=s;
    else return;
}
void mytime::print_12()                            //print in 12
{
 /*whether or not add "0"in hour*/
    if(hour>12)
    {
        if(hour<=21)
        cout<<"0"<<hour-12<<":";
        else
        cout<<hour-12<<":";
    }
    else if(hour>=10&&hour<=12)
        cout<<hour<<":";
    else
        cout<<"0"<<hour<<":";
/*whether or not add "0"in minute*/
    if(minute>=0&&minute<=9)
        cout<<"0"<<minute<<":";
    else
        cout<<minute<<":";
/*whether or not add "0"in seconds*/
    if(seconds>=0&&seconds<=9)
        cout<<"0"<<seconds;
    else
        cout<<seconds;
    if(hour>=12)
       cout<<"PM";
    else
       cout<<"AM";
}
void mytime::print_24()                         //print in 24
{
/*whether or not add "0"in hour*/
    if(hour>=0&&hour<=9)
       cout<<"0"<<hour<<":";
    else
       cout<<hour<<":";
/*whether or not add "0"in minute*/
    if(minute>=0&&minute<=9)
        cout<<"0"<<minute<<":";
    else
        cout<<minute<<":";
/*whether or not add "0"in seconds*/
    if(seconds>=0&&seconds<=9)
        cout<<"0"<<seconds;
    else
        cout<<seconds;
}
int main()
{
    mytime time;                 //define class of mytime :time
    int h,m,s;
    cin>>h>>m>>s;                  //input three parameter
    time.SetTime(h,m,s);           //set initial time
    time.print_12();              //print in 12
    cout<<endl;
    time.print_24();                //print in  24
	return 0;
}

