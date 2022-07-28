#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* Getip()
{
    static char input_ip[15];
    int i,j=0;
    printf("Type an IP address: ");
    scanf("%s",&input_ip);
    if (strlen(input_ip)<7||strlen(input_ip)>15)
        {
        printf("Error: not a valid address:\n");
        exit(0);
//        Getip();
        }
    for (i=0;i<strlen(input_ip);i++)
    {
        char c=input_ip[i];
        if (isdigit(c)!=0)
            continue;
        else if (c=='.')
        {
            j++;
            continue;
        }
        else
            {
            printf("Error: not a valid address:\n");
            exit(0);
//            Getip();
            }
    }
    if (j!=3)
    {
        printf("Error: not a valid address:\n");
        exit(0);
//        Getip();
    }
    return input_ip;
}

int main()
{
    char ip[16];
    char *ip3,*ip2,*ip1;
    int i,j=0;
    strcpy(ip,Getip());
    for (i=0;i<strlen(ip);i++)
    {
        char c=ip[i];
        if (c=='.')
        {
            j++;
            if (j==1)
                ip3=&ip[i+1];
            if (j==2)
                ip2=&ip[i+1];
            if (j==3)
                ip1=&ip[i+1];
        }
    }
//    printf("%s\n",ip);
//    printf("%d\n",strlen(ip));
    printf("Last 3 parts: %s\n",ip3);
    printf("Last 2 parts: %s\n",ip2);
    printf("Last 1 parts: %s\n",ip1);
    return 0;
}
