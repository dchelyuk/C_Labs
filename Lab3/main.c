#include <stdio.h>

int n;
int array[0];

void DataFromConsole() {
    printf("Enter array size(2N): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &array[i]);
        for (int i = 0; i < n - 1; i++) {
            printf("%d, ", array[i]);
        }
        printf("%d]", array[n - 1]);
    }
}

void dataFromFile() {
    FILE *data;
    data = fopen("Data", "r");
    fscanf(data, "%d", &n);
    for (int i = 0; i < n; i++) {
        fscanf(data, "%d", &array[i]);
    }
    printf("[");
    for (int i = 0; i < n - 1; i++) {
        printf("%d, ", array[i]);
    }
    printf("%d]", array[n - 1]);
    fclose(data);
}

void normalizeArray() {
    int lSum = 0;
    int rSum = 0;
    for (int i = 0; i < n / 2; i++) {
        lSum += array[i];
        rSum += array[i + n / 2];
    }
    switch (rSum >= lSum) {
        case 1:
            array[0] += rSum - lSum;
            break;
        case 0:
            array[n / 2] += lSum - rSum;
            break;
    }
    printf("\n[");
    for (int i = 0; i < n - 1; i++) {
        printf("%d, ", array[i]);
    }
    printf("%d]", array[n - 1]);
}

int main() {
    dataFromFile();
    normalizeArray();
    return 0;
}