# Useful C++ code

## project template: import lib

```cpp
#include <bits/stdc++.h>
using namespace std;

void controlIO() {
    #ifndef ONLINE_JUDGE
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

void input() {}
void output() {}

int main(){
    controlIO();
    //===========Logic here==========

    //===============================
    return 0;
}
```

## input from file

```cpp
/* Nhập các số cách nhau khoảng trắng trên 1 dòng
5 1 3 5 2 1 4
*/
int so;
while (cin >> so) {
    cout << so;
}
```

```cpp
/* Nhập các số trên nhiều dòng
5
1
3
*/
int so;
while (cin >> so) {
    cout << so;
}
```

```cpp
/* Nhập nhiều dòng cách nhau khoảng trắng
2410 37.83
1108 35.5
2610 43.7
*/
int vitri1; float vitri2;
while (cin >> vitri1 >> vitri2) {
    cout << vitri1 << " - " << vitri2 << "\n";
}
```

```cpp
/* Nhập các dòng khác nhau và có trích xuất data
40
Bui Minh Khoi - 5.9
Bui Minh Khoi (Nam) - 7.8
Dang Hoang Giang Thien - 3.1
*/
// Cách 1
string line;
getline(cin, line);
int n;
n = stod(line);
while (getline(cin, line)){
    int vitri = line.find(" - ");
    string ten = line.substr(0, vitri);
    double diem = stod(line.substr(vitri + 3));
}

// Cách 2
int n;
cin >> n; // nhập line 1
cin.ignore(); // Bỏ ký tự '\n'
string line;
while (getline(cin, line)) {
    int vitri = line.find(" - ");
    string ten = line.substr(0, vitri);
    double diem = stod(line.substr(vitri + 3));
}
```

```cpp
/* Nhập string trên 1 dòng
eat tea tan ate nat bat tea eat
*/
// Cách 1
int chu;
while (cin >> chu) {
    cout << chu << " ";  // in ra: eat tea tan ate nat bat tea eat
}

// Cách 2
string line;
while (getline(cin, line)){
    cout << line << "\n"; // in ra: eat tea tan ate nat bat tea eat
    stringstream ss(line);
    while (ss >> word){
        cout << word << "\n";
    }
/* in ra:
eat
tea
...
*/
}

``
