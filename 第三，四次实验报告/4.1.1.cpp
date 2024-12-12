#include <iostream>
#include <vector>

int main() {
    std::vector<int> distinctNumbers;
    std::cout << "Enter ten numbers: ";

    for (int i = 0; i < 10; ++i) {
        int num;
        std::cin >> num;
        bool isNew = true;

        for (const auto& existingNum : distinctNumbers) {
            if (num == existingNum) {
                isNew = false;
                break;
            }
        }

        if (isNew) {
            distinctNumbers.push_back(num);
        }
    }

    std::cout << "The distinct numbers are: ";
    for (const auto& num : distinctNumbers) {
        std::cout << num << " ";
    }

    return 0;
}