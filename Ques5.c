#include <stdio.h>

int main(void) {
   char c;
   printf("Enter an alphabet: ");
   scanf(" %c", &c);

   if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
      c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
      printf("%c is a vowel.\n", c);
   else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
      printf("%c is a consonant.\n", c);
   else
      printf("Error! Non-alphabetic character.\n");

}
