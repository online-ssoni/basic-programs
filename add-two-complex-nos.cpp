#include<iostream>
using namespace std;

class Complex{
public:
	int real, img;
};

int main(){
	Complex a,b,c;

	cout<<"Enter a and b where a+ib is the first complex number."<<endl;
	cout<<"a = "<<endl;
	cin>>a.real;
	cout<<"b = "<<endl;
	cin>>a.img;

	cout<<"Enter c and d where c+id is the second complex number."<<endl;
	cout<<"c = "<<endl;
	cin>>b.real;
	cout<<"d = "<<endl;
	cin>>b.img;

	c.real = a.real + b.real;
	c.img = a.img + b.img;
	cout<<"Sum of two complex numbers is "<<c.real<<" + i"<<c.img<<endl;


	return 0;
}
