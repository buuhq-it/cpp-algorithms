#include <bits/stdc++.h>
using namespace std;

const int nmax=1e7;
int a[nmax],n;


void nhapXuatTuFile();
void nhap();
void xuly();
void xuat();
void xuatTam();

int main(){
    nhapXuatTuFile();
    //===========Logic here==========
    nhap();
    sort(a, a+n);
    xuly();
    //===============================
    return 0;
}

void nhapXuatTuFile(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void nhap(){
    cin >> n;
    for(int i=0; i<n; ++i)
        cin >> a[i];
}

void xuly(){
    int s=0;
    for(int f=1; f<n; ++f)
        if(a[s]!=a[f]){
            s++;
            a[s]=a[f];
        }
    cout << s+1;
}

void xuat() {}
void xuatTam(){}