#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
    char str1[]="Gaurav";
    char str2[]="Gaurav";
    cout<<"enter the name\n";
    cin>>str1;
    cin>>str2;
    cout<<"**************\n";
    cout<<"\n length of string is:"<<strlen(str1);
    cout<<"\n length of string is:"<<strlen(str2);
    return 0;
}