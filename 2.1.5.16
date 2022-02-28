#include <stdio.h>

int main()
{
    int daysOfMonths[13] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int day,month,i,total=0;
    printf("Enter Day: ");
    scanf("%d",&day);
    printf("Enter Month: ");
    scanf("%d",&month);
    for (i=0;i<month-1;i++)
        total+=daysOfMonths[i];
    total+=day;
    printf("The day of the year: %d",total);
    return 0;
}
