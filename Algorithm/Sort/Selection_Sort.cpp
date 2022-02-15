//선택 정렬
//가장 작은 것을 선택해서 제일 앞으로 보낸다.

#include <iostream>
using namespace std;

int main(){
    int min, index, temp;
    int num[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

    for(int i = 0; i < 10; i++){
        min = 9999;

        for(int j = i; j < 10; j++){
            if(min > num[j]){
                min = num[j];
                index = j;
            }
        }
        temp = num[i];
        num[i] = num[index];
        num[index] = temp;
    }
    for(int i = 0; i < 10; i++){
        cout << num[i] << ' ';
    }
}