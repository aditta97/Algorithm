#include <stdio.h>

void quick_sort(int[],int,int);
int partition(int[],int,int);

int main()
{
    int ch;
    printf("Enter your choice\n1.Quick Sort\n2.Insertion Sort\n");
    scanf("%d",&ch);
    if(ch==1){
    int a[50],n,i;
    printf("How many elements?");
    scanf("%d",&n);
    printf("\nEnter array elements:");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    quick_sort(a,0,n-1);
    printf("\nPress 1 for ascending order\nPress 2 for descending order\n");
    int ch1;
    scanf("%d",&ch1);
    if(ch1==1){
    printf("\nArray after sorting:");

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
    }
    if(ch1==2){
            printf("\nArray after sorting:");

    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);

    return 0;

    }
    }
    if(ch==2)
    {
          int i,j,n,temp,a[30];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter the elements\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<=n-1;i++)
    {
        temp=a[i];
        j=i-1;

        while((temp<a[j])&&(j>=0))
        {
            a[j+1]=a[j];    //moves element forward
            j=j-1;
        }

        a[j+1]=temp;    //insert element in proper place
    }
     printf("\nPress 1 for ascending order\nPress 2 for descending order\n");
    int ch2;
    scanf("%d",&ch2);
    if(ch2==1){
    printf("\nSorted list is as follows\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
    }
    if(ch2==2){
    printf("\nSorted list is as follows\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    return 0;
    }

    }
}

void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}

int partition(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;

    do
    {
        do
            i++;

        while(a[i]<v&&i<=u);

        do
            j--;
        while(v<a[j]);

        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);

    a[l]=a[j];
    a[j]=v;

    return(j);
}
