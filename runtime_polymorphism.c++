#include <iostream>

using namespace std;
// compile time polymorphism
//  A=a2
// a = w*l

class area {
  public:
  int square (int l , int w){
      int a ;
      a = l*w;
      return a ;
  }
   int square (int a ){
      return a*a;
  }
};

int main() {
 area a;
  cout<<"area of square is: "<<a.square(5)<<endl;
 cout<<"area of rectange is: "<<a.square(5,10)<<endl;


    return 0;
}