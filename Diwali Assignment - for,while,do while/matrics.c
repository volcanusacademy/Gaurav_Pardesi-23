#include <stdio.h>
// program for multipication of two matirx
int
mat (int r, int c)
{
  int e[r][c], e1[r][c], mul[10][10];
  printf ("Enter the first  matrix elements: ");
  for (int i = 0; i < r; i++)
    {

      for (int j = 0; j < c; j++)
	{

	  scanf ("%d", &e[i][j]);
	}
    }
  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
	{
	  printf ("%d ", e[i][j]);
	}
      printf ("\n");
    } printf ("Enter the second  matrix elements: ");
  for (int i = 0; i < r; i++)
    {
        
      for (int j = 0; j < c; j++)
	{
	  scanf ("%d", &e1[i][j]);
	}
    }
  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
	{
	  printf ("%d ", e1[i][j]);
	}
	
      printf ("\n");
    } printf ("Multipication of matrix: \n");
  
  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
    
	{
	  printf ("%d ", e[i][j] * e1[i][j]);
	}
      printf ("\n");
    }
}

int
main ()
{
  int r, c;
  printf ("enter the number of row: ");
  scanf ("%d", &r);
  printf ("enter the of number of column: ");
  scanf ("%d", &c);
  mat (r, c);
  return 0;
}