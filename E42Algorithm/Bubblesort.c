#include <stdio.h>
#include <string.h>
int main()
{
char a[100][100],temp[100];
int i,j,n;
printf("Enter No. of elements\n");
scanf("%d",&n);
printf("Enter elements\n");
for(i=1;i<=n;i++)
{
  scanf("%s",a[i]);
}
for(j=1;j<=n-1;j++)
    for(i=1;i<=n-j;i++)
{
   if(strcmp(a[i],a[i+1])>0)
   {
       strcpy(temp,a[i]);
       strcpy(a[i],a[i+1]);
       strcpy(a[i+1],temp);
   }
}
printf("Sorted List\n");
for(i=1;i<=n;i++)
{
  printf("\n%s\n",a[i]);
}
}
