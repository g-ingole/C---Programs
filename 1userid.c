#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,i,user,pass;
    user=123;
    pass=0423;
  
        printf("please enter the user name and password");
        scanf("%d%d",&user,&pass);
        if(user==123 && pass==0423)
        {
            printf("\n correct you have successfully log in");
        }
        else
        {
            printf("sorry user name or password wrong");
        }
}


// #include<stdio.h>
// #include<conio.h>
// void main(){
//     int pass,user;
//     user=2096;
//     pass=2304;
//     printf("\n enter your user name and password");
//     scanf("%d%d",&user,&pass);
//     if (user==2096 && pass==2304)
//     {
//         printf("\n you're successfully log-in");
//     }
//     else
//     {
//         printf("\n you're entering a wrong details");
//     }


// }