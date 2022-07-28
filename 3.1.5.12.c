#include <stdio.h>

int main()
{
    int lN, hN, input;
    printf("Input number<256: ");
    scanf("%d",&input);
    lN=(input>>4)&15;
    hN=input&15;
    printf("H nibble: %d \nL nibble: %d\n",hN,lN);
    return 0;
}
