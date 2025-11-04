#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n]; 

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Before sorting:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Bubble sort
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    printf("After sorting:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
