#include <iostream>
using namespace std;
// tick tac toe game 
 
int
main ()
{
  
int mat[3][3] = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} }; // create sample matrix
  
int turn = 0, r, c, p1 = 0, p2 = 0; // declare required variable
  
  do // using do while loop 
    {
// using for loop  to print sample matrix      
for (int i = 0; i < 3; i++) 
	{
	  
for (int j = 0; j < 3; j++)
	    {
	      
cout << mat[i][j];
	    } 
cout << "\n";
	
} 
// player 1 chance  player  need to put row and column no in which place he want mark
cout << "!!!player 1 chance!!!\n";
      
cout << "Enter row number: \n";
      
cin >> r;
      
cout << "Enter colum no: \n";
      
cin >> c;
      
mat[r - 1][c - 1] = 1; // assign value 1 for plyer 1 in there particular row and colum
      
 
 // using for loop to checking winnig condition
for (int i = 0; i < 3; i++)
	{
	  
for (int j = 0; j < 3; j++)
	    {
	      
if (mat[i][j] == 1 && mat[i][j + 1] == 1 && mat[i][j + 2] == 1) // if condition when all row = 1 player 1 win
		{
		   // player 1 work start hear
		   
cout << "!!! player 1 win !!!\n"; // print winnig output
		  
p1++; // increase p1 for using break statment 
		}
	      
	      else if (mat[i][j] == 1 && mat[i + 1][j] == 1 // else if condition when all colum = 1 player 1 win
		       && mat[i + 2][j] == 1)
		{
		  
cout << "!!! player 1 win !!!\n"; // print winnig output
		  
p1++; // increase p1 for using break statment
		
}
	      
 
	     else if (mat[i][j] == 1 && mat[i + 1][j + 1] == 1 // else if condition for checking diagonals winnig condition
		       && mat[i + 2][j + 2] == 1)
		{
		  
cout << "!!! player 1 win !!!\n"; // print winnig output
		  
p1++; // increase p1 for using break statment
		
}
	    
}
	}
     
// using if condition for stop  game with the healp of break
if (p1 > 0)
	{
	  
break; // brak program
	
}
 // player 1 work end hear
      
 
 // player 2 work start hear
if (turn < 4) 
	{

// player 2 chance  player  need to put row and column no in which place he want mark	  
cout << "!!!player 2 chance!!!\n";
	  
cout << "Enter row number: \n";
	  
cin >> r;
	  
cout << "Enter colum no: \n";
	  
cin >> c;
	  
mat[r - 1][c - 1] = 2; // assign value 2 for plyer 2 in there particular row and colum
	
}
// using for loop for checking winnig condition 
for (int i = 0; i < 3; i++)
	{
	  
for (int j = 0; j < 3; j++)
	    {
//if condition when all row = 2 player 2 win	      
if (mat[i][j] == 2 && mat[i][j + 1] == 2 && mat[i][j + 2] == 2)
		{
		  
cout << "!!! player 2 win !!!\n"; // print winnig output
		  
p2++; // increase p2 for using break statment
		}
	      
	      else if (mat[i][j] == 2 && mat[i + 1][j] == 2 // else if condition when all colum = 1 player 1 win
		       && mat[i + 2][j] == 2)
		{
		  
cout << "!!! player 2 win !!!\n"; // print winnig output
		  
p2++; // increase p2 for using break statment
		
}
	      
	      else if (mat[i][j] == 1 && mat[i + 1][j + 1] == 1 // else if condition for checking diagonals winnig condition
		       && mat[i + 2][j + 2] == 1)
		{
		  
cout << "!!! player 2 win !!!\n"; // print winnig output
		  
p2++; // increase p2 for using break statment
		
}
	    
}
	}
 // using if condition for stop  game with the healp of break    
if (p2 > 0)
	{
	  
break; // break program
	
}
 // player 1 work end hear
      
turn++; // increase turn by  1
    
}
  
while (turn != 5); // while condition 
  
//  if condition when no one winnig then its print draw
for (int i = 0; i < 3; i++) 
	{
	  
for (int j = 0; j < 3; j++)
	    {
	      
cout << mat[i][j];
	    } 
cout << "\n";
	
} 
if (p1 == 0 && p2 == 0) 
    {
      
cout << "!!! Game is draw !!!\n";
    
}

}
