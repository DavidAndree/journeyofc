/*
 * A program that takes in a positive integer as input, and outputs a string of 1's and 0's representing the integer in reverse binary.
 */
#include <stdio.h>

int main(void) {

   int userInput;

   scanf("%d", &userInput);

   while (userInput > 0){
      printf("%d", userInput % 2);

      userInput = userInput / 2;
   }
   printf("\n");

return 0;
}