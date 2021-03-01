#include <stdio.h>
#include <math.h>

double xArg = 0.712;
double yArg = 3.161;

double calc() {
    return sqrt(xArg * pow(yArg, 2) + yArg * sin(xArg) + 142 * pow(xArg, 2) * yArg) +
           tan(xArg * yArg) - 142 * (yArg - xArg) / 16.32;
}

int main() {
    printf("Result = %f", calc());
    return 0;
}