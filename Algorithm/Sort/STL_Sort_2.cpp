//sort() [STL sort / <algorithm> library]
//vector, pair

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b){
    if(a.second.first == b.second.first){
        return a.second.second > b.second.second;
    }
    else{
        return a.second.first > b.second.first;
    }
}

int main(){
    //이중 pair (변수 3개)
    vector <pair<string, pair<int, int>>> v;

    v.push_back(pair<string, pair<int, int>>("Joe", pair<int, int>(90, 19981214)));
    v.push_back(pair<string, pair<int, int>>("Danny", pair<int, int>(78, 19910922)));
    v.push_back(pair<string, pair<int, int>>("Hobi", pair<int, int>(98, 19921112)));
    v.push_back(pair<string, pair<int, int>>("Anne", pair<int, int>(90, 19950909)));
    v.push_back(pair<string, pair<int, int>>("Noel", pair<int, int>(82, 20021030)));

    sort(v.begin(), v.end(), compare);

    for(auto x : v){
        cout << x.first << ' ';
    }
}

