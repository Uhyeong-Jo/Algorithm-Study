//계수 정렬
//범위 조건이 있는 경우에 한해서 매우 빠른 알고리즘
//크기를 기준으로 갯수를 세는 알고리즘
//O(N)

#include <iostream>
using namespace std;

int main(){
    int temp;
    int count[5];
    int arr[30] = {
        1, 3, 2, 4, 3, 2, 5, 3, 1, 2,
        3, 4, 4, 3, 5, 1, 2, 3, 5, 2,
        3, 1, 4, 3, 5, 1, 2, 1, 1, 1
    };
    for(int i = 0; i < 5; i++){
        count[i] = 0;
    }
    for(int i = 0; i < 30; i++){
        count[arr[i] - 1]++;
    }
    for(int i = 0; i < 5; i++){
        if(count[i] != 0){
            for(int j = 0; j < count[i]; j++){
                cout << i + 1;
            }
        }
    }
}