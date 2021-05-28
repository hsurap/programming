#include <iostream>
using namespace std;
class complex
{
    private:
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
	complex c1,c2;
	c1.setcomplex(10,20);
	c1.displaycomplex();
	c2.setcomplex(22,45);
	c2.displaycomplex();
	complex c3;
	c3.add(c1,c2);
	c3.displaycomplex();
	return 0;
}
