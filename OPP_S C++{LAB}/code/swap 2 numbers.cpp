include <iostream>

using namespace std;

int
main ()
{

  int A, B;

  cout << " Enter 2 numbers to swap : " << endl;

  cout << " P =";

  cin >> A;

  cout << " Q =";

  cin >> B;

  A = A ^ B;

  B = A ^ B;

  A = A ^ B;

  cout << " Using bitwise XOR (^) operator to quickly swap two number :" <<
    endl;
  cout << " The result is swaping done :\n P = " << A << "\n Q = " << B;

  return 0;

}
