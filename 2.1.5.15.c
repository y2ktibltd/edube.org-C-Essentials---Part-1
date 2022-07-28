#include <stdio.h>

int main()
{
    float a,b;
    printf("Please enter your first float value: \n");
    scanf("%f",&a);
    printf("Please enter your second float value: \n");
    scanf("%f",&b);
    printf("Value A: %1.2f \n",a);
    printf("Value B: %1.2f \n",b);
    printf("%f + %f = %f. \n",a,b,(a+b));
    printf("%f - %f = %f. \n",a,b,(a-b));
    printf("%f * %f = %f. \n",a,b,(a*b));
    return 0;
}
