//���� ����
//���� ���� ������ ���İ��谡 �ٲ��� �ʴ� ����

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