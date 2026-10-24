#include <stdio.h>

int main() {
    int n, marks[5], total;
    float percentage;

    printf("=== STUDENT MARKS CALCULATOR ===\n");
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int s = 1; s <= n; s++) {
        total = 0;

        printf("\n--- Student %d ---\n", s);

        for (int i = 0; i < 5; i++) {
            printf("Enter marks for subject %d: ", i + 1);
            scanf("%d", &marks[i]);
            total += marks[i];
        }

        percentage = total / 5.0;

        printf("\nTotal = %d / 500\n", total);
        printf("Percentage = %.2f%%\n", percentage);

        if (percentage >= 80) {
            printf("Grade = A\n");
        } else if (percentage >= 60) {
            printf("Grade = B\n");
        } else if (percentage >= 40) {
            printf("Grade = C\n");
        } else {
            printf("Grade = F\n");
        }

        if (percentage >= 40) {
            printf("Result = PASS\n");
        } else {
            printf("Result = FAIL\n");
        }
    }

    return 0;
}
