#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        int sum = 0;
        cin >> N;
        
        for (int n = 0; n < N; n++) {
            int num;
            cin >> num;
            sum += num;
        }
        
        cout << sum << endl; 
    }

    return 0;
}
