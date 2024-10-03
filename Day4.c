#include <stdio.h>
int main() {
    int a, b, result;
    printf("Enter the first value (a): ");
    scanf("%d", &a);
    printf("Enter the second value (b): ");
    scanf("%d", &b);
    result = a - b;
    printf("The result of %d - %d is: %d\n", a, b, result);
    return 0;
}
