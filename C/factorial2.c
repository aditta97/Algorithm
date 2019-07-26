#include <stdio.h>

int factorial(int n)
{
        if (n==0)
                return 1;
        return n * factorial(n-1);
}

int main(){
        int f, n;
        printf("Enter the number: ");
        scanf("%d", &n);
        f = factorial(n);
        printf("The factorial is: %d",f);
        return 0;
}
