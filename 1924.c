#include <stdio.h>

int main()
{
    int months[] = {6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    char *days[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int num, mon, day = 0;

    scanf("%d %d", &mon, &day);
    num = 1 + months[mon - 1] + day;

    printf("%s", days[num % 7]);

    return 0;
}