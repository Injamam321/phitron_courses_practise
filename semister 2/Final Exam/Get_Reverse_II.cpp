#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int cls;
    char section;
    int id;
};

int main() {
    int N;
    cin >> N;

    Student* students = new Student[N];

    for (int i = 0; i < N; i++) {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
    }

    for (int i = 0; i < N / 2; i++) {
        swap(students[i].id, students[N - i - 1].id);
    }

    for (int i = 0; i < N; i++) {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << "\n";
    }

    delete[] students;

    return 0;
}
