#include <stdio.h>

int main() 
{
    int a = 5, b = 9;

    printf("a&b = %d\n", a & b);  // Bitwise AND
    printf("a^b = %d\n", a ^ b);  // Bitwise XOR
    printf("b<<1 = %d\n", b << 1); // Left shift
    printf("b>>1 = %d\n", b >> 1); // Right shift

    return 0;
}