// Find post increment and post increament in given number ?
#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int y;

    //Value of x will not be increased  before assignment.


    y = x++;
    cout<<"Value of x++ is :"<<y<<endl;

    //After expression value of x is increased
    cout<<"Value of x is "<<x<<endl;
    
    //value of x will be increased before assignment.
    y= ++x;

    cout<<"Value of ++x is "<<y<<endl;
    
    return 0;
}