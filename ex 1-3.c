#incliude <stdio.h>

int main()
{
  float f, c;
  int lower, upper, step;

  lower = 0;
  upper = 50;
  step = 5;

  c = lower;

  printf("Таблица температур по Цельсию к Фаренгейту\n\n");

  while (c <= upper) {
    f = c * 1.8 + 32;
    printf("%2.0f %6.2f\n", c, f);
    c = c + step;
  }

  return 0;
}
