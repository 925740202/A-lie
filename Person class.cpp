#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class Person                                     //define Person class
{
    private:                                      //private members
             char name[20];
             int  age;
             char sex;
    public:                                      //public function
             void Register(char *n,int a,char s);    //setting the initial value
             void Register(const char *n,int a,char s);     //overloaded function
             void ShowMe(){cout<<name<<" "<<age<<" "<<sex<<endl;}   //show function
};
void Person::Register(char *n,int a,char s)
{
    strcpy(name,n);
    age=a;
    sex=s;
}
void Person::Register(const char *n,int a,char s)
{
    strcpy(name,n);
    age=a;
    sex=s;
}
/*main function*/
int main()
{
    Person person1,person2;                                //define person1 and person2
    char n[20],s;
    int a;
    cout<<"Please input person1's information:"<<endl;
    cin>>n>>a>>s;                                          //input person1's information
    person1.Register(n,a,s);
    person2.Register("Zhang3",19,'m');
    person1.ShowMe();
    person2.ShowMe();
	return 0;
}

