

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
EXAMPLE:
Step (a): Multiplying the Product
1. Input: User inputs item = 4.
2. Logic:
Check if item is non-zero: 4 != 0 (true).
Multiply product (initially 1) by item: product = 1 * 4 = 4.
3. Output: Print Product: 4.
Step (b): Absolute Difference
1. Input: User inputs x = 8 and y = 3.
2. Logic:
Compare x and y: Since 8 > 3, calculate 8 - 3.
Update y: y = 8 - 3 = 5.
3. Output: Print Absolute difference (stored in y): 5.
Step (c): Counting and Summing Based on x
1. Input: User inputs x = -2.
2. Logic:
Check if x is 0: -2 == 0 (false).
Check if x is negative: -2 < 0 (true).
Update minus_sum: minus_sum = 0 + (-2) = -2.
3. Output: Print:
Zero count: 0 (remains unchanged).
Minus sum: -2.
Plus sum: 0 (remains unchanged).
Final Output
After all steps, the output would look like this:
Product: 4
Absolute difference (stored in y): 5
Zero count: 0
Minus sum: -2
Plus sum: 0
