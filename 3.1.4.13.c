#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    int a=0,b;
    while (b!=0)
    {
        printf("Input a: ");
        scanf("%d",&a);
        printf("Input b: ");
        scanf("%d",&b);
        if (a==99&&b==0)
            {
            printf("Finish.");
            exit(0);
            }
        printf("Sum: %d\n",a+b);
    }
    return 0;
}
