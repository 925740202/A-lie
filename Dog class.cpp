#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class Dog                       //define Dog class
{
    private:                        //private members:name age sex weight
           char name[20];
           int  age;
           char sex;
           double  weight;                //weight is a double precision type
    public:                                //public functions: setdata getname getage getsex getweight
           void setdata(char *n,int a,int s,double w);
           char *GetName(){return name;}
           int  GetAge(){return age;}
           void GetSex();
           double  GetWeight(){return weight;}

};
void Dog::setdata(char *n,int a,int s,double w)
{
    strcpy(name,n);
    age=a;
    sex=s;
    weight=w;
    cout<<"It is my dog."<<endl;
}
void Dog::GetSex()
{
    //char wsex[10];
    if(sex=='m')
       cout<<"male";
    else
       cout<<"female";
    //return wsex;
}
int main()
{
    Dog dog;
    char name[20],sex;
    int age;
    double weight;
    cout<<"Please input the information of your dog:"<<endl;
    cin>>name>>age>>sex>>weight;             //input the dog's information
    dog.setdata(name,age,sex,weight);         //initial information
/*input the information of dog*/
    cout<<"Its name is "<<dog.GetName()<<endl;
    cout<<"It is "<<dog.GetAge()<<" years old."<<endl;
    cout<<"It is ";
    dog.GetSex();cout<<"."<<endl;
    cout<<"It is "<<dog.GetWeight()<<" kg."<<endl;
	return 0;
}

