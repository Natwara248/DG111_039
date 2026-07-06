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

    printf("=== CHARACTER SHEET ===");
    printf("\n╔═══════════════════╗");
    printf("\n║ Name: %-10s║", name);
    printf("\n║Level: %16d║", player_level);
    printf("\n║HP: %-16d║", player_hp);
    printf("\n║ATK: %-16d║", Attack_Power);
    printf("\n║DEF: %-12d║", Defense);
    printf("\n╠ HP Bar: %14d╣");
    printf("\n╚═══════════════════╝");
    return 0;
}