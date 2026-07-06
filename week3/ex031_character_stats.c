#include <stdio.h>
int main()
{

    // ประกาศและกาหนดค่าตัวแปร

    int player_hp = 150;
    int Attack_Power = 75;
    int Defense = 40;
    int player_level = 1;
    unsigned int score = 0;

    char name[300];
    // แสดงค่าและขนาด
    printf("=== สร้างตัวละคร ===\n");
    printf("ชื่อตัวละคร:");
    scanf("%s", name);
    printf("HP สูงสุด:");
    scanf("%d", &player_hp);
    printf("Attack Power:");
    scanf("%d", &Attack_Power);
    printf("Defense:");
    scanf("%d", &Defense);
    printf("\nLevel:");
    scanf("%d", &player_level);

    printf("=== สรุปข้อมูลตัวละคร ===\n");
    printf("Name: %s\n", name);
    printf("Level: %d\n", player_level);
    printf("HP: %d\n", player_hp);
    printf("ATK: %d\n", Attack_Power);
    printf("DEF: %d\n", Defense);

    return 0;
}