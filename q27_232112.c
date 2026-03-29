#include <cs50.h>
#include <stdio.h>
int main (void)
{
  int n = get_int ("Enter a number :");
  if (n == 0)
  {
    printf ("The given number is zero\n");
  }
  else if ( n%2==0)
  {
    printf ("The given number is even\n");
  }
  else
  {
    printf ("The given number is odd\n");
  }
  return 0;
}
