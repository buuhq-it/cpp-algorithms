#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 10000;  // Giới hạn đề bài cho phép
pair<string, double> hocsinh[MAX_N];  // Mảng chứa danh sách học sinh
int n;  // Số lượng học sinh

// Hàm so sánh để sắp xếp theo yêu cầu
bool cmp(pair<string, double> a, pair<string, double> b) {
    if (a.second != b.second)
        return a.second > b.second;  // Điểm cao hơn đứng trước
    return a.first < b.first;       // Nếu điểm bằng nhau thì tên tăng dần
}

// Hàm nhập dữ liệu từ input.txt
void input() {
    cin >> n;
    cin.ignore(); // Bỏ ký tự '\n'

    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);

        int vitri = line.find(" - ");
        string ten = line.substr(0, vitri);
        double diem = stod(line.substr(vitri + 3));

        hocsinh[i] = {ten, diem};
    }
}

// Hàm xuất dữ liệu ra output.txt
void output() {
    for (int i = 0; i < n; ++i) {
        cout << hocsinh[i].first << " - " << hocsinh[i].second << endl;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        (void)!freopen("input.txt", "r", stdin);
        (void)!freopen("output.txt", "w", stdout);
    #endif

    input();
    sort(hocsinh, hocsinh + n, cmp); // hàm sắp xếp
    output();

    return 0;
}
