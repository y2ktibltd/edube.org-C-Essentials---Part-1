#include <stdio.h>
                                                                                                                     int main()
{
    char ip[4][3];
    int i;
    for (i=0;i<4;i++)
    {
        printf("Enter octet %d: ",i);
        scanf("%s",&ip[i]);
    }
    printf("%s.%s.%s.%s\n",ip[0],ip[1],ip[2],ip[3]);
    return 0;
}
