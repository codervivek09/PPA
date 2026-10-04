#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student s[5];
    float sum = 0, average;

    for (int i = 0; i < 5; i++) {
        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].rollNo);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);

        sum = sum + s[i].marks;
    }

    average = sum / 5;

    printf("\nAverage Marks = %.2f\n", average);

    return 0;
}