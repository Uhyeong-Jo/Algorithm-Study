//버블 정렬
//옆에 있는 값과 비교하여 더 작은 값을 반복적으로 앞으로 보낸다.
//O(N^2)

#include <iostream>
using namespace std;

int main(){
    int temp;
    int num[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

    for(int i = 0; i < 10; i++){    //i < 9 => ok
        for(int j = 0; j < 9 - i; j++){
            if(num[j] > num[j + 1]){
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        cout << num[i] << ' ';
    }
}
