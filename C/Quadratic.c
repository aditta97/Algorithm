#include <stdio.h>
#include <math.h>

int main(){
        float a, b, c, x1, x2;
        printf("Enter the co-efficient of xˆ2 (a) : ");
        scanf("%f",&a);
        printf("Enter the co-efficient of x (b) : ");
        scanf("%f",&b);
        printf("Enter the constant (c) : ");
        scanf("%f",&c);

        x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
        x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);

        printf("The first root is x1 = %f",x1);
        printf("\n");
        printf("The second root is x2 = %f",x2);
        printf("\n");

        return 0;
}
