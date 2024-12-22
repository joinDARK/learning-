#include <stdio.h>

int main()
{
  int c, pc, space;

  space = 0;

  // Мой вариант
  /* while ((c = getchar()) != EOF)
    if (c == ' ') {
      if (space == 0) {
        ++space;
        putchar(c);
      }
    }
    else {
      space = 0;
      putchar(c);
    } */

  // Улучшенный вариант (не мой)
 while ((c = getchar()) != EOF) 
 {
   if (c != ' ' || pc != ' ')
   {
     putchar(c);
   }
   pc = c;
 } 

  return 0;
}
