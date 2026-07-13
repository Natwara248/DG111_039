#include <stdio.h>

int main()
{
    int expression_1 = 10 / 3;
    printf("1. Exprssion_1 :10/ 3 = %d\n", expression_1);

    float expression_2 = 10.0 / 3;
    printf("2. Expression_2 : 10.0 / 3 = %f\n", expression_2);

    float expression_3 = (float)10 / 3;
    printf("3. Expression_3 : (float)10 / 3 = %f\n", expression_3);

    int expression_4 = 10 % 3;
    printf("4. Expression_4 : 10 % 3 = %d\n", expression_4);

    int expression_5 = -7 % 3;
    printf("5. Expression_5 : -7 % 3 = %d\n", expression_5);

    int expression_6 = 7 % -3;
    printf("6. Expression_5 : 7 % -3 = %d\n", expression_6);

    int x = 5;
    printf("x++ = %d\n", x++);
    printf("x = %d\n", x);
    x = 5;
    printf("++x = %d\n", ++x);
    printf("x = %d\n", x);

    int expression_7 = 2 + 3 * 4;
    printf("7. Expression_7 : 2 +3 * 4 = %d\n", expression_7);

    int expression_8 = (2 + 3) * 4;
    printf("8. Expression_8 : (2 +3) * 4 = %d\n", expression_8);

    int expression_9 = 10 - 2 - 3;
    printf("9. Expression_9 : 10 - 2 - 3 = %d\n", expression_9);

    int expression_10 = 2 * 3 + 4 * 5;
    printf("10. Expression_10 : 2 * 3 + 4 * 5 = %d\n", expression_10);

    return 0;
}