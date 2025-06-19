#include <bits/stdc++.h>
using namespace std;

void input(vector<int>& arr, int& n) {
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
}

void countFrequencies(const vector<int>& arr, map<int, int>& freq) {
    for (int num : arr)
        freq[num]++;
}

void output(const map<int, int>& freq) {
    // Tạo vector chứa các phần tử của map
    vector<pair<int, int>> result(freq.begin(), freq.end());

    // Sắp xếp giảm dần theo key
    // sort(result.rbegin(), result.rend());
    sort(result.begin(), result.end(), greater<>());


    // In kết quả
    cout << result.size() << '\n';
    for (auto [val, count] : result) {
        cout << val << ' ' << count << '\n';
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        (void)!freopen("input.txt", "r", stdin);
        (void)!freopen("output.txt", "w", stdout);
    #endif

    int n;
    vector<int> arr;
    map<int, int> freq;

    input(arr, n);
    countFrequencies(arr, freq);
    output(freq);

    return 0;
}
