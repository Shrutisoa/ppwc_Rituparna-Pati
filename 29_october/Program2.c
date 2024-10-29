#include <stdio.h>

int replaceZeroAndOne(int num) {
    int result = 0;
    int place = 1;

    while (num > 0) {
        int digit = num % 10;

        if (digit == 0) {
            result += 1 * place;  // Replace 0 with 1
        } else if (digit == 1) {
            result += 0 * place;  // Replace 1 with 0
        } else {
            result += digit * place;  // Keep other digits the same
        }

        num /= 10;  // Move to the next digit
        place *= 10; // Move to the next place value
    }

    return result;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int replacedNumber = replaceZeroAndOne(number);
    printf("Replaced number: %d\n", replacedNumber);

    return 0;
}


