#include <iostream>
#include "GPA.h"
using namespace std;
int main() {
    gpa student1('A', 'B', 'A', 'A');
    cout << "Student GPA = " << student1.calculateGPA();
    return 0;
}
