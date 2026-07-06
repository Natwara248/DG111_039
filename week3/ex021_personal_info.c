#include <stdio.h>
int main()
{

    // ประกาศและกาหนดค่าตัวแปร

    int age = 20;
    float gpa;

    char name[50];
    char major[50];
    // แสดงค่าและขนาด
    printf("=== ป้อนข้อมูล ===\n");
    printf("ชื่อ:");
    scanf("%s", name);
    printf("\nอายุ:");
    scanf("%d", &age);
    printf("\nGPA:");
    scanf("%f", &gpa);
    printf("\nวิชาโปรด:");
    scanf("%s", major);

    printf("=== ข้อมูลส่วนตัว ===\n");
    printf("ชื่อ: %s\n", name);
    printf("อายุ: %d\n", &age);
    printf("GPA: %.2f\n", gpa);
    printf("วิชาโปรด: %s\n", major);
}