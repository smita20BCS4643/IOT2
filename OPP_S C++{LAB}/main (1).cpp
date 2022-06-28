#include <iostream>

using namespace std;

class box//base class

{

  public:

   

  void setHeight(int h)

  {

    height=h;

  }

  void setBreadth(int b)

  {

    breadth=b;

  }

  void setWidth(int w)// member function

  {

   Width=w;

  }

   public:

   int Width; //data members

   int height; //data members

   int breadth; //data member

};

class abc:public box

{

  public:

  int getVolume()

  {

     return ( Width*height*breadth);

  }

  int getWidth()

  {

    return(Width=10);

  }

  int getHeight()

  {

    return(height=13);

  }

  int getBreadth()

  {

    return(breadth = 12);

  }

};



int main()

{

  abc obj1;

  obj1.getWidth(); // calling function

  obj1.getHeight(); // calling function

  obj1.getBreadth(); // calling function

  cout<<"\nEnter the length of box is :- "<<obj1.getWidth();

  cout<<"\nEnter the height of box is :- "<<obj1.getHeight();

  cout<<"\nEnter the breadth of the box is :- "<<obj1.getBreadth();

  cout<<"\nEnter the volume of the box:-length*height*breadth = "<<obj1.getVolume();

  return 0 ;

   

}


