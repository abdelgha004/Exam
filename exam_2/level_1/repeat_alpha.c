
// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

// Examples:

// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>

#include <unistd.h>

void ft_putchar(char c, int rep){
    int i = 0;

    while(i < rep)
    {
        write(1, &c, 1);
        i++;
    }
}

int main(int arc , char **arv)
{
    if(arc == 2)
    {
        int i = 0;
        int rep = 1;
        while(arv[1][i]){
            if(arv[1][i] >= 'a' && arv[1][i] <= 'z')
            {
                rep = arv[1][i] - 'a' + 1;
                ft_putchar(arv[1][i], rep);
            }
            else if(arv[1][i] >= 'A' && arv[1][i] <= 'Z')
            {
                rep = arv[1][i] - 'A' + 1;
                ft_putchar(arv[1][i], rep);
            }
            else {
                write(1, &arv[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
}
