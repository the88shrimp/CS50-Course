#include <stdio.h>
#include <cs50.h>

int main(void)
{

  int years = 0;

  // prompting for a minimum population size greater than 9
  int min_pop;
  do
  {
    min_pop = get_int("Please enter a starting population size: ");
  }
  while (min_pop < 9);

  // prompting for a maximum population size larger than the minimum
  int max_pop;
  do
  {
  max_pop = get_int("Please enter a finishing population size: ");
  }
  while (max_pop < min_pop);
  int born;
  int died;
  int c_pop = min_pop; // current population

  while (c_pop < max_pop)
  {
    born = c_pop / 3;
    died = c_pop / 4;
    c_pop = c_pop + born - died;
    years++;
  }

  printf("It will take %i year(s) to reach a llama population of your desired size\n", years);
}
