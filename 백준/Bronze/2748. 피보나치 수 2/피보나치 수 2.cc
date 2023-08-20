#include <iostream>
//아래 방법 말고 dp(동적 프로그래밍):배열을 만들어 값들을 저장하여 배열 이용하여 답 구하는 방식
using namespace std;
//int 4bite longlong 8bite 배열 안에 변수 하나 당 크기 제한때문에 longlong사용
//보통 큰 정수를 다룰때 int 말고 long long 자료형 사용
long long arr[101];

long long fibo(int n) {
    if (n <= 1) {
        arr[n] = n;
        return arr[n];
    }
    if (arr[n] != 0) {
        return arr[n];
    }
    arr[n] = fibo(n - 1) + fibo(n - 2);
    return arr[n];
}

int main() {
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}

/*
 * 재귀 함수로 하면 연산량 너무 많아 시간초과
int fibo(int n);

int main(){
    int n=0;
    cin >> n;

    cout << fibo(n);

    return 0;
}

int fibo(int n) {
    if (n ==0) {
        return 0;
    } else if(n ==1 or n ==2){
        return 1;
    } else {
        return fibo(n-1) + fibo(n-2);
    }

}
 */