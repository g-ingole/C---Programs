#include<stdio.h>
#include<conio.h>
int armstrong (int);
    int main()
{
	int num,m,ori;
	printf("Please enter any integer value \n");
	scanf("%d",&num);
	ori=num;
	m=armstrong(num);
	if(ori==m)
	{
		printf("\n The entered number is armstrong");
	}
	else
	{
		printf("\n The entered number is not armstrong");
	}
	getch();
}
int armstrong(int num)
{
	int r,arm=0;
	while(num!=0)
	{
		r=num%10;
		arm=arm+r*r*r;
		num=num/10;
	}
	return arm;
}

// int armstrong (int);
//     int main()
// {
//     int n,a,ori;
//     printf("enter the original value");
//     scanf("%d",&n);
//     ori=n;
//     a=armstrong(n);
//     if (ori==n)
//     {
//         printf("\n entered number is amst number");
//     }
//     else
//     {
//         printf("\n entered number is not amst number");
//     }
//     // getch();
// }
// int armstrong(int n)
// {
//     int r,arm=0;
//     while (n!=0)
//     {
//         r=n%10;
//         arm=arm+r*r*r;
//         n=n/10;
//     }
//     return arm;
// }
