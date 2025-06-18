#include <bits/stdc++.h>
using namespace std;

void input(vector<pair<int, double>> &ds) {
    int sbd;
    double diem;

    while (cin >> sbd >> diem) {
        ds.push_back({sbd, diem});
    }
}

// Xóa thí sinh có điểm < 20
void xoaDuoi20(vector<pair<int, double>> &ds) {
    for (int i = 0; i < (int)ds.size(); ) { //for không có i++
        if (ds[i].second < 20.0) {
            ds.erase(ds.begin() + i);  // Xóa phần tử điểm < 20
            // Không tăng i vì phần tử tiếp theo sẽ dồn vào vị trí i
        } else {
            i++;  // Chỉ tăng i nếu không xóa
        }
    }
}

// Cập nhật điểm của thí sinh có số báo danh cụ thể
void suaDiem(vector<pair<int, double>> &ds, int sbd_sua, double diem_moi) {
    for (auto &ts : ds) {
        if (ts.first == sbd_sua) {
            ts.second = diem_moi;
            return;
        }
    }
}

// Chèn thí sinh mới vào đầu danh sách
void chenThiSinh(vector<pair<int, double>> &ds, int sbd, double diem) {
    ds.insert(ds.begin(), {sbd, diem});
}

// Xuất danh sách hiện tại
void outputDanhSach(const vector<pair<int, double>> &ds) {
    for (const auto &ts : ds) {
        cout << ts.first << " " << ts.second << endl;
    }
}

bool compareByScoreDesc(pair<int, double> a, pair<int, double> b) {
    return a.second > b.second; // Sắp xếp giảm dần theo tổng điểm
}

// Xuất top 10 theo điểm giảm dần
void outputTop10(vector<pair<int, double>> ds) {
    sort(ds.begin(), ds.end(), compareByScoreDesc);

    cout << endl;
    int count = min(10, (int)ds.size());
    for (int i = 0; i < count; ++i) {
        cout << ds[i].first << " " << ds[i].second << endl;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        (void)!freopen("input.txt", "r", stdin);
        (void)!freopen("output.txt", "w", stdout);
    #endif

    vector<pair<int, double>> ds;
    input(ds);

    // Tách 2 thí sinh cuối cùng
    pair<int, double> thisinh_sai = ds[ds.size() - 2];
    pair<int, double> thisinh_bosung = ds[ds.size() - 1];
    ds.pop_back(); //xóa phần tử cuối
    ds.pop_back();

    // Xử lý theo yêu cầu đề bài
    xoaDuoi20(ds);
    suaDiem(ds, thisinh_sai.first, thisinh_sai.second);
    chenThiSinh(ds, thisinh_bosung.first, thisinh_bosung.second);

    // Xuất kết quả
    outputDanhSach(ds);
    outputTop10(ds);

    return 0;
}
