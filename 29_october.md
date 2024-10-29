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

EXAMPLE:
1. Input the Number:
The user enters 10201.
2. Initialize Variables:
result = 0 (to store the new number).
place = 1 (to track the current digit's place value).
3. Process Each Digit:
First Iteration:
num = 10201
Extract last digit: digit = 10201 % 10 = 1
Since digit is 1, add 0 * place to result (nothing added).
Update result = 0.
Update num = 10201 / 10 = 1020.
Update place = 1 * 10 = 10.
Second Iteration:
num = 1020
Extract last digit: digit = 1020 % 10 = 0
Since digit is 0, add 1 * place to result (adding 10).
Update result = 0 + 10 = 10.
Update num = 1020 / 10 = 102.
Update place = 10 * 10 = 100.
Third Iteration:
num = 102
Extract last digit: digit = 102 % 10 = 2
Since digit is 2, add 2 * place to result (adding 200).
Update result = 10 + 200 = 210.
Update num = 102 / 10 = 10.
Update place = 100 * 10 = 1000.
Fourth Iteration:
num = 10
Extract last digit: digit = 10 % 10 = 0
Since digit is 0, add 1 * place to result (adding 1000).
Update result = 210 + 1000 = 1210.
Update num = 10 / 10 = 1.
Update place = 1000 * 10 = 10000.
Fifth Iteration:
num = 1
Extract last digit: digit = 1 % 10 = 1
Since digit is 1, add 0 * place to result (nothing added).
Update result = 1210.
Update num = 1 / 10 = 0.
Update place = 10000 * 10 = 100000.
4. End of Processing:
The loop ends since num is now 0.
5. Return the Result:
The final result is 1210.
Final Output:
The program will print:
Replaced number: 1210

