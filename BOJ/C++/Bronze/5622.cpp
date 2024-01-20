#include <iostream>
#include <string>

int main() {
    std::string diar;
    int ans = 0;
    std::cin >> diar;

    for(int i = 0; i < diar.size(); i++) {
        if('A' <= diar[i] && diar[i] <= 'C')
            ans += 3;
        else if('D' <= diar[i] && diar[i] <= 'F')
            ans += 4;
        else if('G' <= diar[i] && diar[i] <= 'I')
            ans += 5;
        else if('J' <= diar[i] && diar[i] <= 'L')
            ans += 6;
        else if('M' <= diar[i] && diar[i] <= 'O')
            ans += 7;
        else if('P' <= diar[i] && diar[i] <= 'S')
            ans += 8;
        else if('T' <= diar[i] && diar[i] <= 'V')
            ans += 9;
        else if('W' <= diar[i] && diar[i] <= 'Z')
            ans += 10;
    }

    std::cout << ans;

    return 0;
}