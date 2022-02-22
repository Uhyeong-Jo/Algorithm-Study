//병합 정렬
//일단 정확히 반으로 나누고 나중에 정렬
//O(N*logN) 보장

#include <iostream>
using namespace std;

const int num = 8;
int sorted[8];  //정렬 배열은 반드시 전역 변수로 선언

void merge(int a[], int m, int middle, int n){  
    //두 개의 정렬된 배열을 가지고 새롭게 정렬된 하나의 배열로 병합

    //m : 시작점, middle : 중간점, n : 끝점
    int i = m;
    int j = middle + 1;
    int k = m;

    //작은 순서대로 배열에 삽입
    while(i <= middle && j <= n){
        if(a[i] <= a[j]){
            sorted[k] = a[i];
            i++;
        }
        else{
            sorted[k] = a[j];
            j++;
        }
        k++;
    }

    //남은 데이터 삽입
    if(i > middle){
        for(int t = j; t <= n; t++){
            sorted[k] = a[t];
            k++;
        }
    }
    else{
        for(int t = i; t <= middle; t++){
            sorted[k] = a[t];
            k++;
        }
    }

    //정렬된 배열을 삽입
    for(int t = m; t <= n; t++){
        a[t] = sorted[t];
    }
}

void mergeSort(int a[], int m, int n){
    //크기가 1보다 큰 경우
    if(m < n){
        int middle = (m + n) / 2;
        mergeSort(a, m, middle);
        mergeSort(a, middle + 1, n);
        merge(a, m, middle, n);
    }
}

int main(){
    int arr[num] = {7, 6, 5, 8, 3, 5, 9, 1};

    mergeSort(arr, 0, num - 1);

    for(int i = 0; i < num; i++){
        cout << arr[i] << ' ';
    }
}