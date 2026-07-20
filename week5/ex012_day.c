#include <stdio.h>

int main()
{
    int day;

    printf("Number:");
    scanf("\n%d", &day);

    switch (day)
    {
    case 1:
        printf("1 → Monday\n");
        break;
    case 2:
        printf("2 → Tuesday\n");
        break;
    case 3:
        printf("3 → Wednesday\n");
        break;
    case 4:
        printf("4 → Thusday\n");
    case 5:
        printf("5 → Friday\n");
        break;
    case 6:
        printf("6 → Saturday\n");
        break;
    case 7:
        printf("7 → Sunday\n");
        break;
    default:
        printf("Invalid input\n");
        break;
    }
    return 0;
}