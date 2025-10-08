/*Many user-created passwords are simple and easy to guess.  

This a program that takes a simple password and makes it stronger by replacing characters using the key below, and by appending "!" to the end of the input string. Assume that the string does not contain spaces and will always contain less than 50 characters.

i becomes 1
a becomes @
m becomes M
B becomes 8
s becomes $

Ex: If the input is:
mypassword

the output is:
Myp@$$word!*/

#include <stdio.h>
#include <string.h>

int main(void) {
   char password[51];
   
   scanf("%s", password);
   
   int length = strlen(password);
   
   for (int i = 0; i < length; ++i) {
      switch (password[i]) {
         case 'i':
            password[i] = '1';
            break;
         case 'a':
            password[i] = '@';
            break;
         case 'm':
            password[i] = 'M';
            break;
         case 'B':
            password[i] = '8';
            break;
         case 's':
            password[i] = '$';
            break;
      }
   }
   
   password[length] = '!';
   
   password[length + 1] = '\0';
   
   printf("%s\n", password);
   
   return 0;
}
