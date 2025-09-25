#include <stdio.h>

int main() {
    int num, sum = 0;

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num <= 0) {
            break;
        }

        sum += num;
    }

    printf("The total sum of positive numbers is: %d\n", sum);

    return 0;
}
