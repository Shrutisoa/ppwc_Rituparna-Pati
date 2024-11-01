#include <stdio.h>
#include <string.h>

#define MAX 100
#define NIL '\0'

// Recursive function to find the length of the string
int findlength(char *s) {
    if (s[0] == NIL) { // Use == for comparison, not =
        return 0;
    }
    return 1 + findlength(s + 1);
}

int main() {
    char b[MAX];
    printf("Enter a string: \n");
    scanf("%[^\n]", b); // Read a line including spaces

    int len;
    len = findlength(b); // Correct assignment operator

    printf("Length of the string: %d\n", len);
    return 0;
}
logic:

Let's delve deeper into the logic of the program that calculates the length of a string using recursion, with a detailed example to illustrate how it works step by step.
Logic Overview
The program uses a recursive function, findlength, to count the number of characters in a string until it reaches the null terminator ('\0'), which indicates the end of the string.
Steps in the Logic
1. Base Case:
The recursion checks if the first character of the string is the null terminator.
If it is, the function returns 0, indicating there are no more characters to count.
2. Recursive Case:
If the first character is not the null terminator, the function counts this character (adds 1) and calls itself with the pointer to the next character in the string (s + 1).
Example: Counting the Length of "OpenAI"
Let’s take the string "OpenAI" as an example and trace how the program executes:
1. Initial Call:
findlength("OpenAI")
s[0] is 'O' (not '\0'), so it returns 1 + findlength("penAI").
2. Second Call:
findlength("penAI")
s[0] is 'p' (not '\0'), so it returns 1 + findlength("enAI").
3. Third Call:
findlength("enAI")
s[0] is 'e' (not '\0'), so it returns 1 + findlength("nAI").
4. Fourth Call:
findlength("nAI")
s[0] is 'n' (not '\0'), so it returns 1 + findlength("AI").
5. Fifth Call:
findlength("AI")
s[0] is 'A' (not '\0'), so it returns 1 + findlength("I").
6. Sixth Call:
findlength("I")
s[0] is 'I' (not '\0'), so it returns 1 + findlength("").
7. Seventh Call:
findlength("")
s[0] is '\0', so it returns 0 (base case).
Unwinding the Recursion
Now that we've reached the base case, the function calls start returning, unwinding the recursion:
From the seventh call: findlength("") returns 0.
From the sixth call: findlength("I") returns 1 + 0 = 1.
From the fifth call: findlength("AI") returns 1 + 1 = 2.
From the fourth call: findlength("nAI") returns 1 + 2 = 3.
From the third call: findlength("enAI") returns 1 + 3 = 4.
From the second call: findlength("penAI") returns 1 + 4 = 5.
From the initial call: findlength("OpenAI") returns 1 + 5 = 6.
Final Output
The final output will indicate that the length of the string "OpenAI" is 6.
