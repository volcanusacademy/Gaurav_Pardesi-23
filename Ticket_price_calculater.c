#include <stdio.h>

int Ambook (int age;
  )
{
  int age;
  float Time;
  printf ("Enter your age :");
  scanf ("%d", &age);
  printf ("Enter show time:");
  scanf ("%f", &Time);

  if (age < 12)
    {
      printf ("Your ticket price is 7$");
    }
  else if (age >= 12)
    {
      printf ("Your ticket price is 10$");
    }

}

void pmbook (int age;
	     float Time;
  )
{
  int age;
  float Time;
  printf ("Enter your age :");
  scanf ("%d", &age);
  printf ("Enter show time:");
  scanf ("%f", &Time);
  if (age < 12 && Time < 5)
    {
      printf ("Your ticket price is 7$");
    }
  else if (age >= 12 && Time < 5)
    {
      printf ("Your ticket price is 10$");
    }
  else if (Time >= 5)
    {
      printf ("Your ticket price is 12$");
    }
}

int
main ()
{
  int option;
  printf ("~~~~~~~~~~~~ Welcome To ticket booking ~~~~~~~~~~~~\n");

  printf
    ("Press 1 for 'AM' ticket booking\n Press2 for 'PM' ticket booking :");
  scanf ("%d", &option);
  switch (option)
    {
    case 1:
      Ambook ();
      break;
    case 2:
      pmbook ();
      break;
    }



  return 0;
}
