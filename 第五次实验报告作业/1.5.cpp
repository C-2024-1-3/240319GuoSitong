#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point(int i = 60, int j = 80) : x(i), y(j) {}
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }
    void display() {
        cout << "����Ϊ��(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p;
    p.display();
    p.setPoint(10, 10);
    p.display();
    return 0;
}