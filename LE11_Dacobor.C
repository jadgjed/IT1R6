#include <stdio.h>

int main() {
    char name[50], section[20];
    FILE *file;

    // Ask user for input
    printf("Enter your Complete Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your Section: ");
    fgets(section, sizeof(section), stdin);

    // Write to file
    file = fopen("student.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "Name: %sSection: %s", name, section);
    fclose(file);

    // Display confirmation message
    printf("\nStudent information saved successfully to student.txt!\n\n");

    // Read file contents
    file = fopen("student.txt", "r");
    if (file == NULL) {
        printf("Error reading file!\n");
        return 1;
    }
    
    char data[100];
    printf("------ student.txt content ------\n");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }
    fclose(file);

    return 0;
}
