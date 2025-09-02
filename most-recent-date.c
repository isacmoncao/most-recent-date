/*
 * This program prompts for two dates and displays the most recent one.
 * Check the LICENSE file.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int day1, month1, year1;
    int day2, month2, year2;

    printf("Enter the first date(dd/mm/yyyy): ");
    if (scanf("%d/ %d/ %d", &day1, &month1, &year1) != 3) {
        puts("Invalid date format");
        return EXIT_FAILURE;
    }

    printf("Enter the second date(dd/mm/yyyy): ");
    if (scanf("%d/ %d/ %d", &day2, &month2, &year2) != 3) {
        puts("Invalid date format");
        return EXIT_FAILURE;
    }

    if (day1 < 1 || day1 > 31 || day2 < 1 || day2 > 31 ||
        month1 < 1 || month1 > 12 || month2 < 1 || month2 > 12) {
        puts("Invalid date values");
        return EXIT_FAILURE;
    }

    if ( day1 == day2 && month1 == month2 && year1 == year2) {
        puts("The dates are equal");
        return EXIT_FAILURE;
    }

    if ( (year1 == year2 && ((month1 == month2 && day1 > day2) || month1 > month2) ) || year1 > year2)
        printf("%.2d/%.2d/%d is the most recent date\n", day1, month1, year1);
    else
        printf("%.2d/%.2d/%d is the most recent date\n", day2, month2, year2);

    return EXIT_SUCCESS;
}
