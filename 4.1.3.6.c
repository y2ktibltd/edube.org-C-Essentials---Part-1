#include <stdio.h>

int main()
{
    float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
    float swap;
    int i=0,e=0;
    for (e=0;e<10;e++)
        for (i=0;i<e;i++)
        {
            if (numbers[e]>numbers[i])
            {
                swap=numbers[e];
                numbers[e]=numbers[i];
                numbers[i]=swap;
            }
            for (i=0;i<10;i++)
                printf("%.2f ",numbers[i]);
            printf("\n");
        }
    return 0;
}
