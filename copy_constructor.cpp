// copy constructor
#include <iostream>
using namespace std;
class number{
  int a ,b,c;
  public:
  number(){};
  number(int x,int y){
      a=x;
      b=y;
     c=a+b;
     cout<<"Paramiterized constructor..";
  }
   void print(void){
       cout<<" sum is = "<<c<<endl;
   }
  number(number &value){
  cout<<"copy constructor..";
   c=value.c;
   a=value.a;
   b=value.b;
   cout<<"a= "<<a<<" b= "<<b;
  }
};
int main() {
number q(2,3);
q.print();

number w(q);
w.print();

number u(q);
u.print();
    return 0;
}