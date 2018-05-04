#include <iostream>
using namespace std;
class Complexcls{
private:
  double re,im;
public:

  void input(double a,double b){
    re = a;
    im = b;
  };
  void Show (void){
    cout << "(" << re << "," << im <<")";
  };
  Complexcls operator+(Complexcls a){
    Complexcls result;
    result.re = this->re + a.re;
    result.im = this->im + a.im;
    return result;
  };
  Complexcls operator=(Complexcls a){
    this->re = a.re;
    this->im = a.im;
    return *this;
  };
  Complexcls operator-(Complexcls a){
    Complexcls resultt;
    resultt.re = this->re - a.re ;
    resultt.im = this->im - a.im ;
    return resultt;
  };
  void operator ++ (int){
    this->re++;
    this->im++;
  };
  void operator ++ (){
	  ++this->re;
	  ++this->im;
  };
  void operator--(){
    --this->re;
    --this->im;
  };
  void operator--(int){
    this->re--;
    this->im--;
  };
  Complexcls operator+=(Complexcls a){
    this->re += a.re;
    this->im += a.im;
    return *this;
  };
  bool operator !=(Complexcls a){
	  if(this->re != a.re || this->im != a.im )return true;
    return false;
  };
  Complexcls operator * (Complexcls a){
    Complexcls resu;
    resu.re = this->re * a.re ;
    resu.im = this->im * a.im ;
    return resu;
  };
  void operator *=(Complexcls a){
    this->re*=a.re;
    this->im*=a.im;
  };
  void operator -=(Complexcls a){
    this->re -= a.re;
    this->im -= a.im;
  };
  Complexcls operator /(Complexcls a){
    Complexcls resul;
    resul.re = this->re / a.re;
    resul.im = this->im / a.im;
    return resul;
  };
  void operator /=(Complexcls a){
    this->re /= a.re ;
    this->im /= a.im;
  };
  bool operator < (Complexcls a){
    if(this->re < a.re && this->im < a.im)return true;
    return false;
  };
 bool operator <= (Complexcls a){
    if(this->re <= a.re && this->im <= a.im)return true;
    return false;
  };
  bool operator == (Complexcls a){
    if(this->re == a.re && this->im == a.im)return true;
    return false;
  };
  bool operator > (Complexcls a){
    if(this->re > a.re && this->im > a.im)return true;
    return false;
  };
 bool operator >= (Complexcls a){
    if(this->re >= a.re && this->im >= a.im)return true;
    return false;
  };
  Complexcls operator ^(int a){
	Complexcls rres;
	rres.re=1;
	rres.im=1;
	for(; a > 0 ; a--){
		rres.re = rres.re * this->re;
		rres.im = rres.im * this->im;
	};
	return rres;
  };

  friend ostream& operator <<(ostream & o1, Complexcls a);
  friend istream& operator >>(istream & o1 ,Complexcls &a);
};
ostream& operator <<(ostream & o1, Complexcls a){
    o1 << "("<< a.re << "," << a.im << ")";
    return o1;
  };
  istream& operator >>(istream & o1 ,Complexcls &a){
    cout <<"Enter real part:";
    o1 >> a.re;
    cout << "Enter Imaginary part:";
    o1 >> a.im;
    return o1;
  };
int main(){
	Complexcls a,b;
	cin >> a;
	cout << a << endl;
	cin >> b;
	cout << b << endl;
	if(a!=b)cout << "a!b" << endl;
	a=a*b;cout << a << endl;
	a*=b;cout << a << endl;
	a=a+b;cout << a << endl;
	a++;cout << a << endl;
	a+=b;cout << a << endl;
	a=a-b;cout << a << endl;
	a--;cout << a << endl;
	a-=b;cout << a << endl;
	a=a/b;cout << a << endl;
	a/=b;cout << a << endl;
	if(a<b)cout << "a<b" << endl;
	if(a<=b)cout << "a<=b" << endl;
	a=b;cout << a << endl;
	if(a==b)cout << "a==b" << endl;
	if(a>b)cout << "a>b" << endl;
	if(a>=b)cout << "a>=b" << endl;
	a=a^2;cout << a << endl;
  return 0;
}
