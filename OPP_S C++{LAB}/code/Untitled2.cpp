#include<iostream>
#include<string>
using namespace std;
class ABC
 {
 	 static int i;
 	
 	public:
 		void show()
		 {
		 
 			i++;
 		cout<<"i"<<endl;
		 }
 		void operator()
 		{
 			cout<<"objects"<<endl;
 		};
 };
  class XYZ
  {
  	public:
  };
  
  int main()
  {
  	ABC a1, a2;
  	return 0;
  }
