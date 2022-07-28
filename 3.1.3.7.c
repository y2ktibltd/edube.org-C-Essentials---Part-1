#include <stdio.h>

int main(void)
{
    float a;
    int b;
    scanf("%f",&a);
    b=a;
    if (b>=1&&b<2)
        printf("Very bad\n");
    if (b>=2&&b<3)
        printf("Bad\n");
    if (b>=3&&b<4)
        printf("Neutral\n");
    if (b>=4&&b<5)
        printf("Good\n");
    if (b>=5&&b<6)
        printf("Very good\n");
    else
        ;
    return 0;
}
