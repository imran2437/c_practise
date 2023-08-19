#include <stdio.h>

void modifyValue(int *x) {
    *x = 42; // Use the pointer to change the value at the memory location it points to.
}

int main() {
    int num = 10;
    printf("%d\n", num);  // Output: 10

    modifyValue(&num); // Pass a pointer to num
    printf("%d\n", num);  // Output: 42 (modified by reference)
    return 0;
}
