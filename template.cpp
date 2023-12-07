#include <iostream>
using namespace std;
template<class T>
class vector{
  T a;
  T b;
  public:
  vector(T v , T x){
      a=v;
      b=x;
      cout<<a+b<<endl;
  }
};
int main(){
    vector<int>v1(2.5,2.5);
    vector<float>v2(2.5,2.5);
    return 0;
}