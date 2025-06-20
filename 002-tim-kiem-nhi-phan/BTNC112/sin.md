# Bai lam cua Sin

```cpp
#include <bits/stdc++.h>

using namespace std;
int a[10000000],n,x;

int binarysearchdau(int x, int a[], int n){
    int l=0,r=n,m,vt=-1;
    while(l<=r){
        m=(l+r)/2;
        if(a[m]>x) r=m-1;
        if(a[m]<x) l=m+1;
        if(a[m]==x){
            vt=m;
            r=m-1;
        }
    }
    return vt;
}

int binarysearchcuoi(int x, int a[], int n){
    int l=0,r=n,m,vt=-1;
    while(l<=r){
        m=(l+r)/2;
        if(a[m]>x) r=m-1;
        if(a[m]<x) l=m+1;
        if(a[m]==x){
            vt=m;
            l=m+1;
        }
    }
    return vt;
}

int binarysearch1(int x, int a[], int n){
    int l=0,r=n,m;
    while(l<=r){
        m=(l+r)/2;
        if(a[m]>x) r=m-1;
        if(a[m]<x) l=m+1;
        if(a[m]==x) break;
    }
    for(int i=m; i<=n; ++i)
        if(a[i]>x) return i;
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> x;
    for(int i=1; i<=n; ++i)
        cin >> a[i];
    sort(a,a+n);
    int vt=binarysearchdau(x,a,n);
    if(vt==-1) cout << "No\n";
    else cout << "Vi tri dau tien cua " << x << " trong mang A la " << vt << "\n";
    vt=binarysearchcuoi(x,a,n);
    if(vt==-1) cout << "No\n";
    else cout << "Vi tri cuoi cung cua " << x << " trong mang A la " << vt << "\n";
    int s=binarysearch1(x,a,n);
    if(s==-1) cout << "No";
    else cout << "Vi tri cua phan tu dau tien > " << x << " trong mang A la " << s << ", gia tri " << a[s];
    return 0;
}
```
