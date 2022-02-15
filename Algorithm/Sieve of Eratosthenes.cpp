#include <iostream>
using namespace std;

int number = 100000;
int a[1000001];

void primeNumberSieve(){
    //배열 생성 및 초기화
    //0, 1은 어짜피 소수가 아니므로 제외
    //a[0] = null; a[1] = null;
    for(int i = 2; i <= number; i++){
        a[i] = i;
    }

    //2부터 시작하여서 i의 배수를 모두 지운다.
    //지울때 자기 자신 i의 수를 제외하고 이미 지워진 수는 건너뛴다.
    for(int i = 2; i <= number; i++){
        if(a[i] == 0)
            continue;   //이미 지워진 수는 건너뛰기
        //이미 지워진 수가 아니라면, 그 배수부터 시작하여 모든 배수 지우기
        for(int j = 2*i; j <= number; j+=i){
            a[j] = 0;
        }
    }

    //2부터 지워지지 않고 남아있는 수를 모두 출력
    for(int i = 2; i <= number; i++){
        if(a[i] != 0){
            cout << a[i] << ' ';
        }
    }
}

int main(){
    primeNumberSieve();
}

//i가 소수이므로 i 다음에 오는 배수는 소수가 아니게 된다.
//ex) 2가 소수이면 2의 배수 4,6,8,10...는 소수가 아님.
