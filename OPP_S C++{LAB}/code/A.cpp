#include <iostream>

using namespace std;

class super

{

int sup_a; public :

void sup_input(int x)

{

sup_a=x;

}

void sup_show( )

{

cout<<"sup_a="<<sup_a<<endl;

}

};

class sub :public super

{

};

 

int main()

{

int i; 

sub o1;

cout<<"Enter a data member for class super :="; 

cin>>i;

o1.sup_input(i); 

o1.sup_show();

return 0;

}
