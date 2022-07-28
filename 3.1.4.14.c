#include <stdio.h>

int main()
{
    int maxLines=0,i,j=0;
    while(maxLines<1||maxLines>20)
       {
        printf("enter a number between 1 and 20: ");
        scanf("%d",&maxLines);
       }
    do
    {
        i=0;
        do
        {
            printf("*#");
            i++;
        }while (i<=j);
        printf("\n");
        j++;
    }while (j<maxLines);
    return 0;
}
