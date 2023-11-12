#include <stdio.h>
// program for sorting of aaray 
int main ()
{
  int n, temp;
  printf ("Enter how many person in this list");
  scanf ("%d", &n);
  int age[n];
  for (int i = 0; i <n; i++)
    {				// for taking input from user
      printf ("Enter the age of %d peson: ", i);
      scanf ("%d", &age[i]);
    }
  printf ("print unsorted list: \n");	// print unsorted list
  for (int i = 0; i <=n; i++)
    {

      printf ("%d  ", age[i]);
    }
// for sorting list
  for (int i = 0; i <n; i++)
    {
      for (int j = i + 1; j <= n; j++)
	{
	  if (age[i] > age[j])
	    {
	      temp = age[i];
	      age[i] = age[j];
	      age[j] = temp;
	    }
	}
    }
    printf ("\nprint sorted list: \n");
  for (int i = 0; i <= n; i++)
    {
      
      printf ("%d  ", age[i]);
    }



  return 0;
}
