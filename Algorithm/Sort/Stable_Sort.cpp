//안정 정렬
//값이 같은 원소의 전후관계가 바뀌지 않는 정렬

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <pair<int, string>> v;
    v.push_back(pair<int, string>(21, "Junkyu"));
    v.push_back(pair<int, string>(21, "Dohyun"));
    v.push_back(pair<int, string>(20, "Sunyoung"));

    stable_sort(v.begin(), v.end());

    for(auto x : v){
        cout << x.first << ' ' << x.second << '\n';
    }
}