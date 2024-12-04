#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

bool compareStudents(const Student& a, const Student& b) {
    int totalMarksA = a.math_marks + a.eng_marks;
    int totalMarksB = b.math_marks + b.eng_marks;

    if (totalMarksA != totalMarksB)
        return totalMarksA > totalMarksB;

    return a.id < b.id;
}

int main() {
    int N;
    cin >> N;

    Student* students = new Student[N];

    for (int i = 0; i < N; i++) {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    sort(students, students + N, compareStudents);

    for (int i = 0; i < N; i++) {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << "\n";
    }

    delete[] students;

    return 0;
}
