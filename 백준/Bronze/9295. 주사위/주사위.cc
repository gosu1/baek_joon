#include <iostream>

using namespace std;

int main(){
    int n;
    int sum;
    cin >> n;
    int a,b;
    for (int i=1; i<=n; i++){
        cin >> a >> b;
        sum = a+b;
        cout << "Case " << i <<": " << sum<<"\n";
    }
    return 0;
}
