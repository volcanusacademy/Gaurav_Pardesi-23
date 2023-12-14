#include <stdio.h>
// . create a program that performs matrix multiplication, transposition, and displays the results.
int
mat (int r, int c)
{
  int mat1[r][c], mat2[r][c];
    // printf ("Enter the  matrix elements: ");

  for (int i = 0; i < r; i++)
    {
//   printf ("Enter the  matrix elements: ");
      for (int j = 0; j < c; j++)
	{ printf ("Enter the  matrix elements: ");
  
	  scanf ("%d", &mat1[i][j]);
	}
    }
    // print matrix 
    printf("Print matrix\n");
  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
	{
	  printf ("%d ", mat1[i][j]);
	}
      printf ("\n");
    }
    
    // printf ("Enter the second  matrix elements: ");
        printf("Print transpose matrix\n");
  for (int i = 0; i < r; i++)
    {
        
      for (int j = 0; j < c; j++)
	{
	  mat2[i][j]=mat1[j][i];
	}
    }  
  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
	{
	  printf ("%d ", mat2[i][j]);
	}
	
      printf ("\n");
    } printf ("Multipication of matrix and transpose matrix: \n");
  
  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
    
	{
	  printf ("%d ", mat1[i][j] * mat2[i][j]);
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