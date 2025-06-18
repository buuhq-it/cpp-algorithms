#include <bits/stdc++.h>
using namespace std;

// Hàm đọc từ input và gom nhóm đảo chữ vào map
void input(map<string, vector<string>>& groups) {
    string line, word;
    while (getline(cin, line)) {
        stringstream ss(line);
        while (ss >> word) {
            string key = word;
            sort(key.begin(), key.end()); // Tạo khóa từ các ký tự đã sắp xếp
            groups[key].push_back(word);
        }
    }
}

// Hàm so sánh số lượng phần tử trong nhóm (dùng cho sort)
bool cmp(const vector<string>& a, const vector<string>& b) {
    return a.size() < b.size();
}

// Hàm gom các nhóm từ thành 1 vector để sắp xếp theo số lượng
vector<vector<string>> groupAnagrams(const map<string, vector<string>>& groups) {
    vector<vector<string>> result;
    for (const auto& pair : groups) {
        result.push_back(pair.second);
    }
    sort(result.begin(), result.end(), cmp);

    // Sắp xếp theo số lượng từ trong nhóm (tăng dần)
    // sort(result.begin(), result.end(), [](const vector<string>& a, const vector<string>& b) {
    //     return a.size() < b.size();
    // });

    return result;
}

// Hàm in ra các nhóm từ
void output(const vector<vector<string>>& result) {
    for (const auto& group : result) {
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        (void)!freopen("input.txt", "r", stdin);
        (void)!freopen("output.txt", "w", stdout);
    #endif

    map<string, vector<string>> groups;
    input(groups);                         // Bước 1: Đọc và gom nhóm
    vector<vector<string>> result = groupAnagrams(groups);  // Bước 2: Gom nhóm thành danh sách
    output(result);                        // Bước 3: In kết quả
    return 0;
}
