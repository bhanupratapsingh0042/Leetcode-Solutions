#include <iostream>
using namespace std;
int c = 45;
int main(){
    //int a, b, c ;
    //cout<<"the value of a is:"<<endl;
    //cin>>a;
   // cout<<"the value of b is:"<<endl;
   // cin>>b;
    //c = a+b;
    //cout<<"the sum is "<<c<<endl;

   // cout<<"the global c is "<<::c <<endl;

   // float d=34.4F;
   // long double e = 34.4L;
   // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
   // cout<<"The size of 34.4 is "<<sizeof(34.4f)<<endl;
    //cout<<"The size of 34.4 is "<<sizeof(34.4F)<<endl;
   // cout<<"The size of 34.4 is "<<sizeof(34.4l)<<endl;
    //cout<<"The size of 34.4 is "<<sizeof(34.4L)<<endl;
    //******************* reference variables***************** */
    // rohan das----> monty-----> rohu-----> dangerous coder
  //  float x = 455;
   // float &y = x;
    //cout<<x<<endl;
   // cout<<y<<endl;

   //********************** typecasting************************ */
   //convert a datatype to other datatype
   int a = 45;
   float b =45.66;
   cout<<"the value of a is "<<(int)a;
   cout<<"the value of b is "<<float(a);

   cout<<"the value of b is "<<(int)b;
   cout<<"the value of b is "<<int (b);
   int c = int(b);

   cout<<"the expression is "<<a + b;
   cout<<"the expressionn is "<< a + int (b);
   cout<<"the expression is "<<a + (int)b;
    return 0;
}