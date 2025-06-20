# Bai lam cua Sin

```cpp
#include <bits/stdc++.h>

using namespace std;
int a[10000000],m,b[10000000],n;

string binarysearch(int x, int a[], int n){
    int l=0,r=n,m;
    while(l<=r){
        m=(l+r)/2;
        if(a[m]>x) r=m-1;
        if(a[m]<x) l=m+1;
        if(a[m]==x) return "YES";
    }
    return "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> m >> n;
    for(int i=0; i<m; ++i)
        cin >> a[i];
    for(int i=0; i<n; ++i)
        cin >> b[i];
    for(int i=0; i<n; ++i)
        cout << binarysearch(b[i],a,m) << "\n";
    return 0;
}
```
