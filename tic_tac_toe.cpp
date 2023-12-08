#include <iostream>
using namespace std;

// tick tac toe game 

int 
main () {
// create sample matrix
int mat[3][3] = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };	

// declare required variabl
int turn = 0, r, c, p1 = 0, p2 = 0;	
// using do while loop 
  do{
      // using for loop  to print sample matrix      
	for (int i = 0; i < 3; i++){
	  for (int j = 0; j < 3; j++){
	      cout << mat[i][j] << " ";} 
	      cout << "\n";
	    } 
// player 1 work start here
// player 1 chance  player  need to put row and column no in which place he want mark
cout << "!!!player 1 chance!!!\n";
cout << "Enter row number: ";
cin >> r;
cout << "Enter colum no: ";
cin >> c;
// assign value 1 for plyer 1 in there particular row and colum     
mat[r - 1][c - 1] = 1;	
// using for loop to checking winnig condition
	for (int i = 0; i < 3; i++){
	   if (mat[i][0]==1&& mat[i][1]==1 && mat[i][2] ==1){
	      p1++;	
	    }
	    
	    else if (mat[0][i]==1 && mat[1][i]==1 && mat[2][i]==1){
	      p1++;		
	        }
	  
	    else if (mat[0][0]==1 && mat[1][1]==1 && mat[2][2]==1){
	      p1++;	
	        
	    }
	    else if (mat[0][2]==1 && mat[1][1]==1 && mat[2][0]==1){
	      p1++;
	        }}
// using if condition for stop  game with the healp of break and print winner
	if (p1 > 0){
	  cout << "!!! player 1 win !!!\n";
	  break;	
	}// player 1 work end hear
	
	// using for loop  to print updated matrix      
	for (int i = 0; i < 3; i++){
	  for (int j = 0; j < 3; j++){
	      cout << mat[i][j] << " ";} 
	      cout << "\n";
	} 
 // player 2 work start hear
	if (turn < 4){
// player 2 chance  player  need to put row and column no in which place he want mark    
cout << "!!!player 2 chance!!!\n";
cout << "Enter row number: ";
cin >> r;
cout << "Enter colum no: ";
cin >> c;
// assign value 2 for plyer 2 in there particular row and colum
mat[r - 1][c - 1] = 2;	
}
// using for loop for checking winnig condition 
	for (int i = 0; i < 3; i++){
	  if (mat[i][0]==2 && mat[i][1]==2 && mat[i][2]==2)	{
	      p2++; 
	    }
	  else if (mat[0][i]==2 && mat[1][i]==2	&& mat[2][i]==2){
	      p2++;
	  }
	  else if (mat[0][0]==2 && mat[1][1]==2	&& mat[2][2]==2){
	      p2++;	
	  }
	  else if (mat[0][2]==2 && mat[1][1]==2 && mat[2][0]==2){
	      p2++;	
	  }
}
// using if condition for stop  game with the healp of break and print winner
	if (p2 > 0){
	    cout << "!!! player 2 win !!!\n";
	  break;}
      
// player 2 work end hear
	
turn++;	// increase turn by  1
    
}
// while condition 
  while (turn != 5);	
  
//  if condition when no one winnig then its print draw
if (p1 == 0 && p2 == 0){
      cout << "!!! Game is draw !!!\n";
}
// using for loop  to print last upated matrix      
for (int i = 0; i < 3; i++){
 for (int j = 0; j < 3; j++){
     cout << mat[i][j] << " ";} 
     cout << "\n";
	} 
return 0 ;
}
