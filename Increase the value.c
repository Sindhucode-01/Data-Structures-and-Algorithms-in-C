#include<stdio.h>

void increase(int* n, int increment) {
    *n = *n + increment;
}

int main() {
    int num, change;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter value to increase by: ");
    scanf("%d", &change);
    
    printf("Before: %d\n", num);
    increase(&num, change);
    printf("After: %d\n", num);
    
    return 0;
}