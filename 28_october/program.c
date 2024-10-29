

#include <stdio.h>

int main() {
    // Variables
    int item, product = 1; // Assuming product starts at 1 for multiplication
    int x, y;
    int zero_count = 0, minus_sum = 0, plus_sum = 0;

    // (a) Multiply product by item if item is nonzero
    printf("Enter an item: ");
    scanf("%d", &item);
    if (item != 0) {
        product *= item; // Multiply only if item is nonzero
    }
    printf("Product: %d\n", product);

    // (b) Store the absolute difference of x and y in y
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    if (x > y) {
        y = x - y; // Absolute difference when x > y
    } else {
        y = y - x; // Absolute difference when y >= x
    }
    printf("Absolute difference (stored in y): %d\n", y);

    // (c) Update counts and sums based on the value of x
    printf("Enter a value for x: ");
    scanf("%d", &x);
    if (x == 0) {
        zero_count++; // Increment zero count
    } else if (x < 0) {
        minus_sum += x; // Add to minus sum
    } else {
        plus_sum += x; // Add to plus sum
    }
    
    // Print results for counts and sums
    printf("Zero count: %d\n", zero_count);
    printf("Minus sum: %d\n", minus_sum);
    printf("Plus sum: %d\n", plus_sum);

    return 0;
}


