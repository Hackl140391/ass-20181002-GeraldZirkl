/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int zahl1 = 0;
  int zahl2 = 0;

  printf ("Geben Sie eine Zahl 1 ein: ");
  scanf ("%d", &zahl1);
  printf ("Geben Sie eine Zahl 2 ein: ");
  scanf ("%d", &zahl2);

  if (zahl1 > zahl2)
    {
      printf ("Die groessere Zahl ist: %d\n", zahl1);
    }
  else
    {
      printf ("Die groessere Zahl ist: %d\n", zahl2);
    }
  return 0;
}
