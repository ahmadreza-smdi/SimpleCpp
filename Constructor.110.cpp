#include <iostream>
using namespace std;
class Array
{
private:
	int* p = 0;
	int n = 0;
public:
	Array(int inputN)
	{
		p = new int[inputN];
		n = inputN;
	}
	void input(void);
	~Array(void)
	{
		int i = 0;
		for(; i < n; i++)
		{
			cout << p[i] << endl;
		}
		delete[] p;//it is for deleting Array
		cout <<"Finish";
	}
};
void Array::input(void)
{
	int i = 0;
	for(; i < n; i++)
	{
		cout << "Enter Array " << i << " : ";
		cin >> p[i];
	}
}
int main(){
	Array m(10);
	m.input();
	return 0;
}
