#include <stdio.h>

// Inserting an element
void Insert(int LA[], int *N, int K, int Item) {
    int j;
    for (j = *N; j >= K; j--) {
        LA[j] = LA[j - 1];
    }
    LA[K - 1] = Item;
    (*N)++;
}

//Deleting an element
void Delete(int LA[], int *N, int K, int *Item) {
    int j;
    *Item = LA[K - 1];

    for (j = K; j < *N; j++) {
        LA[j - 1] = LA[j];
    }
    (*N)--;
}

//Linear Search 
void LinearSearch(int LA[], int N, int Item, int *Location) {
    int j;
    *Location = -1;

    for (j = 0; j < N; j++) {
        if (LA[j] == Item) {
            *Location = j;
            return;
        }
    }
}

//Binary Search
void Binary(int LA[], int LB, int UB, int Item, int *Location) {
    int mid;
    *Location = -1;

    while (LB <= UB) {
        mid = (LB + UB) / 2;

        if (LA[mid] == Item) {
            *Location = mid;
            return;
        }
        else if (LA[mid] < Item) {
            LB = mid + 1;
        }
        else {
            UB = mid - 1;
        }
    }
}

//Displaying the array
void Display(int LA[], int N) {
    int i;
    printf("Array elements are:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", LA[i]);
    }
    printf("\n");
}

int main() {
    int LA[100] = {1, 3, 5, 7, 8};
    int N = 5;
    int choice, K, Item, Location;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Linear Search\n");
        printf("4. Binary Search\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter position (K) and Item: ");
            scanf("%d %d", &K, &Item);
            Insert(LA, &N, K, Item);
            break;

        case 2:
            printf("Enter position (K): ");
            scanf("%d", &K);
            Delete(LA, &N, K, &Item);
            printf("Deleted item = %d\n", Item);
            break;

        case 3:
            printf("Enter item to search: ");
            scanf("%d", &Item);
            LinearSearch(LA, N, Item, &Location);

            if (Location != -1)
                printf("Found at position %d\n", Location + 1);
            else
                printf("Not found\n");
            break;

        case 4:
            printf("Enter item to search: ");
            scanf("%d", &Item);
            Binary(LA, 0, N - 1, Item, &Location);

            if (Location != -1)
                printf("Found at position %d\n", Location + 1);
            else
                printf("Not found\n");
            break;

        case 5:
            Display(LA, N);
            break;

        case 6:
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }
}