#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
    float img;
    float real;
public:
    void setvalue();
    void sum(Complex , Complex);
    void sub(Complex , Complex);
    void multiply(Complex , Complex);
    void divide(Complex , Complex);
    void conjugate(Complex);
    void display();
};

void Complex :: setvalue()
{
    cout << "please enter the real and imaginary terms :\n";
    cin>> real;
    cin>> img;
}
void Complex :: sum(Complex c1, Complex c2)
{
    real= c1.real + c2.real;
    img = c1.img + c2.img;
}
void  Complex :: sub(Complex c1, Complex c2)
{
    real= c1.real - c2.real;
    img = c1.img - c2.img;
}
void Complex :: multiply(Complex c1, Complex c2)
{
    real= c1.real*c2.real - (c1.img*c2.img);
    img = c1.real*c2.img + (c1.img*c2.real);
}
void Complex :: conjugate(Complex c)
{
    real= c.real;
    img = -c.img;
}
void Complex :: divide(Complex c1, Complex c2)
{
    real= ((c1.real*c2.real) - (c1.img*c2.img))/(pow(c2.real,2) + pow(c2.img,2));
    img = ((c1.real*c2.img) + (c2.real*c1.img))/(pow(c2.real,2) + pow(c2.img,2));

}
void Complex :: display()
{
    if (img >= 0)
        cout<< real<<"+"<< img<<"i"<< endl;
    else
    cout<< real<< img<<"i"<< endl;
}
int main()
{
    Complex c1,c2,c3;
    c1.setvalue();
    c2.setvalue();
    cout<< "The sum of the complex no. is: "<<endl;
    c3.sum(c1,c2);
    c3.display();
    cout<< "The subtraction of the Complex no. is: "<<endl;
    c3.sub(c1,c2);
    c3.display();
    cout<< "The multiplication of the Complex no. is: "<<endl;
    c3.multiply(c1,c2);
    c3.display();
    cout<< "The conjugate of the 1st Complex no. is: "<<endl;
    c3.conjugate(c1);
    c3.display();
    cout<< "The conjugate of the 2nd Complex no. is: "<<endl;
    c3.conjugate(c2);
    c3.display();
    cout<< "The division of the Complex no. is: "<<endl;
    c3.divide(c1,c2);
    c3.display();

}