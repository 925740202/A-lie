#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
struct list                                                   //define contacts struct
{
   char name[20];                                                   //contact's name
   char sex;                                                    //contact's sex
   int  telephone1[11];
   int  telephone2[11];
};
void Add_contacts(struct list contacts[],int i)
{
    cout<<"Please enter the contact's name:"<<endl;
    cin>>contacts[i].name;
    cout<<"Please enter the contact's sex:"<<endl;
    cin>>contacts[i].sex;
    cout<<"Please enter the contact's telephone:"<<endl;
    for(int j=0;j<11;j++)
    {
      cin>>contacts[i].telephone1[j];
    }
    cout<<"Is there a second number? Y/N"<<endl;               //询问是否继续输入第二个号码
    char answer;
    cin>>answer;
    if(answer=='Y')                                           //Y 输入第二个号码
    {
       for(int k=0;k<11;k++)
        {
          cin>>contacts[i].telephone2[k];
        }
    }
    else if(answer=='N')                                      //N 进行下一个联系人输入
       {cout<<"Please continue to the next contact"<<endl;
       contacts[i].telephone2[0]=0;}
    else
       {cout<<"The answer is wrong"<<endl;
       contacts[i].telephone2[0]=0;}
}
void Find_contacts(struct list contacts[])
{
    cout<<"Please input his(her) name:"<<endl;
    char answer_name[20];
    cin>>answer_name;
    bool guard=false;
    int i;                                                 //哨兵，用来表示是否查找到联系人
    for(i=0;i<3;i++)                                                  //遍历联系人匹配与之相同的名字
    {
        if(strcmp(contacts[i].name,answer_name)==0)
        {
            guard=true;
            cout<<contacts[i].name<<"'s information is:"<<endl;
            cout<<contacts[i].sex<<endl;
            for(int j=0;j<11;j++)
            {
              cout<<contacts[i].telephone1[j];
            }
            cout<<endl;
            if(contacts[i].telephone2[0]!=0)                          //是否有第二个联系电话，有则输出
            {
              for(int k=0;k<11;k++)
              {
                cout<<contacts[i].telephone1[k];
              }
              cout<<endl;
            }

        }
    }
    if(guard==false)                                                 //没有查到匹配的联系人
    {
       cout<<"No such contact"<<endl;
    }
}
int main()
{

    //struct list contacts[3];                                        //建立结构体
    cout<<"Do you want to build a new contact? Y/N"<<endl;         //输出你是否想建立一个新联系人
    char answer1,answer2,answer3;                                                    //声明答案变量
    cin>>answer1;                                                    //输入答案
    if(answer1=='Y')                                               //The answer is Y continue
    {
      struct list contacts[3];                                        //建立结构体
      int i;
      for(i=0;i<3;i++)
      {
         Add_contacts(contacts,i);
         cout<<"Do you want to continue? Y/N"<<endl;                    //是否进行下一个联系人输入
         cin>>answer2;
         if(answer2=='N')                                               //N  跳出循环，输出结束
            break;
         else if(answer2=='Y')                                           //Y  输入下一个联系人
            cout<<"Please continue to the next contact"<<endl;
         else
            cout<<"The answer is wrong"<<endl;                            //输入其他错误字符
      }
      cout<<"Do you want to find a contact? Y/N"<<endl;                   //是否想查询某一个联系人
      cin>>answer3;
      if(answer3=='Y')
      {
          Find_contacts(contacts);
      }
      else if(answer3=='N')
          cout<<"Thank you goodbye";
      else
          cout<<"The answer is wrong"<<endl;
    }
    else if(answer1=='N')                                             //N 不想建立新联系人
        cout<<"程序结束"<<endl;
    else                                                               //输入其他非法字符
        cout<<"The answer is wrong"<<endl;
	return 0;
}

