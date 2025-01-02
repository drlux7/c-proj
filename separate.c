#include <stdio.h>

int main() {
    int n, i, j = 0, k = 0;
    
    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], odd[n], even[n];

    // Input elements in the array
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Separate odd and even numbers
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[j++] = arr[i];  // Even numbers go to the even array
        } else {
            odd[k++] = arr[i];   // Odd numbers go to the odd array
        }
    }

    // Print the even array
    printf("Even numbers: ");
    for (i = 0; i < j; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    // Print the odd array
    printf("Odd numbers: ");
    for (i = 0; i < k; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
