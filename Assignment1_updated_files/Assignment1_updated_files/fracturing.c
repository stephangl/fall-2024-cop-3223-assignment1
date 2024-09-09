//********************************************************
// fracturing.c
// Author: Stephan Looten
// ID: 4517250
// Date: 8/26/24
// Class: COP 3223, Professor Parra
// Purpose: This program prints a specific message to the
// command line. The main purpose of this assignment is to
// calculate and print numerous formulas to the command line.
// Input: None
//
// Output: (to the command line) A brief Message
// //********************************************************

#include <stdio.h>
#include <math.h>

#define PI 3.14159 

  double calculateDistanceHelper();
  double calculate_distance();
  double calculate_perimeter();
  double calculate_area();
  double calculate_width();
  double calculate_height();

  int main(int argc, char** argv) 
{
   calculate_distance();
   calculate_perimeter();
   calculate_area();
   calculate_width();
   calculate_height();

    return 0;
}

  double calculate_distance()
{

  double distance = calculateDistanceHelper();

   printf("The distance between the two points is %.3f\n", distance);

  return distance;

}
double calculateDistanceHelper ()
{

   double x1, x2, y1, y2;

  printf("Enter a number for x1 & x2:\n");
   scanf("%lf %lf", &x1, &y1);

   printf("Enter a number for y1 & y2:\n");
   scanf("%lf %lf", &x2, &y2);

   printf("Point #1 entered: x1 = %.3f; y1 = %.3f\n", x1, y1);
   printf("Point #2 entered: x2 = %.3f; y2 = %.3f\n", x2, y2);

  double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  return distance;
}

  double calculate_perimeter()
{
double x1, x2, y1, y2;

    double radius = calculateDistanceHelper() / 2;
    double perimeter = 2 * PI * radius;

    printf("The perimeter of the city encompassed by your request is %.3f \n", perimeter);

    return 3.0;

}

  double calculate_area()
{

    double radius = calculateDistanceHelper() / 2;
    double area = PI * pow(radius, 2);

    printf("The area of the city encompassed by your request is %.3f\n", area);

    return 3.0;
}

  double calculate_width()
{

    double width = calculateDistanceHelper();

    printf("The width of the city encompassed by your request is %.3f\n", width);

    return 2.0;
}

  double calculate_height()
{

    double height = calculateDistanceHelper();

    printf("The height of the city encompassed by your request is %.3f\n", height);

    return 2.0;
}
