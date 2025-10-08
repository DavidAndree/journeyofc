/*
 In this program, I use a brute-force approach to find integer solutions (x, y)
 for a system of two linear equations with integer coefficients:
 ax + by = c
 dx + ey = f

 I check every possible combination of x and y values in the range -10 to 10.
 For each pair, I test if they satisfy both equations. If they do, I print the
 solution and stop the loop. If no solution is found after all possibilities,
 I print "There is no solution."

 Example:
 Input:
 8 7 38
 3 -5 -1
 Output:
 x = 3, y = 2

 This brute-force method isn’t efficient, but it’s simple and guarantees
 finding a valid integer solution within the given range if one exists.
*/

#include <stdio.h>
#include <stdbool.h> 

int main(void) {
   int a, b, c, d, e, f;
   
   scanf("%d %d %d", &a, &b, &c);
   
   scanf("%d %d %d", &d, &e, &f);
   
   bool solutionFound = false;
   
   for (int x = -10; x <= 10; ++x) {
      for (int y = -10; y <= 10; ++y) {
         if ((a * x + b * y == c) && (d * x + e * y == f)) {
            printf("x = %d, y = %d\n", x, y);
            solutionFound = true;
            break; 
         }
      }
      if (solutionFound) {
         break;
      }
   }
   
   if (!solutionFound) {
      printf("There is no solution\n");
   }
   
   return 0;
}