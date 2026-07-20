#include <stdio.h>

int main()
{
    int number;

    printf("=== ITEM SHOP ===");
    printf("\nGold:");

    printf("1. Health Potion");
    printf("2. Mana Potion");
    printf("3. Iron Sword");
    printf("4. Leather Armor");
    printf("5. Exit");
    printf("Select Item:");
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("1 → Health Potion: 50 gold\n");
        printf("Reminding: 950 gold\n");
        break;
    case 2:
        printf("2 → Mana Potion: 80 gold\n");
        printf("Reminding: 920 gold\n");
        break;
    case 3:
        printf("3 →Iron Sword: 500 gold\n");
        printf("Reminding: 500 gold\n");
        break;
    case 4:
        printf("4 → Leather Armor: 300 gold\n");
        printf("Reminding: 700 gold\n");
    case 5:
        printf("5 → Exit\n");
        break;
    default:
        printf("Exit\n");
        break;
    }
    return 0;
}