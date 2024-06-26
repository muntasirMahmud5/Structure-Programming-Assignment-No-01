#include <stdio.h>
//Write a program to find the number of days from a given month and year. You have to take the month number and year from the user.
//Standard Input: 2 2024
//Standard Output: February 2024 has 29 days


int main() {
    int month, year;
    printf("Enter  the month: ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);

    switch(month) {
        case 1:
            printf("January %d has 31 days\n", year);
            break;
        case 2:
            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                printf("February %d has 29 days\n", year);
            else
                printf("February %d has 28 days\n", year);
            break;
        case 3:
            printf("March %d has 31 days\n", year);
            break;
        case 4:
            printf("April %d has 30 days\n", year);
            break;
        case 5:
            printf("May %d has 31 days\n", year);
            break;
        case 6:
            printf("June %d has 30 days\n", year);
            break;
        case 7:
            printf("July %d has 31 days\n", year);
            break;
        case 8:
            printf("August %d has 31 days\n", year);
            break;
        case 9:
            printf("September %d has 30 days\n", year);
            break;
        case 10:
            printf("October %d has 31 days\n", year);
            break;
        case 11:
            printf("November %d has 30 days\n", year);
            break;
        case 12:
            printf("December %d has 31 days\n", year);
            break;
        default:
            printf("Invalid month number\n");
            break;
    }

    return 0;
}
