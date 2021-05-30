#include <iostream>
using namespace std;
class complex{
    float real,img;
    public:
    void setcomplex(float real,float img)
    {
        this->real=real;
        this->img=img;
    }
    void displaycomplex()
    {
        cout<<real<<" "<<img<<endl;

    }
    complex add(complex c1,complex c2)
    {
        this->real=c1.real+c2.real;
        this->img=c1.img+c2.img;
    }
};
int main() {
	complex *c1 =new complex;
	complex *c2 =new complex;
	c1->setcomplex(10,20);
	c1->displaycomplex();
	c2->setcomplex(22,45);
	c2->displaycomplex();
	complex *c3 =new complex;
	c3->add(*c1,*c2);
	c3->displaycomplex();
	delete c1;
	delete c2;
	delete c3;
	return 0;
}

