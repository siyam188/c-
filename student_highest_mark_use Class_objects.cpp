#include <bits/stdc++.h>
using namespace std;
class Student {
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string n, int r, char s, int m, int c) {
        name = n;
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};

int main() {

    Student s1("Rahim", 1, 'A', 85, 10);
    Student s2("Karim", 2, 'B', 90, 10);
    Student s3("Anika", 3, 'A', 95, 10);
    if(s1.math_marks > s2.math_marks && s1.math_marks > s3.math_marks) {
        cout << s1.name << " got highest marks." << endl;
    }
    else if(s2.math_marks > s1.math_marks && s2.math_marks > s3.math_marks) {
        cout << s2.name << " got highest marks." << endl;
    }
    else {
        cout << s3.name << " got highest marks." << endl;
    }

    return 0;
}
