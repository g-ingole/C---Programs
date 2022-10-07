#include<stdio.h>
#include<conio.h>
void main(){
    int phy,che,bio,math,english,tot;
    float per;
    printf("enter the marks of 5 subjects \n");
    scanf("%d%d%d%d%d",&phy,&che,&bio,&math,&english);
    tot=phy+che+bio+math+english;
    per=tot/5;
    printf("\n the total mark of =%d & percentages are =%f",tot,per);
    if ((phy>=35)&&(che>=35)&&(bio>=35)&&(math>=35)&&(english>=35))
    {
        printf("\n you pass the examination");
    }
    else
    {
        printf("\n sorry better luck next time");
    }
    if ((tot>=450)&&(phy>=35)&&(che>=35)&&(bio>=35)&&(math>=35)&&(english>=35))
    {
        printf("\n GRADE A");
    }
    if ((tot>=350&&tot<=349)&&(phy>=35)&&(che>=35)&&(bio>=35)&&(math>=35)&&(english>=35))
    {
        printf("\n GRADE B");
    }
    if ((tot>=175&&tot<=349)&&(phy>=35)&&(che>=35)&&(bio>=35)&&(math>=35)&&(english>=35))
    {
    {
        printf("\n GRADE C");     
    }
}

