#include <iostream>

using namespace std;
int main(){
    int n;
    char ch;
    cin >> n;
    int sum = 0;
    for (int i=0; i< n; i++){
        cin >> ch;
        sum += ch -48; //char형으로 받아서, 아스키 코드'0'의 값, 48 뺴줌
    }
    cout << sum << endl;
    return 0;
}