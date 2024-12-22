#include <iostream>
using namespace std;

class Student {
private:
    int id;
    int score;
public:
    Student(int i, int s) : id(i), score(s) {}
    int getScore() { return score; }
    int getId() { return id; }
};

void max(Student* students, int n) {
    int maxScore = students[0].getScore();
    int maxId = students[0].getId();
    for (int i = 1; i < n; i++) {
        if (students[i].getScore() > maxScore) {
            maxScore = students[i].getScore();
            maxId = students[i].getId();
        }
    }
    cout << "最高成绩者学号为：" << maxId << endl;
}

int main() {
    Student students[5] = { Student(1, 80), Student(2, 90), Student(3, 75), Student(4, 95), Student(5, 85) };
    max(students, 5);
    return 0;
}