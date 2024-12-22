#include <stdio.h>

int main()
{
  int c, tab, space, el;

  tab = space = el = 0;

  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++el;
    else if (c == '\t')
      ++tab;
    else if (c == ' ')
      ++space;

  printf("\nКол-во таблуляции: %d\n", tab);
  printf("Кол-во символов конца строки: %d\n", el);
  printf("Кол-во пробелов: %d\n", space);
}
