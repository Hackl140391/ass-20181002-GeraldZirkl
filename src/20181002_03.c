/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  unsigned int countd = 1;
  printf ("Bitte geben Sie eine Zahl ein: ");
  scanf ("%d", &countd);
  while (countd)
    {
      printf ("%d\n", countd);
      countd = countd - 1;
    }
  printf ("0\n");
  return 0;
}
