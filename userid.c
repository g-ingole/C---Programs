#include<stdio.h>
#include<conio.h>
void main(){
    int id=0423;
    int pws=9620;
    printf("enter the id and password");
    scanf("%d%d",&id,&pws);
    if ((id==0423)&&(pws==9620))
    {
       printf("\n you're login successfully");
    }
    else
    {
       printf("\n you entered a wrong password");
    }
    
    // printf("enter the password");
    // scanf("%d",&pws);

    // printf("user id=%d",id);
    // printf("user password=%d",pws);
}