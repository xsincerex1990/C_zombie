/* Program to calculate the average of a set of grades and count the number of failing grades*/

#include <stdio.h>

int main(void) {
    int numberofgrades, i, grade;
    int gradeTotal = 0;
    int fails = 0;
    float average;

    printf("How many grades will you be entering? ");
    scanf("%i", &numberofgrades);

    for (i=1; i<=numberofgrades; ++i) {
        printf("Enter grade #%i: ", i);
        scanf("%i", &grade);

        gradeTotal += grade;

        if (grade < 65)
        ++fails;
    }

    average = (float) gradeTotal / numberofgrades;
    /*.2 is to display average value to two decimal places*/
    printf("\nGrade average = %.2f\n", average);
    printf("Number of failures = %i\n", fails);

    return 0;
}