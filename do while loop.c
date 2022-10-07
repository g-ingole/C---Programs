#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    n=1;
printf("the multiplication table\n");
    do
    {
        if (n==6)
        {
            break;
        }
        printf("2X%d=%d\n",n,n*2);
        n++;
    }
    while (n<=10);
}


