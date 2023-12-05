#include <iostream>
#include <fstream>
using namespace std;

// declare all variable as a global variable 
string source , destination , buslist , name , date;
int option , age , ticket , price=250 , totalprice;

// create class bus_reservation 
class bus_reservation{
    public :
    bus_reservation(){ // create constructor
        cout<<"welcome to volcanus bus services"<<endl;
    }
    
    void Booking(){ // create menu function to get source and destination 
        cout<<"Enter source destination"<<endl;
        cin>>source;
        cout<<"Enter destination where you want to go"<<endl;
        cin>>destination;
        
        
    }
    
    void busList(){ //create bus list  function to  dislplay available buses
        cout<<"press 1 for  "<<source<<" To "<<destination<<" by newgo bus at 1 pm"<<endl;
        cout<<"press 2 for "<<source<<"To "<<destination<<" by charted bus at 3 pm"<<endl;
        cout<<"press 3 for "<<source<<"To "<<destination<<" by newgo bus at  5 pm"<<endl;
        cout<<"press 4 for "<<source<<"To "<<destination<<" by charted bus at 6 pm"<<endl;
        cin>>option;
        
        switch(option){ // using switch case for select bus 
            case 1 : cout<<"Your travel in newgo bus at 1 pm"<<endl;
            break;
            case 2 : cout<<"Your travel in chartes bus at 3 pm"<<endl;
            break ;
            case 3 : cout<<"Your travel in newgo bus at 5 pm"<<endl;
            break ;
            case 4 : cout<<"Your travel in charted bus at 6 pm"<<endl;
            break ;
            default : cout<<"Enter correct choice"<<endl;
        }
        
    }
    
    void pasengerDetails(){ // create passenger details function for get user information
        cout<<"Enter your name: "<<endl;
        cin>>name;
        cout<<"Enter your age: "<<endl;
        cin>>age;
        cout<<"Date of journey"<<endl;
        cin>>date;
        cout<<"How much ticket you want"<<endl;
        cin>>ticket;
    }
    
    int fair(){ // fair function for calculate totalprice
        return totalprice = price*ticket;
    }
    
    void dislplay(){ // display function for display ticket 
        cout<<"\n";
        cout<<"Date of journey: "<<date<<endl;
        cout<<"\n";
        cout<<"Name of passenger is :"<<name<<"\t"<<"\t \t \t \t  Age of passenger is : "<<age<<endl;
        cout<<"\n";
        cout<<"Source of  pasanger is: "<<source<<"\t"<<"\t \t \t  Destination of passenger is:"<<destination<<endl;
        cout<<"\n";
        cout<<"Number of ticket is: "<<ticket<<"\t"<<"\t \t \t \t  Total fair of tickets is: "<<totalprice<<endl;
    
    }
    
    void savefile(){
        ofstream file; //create ofstream variable
        file.open("ticket.txt");
    
        file<<"Date of journey: "<<date<<endl;
        file<<"\n";
        file<<"Name of passenger is :"<<name<<"\t"<<"\t \t \t  Age of passenger is : "<<age<<endl;
        file<<"\n";
        file<<"Source of  pasanger is: "<<source<<"\t"<<"\t \t \t  Destination of passenger is:"<<destination<<endl;
        file<<"\n";
        file<<"Number of ticket is: "<<ticket<<"\t"<<"\t \t \t  Total fair of tickets is: "<<totalprice<<endl;
        
    }
};

int main()
{
    // create class object 
    bus_reservation b ;
    b.Booking();
    b.busList();
    b.pasengerDetails();
    b.fair();
    b.dislplay();
    b.savefile();
    
    return 0;
}