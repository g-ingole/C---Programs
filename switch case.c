#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c,sum,choice;
    while (1)
    {
       printf("\n 1. addition");
       printf("\n 2. even odd");
       printf("\n 3. exit");
      
       printf("\n enter the choice");
       scanf("%d",&choice);
      
       switch (choice)
       {
       
    case 1: 
         printf("\n enter the two number");
                scanf("%d%d",&a,&b);
                sum=a+b;
         printf("\n sum=%d",sum);
                break;
       
    case 2:
         printf("\n enter the nuber");
         scanf("\n %d",&a);
        if(a%2==0)
         printf("\n even");
        else printf("\n odd");
        break;
    case 3:
        exit(0);
    default:
        printf("invalid choice");
       }
    }
}