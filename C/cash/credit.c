#include <cs50.h>
#include <stdio.h>

long int get_number(void);

int checksum(long int a);

long int checkdigit(long int a, long int b, long int c);

int lencheck(long a);

int main(void) 
{
  int check;
  int length;
  long int card_number = get_long("Number: ");
  check = checksum(card_number);
  length = lencheck(card_number);

  if (check == 1)
  {
    if (length == 16)
    {
      long int digit_one = (card_number % 10000000000000000) / 1000000000000000;
      long int digit_two = (card_number % 1000000000000000) / 100000000000000;
      if (digit_one == 4)
      {
        printf("VISA\n");
      }
      else if (digit_one == 5 && digit_two == 1)
      {
        printf("MasterCard\n");
      }
      else if (digit_one == 5 && digit_two == 2)
      {
        printf("MasterCard\n");
      }
      else if (digit_one == 5 && digit_two == 3)
      {
        printf("MasterCard\n");
      }
      else if (digit_one == 5 && digit_two == 4)
      {
        printf("MasterCard\n");
      }
      else if (digit_one == 5 && digit_two == 5)
      {
        printf("MasterCard\n");
      }
      else
      {
        printf("INVALID\n");
      }
    }

    if (length == 15)
    {
      long int digit_one = (card_number % 1000000000000000) / 100000000000000;
      long int digit_two = (card_number % 100000000000000) / 10000000000000;
      if (digit_one == 3 && digit_two == 4)
      {
        printf("American Express\n");
      }
      else if (digit_one == 3 && digit_two == 7)
      {
        printf("American Express\n");
      }
      else
      {
        printf("INVALID\n");
      }
    }

    if (length == 14)
    {
      long int digit_one = (card_number % 100000000000000) / 10000000000000;
      long int digit_two = (card_number % 10000000000000) / 1000000000000;
      printf("INVALID\n");
    }  

    if (length == 13)
    {
      long int digit_one = (card_number % 10000000000000) / 1000000000000;
      long int digit_two = (card_number % 1000000000000) / 100000000000;
      printf("INVALID\n");
    }

    if (length <= 12)
    {
      printf("INVALID\n");
    }  
  }

  else
  {
    printf("INVALID\n");
  }
}

long int checkdigit(long a, long b, long c)
{
  long int sum = 0;
  long int digit = 0;
  sum = ((a % b) / c) * 2;

  if (sum > 9)
  {
    digit = digit + (sum % 10);
    digit = digit + (sum / 10);
    return digit;
  }

  else
  {
    return sum;
  }
}

int checksum(long int a)
{
  long int sum = 0;
  long int sum2 = 0;
  
  sum = sum + checkdigit(a, 100, 10);
  sum = sum + checkdigit(a, 10000, 1000);
  sum = sum + checkdigit(a, 1000000, 100000);
  sum = sum + checkdigit(a, 100000000, 10000000);
  sum = sum + checkdigit(a, 10000000000, 1000000000);
  sum = sum + checkdigit(a, 1000000000000, 100000000000);
  sum = sum + checkdigit(a, 100000000000000, 10000000000000);
  sum = sum + checkdigit(a, 10000000000000000, 1000000000000000);

  sum2 = a % 10;
  sum2 = sum2 + (a % 1000) / 100;
  sum2 = sum2 + (a % 100000) / 10000;
  sum2 = sum2 + (a % 10000000) / 1000000;
  sum2 = sum2 + (a % 1000000000) / 100000000;
  sum2 = sum2 + (a % 100000000000) / 10000000000;
  sum2 = sum2 + (a % 10000000000000) / 1000000000000;
  sum2 = sum2 + (a % 1000000000000000) / 100000000000000;


  sum = sum + sum2;
  if (sum % 10 == 0)
  {
    return 1;
  }
  else
  {
  return 0;
  }
}

int lencheck(long a)
  {
    if (a >= 1000000000000000) return 16;
    if (a >= 100000000000000) return 15;
    if (a >= 10000000000000) return 14;
    if (a >= 1000000000000) return 13;
    if (a >= 100000000000) return 12;
    return 0;    
  }