#include<iostream>
using namespace std;
class student{
int a,b;
public:
student(void);
void print(void){
    cout<<a<<" "<<b;
}
};
student :: student(void){
    a=20;
    b=34;
}

int main() {

    student s1;
    s1.print();
}                                                               