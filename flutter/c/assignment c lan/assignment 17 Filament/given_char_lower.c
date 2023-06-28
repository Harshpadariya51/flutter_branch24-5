/* 3-WAP to convert given character in lowercase :*/

#include<stdio.h>


void main() {
    char hr;

    printf("Enter a character: ");
    scanf("%c", &hr);

    if (hr >= 'A' && hr <= 'Z') 
    {
        hr = hr + ('a' - 'A'); 
    }

    printf("Converted character: %c\n", hr);

}