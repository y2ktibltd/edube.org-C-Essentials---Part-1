#include <stdio.h>

int main()
{
        int Jan=31;
        int Feb=28;
        int Mar=31;
        int Apr=30;
        int May=31;
        int Jun=30;
        int Jul=31;
        int Aug=31;
        int Sep=30;
        int Oct=31;
        int Nov=30;
        int Dec=31;
        int FirstHalf=(Jan+Feb+Mar+Apr+May+Jun);
        int SecondHalf=(Jul+Aug+Sep+Oct+Nov+Dec);
        printf("Days in the first half of the current year: %d\n",FirstHalf);
        printf("Days in the second half of the current year: %d\n", SecondHalf);
        printf("Days in the current year: %d\n", FirstHalf+SecondHalf);
        return 0;
}
