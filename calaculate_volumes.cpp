#include <iostream>

using namespace std;

class volume{
  public:
  
  void cube(int side){
      cout<<"\nVolume of cube is:"<<side*side*side;
  }
  
  void cuboid(int L,int B,int H){
      cout<<"\nVolume of cube is:"<<L*B*H;
  }
  

  
  void sphere(int r){
      cout<<"\nVolume of cube is:"<<(4/3)*3.14*r*r*r;
  }
};

int main()
{   int side ,l ,b , h ,r;
    cout<<"Enter the side of cube: ";
    cin>>side;
    cout<<"Enter the length of cuboid: ";
    cin>>l;
    cout<<"Enter the breath of cuboid: ";
    cin>>b;
    cout<<"Enter the height of cuboid: ";
    cin>>h;
    cout<<"Enter the Radius of sphere: ";
    cin>>r;
    
    volume v;
    v.cube(side);
    v.cuboid(l,b,h);
    v.sphere(r);
    

    return 0;
}