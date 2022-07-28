#include <stdio.h>
#include <stdlib.h>

int main()
{
    char weekday[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int i;
    char *ptr;
    printf("What day of the week? ");
    scanf("%d",&i);
    if (i<0||i>7)
        {
        printf("Error, no such day.");
        exit(0);        
        }
    ptr=&weekday[i];
    printf("Pointer version: %s\n",ptr);
    printf("Array Index version: %s\n",weekday[i]);
    return 0;
}
