/* prints out a basic ASCII table */
/* dec, hex, char, octal, raw, description */

#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include "asciitbl.h"

void print_ascii(char str[][15]) {
    int i;
    printf("dec\t hex\t char\t oct\t desc\n");
    printf("===\t ===\t ====\t ===\t ====\n");

    for (i = 0; i < 128; i++) {
        printf("%d\t %x\t %c\t %o\t %s\n", i, i, i, i, str[i]);
    }
}

int main(void) {

    print_ascii(str);

    return 0;
}   
