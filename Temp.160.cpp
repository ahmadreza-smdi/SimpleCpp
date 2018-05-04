#include <iostream>
using namespace std;
template < class X >
void swapArg(X &a , X &b){
  X temp;
  temp = a;
  a = b ;
  b = temp ;
  cout << "the swapArg has been runned"<<endl;
}
int main(){
  int a = 5,b = 6;
  double x = 2.3 , y = 5.9 ;
  char i = 'p',j = 'z';
  cout << "Original a , b ="<<"(" << a <<"," << b <<")"<< endl;
  cout << "Original x , y ="<<"(" << x <<"," << y <<")"<<endl;
  cout << "Original i =" << i <<endl << "Original j ="<< j <<endl;
  swapArg(a,b);
  swapArg(x,y);
  swapArg(i,j);
  cout << "swapArg  a , b ="<<"(" << a <<"," << b <<")"<< endl;
  cout << "swapArg  x , y ="<<"(" << x <<"," << y <<")"<<endl;
  cout << "swapArg  i =" << i <<endl << "swapArg j ="<< j <<endl;
  return 0;
}
