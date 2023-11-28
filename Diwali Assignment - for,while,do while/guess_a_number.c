#include <stdio.h>
#include <stdlib.h>		//----- for using rand function
#include<time.h>		//------- for using time for genrate random numbers

int main ()
{
  int random_no, user_guess, total_guess = 1;
  srand (time (NULL));
  random_no = rand () % 100;
  printf
    ("!!!~~~~~~ Welcome To guess a Number Game~~~~~!!!\n Guess a number in the range of 1 to 100 !!!");
  do
    {

      printf ("\nEnter Your guess: ");
      scanf ("%d", &user_guess);
      if (random_no == user_guess)
	{
	  printf ("\nyour won the game you guess correct number in %d guess ",
		  total_guess);
	}
      else if (random_no < user_guess)
	{
	  printf ("\nenter lower number ");
	}
      else
	{
	  printf ("\nenter higher  number ");
	  total_guess++;
	}
    }
  while (user_guess != random_no);

  return 0;

}
