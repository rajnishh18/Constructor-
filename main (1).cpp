// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class student{
    int roll_no;
    string name;
    public:
    
    student(){
        cout<<"Enter the name;";
        cin>>name;
        cout<<"Enter the roll ;";
        cin>>roll_no;
        
        
    }
    void display(){
        cout<<"Name is = "<<name<<endl;
        cout<<"Roll no = "<<roll_no<<endl;
        
    }
};




int main() {
    student s;
    s.display();
    
   
  

    return 0;
}