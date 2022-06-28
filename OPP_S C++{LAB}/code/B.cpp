#include <iostream>
using namespace std;
class HelloWorld
{
    public:
    HelloWorld() // constructor
    {
        cout<<"constructor is called "<<endl;
    }
    ~HelloWorld()
    {
        cout<<"Destructor is called"<<endl;
    }
    void display() //member fuction
    {
        cout<<"HelloWorld ! "<<endl;
    }
};
int main()
{
    HelloWorld obj1; //decalred and initialized
    obj1.display();
    return 0;
}

   
   
   
   
   
   
   
   
   