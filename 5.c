#include <stdio.h>

int main()
{
  int c;

  while ((c = getchar()) != EOF)
    printf("Вы ввели строку: ");
    putchar(c);
    printf("\n");

  printf("\nВыход из программы...");
}
