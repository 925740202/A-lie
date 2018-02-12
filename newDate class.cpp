#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class Date      //define class of Date
{
    private:                        //private member:year,month,day
            int year;
            int month;
            int day;
    public:                       //public function
            Date(int y,int m,int d):year(1900),month(1),day(1)//  Constructor with a parameter
            {
                year=y;
                month=m;
                day=d;
            }
            Date()                              //non-parameter constructor
            {
                year=2100;
                month=12;
                day=12;
            }
            void init(int,int,int);                //initial parameter function
            void print();                          //print function
            ~Date(){};                           //Îö¹¹º¯Êý
};
void Date::init(int y,int m,int d)//initial function
{
    year=y;
    month=m;
    day=d;
}
void Date::print()//print function
{
    cout<<year<<"-"<<month<<"-"<<day<<endl;
}
int main()
{
    Date d1(1900,1,1);//Declarations have parameter variables
    Date d2;//Declarations of non parametric variables
    int y,m,d;
    cin>>y>>m>>d;
   // d2.init(2100,12,12);
    /*print */
    d1.print();
    d2.print();
    d1.init(y,m,d);
    d1.print();
	return 0;
}

