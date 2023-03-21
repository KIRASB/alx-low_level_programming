#include <stdio.h>
/*
 * main - Entry point 
 * followed by a new line 
 * Return 0 Succes
 */
int main() {
    char c;

    for (c = 'a'; c <= 'z'; c++) {
        putchar(c);
    }
    putchar('\n');

    return 0;
}

