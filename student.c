#include <stdio.h>

int main() {
    int scores[80];
    int n, i;
    int gradeA = 0, gradeB = 0, gradeC = 0, gradeD = 0, gradeF = 0;

    printf("Enter the number of students' scores (up to 80): ");
    scanf("%d", &n);

    if (n > 80) {
        printf("Number of students' scores exceeds 80!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter the score for student %d: ", i + 1);
        scanf("%d", &scores[i]);

        if (scores[i] >= 80) {
            gradeA++;
        } else if (scores[i] >= 70) {
            gradeB++;
        } else if (scores[i] >= 60) {
            gradeC++;
        } else if (scores[i] >= 50) {
            gradeD++;
        } else {
            gradeF++;
        }
    }

    printf("Number of students in each grade:\n");
    printf("A: %d\n", gradeA);
    printf("B: %d\n", gradeB);
    printf("C: %d\n", gradeC);
    printf("D: %d\n", gradeD);
    printf("F: %d\n", gradeF);

    return 0;
}
