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

void input(vector<int> &arrA, unsigned int &n, int &x) {
    string line;
    //line 1
    getline(cin, line);
    n = stod(line);
    arrA.resize(n);
    //line 2
    getline(cin, line);
    stringstream ss(line);
    string item; int i =0;
    while (ss >> item){
        arrA[i] = stod(item); i++;
    }
    //line 3
    getline(cin, line);
    x = stod(line);
}
void output() {}
void outputTest(vector<int> &arrA, unsigned int &n, int &x) {
    cout << n << "\n";
    for (auto a : arrA){
        cout << a << " ";
    }
    cout << "\n" << x;
}

int timKiemNhiPhan(vector<int> &arr, int &x){
    int left = 0, right = arr.size() - 1;
    while (left <= right){
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) return mid;
        else if (arr[mid] < x) left = mid + 1; //nằm phía bên phải
        else right = mid - 1; // nằm phía trái
    }
    return -1;
}
int main(){
    controlIO();
    const unsigned int nMax = 1e7;
    vector<int> arrA(nMax); //Ai có trị tuyệt đối <= 10^9
    int x;
    unsigned int n; // 0 < n <= 10^7
    input(arrA, n, x);
    //===========Logic here==========
    int vitri = timKiemNhiPhan(arrA, x);
    cout << vitri;
    //===============================
    // outputTest(arrA, n, x);
    return 0;
}