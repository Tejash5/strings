#include<stdio.h>
 int main() {
     int a[5]i,j,f,n;
     printf("\n Enter  n elements");
     for(i=0;i<5;i++)
            scanf("%d\",& a [i]);
     for(int i=0;i<5;i++)
     {
         n = a[i];
         for(j=2;j<n;j++)
         {
             if(n%j==0)
             {
                  f=1;
                  break;

             }
         }
         if(f==0)
         printf("%d is prime" ,n )
    }
    return 0;       



}