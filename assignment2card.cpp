#include <stdio.h>

int main() {
    int n = 0;
    printf("Enter the number of cards: ");
    scanf("%d", &n);
    int cards[n];

    printf("Enter the card values: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &cards[i]);
    }
    printf("IN  hand: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", cards[i]);
    }
    printf("\n");

    for (int i = 1; i < n; i++) {
        int key = cards[i];
        int j;
        for (j = i - 1; j >= 0 && cards[j] > key; j--) {
            cards[j + 1] = cards[j];
        }
        cards[j + 1] = key;
    }
    printf("Sorted hand: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", cards[i]);
    }
    printf("\n");

    return 0;
}

