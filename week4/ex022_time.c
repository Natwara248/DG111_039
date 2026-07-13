#include <stdio.h>

int main()
{
    printf("\n Input:");
    int input_sec = 0;
    scanf("%d", &input_sec);

    int seconds_seconds = input_sec;
    int hours = seconds_seconds / 3600;
    int minutes = (seconds_seconds % 3600) / 60;
    int secs = seconds_seconds % 60;

    printf("Output: %d:%02d:%02d\n", hours, minutes, secs);
}