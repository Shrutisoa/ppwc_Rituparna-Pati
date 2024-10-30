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





