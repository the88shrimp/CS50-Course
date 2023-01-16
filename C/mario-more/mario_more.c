#include <cs50.h>
#include <stdio.h>

int main(void) 
{
  // prompting for user input on the size
  int size;
  do
  {
    size = get_int("Height: ");
  }
  while (size < 1 || size > 8);  // making sure to keep the size within bounds

  for (int i = 1; i <= size; i++) // Starting the initial for loop that loops the overall size
  {
    for (int j = size - i; j > 0; j--)  // The for loop that prints the first set of blanks
    {
      printf(" ");
    }

    for (int k = size - i; k < size; k++)  // The for loop that prints the first set of hashes
    {
      printf("#");
    }

    printf("  ");  // printing the gap between the pyramid
    
    for (int k = size - i; k < size; k++)  // The for loop that prints the second set of hashes
    {
      printf("#");
    }

    printf("\n");  // moving on to the next line of the pyramid
  }
}