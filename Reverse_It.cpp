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
    int N, i;
    cin >> N;

    Student students[100];

    for (i=0;i<N;i++) {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
    }

    for (i=0;i<N/2;i++) {
        swap(students[i].section, students[N - 1 - i].section);
    }

    for (i=0;i<N;i++) {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << endl;
    }

    return 0;
}

