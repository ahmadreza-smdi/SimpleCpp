#include <iostream>
using namespace std;
class Complexcls{
	int re;
	int im;
	public:
	Complexcls(void){
		cout << "please enter real part:";
		cin >> re;
		cout << "please enter imaginary part:";
		cin >> im;
		cout << re <<"+"<<"i"<<im<<endl;
	};
	~Complexcls(void){
		cout << "it is at the end of proccess.";
	}
	Complexcls operator =(Complexcls input){
		re=input.re;
		im=input.im;
		return *this;
	};
};
int main(){
	Complexcls a,b;
	a=b;
	return 0;
}
