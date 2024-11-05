#include <iostream>
using namespace std;
int main() {
    float p ,r, t ;
    cout << "Enter The Principle Amount : ";
    cin >> p ;
    cout << "Enter The Rate : ";
    cin >> r ;
    r = 0.01 * r ;
    cout << "Enter The Time : ";
    cin >> t ;
    cout << "The simple interest is : " << p * r * t;
    return 0;
}