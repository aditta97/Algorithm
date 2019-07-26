#include <stdio.h>
#include <math.h>

int main(){
        int n, i, factorial = 1;
        printf("Enter a number to find the factorial: ");
        scanf("%d", &n);

        if(n <= 0) {
                printf("Number is invalid");
        } else{
                for(i = 1; i<=n; i++) {
                        factorial = factorial * i;
                }
                printf("The factorial of %d is : %d", n, factorial);
        }
        return 0;
}
