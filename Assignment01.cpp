#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int y;

    y = x++;
    cout<<y<<endl;
    cout<<x<<endl;

    y= ++x;

    cout<<y<<endl;
    cout<<x<<endl;
    return 0;
}