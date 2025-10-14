/* A program that reads a list of words. Then, the program outputs those words and their frequencies. The input begins with an integer indicating the number of words that follow. Assuming that the list will always contain fewer than 20 words, and each word contains fewer than 10 characters.

If the input is:

5 hey hi Mark hi mark
the output is:

hey - 1
hi - 2
Mark - 1
hi - 2
mark - 1
*/

#include <stdio.h>
#include <string.h>

int main(void) {
   // Variable to store the number of words to be read.
   int numWords;

   // Read the initial integer indicating the number of words.
   scanf("%d", &numWords);

   // Declare an array of strings (2D char array) to store the words.
   // Max 20 words, each word with max 10 characters (9 + null terminator).
   char words[20][10];
   
   // Declare an integer array to store the frequency of each word.
   int frequencies[20];
   
   // Loop counters.
   int i;
   int j;

   // Loop to read the specified number of words from input into the array.
   for (i = 0; i < numWords; ++i) {
      scanf("%s", words[i]);
   }

   // The outer loop iterates through each word.
   for (i = 0; i < numWords; ++i) {
      int count = 0; // Reset count for each new word to check.
      
      // The inner loop compares the current word (words[i]) with every word in the list.
      for (j = 0; j < numWords; ++j) {
         // strcmp returns 0 if the strings are identical.
         if (strcmp(words[i], words[j]) == 0) {
            count++; // Increment the count if a match is found.
         }
      }
      
      // Store the final count for the word at index 'i' in the frequencies array.
      frequencies[i] = count;
   }
   
   // Loop through the words and their calculated frequencies.
   for (i = 0; i < numWords; ++i) {
      printf("%s - %d\n", words[i], frequencies[i]);
   }

   return 0;
}