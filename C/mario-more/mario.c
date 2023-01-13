#include <cs50.h>
#include <stdio.h>

int main(void) 
{
  int size;
  do
  {
    size = get_int("Height: ");
  }
  while (size < 1 || size > 8);

  for (int i = 1; i <= size; i++)
  {
    for (int j = size - i; j > 0; j--)
    {
      printf(" ");
    }

    for (int k = size - i; k < size; k++)
    {
      printf("#");
    }
    printf("\n");
  }
}