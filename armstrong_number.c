#include <stdio.h>
int main() {
    int num, on, rem, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    on = num;

    while (on != 0) {

        rem = on % 10;

       result += rem * rem* rem;

       on /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
