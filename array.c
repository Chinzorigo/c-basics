#include <stdio.h>
#define N 5

void swapMinMax(int n[N]) {
    int maxValue = n[0];
    int minValue = n[0];
    int maxIndex = 0;
    int minIndex = 0;

    for(int i = 1; i < N; i++) {
        if(n[i] > maxValue) {
            maxValue = n[i];
            maxIndex = i;
        }
        
        if(n[i] < minValue) {
            minValue = n[i];
            minIndex = i;
        }
    }
    
    printf("Max value is %d at index %d.\n", maxValue, maxIndex);
    printf("Min value is %d at index %d.\n", minValue, minIndex);
    
    n[maxIndex] = minValue;
    n[minIndex] = maxValue;
    
    printf("Switched value at maxIndex (%d) is now %d.\n", maxIndex, n[maxIndex]);
    printf("Switched value at minIndex (%d) is now %d.\n", minIndex, n[minIndex]);
}

void printArray(int n[N]) {
        for(int i = 0; i < N; i++) {
        printf("%d ", n[i]);
    }
    printf("\n");
}

int main() {
    int n[N];
    for( int i = 0; i < N; i++) {
        printf("n[%d] = ", i);
        scanf("%d", &n[i]);
    }
    //
    printArray(n);

    swapMinMax(n);

    printArray(n);

    return 0;
}
