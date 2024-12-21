#include <stdio.h>

int main(void)
{
  float f, cels;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  f = lower;
  printf("Шкала температур по Фаренгейту к Цельсию\n\n");
  while (f <= upper) {
    cels = (5.0 / 9.0) * (f - 32.0);
    printf ("%3.0f %6.1f\n", f, cels);
    f = f + step;
  }
}
