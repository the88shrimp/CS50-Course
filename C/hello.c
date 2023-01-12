#include <stdio.h>
#include <cs50.h>

int main(void)
{
  printf("hello, world\n");
  
  string answer = get_string("What is your name? ");
  
  printf("Hello, %s!\n", answer);

  int x = get_int("What is X? ");
  int y = get_int("What is Y? ");
  
  if (x > y)
  {
    printf("X is greater than Y\n");
  }
  else if (x == y)
  {
    printf("X and Y are equal\n");
  }
  else
  {
    printf("X is not greater than Y\n");
  }

  for (int i = 0; i < 3; i++)
  {
    printf("meow!\n");
  }
  
}
