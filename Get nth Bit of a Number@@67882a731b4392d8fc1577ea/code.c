// Your code here...#include <stdio.h>

int getNthBit(int number, int n) {
    // Shift the number right by 'n' positions and mask with 1 to get the nth bit
    return (number >> n) & 1;
}

int main() {
    int number, n, bit;

    // Input number and the position of the bit to retrieve
    printf(" ");
    scanf("%d", &number);

    printf("Enter the position of the bit (0-based index): ");
    scanf("%d", &n);

    // Get the nth bit of the number
    bit = getNthBit(number, n);

    // Output the result
    printf( n, number, bit);

    return 0;
}
