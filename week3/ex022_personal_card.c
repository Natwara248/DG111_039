#include <stdio.h>
int main()
{

    // ประกาศและกาหนดค่าตัวแปร

    int age;
    float gpa;
    char name[50];
    char major[50];
    // แสดงค่าและขนาด
    printf("=== ป้อนข้อมูล ===\n");
    printf("Name:");
    scanf("%s", name);
    printf("\nAge:");
    scanf("%d", &age);
    printf("\nGPA:");
    scanf("%f", &gpa);
    printf("\nMajor:");
    scanf("%s", major);

    printf("=== PERSONAL CARD ===");
    printf("\n┌───────────────────┐");
    printf("\n│Name: %-13s│", name);
    printf("\n│Age: %-5dyears old│", age);
    printf("\n│GPA: %-14.2f│", gpa);
    printf("\n│Major: %-12s│", major);
    printf("\n└───────────────────┘");
}