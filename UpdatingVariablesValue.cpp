#include <iostream>
using namespace std;
int main() {
    int x = 10, y = 5, Z ;
    cout << x <<endl;//10
    x = x+5;
    cout << x <<endl;//15
    x -= 3 ;
    cout << x <<endl;//12
    cout << y <<endl;//5
    y +=2 ;
    cout << y <<endl;//7
    x = y*x ;
    cout << x <<endl;//84
}