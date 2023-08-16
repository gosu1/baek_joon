#include <iostream>
#include <string>

using namespace std;

int main() {
    int t, a, b;
    string tmp;
    cin >> t;

    for (int i =1; i <= t; ++i){
        cin >> a;
        cin >> b;
        int sum = a+b;
        tmp += to_string(sum) + "\n";
    }
    cout << tmp;


    return 0;
}