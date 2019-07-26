#include <stdio.h>
int main()
{
	int n,i,j,k,l,key, sq[100][100];
	printf("Enter size of Magic Square(Odd Number)");
	scanf("%d",&n);
if(n%2==0)
{
    printf("N is Even");
	return 0;
}
else
    {
        for(i=0;i<=n-1;i++)
            for(j=0;j<n-1;j++)
            sq[i][j]=0;
sq[0][(n-1)/2]=1;
j=(n-1)/2;
for(key=2;key<=n*n;key++)
{
    if(i>=1)
        k=i-1;
    else
        k=n-1;
    if(j>=1)
        l=j-1;
    else
        l=n-1;
if(sq[k][l]>=1)
    i=(i+1)%n;
else
    {
    i=k;j=l;
    }
sq[i][j]=key;
}
for(i=0;i<=n-1;i++)
            {
            for(j=0;j<=n-1;j++)
            {
                printf("%6d",sq[i][j]);
            }
            printf("\n\n");
            }
    }
return 0;
}

