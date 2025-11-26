#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("records.txt", "w");
    int total_records;
    char name[50];
    int age;
    char course[50];
    
    printf("How many students do you want to record? ");
    scanf("%d", &total_records);
    getchar();

    for (int i = 0; i < total_records; i++) {
        printf("\nStudent %d\n", (i+1));
        printf("Enter Name: ");
        fgets(name, sizeof(name), stdin);

        printf("Enter Age: ");
        scanf("%d", &age);
        getchar();

        printf("Enter Course: ");
        fgets(course, sizeof(course), stdin);
        fprintf(fptr, "Student %d\n", (i+1));
        fprintf(fptr, "Name: %s", name);
        fprintf(fptr, "Age: %d\n", age);
        fprintf(fptr, "Course: %s", course);
        fputs("\n---------------------------------\n\n", fptr);
    }
    fclose(fptr);
    printf("Student database successfully saved to file.\n\n");

    printf("Reading Student Database:\n\n");

    fptr = fopen("records.txt", "r");

    char line[100];
    int currentStudent = 1;
    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);
        currentStudent++;
    }

    return 0;
}
