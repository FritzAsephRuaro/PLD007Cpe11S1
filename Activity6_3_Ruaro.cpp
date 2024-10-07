#include <stdio.h>

int main() {
    int total = 0, counter = 0, grade;

    printf("Enter grades (enter -1 to stop): ");

    while (1) {
        scanf("%d", &grade);

        if (grade == -1) {
            break;
        }

        total += grade;
        counter++;
    }

    if (counter > 0) {
        double average = (double)total / counter;
        printf("Average grade: %.2f\n", average);
    } else {
        printf("No grades were entered.\n");
    }

    return 0;
}

