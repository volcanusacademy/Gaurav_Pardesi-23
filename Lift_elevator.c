#include <stdio.h>
#include<stdlib.h> // for using sleep function
int cf = 1, nf; // declare all variable as global 
// cf = current floor , nf = new floor 

int
move_up (int nf) // function for move up 
{
  for (int i = cf; i <= nf; i++)
    {
      sleep (1);
      printf ("Your in floor number %d\n", i);

    }
  cf = nf;
}

int
move_down (int nf) // function for move down
{
  for (int i = cf; i >= nf; i--)
    {
      sleep (1);
      printf ("Your in floor number %d\n", i);
    }
  cf = nf;
}

void
lift () // lift function 
{
  do // using do while loop 
    {
      printf ("Your currently in Floor number: %d \n", cf);
      printf ("Enter floor number you want to go :\n");
      scanf ("%d", &nf);
      if (nf > 10)
	{
	  printf ("Please enter floor number 1 to 10 only\n");
	}
	else if (nf<=0)
	{
	  printf ("Please enter floor number 1 to 10 only\n");
	}
      else if (cf < nf)
	{
	  move_up (nf);
	}
      else if (cf > nf)
	{
	  move_down (nf);
	}
      else if (cf == nf)
	{
	  printf ("Your already in same floor");
	}
    }
  while (nf != -1);
}

int
main ()
{
    //  call lift function  
  lift (nf);


  return 0;
}
