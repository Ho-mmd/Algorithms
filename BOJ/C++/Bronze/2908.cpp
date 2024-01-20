#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string num1, num2;
    int mun1, mun2;

    std::cin >> num1 >> num2;

    std::reverse(num1.begin(), num1.end());
    std::reverse(num2.begin(), num2.end());

    // stoi : string to int
    mun1 = stoi(num1);
    mun2 = stoi(num2);

    if(mun1 > mun2)
        std::cout << mun1;
    else
        std::cout << mun2;

    return 0;
}