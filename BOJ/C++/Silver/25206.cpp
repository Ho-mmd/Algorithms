#include <iostream>
#include <string>

/*
* struct : Declare new data type combining one or more variables / functions
*/
typedef struct Data {
    std::string subject;
    double gpa;
    std::string grade; 
} Data;

int main() {
    Data data[20];
    double ans = 0, tot = 0;

    for(int i = 0; i < 20; i++) {
        std::cin >> data[i].subject >> data[i].gpa >> data[i].grade;
    }

    for(int i = 0; i < 20; i++) {
        if(data[i].grade == "P")
            continue;
        else {
            if(data[i].grade == "A+") {
                ans += data[i].gpa * 4.5;
                tot += data[i].gpa;
            } else if(data[i].grade == "A0") {
                ans += data[i].gpa * 4.0;
                tot += data[i].gpa;
            } else if(data[i].grade == "B+") {
                ans += data[i].gpa * 3.5;
                tot += data[i].gpa;
            } else if(data[i].grade == "B0") {
                ans += data[i].gpa * 3.0;
                tot += data[i].gpa;
            } else if(data[i].grade == "C+") {
                ans += data[i].gpa * 2.5;
                tot += data[i].gpa;
            } else if(data[i].grade == "C0") {
                ans += data[i].gpa * 2.0;
                tot += data[i].gpa;
            } else if(data[i].grade == "D+") {
                ans += data[i].gpa * 1.5;
                tot += data[i].gpa;
            } else if(data[i].grade == "D0") {
                ans += data[i].gpa * 1.0;
                tot += data[i].gpa;
            } else {
                tot += data[i].gpa;
            }
        }
    }

    // Set the number of demical places
    std::cout.precision(7);

    if(ans == 0)
        std::cout << 0.000000;
    else
        std::cout << ans / tot;

    return 0;
}