#include<bits/stdc++.h>
using namespace std;
class rectangle
{
  public: int length;
  int breadth;
  int area(){
    return length*breadth;
  }
  int perimeter(){
    return 2*(length+breadth);
  }
};
int  main(){
   rectangle*p,temp;
   p=&temp;
   p->length=9;
   p->breadth=10;
   cout<<"The area of given rectangle is "<<' '<<p->area();
   return 0;
}