#include <iostream>

int main() {
    int price, cnt, pri, num;

    std::cin >> price >> cnt;

    for(int i = 0; i < cnt; i++) {
        std::cin >> pri >> num;
        price -= pri * num;
    }

    if(price == 0)
        std::cout << "Yes";
    else
        std::cout << "No";

    return 0;
}