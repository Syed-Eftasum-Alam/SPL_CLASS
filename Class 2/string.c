#include <stdio.h>
#include <math.h>

int main() {
  // Declare variables
  float a, b, c, discriminant, root1, root2;

  // Read the coefficients of the quadratic equation
  printf("Enter the coefficients of the quadratic equation: ");
  scanf("%f %f %f", &a, &b, &c);

  // Calculate the discriminant
  discriminant = b * b - 4 * a * c;

  // Check the nature of the roots
  if (discriminant > 0) {
    // Roots are real and distinct
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);

    // Print the roots
    printf("The real roots of the quadratic equation are: %f and %f\n", root1, root2);
  } else if (discriminant == 0) {
    // Roots are real and equal
    root1 = -b / (2 * a);
    root2 = root1;

    // Print the roots
    printf("The real and equal roots of the quadratic equation are: %f and %f\n", root1, root2);
  } else {
    // Roots are complex
    printf("The roots of the quadratic equation are complex.\n");
  }

  return 0;
}