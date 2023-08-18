#include <iostream>
using  namespace std;

int main() {
    int arr[101];
    int n;
    int v;

    cin >> n;

    for(int i=0; i < n; i++){
        cin >> arr[i];
    }
    cin >> v;
    int sum =0;
    for(int i=0; i<n; i++){
        if (v == arr[i]){
            sum += 1;
        }
    }
    cout << sum;
    return 0;
}