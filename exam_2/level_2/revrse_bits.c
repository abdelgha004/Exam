// Assignment name  : reverse_bits
// Expected files   : reverse_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, reverses it, bit by bit (like the
// example) and returns the result.

// Your function must be declared as follows:

// unsigned char	reverse_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0010  0110
// 	 ||
// 	 \/
//  0110  0100



unsigned char reverse_bits(unsigned char octet)
{
    unsigned char res = 0;
    int i = 8;

    while (i--)
    {
        res = (res << 1) | (octet & 1);
        octet >>= 1;
    }
    return res;
}









































#include <stdio.h>

void print_bits(unsigned char octet)
{
    for (int i = 7; i >= 0; i--)
        putchar(((octet >> i) & 1) + '0');
}

int main(void)
{
    unsigned char test[] = {0, 1, 2, 38, 100, 255};
    for (int i = 0; i < 6; i++)
    {
        printf("Original: ");
        print_bits(test[i]);
        printf(" -> Reversed: ");
        print_bits(reverse_bits(test[i]));
        printf("\n");
    }
    return 0;
}
