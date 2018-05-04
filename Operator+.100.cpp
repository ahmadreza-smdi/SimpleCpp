#include <iostream>
using namespace std;
class ComplexNum
{
private:
	double re = 0;
	double im = 0;
public:
	ComplexNum operator+(ComplexNum input)
	{
		ComplexNum result;
		result.re = this->re + input.re;
		result.im = this->im + input.im;
		return result;
	}
	void input(void)
	{
		cout << "Enter Real Part: ";
		cin >> re;
		cout << "Enter Imaginary Part: ";
		cin >> im;
	}
	void print(void)
	{
		cout << re << " + " << im << "i" << endl;
	}
};
int main(){
	ComplexNum a, b, c;
	a.input();
	b.input();
	c = a + b;
	c.print();
	return 0;
}
