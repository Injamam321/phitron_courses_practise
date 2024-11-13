#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int cls;
    char section;
    int math_marks;
    int eng_marks;
};

int main() {
    int N;
    cin >> N;

    vector<Student> students(N);

    for (int i = 0; i < N; i++) {
        cin >> students[i].name >> students[i].cls >> students[i].section
             >> students[i].math_marks >> students[i].eng_marks;
    }

    reverse(students.begin(), students.end());

    for (const auto& student : students) {
        cout << student.name << " " << student.cls << " " << student.section
             << " " << student.math_marks << " " << student.eng_marks << "\n";
    }

    return 0;
}
