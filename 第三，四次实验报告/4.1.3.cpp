#include <iostream>

void initLockers(bool lockers[], int size) {
    for (int i = 0; i < size; i++) {
        lockers[i] = false;
    }
}

void studentsOperateLockers(bool lockers[], int size) {
    for (int n = 1; n <= size; n++) {
        for (int i = n - 1; i < size; i += n) {
            lockers[i] = !lockers[i];
        }
    }
}

void findOpenLockers(bool lockers[], int size) {
    for (int i = 0; i < size; i++) {
        if (lockers[i]) {
            std::cout << (i + 1) << " ";
        }
    }
    std::cout << std::endl;
}
int main() {
    const int numLockers = 100;
    bool lockers[numLockers];
    initLockers(lockers, numLockers);
    studentsOperateLockers(lockers, numLockers);
    findOpenLockers(lockers, numLockers);
    return 0;