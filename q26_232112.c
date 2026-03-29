#include <cs50.h>
#include <stdio.h>
int main (void)
{
  int n = get_int ("Enter a number :");
  if (n > 0)
  {
    printf ("The given number is positive\n");
  }
  else if ( n < 0)
  {
    printf (" The given number is negative\n");
  }
  else
  {
    printf (" The given number is zero\n");
  }
  return 0;
}
