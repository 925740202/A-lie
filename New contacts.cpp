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
    cout<<"Is there a second number? Y/N"<<endl;               //ѯ���Ƿ��������ڶ�������
    char answer;
    cin>>answer;
    if(answer=='Y')                                           //Y ����ڶ�������
    {
       for(int k=0;k<11;k++)
        {
          cin>>contacts[i].telephone2[k];
        }
    }
    else if(answer=='N')                                      //N ������һ����ϵ������
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
    int i;                                                 //�ڱ���������ʾ�Ƿ���ҵ���ϵ��
    for(i=0;i<3;i++)                                                  //������ϵ��ƥ����֮��ͬ������
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
            if(contacts[i].telephone2[0]!=0)                          //�Ƿ��еڶ�����ϵ�绰���������
            {
              for(int k=0;k<11;k++)
              {
                cout<<contacts[i].telephone1[k];
              }
              cout<<endl;
            }

        }
    }
    if(guard==false)                                                 //û�в鵽ƥ�����ϵ��
    {
       cout<<"No such contact"<<endl;
    }
}
int main()
{

    //struct list contacts[3];                                        //�����ṹ��
    cout<<"Do you want to build a new contact? Y/N"<<endl;         //������Ƿ��뽨��һ������ϵ��
    char answer1,answer2,answer3;                                                    //�����𰸱���
    cin>>answer1;                                                    //�����
    if(answer1=='Y')                                               //The answer is Y continue
    {
      struct list contacts[3];                                        //�����ṹ��
      int i;
      for(i=0;i<3;i++)
      {
         Add_contacts(contacts,i);
         cout<<"Do you want to continue? Y/N"<<endl;                    //�Ƿ������һ����ϵ������
         cin>>answer2;
         if(answer2=='N')                                               //N  ����ѭ�����������
            break;
         else if(answer2=='Y')                                           //Y  ������һ����ϵ��
            cout<<"Please continue to the next contact"<<endl;
         else
            cout<<"The answer is wrong"<<endl;                            //�������������ַ�
      }
      cout<<"Do you want to find a contact? Y/N"<<endl;                   //�Ƿ����ѯĳһ����ϵ��
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
    else if(answer1=='N')                                             //N ���뽨������ϵ��
        cout<<"�������"<<endl;
    else                                                               //���������Ƿ��ַ�
        cout<<"The answer is wrong"<<endl;
	return 0;
}

