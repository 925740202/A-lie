/*Encryption Algorithm
made by Math_Alie
2018-1-22*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char s,ns;
	int k;
	cout<<"Please input your word that wants to decryption:"<<endl;
	cin>>s;
	cout<<"Please input the k:"<<endl;
	cin>>k;
	if(s<='Z')
	   ns=((s-'A')-k+26)%26+'A';
    else
	   ns=((s-'a')-k+26)%26+'a';
    cout<<"After decryption:"<<ns<<endl;
    while(1)
    {
    cout<<"Do you want to continue? Y/N"<<endl;
    char answer;
    cin>>answer;
    if(answer=='Y')
    {
    cout<<"Please input your word that wants to decryption:"<<endl;
	cin>>s;
	cout<<"Please input the k:"<<endl;
	cin>>k;
    if(s<='Z')
	   ns=((s-'A')-k+26)%26+'A';
    else
	   ns=((s-'a')-k+26)%26+'a';
    cout<<"After decryption:"<<ns<<endl;
	}
	else break;
    }
	return 0;
}

