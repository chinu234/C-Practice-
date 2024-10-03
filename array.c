#include <stdio.h>

int main() {
    // Initialize an array of 5 elements
    int arr[5] = {1, 2, 3, 4, 5};
    
    // Update each element by adding 10
    for(int i = 0; i < 5; i++) {
        arr[i] = arr[i] + 10;
    }
    
    // Print the updated array
    printf("Updated array: \n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
