/*4-WAP to convert given character in uppercase :*/

#include<stdio.h>

void main() {
    char hr;

    printf("\n Enter a character : ");
    scanf("%c", &hr);

    if (hr >= 'a' && hr <= 'z') 
    {
        hr = hr - ('a' - 'A'); 
    }

    printf("\n Converted character : %c\n", hr);

}