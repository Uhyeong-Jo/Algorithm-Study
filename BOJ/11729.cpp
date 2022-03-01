#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, int start, int mid, int end){
    if(n == 1){
        cout << start << ' ' << end << '\n';
        //마지막 원판 1 -> 3
    }
    else{
        hanoi(n - 1, start, end, mid);
        //n-1 원판 1 -> 2
        cout << start << ' ' << end << '\n';
        hanoi(n - 1, mid, start, end);
        //n-1 원판 2 -> 3
    }
}

int main(){
    int n;
    cin >> n;
    cout << (int)pow(2, n) - 1 << '\n';
    //최소 이동 횟수 = 2^n - 1
    //입력 최대가 20인 pow 함수의 특성상 오차가 커져서 (int)로 형변환
    hanoi(n, 1, 2, 3);
}