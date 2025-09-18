#include <stdio.h>

int main() {
    char name[50], section[20];
    float grade1, grade2, grade3, grade4, average;
    
    printf("Enter Complete Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter Section: ");
    fgets(section, sizeof(section), stdin);
    
    printf("\nEnter 1st Quarter Grade: ");
    scanf("%f", &grade1);
    printf("\nEnter 2nd Quarter Grade; ");
    scanf("%f", &grade2);
    printf("\nEnter 3rd Quarter Grade; ");
    scanf("%f", &grade3);
    printf("\nEnter 4th Quarter Grade; ");
    scanf("%f", &grade4);
    
    
    average = (grade1 + grade2 + grade3 + grade4) / 4.0;
    
    
    printf("\nStudent: %s", name);
    printf("Section: %s", section);
    printf("General Average: %.2f\n", average);
    
    
    if (average >= 90 && average <= 100)
        printf("Remarks: Outstanding\n");
    else if (average >= 85 && average <= 89)
        printf("Remarks: Very Satisfactory\n");
    else if (average >= 80 && average <= 84)
        printf("Remarks: Satisfactory\n");
    else if (average >= 75 && average <= 79)
        printf("Remarks: Fair\n");
    else
        printf("Remarks: failed\n");
        
        return 0;
}