#include <stdio.h>

int factorial(int n)
{
        if (n==0)
                return 1;
        return n * factorial(n-1);
}

int main(){
        int n, r, nCr;
        printf("Enter the number of n: ");
        scanf("%d", &n);
        printf("Enter the number of r: ");
        scanf("%d", &r);

        nCr = (factorial(n)/(factorial(n-r)*factorial(r)));
        printf("The factorial is: %d\n",nCr);
        return 0;
}
