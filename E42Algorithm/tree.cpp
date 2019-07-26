#include<stdio.h>
#include<stdlib.h>
int s, i,n, a[50];
void sum()
{
 s=0;
 for(i=1;i<=n;i++)
        s=s+a[i];
 printf("Sum=%d",s);
}
int main()
{
   printf("Enter No. of Elements\n");
   scanf("%d",&n);
   printf("Enter List\n");
   for(i=1;i<=n;i++)
   {
a[i]=rand()%100;
printf("%d  ",a[i]);
   }
   sum();
    return 0;
}
