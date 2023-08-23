#include <iostream>

using namespace std;
int main() {
    int N, result =0;
    int temp , cnt =0; //cnt == count 약수의 개수
    cin >> N; //입력 받는 숫자 개수
    for (int i = 0; i< N; i++){
        cin >> temp; //소수인지 판별할 숫자
        //temp 약수 찾기
        for (int div = 1; div <= temp; div++) {
            if (temp % div == 0) //나머지 0일때
                cnt ++; //약수 개수 1증가
        }

        if (cnt == 2) // 약수 개수 2 == 1과 자기 자신만을 약수로 갖는 소수
            result++; //소수 개수 1 증가
        cnt = 0; //약수 개수 초기화하여 계속 반복문 사용
    }
    cout << result << '\n';
}
