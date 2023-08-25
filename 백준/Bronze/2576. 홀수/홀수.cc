#include <iostream>
#include <climits> // INT_MAX 헤더

using namespace std;

int main() {
    //1. 홀수인지 
    //2. 홀수들 합출력
    //3. 고른 홀수중 최솟값 출력
    
    int sum = 0;
    int arr[7];
    bool odd = false;

    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 1) {
            sum += arr[i];
            odd = true;
        }
    }
    
    int minOdd = INT_MAX; // int형 최댓값으로 초기화
    for (int i = 0; i < 7; i++) {
        if (arr[i] % 2 == 1 && arr[i] < minOdd) {
            minOdd = arr[i];
        }
    }

    if (odd) {
        cout << sum << '\n';
        cout << minOdd;
    } else {
        cout << -1;
    }

    return 0;
}
