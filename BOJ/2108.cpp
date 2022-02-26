#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int num[8001];  //-4000~-1 (0-3999), 0~4000 (4000-8000)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int *arr;
    int x, n, cnt = 0, max = 0;
    int total = 0, mid, most = 0, range;
    double avg;
    bool check = false;

    cin >> n;
    arr = new signed int[n];

    for(int i = 0; i < n; i++){
        cin >> x;
        total += x;
        num[x + 4000]++;
        arr[i] = x;
    }

    avg = round((double)total / n);    //산술평균 : 소수점 이하 첫째 자리에서 반올림
    if(avg == -0){
        avg = 0;
    }
    cout << avg << '\n';

    sort(arr, arr + n);
    mid = arr[n / 2];   //중앙값
    cout << mid << '\n';

    for(int i = 0; i < 8001; i++){
        if(num[i] != 0){
            if(max < num[i]){
                check = false;
                max = num[i];
                most = i - 4000;
            }
            else if(max == num[i]){
                check = true;
            }
        }
    }
    if(check == true){
        for(int i = 0; i < 8001; i++){
            if(num[i] == max){
                cnt++;
                if(cnt == 2){
                    most = i - 4000;
                    cout << most << '\n';
                    break;
                }
            }
        }
    }
    else{
        cout << most << '\n';
    }
    range = arr[n-1] - arr[0];
    cout << range;
}