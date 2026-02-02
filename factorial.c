#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r, choice;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    printf("1. Permutation\n2. Combination\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        printf("Permutation = %d\n", permutation(n, r));
    else if(choice == 2)
        printf("Combination = %d\n", combination(n, r));
    else
        printf("Invalid choice\n");

    return 0;
}
