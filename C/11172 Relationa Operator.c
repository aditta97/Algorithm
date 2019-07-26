#include <stdio.h>

int main() {
        int num1[100], num2[100], input, i;
        printf("How many time you want to check: ");
        scanf("%d", &input);
        printf("\nEnter two numbers to check relation between them: ");
        for(i = 1; i <= input; i++) {
                scanf("%d %d", &num1[i], &num2[i]);
                if(num1[i] < num2[i]) {
                        printf("<\n");
                } else if(num1[i] > num2[i]) {
                        printf(">\n");
                } else if(num1[i] == num2[i]) {
                        printf("=\n");
                }
        }
        return 0;
}
