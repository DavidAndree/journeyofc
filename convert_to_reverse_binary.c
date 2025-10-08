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