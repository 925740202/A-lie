#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class Trapezium                               //define class of Trapezium
{
    private:                                  //private members  eight point coordinates
           int x1,x2,x3,x4;
           int y1,y2,y3,y4;
    public:                                    //public functions
           void initial(int,int,int,int,int,int,int,int);//initial point coordinates
           int GetPosition(int&,int&,int&,int&,int&,int&,int&,int&){return 0;}    //getting point position
           double Area();                           //calculate the area of Trapezium
};
void Trapezium::initial(int x11,int y11,int x22,int y22,int x33,int y33,int x44,int y44)
{
    x1=x11,y1=y11;
    x2=x22,y2=y22;
    x3=x33,y3=y33;
    x4=x44,y4=y44;
}
double Trapezium::Area()
{
    double area;
    area=(x2+x4-x1-x3)*(y1-y3)/2.0;
    return area;
}
int main()
{
    Trapezium T;
    int x1,x2,x3,x4;
    int y1,y2,y3,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;         //input the coordinates
    T.initial(x1,y1,x2,y2,x3,y3,x4,y4);          //initial coordinates
    cout<<T.Area();                              //output area
	return 0;
}

