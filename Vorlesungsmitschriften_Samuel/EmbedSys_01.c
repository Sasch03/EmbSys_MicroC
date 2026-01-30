/*Vorlesungsmitschrift 30.01.2026 - Embedded Systems 01*/

#include <math.h>
#include <stdio.h>

int main() {

    // declare the variables
    double rectangleLength = 0;
    double rectangleWidth = 0;
    double area;

    //update the length and width by meaningful values
    printf("Provide the length of the rectangle: ");
    scanf("%lf",&rectangleLength);
    printf("Provide the width of the rectangle: ");
    scanf("%lf",&rectangleWidth);


    //compute the area
    area = rectangleLength * rectangleWidth;

    //output
    printf("The area of the rectangle is: %.3f \n",area);
    printf("The area of the rectangle is: %ld }n",lround(area+0.5));
   return 0;
}
