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


