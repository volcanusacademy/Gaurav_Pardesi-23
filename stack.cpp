#include <iostream>
using namespace std;
int s=1000 , top=-1;
int stacks[100];

class stack{
    public:
    int push(int num){ // push function for push value in stack
        if(top>=s){
            cout<<"Size of stack is full";
        }
        else{
            top++;
            cout<<num<<" is push in stack "<<endl;
            stacks[top]=num;
        }
    }
    int pop(){ // pop function for remove peek value
        if(top<0){
            cout<<"stack is empty";

        }
        else{
            cout<<stacks[top--]<<" is pop in stack "<<endl;
            // cout<<stacks[top]<<" is pop in stack"<<endl;
        
        }
    }
    
    int peek(){ //peek function for display peek value
        cout<<stacks[top]<<" is peek value\n";
    }
};
int main() {
    stack s ; //create class objects
    s.push(5); 
    s.push(10);
    s.push(15); // add value in stack through push function
    s.peek();
    s.pop();
    s.peek();
    
    return 0;
}