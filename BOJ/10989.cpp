#include <iostream>
using namespace std;

int num[10000];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        num[x - 1]++;
    }
    for(int i = 0; i < 10000; i++){
        if(num[i] != 0){
            for(int j = 0; j < num[i]; j++){
                cout << i + 1 << '\n';
            }
        }
    }
}