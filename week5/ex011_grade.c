#include <stdio.h>

int main()
{

    int score_2 = 0;
    int score = 0;

    printf("Score:");
    scanf("%d", &score);
    printf("\nScore2:");
    scanf("%d", &score_2);

    if (score >= 80 && score <= 100)
        printf("\nScore:%d→ Grade: A (4.0) — Pass", score);
    else if (score >= 75)
        printf("\nScore:%d→ Grade: B+ (3.5) — Pass", score);
    else if (score >= 70)
        printf("\nScore:%d→ Grade: B (3.0) — Pass", score);
    else if (score >= 65)
        printf("\nScore:%d→ Grade: C+ (2.5) — Pass", score);
    else if (score >= 60)
        printf("\nScore:%d→ Grade: C (2.0) — Pass", score);
    else if (score >= 55)
        printf("\nScore:%d→ Grade: D+ (1.5) — Pass", score);
    else if (score >= 50)
        printf("\nScore:%d→ Grade: D (1.0) — Pass", score);
    else

        printf("\nScore:%d→ Grade: F (0.0) — Fail", score);

    if (score_2 >= 80 && score_2 <= 100)
        printf("\nScore:%d→ Grade: A (4.0) — Pass", score_2);
    else if (score_2 >= 75)
        printf("\nScore:%d→ Grade: B+ (3.5) — Pass", score_2);
    else if (score_2 >= 70)
        printf("\nScore:%d→ Grade: B (3.0) — Pass", score_2);
    else if (score_2 >= 65)
        printf("\nScore:%d→ Grade: C+ (2.5) — Pass", score_2);
    else if (score_2 >= 60)
        printf("\nScore:%d→ Grade: C (2.0) — Pass", score_2);
    else if (score_2 >= 55)
        printf("\nScore:%d→ Grade: D+ (1.5) — Pass", score_2);
    else if (score_2 >= 50)
        printf("\nScore:%d→ Grade: D (1.0) — Pass", score_2);
    else
        printf("\nScore:%d→ Grade: F (0.0) — Fail", score_2);
    return 0;
}