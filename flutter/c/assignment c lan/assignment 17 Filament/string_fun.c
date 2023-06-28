/*1-Wap to use all string functions in single program*/
#include <stdio.h>
#include <string.h>

void main() {
    char str1[10] = "Harsh";
    char str3[10];

    // Calculate string length
    printf("Length of str1: %lu\n", strlen(str1));

    // Copy one string to another
    strcpy(str3, str1);
    printf("str3 after strcpy: %s\n", str3);

    // Reverse a string
    char reverse[10] = "Harsh";
    strrev(reverse);
    printf("Reverse of 'Harsh': %s\n", reverse);

    // Convert string to lowercase
    char lowercase[10] = "Harsh";
    strlwr(lowercase);
    printf("Lowercase of 'Harsh': %s\n", lowercase);

    // Convert string to uppercase
    char uppercase[10] = "Harsh";
    strupr(uppercase);
    printf("Uppercase of 'Harsh': %s\n", uppercase);

}
