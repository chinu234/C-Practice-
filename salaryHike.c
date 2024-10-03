#include <stdio.h>

int main() {
    // Initialize an array with salaries
    int salaries[] = {12000, 15000, 22000, 23000, 32000, 40000};
    int n = sizeof(salaries) / sizeof(salaries[0]);  // Calculate number of elements


    // Loop through each salary and apply the hike based on the conditions
    for (int i = 0; i < n; i++) {
        if (salaries[i] < 20000) {
            salaries[i] += (salaries[i] * 50) / 100;  // 50% hike
        } else if (salaries[i] >= 20000 && salaries[i] <= 30000) {
            salaries[i] += (salaries[i] * 30) / 100;  // 30% hike
        } else if (salaries[i] > 30000 && salaries[i] <= 40000) {
            salaries[i] += (salaries[i] * 20) / 100;  // 20% hike
        }
    }

    // Print the updated salaries
    printf("Updated salaries:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", salaries[i]);
    }

    return 0;
}
