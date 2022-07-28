#include <stdio.h>

int main(void) 
{
        int dayOfWeek=3;
    char dayName[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    printf("The day of the week is: %s",dayName[dayOfWeek]);
    return 0;
}
