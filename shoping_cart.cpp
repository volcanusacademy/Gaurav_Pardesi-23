#include <iostream>
using namespace std;
// program shoping cart add products and give discount according quantity 

int  numpro;
string product[100];
float price[100],total=0 , disamount  , finalAmount ; // declare all variables global
float tax;
class shopingCart{ // create class shoping cart
    public:
     shopingCart(){ //  create constructor
         cout<<"Welcome to volcanus shop"<<endl; 
     }
     
     void add_products(){ // function for add product
           
            cout<<"Enter the number of products max limit 20:";
            cin>>numpro;
             product[numpro];
            price[numpro];
         for(int i=0;i<numpro;i++){
             cout<<"Enter the "<<i+1<<" product name: "<<endl;
             cin>>product[i];
             cout<<"Enter the "<<i+1<<" product price: "<<endl;
             cin>>price[i];
         }}
         
         int calculate_price(){ // function for calculate price
             
            
             for(int i =0;i<numpro;i++){
                //  cout<<price[i];
                 total=total+price[i];
             }
         }
         void discount(){ // function for calculat discount
              if(numpro<5){
                 disamount= total-((total*5)/100);
             }
          else if (numpro<10){
              disamount= total-((total*10)/100);
              
          }
           else if (numpro<15){
              disamount= total-((total*15)/100);
              
          }
           else if (numpro<20){
              disamount= total-((total*20)/100);
              
          }
          else{
              cout<<"no discount";
          }
          
         }
        float totalAftertax(){ // function for final amount including tax
            tax = (disamount*2)/100;
            finalAmount=disamount-tax;
        }
        
        int display(){ //display function for print output
             
            cout<<"Your products and price list"<<endl;
            for(int i = 0 ; i<numpro;i++){
                cout<<product[i]<<"\t \t"<<price[i]<<endl;
            }
            cout<<"sub total price:"<<total<<endl;
            cout<<"price after discount:"<<disamount<<endl;
            cout<<"tax on products:"<<tax<<endl;
            cout<<"your final total amount:"<<finalAmount<<endl;
        }
         
};

int main() {
     
   shopingCart s; // create class object 
  s.add_products(); 
  s.calculate_price();
  s.discount();
  s.totalAftertax();
  s.display();

    return 0;
}