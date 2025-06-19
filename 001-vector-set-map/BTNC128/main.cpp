#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e6 + 5;
int a[MAX_N];       // mảng lưu toàn bộ đầu vào
int result[MAX_N];  // mảng lưu các phần tử không trùng lặp
int n = 0;          // số phần tử đã nhập
int cnt = 0;        // số phần tử không trùng nhau

set<int> seen; //dùng để kiểm tra trùng

void nhap() {
    while (cin >> a[n]) {
        n++;
    }
}

void xoatrung() {
    for (int i = 0; i < n; ++i) {
        if (seen.count(a[i]) == 0) { //dk không tìm thấy, thằng đầu tiên chắc chắn không trùng
            seen.insert(a[i]);
            result[cnt++] = a[i];
        }
    }

    
}

void xuat() {
    cout << cnt << '\n';
    for (int i = 0; i < cnt; ++i) {
        cout << result[i] << " ";
    }
    cout << '\n';
}

int main() {
    #ifndef ONLINE_JUDGE
        (void)!freopen("input.txt", "r", stdin);
        (void)!freopen("output.txt", "w", stdout);
    #endif

    nhap();
    xoatrung();
    xuat();
    return 0;
}
