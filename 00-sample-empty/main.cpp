#include <bits/stdc++.h>
using namespace std;

void controlIO();

void input();
void output();
void outputTest();
bool isValid(int cap);
int houseRobberIV();

int k, n;
vector<int> A;
int minA, maxA;
int main(){
    controlIO();
    //===========Logic here==========
    void input();
    houseRobberIV();
    //===============================
    return 0;
}

void controlIO() {
    #ifndef ONLINE_JUDGE
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        freopen("TENTROM.INP", "r", stdin);
        freopen("TENTROM.OUT", "w", stdout);
    #endif
}

void input() {
    cin >> n; cin >> k;
    minA = INT_MAX; maxA = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (minA > A[i]) minA = A[i];
        if (maxA < A[i]) maxA = A[i];
    }
    

}
void output() {}
void outputTest() {}
bool isValid(int cap) {
    int n = A.size();
    int count = 0;
    for (int i = 0; i < n;) {
        if (A[i] <= cap) {
            ++count;
            i += 2;
        } else {
            ++i;
        }
    }
    return count >= k;
}

int houseRobberIV() {
    int left = *min_element(A.begin(), A.end());
    int right = *max_element(A.begin(), A.end());
    int ans = right;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (isValid(mid)) {
            ans = mid;          // năng lực hiện tại hợp lệ
            right = mid - 1;    // thử năng lực nhỏ hơn
        } else {
            left = mid + 1;     // cần năng lực lớn hơn
        }
    }

    return ans;
}
