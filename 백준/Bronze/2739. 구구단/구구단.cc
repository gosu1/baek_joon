#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < 9; i++){
        int result;
        result = n * (i+1);
        cout << n <<" "<< "*" <<" "<< i + 1 <<" "<< "=" <<" " << result << "\n";
    }
    return 0;
}