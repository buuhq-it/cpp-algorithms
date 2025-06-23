#include <bits/stdc++.h>
using namespace std;

bool isValid(const vector<int>& a, int k, int cap) {
    int count = 0;
    int i = 0;
    int n = a.size();
    while (i < n) {
        if (a[i] <= cap) {
            count++;
            i += 2;
        } else {
            i++;
        }
    }
    return count >= k;
}

int findMinCapability(vector<int>& a, int k, int minA, int maxA) {
    int low = minA; int high = maxA;
    int res = high;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (isValid(a, k, mid)) {
            res = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return res;
}


int main(){
    #ifndef ONLINE_JUDGE
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        freopen("TENTROM.INP", "r", stdin);
        freopen("TENTROM.OUT", "w", stdout);
    #endif
    vector<int> a;
    int k, n;

    cin >> n; cin >> k;
    int minA = INT_MAX; int maxA = 0; int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
        if (minA > temp) minA =temp;
        if (maxA <temp) maxA = temp;
    }
    int kq = findMinCapability(a,k,minA,maxA);
    cout << kq;
    return 0;
}


