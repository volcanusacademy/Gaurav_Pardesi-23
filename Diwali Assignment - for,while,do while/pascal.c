#include <stdio.h>
int main ()
{
  int rows, j;
  printf ("Enter the number of rows: ");
  scanf ("%d", &rows);
  for (int i = 1; i <= rows; i++)
    {
      j = 0;
      for (int space = 1; space <= rows - i; space++)
	{
	  printf ("  ");
	}

      for (j; j != 2 * i - 1; j++)
	{
	  printf ("* ");

	
	}
      printf ("\n");
    }


}
