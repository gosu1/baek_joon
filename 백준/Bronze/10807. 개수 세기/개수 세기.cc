#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    int arr[101];
    int v;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> v;
    int res = 0;
    for (int i =0; i<n; i++){
        if(arr[i] == v)
            res++;
    }
    cout << res;
}