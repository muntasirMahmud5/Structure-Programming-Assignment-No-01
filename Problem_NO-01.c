#include <stdio.h>
//Write a C program to calculate the area and perimeter of a rectangle. The program should prompt the user to enter the values of length and width, and then calculate and display the area and perimeter based on the provided values. Follow these below formulas.
//Area = length * width
//Perimeter = 2*(length + width)


int main() {
    float length, width, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}
