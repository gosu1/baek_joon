#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    cin >> a;
    cin >> b;
    
    if (a > b){
        cout << ">";
    } if(a < b){
        cout << "<";
    } if (a==b){
        cout << "==";
    }
    return 0;
}