#include<iostream>
int main ()    
{    
    using namespace std;
    int i,j,temp;
    int a[10] = { 10, 9, 7, 101, 23, 44, 12, 78, 34, 23};     
    for(i = 0; i<10; i++)    
    {    
        for(j = i+1; j<10; j++)    
        {    
            if(a[j] > a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
    cout<<"Printing Sorted Element List ...\n";    
    for(i = 0; i<10; i++)    
    {    
        //printf("%d\n",a[i]);  
        cout<<endl<<a[i];  

    }    
    return 0;
}     

//user input array
// #include<iostream>
// int main()
// {
//     using namespace std;
//     int n;
//     cin>>n;
// int sub[n],i;
//     for ( i=0; i<n; i++)
//     {
//         cout<<"\n enter the sub";
//         cin>>sub[i];
//         //scanf("%d",&sub[i]);
//     }

//     cout<<"\n the output is\n";

//      for( i=0; i<n; i++)
//     {
//         cout<<"\n"<<sub[i];
//     }
//     return 0;
// }
