//sort() [STL sort / <algorithm> library]
//데이터를 묶어서 정렬
//O(N*logN)

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Student{
public:
    string name;
    int score;
    Student(string name, int score){
        this->name = name;
        this->score = score;
    }
    bool operator <(Student &student){
        return this->score < student.score;
    }
};

bool compare(int a, int b){
    return a < b;
}

int main(){
    Student students[] = {
        Student("Joe", 90),
        Student("Danny", 78),
        Student("Hobi", 98),
        Student("Anne", 68),
        Student("Noel", 82)
    };
    sort(students, students + 5);
    for(int i = 0; i < 5; i++){
        cout << students[i].name << ' ';
    }
}