#include <stdio.h>
#include <math.h>

void TaskA() {
    printf("Task A:\n");
    for (float argX = 0.3; argX <= 3.5; argX += 0.3) {
        if (argX < 1.0) {
            printf("1st Element(%f) = %f \n", argX, atan(1 / argX));
        } else if (argX >= 1.0 && argX < 2.9999) {
            printf("2nd Element(%f) = %f \n", argX, tan(argX + log(argX) / log(4)));
        } else if (argX >= 2.9999) {
            printf("3rd Element(%f) = %f \n", argX, 1 / (1 + log(argX)));
        }
    }
}

int TaskB() {
    printf("\nTask B:\n");
    float d = 0.001;
    for (float argX = 0.5; argX > -0.0001; argX -= 0.05) {
        int n = 1;
        float sum = 0;
        do {
            sum += pow(argX, n) / n;
            n++;
        } while (pow(argX, n) / n >= d);
        printf("sum(%f, %d) = %f \n", argX, n, -sum);
    }
    return 0;
}

int main() {
    TaskA();
    TaskB();
    return 0;
}