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

class child : public parent//child class

{



public:

child() //constructor

{

cout<<"Child class Constructor\n";

}



~ child() //destructor

{

cout<<"Child class Destructor\n";

}

};

int main()

{



child c;

//automatically executes

//parent class

//constructors and destructors

// because of inheritance



return 0;

}
