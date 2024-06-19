#include <bits/stdc++.h>

using namespace std;

class Student {
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool compare(const Student& a, const Student& b) {
    if (a.eng_marks != b.eng_marks) {
        return a.eng_marks > b.eng_marks;
    }
    if (a.math_marks != b.math_marks) {
        return a.math_marks > b.math_marks;
    }
    return a.id < b.id;
}

int main() {
    int N, i;
    cin >> N;

    Student students[1000];

    for(i=0;i<N;i++) {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    sort(students, students + N, compare);

    for(i=0;i<N;i++) {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}

