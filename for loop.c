#include<stdio.h>
#include<conio.h>
void main(){
    int i,n,sum=0;
    printf("\n enter the value");
    scanf("%d",&n);
    printf("\n the first %d natural no n");
    for (i=1;i<=n; i++)
    {
        printf("\n %d",i);
        sum+=i;
    }
       printf("\nThe Sum of natural numbers upto %d terms : %d \n",n,sum);
    

    // int n1,n2,i,j;
    // printf("\n enter the element");
    // scanf("%d%d",&n1,&n2);
    // int arr[n1][n2];
    // for (i=0;i<n1;i++)
    // {
    //     for (j=0;j<n2; j++)
    //     {
    //         printf("\n enter the element a[%d][%d]",i,j);
    //         scanf("%d",&arr[i][j]);
    //     }
        
    // }
    // for (i=0; i<n1; i++)
    // {
    //     printf("\n");
    //      for (j=0; j<n2; j++)
    //      {
    //         printf("%d\t",arr[i][j]);
    //      }
         
    // }
    
    
}