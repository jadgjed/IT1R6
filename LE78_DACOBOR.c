#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int n, i, largest;

    printf("FINDING THE LARGEST ELEMENT IN AN ARRAY \n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > largest)
            largest = arr[i];
    }

    printf("The largest element is: %d\n\n", largest);


    char str[200];
    int count = 0;

    printf("COUNTING THE NUMBER OF VOWELS IN A STRING \n");
    printf("Enter a sentence or word: ");
    getchar(); 
    fgets(str, sizeof(str), stdin);

    for(i = 0; i < strlen(str); i++) {
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }

    printf("Number of vowels: %d\n", count);

    return 0;
}
