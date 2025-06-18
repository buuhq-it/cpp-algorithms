#include <bits/stdc++.h>
using namespace std;

void input(vector<int> &v) {
    string line;
    getline(cin, line);
    stringstream ss(line);
    int x;
    while (ss >> x) {
        v.push_back(x);
    }
}

void printSet(const set<int> &s) {
    for (int x : s) cout << x << " ";
    cout << '\n';
}

int main() {
    #ifndef ONLINE_JUDGE
        (void)!freopen("input.txt", "r", stdin);
        (void)!freopen("output.txt", "w", stdout);
    #endif

    vector<int> vecA, vecB;
    input(vecA);

    string emptyLine;
    getline(cin, emptyLine); // bỏ dòng trống
    input(vecB);

    set<int> setA(vecA.begin(), vecA.end());
    set<int> setB(vecB.begin(), vecB.end());

    // Tập hợp C: hợp A ∪ B
    set<int> setC = setA;
    for (int x : setB) setC.insert(x);

    // Tập hợp D: giao A ∩ B
    set<int> setD;
    for (int x : setA) {
        if (setB.count(x)) setD.insert(x);
    }

    printSet(setC);
    cout << '\n';
    printSet(setD);

    return 0;
}
