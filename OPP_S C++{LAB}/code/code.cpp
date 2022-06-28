#include<iostream>

using namespace std;



class parent        //parent class

{

public:

parent() //constructor

{

cout<<"Parent class Constructor\n";

}



~parent()//destructor

{

cout<<"Parent class Destructor\n";

}

};



int main()

{



parent c;

//automatically executes

//parent class

//constructors and destructors

// because of inheritance



return 0;

}
