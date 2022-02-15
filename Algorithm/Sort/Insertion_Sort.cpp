//삽입정렬
//O(N^2)

#include <iostream>
using namespace std;

int main(){
    int i, j, temp;
    int num[10] = {1, 5, 6, 7, 10, 2, 8, 4, 3, 9};

    for(int i = 0; i < 9; i++){
        j = i;
        while(j >= 0 && num[j] > num[j + 1]){
            temp = num[j];
            num[j] = num[j + 1];
            num[j + 1] = temp;
            j--;
            /*
            if(j < 0)
                break;
            */
        }
    }
    for(int i = 0; i < 10; i++){
        cout << num[i] << ' ';
    }
}
