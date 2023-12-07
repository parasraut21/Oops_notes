#include <iostream>
using namespace std;

//Problem Statement: Define a class Complex consisting following:
//Data members:
//a. real
//b. imaginary part
//Member Functions:
//a. One default constructor
//b. Function setComplex () to set the value of real and imaginary part.
//c. Function printComplex() to display
//and
//Four overloaded operator member functions
//
//i.   Operator+ to add two complex numbers.
//ii.  Operator * to multiply two complex numbers.
//iii. Operator – to subtract two complex numbers using friend function.
//iv.  Operator / to divide two complex numbers using friend function..



class complex{
private:
int real;
int ip;

public:
complex(){
real = 0;
ip = 0;
}

void setcomplex(int r, int m){
real = r;
ip = m ;
}

void display(){
cout<<"The real and imaginary number is : "<<real <<" + "<<ip<<"i"<<endl;
}

// i.  Operator+ to add two complex numbers.
complex operator +(complex);
//ii.  Operator * to multiply two complex numbers.
complex operator *(complex);


//iii. Operator – to subtract two complex numbers using friend function.
   friend complex operator - (complex c1, complex c2);
    // iv.  Operator / to divide two complex numbers using friend function..
   friend complex operator / (complex c1, complex c2);

};

//i.   Operator+ to add two complex numbers.
complex complex :: operator + (complex c){
complex temp;
temp.real = real + c.real;
temp.ip =   ip +  c.ip;
return (temp);
}

//ii.  Operator * to multiply two complex numbers.
complex complex :: operator * (complex c){
complex temp;
temp.real = real * c.real;
temp.ip =   ip *  c.ip;
return (temp);
}



//iii. Operator – to subtract two complex numbers using friend function.
complex operator -(complex c1, complex c2)
{
        complex c;
        c.real =   c1.real - c2.real;
        c.ip   =   c1.ip   - c2 .ip;
        return(c);
}

//iv.  Operator / to divide two complex numbers using friend function..
complex operator /(complex c1, complex c2)
{
        complex c;
        c.real =   c1.real / c2.real;
        c.ip   =   c1.ip   / c2 .ip;
        return(c);
}




int main() {
complex c1,c2,c3,c4,c5,c6,c7,c8;
c1.setcomplex(5,6);
c2.setcomplex(3,3);

//using :: operator
cout<<"Using :: operator "<<endl;
c3 = c1 + c2 ;
c4 = c1 * c2 ;
c3.display();
c4.display();

cout<<"Using Friend Function "<<endl;
c5.setcomplex(2,6);
c6.setcomplex(4,12);
c8 = c6 - c5 ;
c7 = c6 / c5 ;
c8.display();
c7.display();
return 0;
}