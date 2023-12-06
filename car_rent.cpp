#include <iostream>
using namespace std;

/*The project basically gives the user the option to ask if he is renting a car [Y or N]:

if Y is inputed, then it ask about "C” for Compact or “F” for Full-size,

if the user selects compact the project displays that the user has selected compact and

if the code displays fullsize the project displays that the user has selected fullsize.

Then it asks the user if they have a coupon or not by “Y” or “N” if the users answer Y for the coupon the price is 7% off on 456.56 for compact car.

If the user answers N the price is a normal 456.56. The fullsize normal price is 460.50 and the price with a coupon is 7% off on 460.50.*/

int main() {
    float compactprice = 456.65 , fullsizeprice=460.50 , total=0;
    string option ;
    cout<<"You want rent a car press 'y' for yes 'n' for no: ";
    cin>>option;
    if (option=="y"){ //  1st if 
        cout<<"Press 'c' for compact 'f' for fullsize: ";
        cin>>option;
        
        if(option=="c"){ //  2nd if 
            cout<<"you selected compact \n";
             cout<<"You have a discount coupan  press 'y' for yes 'n' for no: ";
         cin>>option;
         if(option=="y"){ // 3rd if 
             total= compactprice-((compactprice*7)/100);
             cout<<"price for compact car is:"<<compactprice<<endl;
             cout<<"total price after coupan is:"<<total<<endl;
         }
         else if (option=="n"){ // 3rd else if
             cout<<"price for compact car is:"<<compactprice<<endl;
         }
          else{ // 3rd else
        cout<<"invalid choice";
    }
            
        }
        else if (option=="f"){ //  2nd else if 
             cout<<"you selected full size \n";
              cout<<"You have a discount coupan  press 'y' for yes 'n' for no: ";
         cin>>option;
         
          if(option=="y"){ //4th if
             total= fullsizeprice-((fullsizeprice*7)/100);
             cout<<"price for fullsize car is:"<<fullsizeprice<<endl;
             cout<<"total price after coupan is:"<<total<<endl;
         }
    
         else if (option=="n"){ //4th else if
             cout<<"price for fullsize car is:"<<fullsizeprice<<endl;
         }
               else{ // 4th else
        cout<<"invalid choice";}
   
       
          }
    else{ // 2nd else
        cout<<"invalid choice";
    }
        
    }
    else if(option=="n"){ // 1st if else
        cout<<"thank you comeback when you want rent a car ";
    }
    else{ // 1st else
        cout<<"invalid choice";
    }

    return 0;
}