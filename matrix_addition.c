#include <stdio.h>

int main()
{      int r, c; // declare row and colcum variable r , c
  printf ("enter the number of row: ");
  scanf ("%d", &r);
  printf ("enter the of number of column: ");
  scanf ("%d", &c);
   int matrix1[r][c], matrix2[r][c], result[r][c]; // declare matrix1 , matrix2 and results
  for (int i = 0; i < r; i++) // for loop for geting first matix value
    {
     
      for (int j = 0; j < c; j++)
	{
    printf ("Enter the first  matrix elements: ");
	  scanf ("%d", &matrix1[i][j]);
	}
    }
  for (int i = 0; i < r; i++) //for loop for print first matrix
    {
      for (int j = 0; j < c; j++)
	{
	  printf ("%d ", matrix1[i][j]);
	}
      printf ("\n");
    } 
  for (int i = 0; i < r; i++) // for loop for geting second matix value
    {

      for (int j = 0; j < c; j++)
	{ printf ("Enter the second  matrix elements: ");
	  scanf ("%d", &matrix2[i][j]);
	}
    }
  for (int i = 0; i < r; i++) //for loop for print second matrix
    {
      for (int j = 0; j < c; j++)
	{
	  printf ("%d ", matrix2[i][j]);
	}

      printf ("\n");
    } printf ("addition of matrix: \n");


     for (int i = 0; i < r; i++) // for loop for storing the result for addition of two matrix
    {
    
      for (int j = 0; j < c; j++)
	{
	    result[i][j]=(matrix1[i][j] + matrix2[i][j]);}
	  
	}
	 for (int i = 0; i < r; i++) // for loop to print result
    {
      for (int j = 0; j < c; j++)
	{
	  printf ("%d ", result[i][j]);
	}
	      printf ("\n");

    }

    return 0;
}
