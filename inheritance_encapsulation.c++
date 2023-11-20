#include <iostream>

using namespace std;


class animal
{
  string name;			// class variables which are private
  int age;

public:			// public method for set and get details of private variables is known as Encapsulation

  void setDetails (string name, int age)
  {				// function for set details 
    this->name = name;
    this->age = age;

  }

  void getDetails ()
  {				// function for get details
    cout << "\nname of animal is: " << name<<endl;
    cout << "age of animal is: " << age << endl;
  }
  
  void Sound(){
      cout<<"animals sound $$##%@@3#"<<endl;
  }
};


class mammal:public animal
{				// create mammal class and inherit animal class 
  string fur_colour;
public:
  void setcolour (string fur_colour)
  {
    this->fur_colour = fur_colour;
  }

  void getColour ()
  {
    cout << "Colour of animal fur is " << fur_colour << endl;
  }

    void Sound(){
        cout<<"\nsound of mammal is: mememe"<<endl;
    }
};

class bird:public animal
{				// create bird class and inherit animal class
  string fur_colour;
public:
  void setcolour (string fur_colour)
  {
    this->fur_colour = fur_colour;
  }

  void getColour ()
  {
    cout << "Colour of animal fur is " << fur_colour << endl;
  }
    void Sound(){
        cout<<"sound of bird is: chi chi "<<endl;
    }

};

int
main ()
{
    animal a;
    a.setDetails("animal" , 14);
    a.getDetails();
    a.Sound();
    
    
    
  bird b;
  mammal m;
  m.setDetails ("mammal",  25);
  m.setcolour ("black");
  m.getDetails ();
  m.getColour ();
  m.Sound();

  b.setDetails ("sparow",  5);
  b.setcolour ("blue");
  b.getDetails ();
  b.getColour ();
  b.Sound();
  return 0;
}
