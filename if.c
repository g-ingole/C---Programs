#include<stdio.h>
#include<conio.h>
void main(){
    int num,a,b,c;
    printf("\n enter the value");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("\n a is largest value :");
    }
    if (b>a && b>c)
    {
        printf("\n b is largest value:");
    }
    if(c>a && c>b)
    {
        printf("\n c is the largest value");
    }
 if(a<b && a<c){
    printf("a is the smallest");
}

 if(b<a && b<<c){

    printf("b is the smallest");
}
 if (c<a && c<b)
  {
    printf("c is the smallest");
  }
    }
    
    
    
