#include <iostream>
using namespace std;

int number = 100000;
int a[1000001];

void primeNumberSieve(){
    //�迭 ���� �� �ʱ�ȭ
    //0, 1�� ��¥�� �Ҽ��� �ƴϹǷ� ����
    //a[0] = null; a[1] = null;
    for(int i = 2; i <= number; i++){
        a[i] = i;
    }

    //2���� �����Ͽ��� i�� ����� ��� �����.
    //���ﶧ �ڱ� �ڽ� i�� ���� �����ϰ� �̹� ������ ���� �ǳʶڴ�.
    for(int i = 2; i <= number; i++){
        if(a[i] == 0)
            continue;   //�̹� ������ ���� �ǳʶٱ�
        //�̹� ������ ���� �ƴ϶��, �� ������� �����Ͽ� ��� ��� �����
        for(int j = 2*i; j <= number; j+=i){
            a[j] = 0;
        }
    }

    //2���� �������� �ʰ� �����ִ� ���� ��� ���
    for(int i = 2; i <= number; i++){
        if(a[i] != 0){
            cout << a[i] << ' ';
        }
    }
}

int main(){
    primeNumberSieve();
}

//i�� �Ҽ��̹Ƿ� i ������ ���� ����� �Ҽ��� �ƴϰ� �ȴ�.
//ex) 2�� �Ҽ��̸� 2�� ��� 4,6,8,10...�� �Ҽ��� �ƴ�.
