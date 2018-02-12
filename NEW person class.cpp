#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class Person                         //define class of Person
{
    char name[20];                    //private members:name,age,sex
    int  age;
    char sex;
    public:                        //public functions:构造函数,register,showme,析构函数
           Person()
           {
               strcpy(name,"xxx");
               age=0;
               sex='m';
           }
           void Register(char *n,int a,char s);    //Register function  :initial members
           void showme();                           //print the information of members
           ~Person(){cout<<"Now destroying the instance of Person"<<endl;};   //析构函数
};
void Person::Register(char *n,int a,char s)           //Register function to initial members
{
    strcpy(name,n);
    age=a;
    sex=s;
}
void Person::showme()                                //print members
{
    cout<<name<<" "<<age<<" "<<sex<<endl;
}
int main()
{
    Person *p1=new Person(),*p2=new Person();           //Declaring two dynamic pointer variables
   // Person *p2=new Person();
    char name[20];
    int  age;
    char sex;
    cin>>name>>age>>sex;                                  //input members
    cout<<"person1:";p1->showme();
    cout<<"person2:";p2->showme();
    p1->Register(name,age,sex);                              //initial p1
    *p2=*p1;                                                   //Assign the value of P1 to P2
    cout<<"person1:";p1->showme();
    cout<<"person2:";p2->showme();
    delete p1;                                            //free p1
    delete p2;                                             //free p2
	return 0;
}

