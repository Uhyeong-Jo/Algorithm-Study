//좌표 압축 기법
//인덱싱

#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector <pair<int, int>> v;  //first = x, second = index
    
    int n, x, tmp, cnt = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(pair<int, int>(x, i));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        if(v[i].first == v[i+1].first){
            v[i].first = cnt;
            continue;
        }
        v[i].first = cnt;
        cnt++;
    }
    sort(v.begin(), v.end(), compare);
    for(auto k : v){
        cout << k.first << ' ';
    }
}
