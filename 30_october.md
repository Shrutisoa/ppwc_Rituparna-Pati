#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char *name;  // Pointer for dynamic allocation
    int rollno;
    float marks;
};

int main() {
    struct student s2;
    struct student *p = &s2;

    // Allocate memory for the name
    p->name = (char *)malloc(30 * sizeof(char));
    if (p->name == NULL) {
        printf("Memory not allocated\n");
        exit(1);
    }

    printf("Enter the name of student:\n");
    fgets(p->name, 30, stdin);
    p->name[strcspn(p->name, "\n")] = '\0';  // Remove trailing newline

    printf("Enter the rollno of student:\n");
    scanf("%d", &p->rollno);

    printf("Enter the marks of student:\n");
    scanf("%f", &p->marks);

    printf("Student details:\n");
    printf("Name: %s\n", p->name);
    printf("Roll No: %d\n", p->rollno);
    printf("Marks: %.2f\n", p->marks);

    // Free allocated memory
    free(p->name);

    return 0;
}
1. Define the Structure:
A structure student is defined, which includes:
A pointer name for storing the student's name dynamically.
An integer rollno for storing the student's roll number.
A float marks for storing the student's marks.
2. Allocate Memory for Name:
Using malloc, the program allocates memory for the name field. This allows for flexible handling of string sizes.
3. Input Student Details:
The program prompts the user to enter the student's name, roll number, and marks.
It uses fgets to read the name, ensuring it can handle spaces.
4. Process Input:
After reading the name, the program removes any trailing newline character that may be included by fgets.
5. Display Student Details:
The program then prints the entered details in a formatted manner.
6. Free Allocated Memory:
Finally, it frees the dynamically allocated memory for the name to prevent memory leaks.




