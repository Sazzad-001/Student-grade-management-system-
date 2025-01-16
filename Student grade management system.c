#include <stdio.h>

int main() {
    int numStudents, i, j;
    char name[50];
    int rollNo;
    int marks[5];
    int totalMarks = 0;
    float percentage;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &rollNo);

        printf("Enter marks for 5 subjects:\n");
        totalMarks = 0;  // Reset total marks for each student
        for (j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[j]);
            totalMarks += marks[j];
        }

        percentage = (float)totalMarks / 5;

        printf("\n--- Report Card ---\n");
        printf("Name: %s\n", name);
        printf("Roll Number: %d\n", rollNo);
        printf("Marks:\n");
        for (j = 0; j < 5; j++) {
            printf("Subject %d: %d\n", j + 1, marks[j]);
        }
        printf("Total Marks: %d\n", totalMarks);
        printf("Percentage: %.2f%%\n", percentage);

        if (percentage >= 90) {
            printf("Grade: A\n");
        } else if (percentage >= 75) {
            printf("Grade: B\n");
        } else if (percentage >= 50) {
            printf("Grade: C\n");
        } else {
            printf("Grade: F\n");
        }
        printf("--------------------\n");
    }

    return 0;
}
