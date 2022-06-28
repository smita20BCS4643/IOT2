#include<iostream>
using namespace std;
class tempreture
{
	int celsius;
	public:
		tempreture()
		{
			celsius = 0;	
		}
			friend int tempreture(tempreture);
};
int temp(tempreture obj)
{
	obj.celsius= 40;
	return obj.celsius;
}
int main()
{
	tempreture obj1;
	cout<<"tempreture is celsius : "<< tempreture(tempreture)<<endl;
	return 0 ;
}

