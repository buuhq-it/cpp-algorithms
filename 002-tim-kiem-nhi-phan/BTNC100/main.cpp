#include <bits/stdc++.h>
using namespace std;

void nhapXuatTuFile();

unsigned long long nhap();
void xuat();
void xuatTam();
void kiemTraSoCP(unsigned long long n);
int main(){
    nhapXuatTuFile();
    //===========Logic here==========
    unsigned long long so = nhap();
    kiemTraSoCP(so);
    //===============================
    return 0;
}

void nhapXuatTuFile(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

unsigned long long nhap() {
    unsigned long long so;
    cin >> so;
    return so;
}
void xuat() {}
void xuatTam(){}

void kiemTraSoCP(unsigned long long n){
    // tìm kiếm nhị phân trong đoạn [0, n]
    unsigned long long trai = 0; unsigned long long phai = n;
    unsigned long long canBac2 = 0;
    while (trai <= phai) {
        unsigned long long giua = trai + (phai - trai) / 2;
        if (giua <= n / giua) {
            canBac2 = giua;
            trai = giua + 1;
        } else {
            phai = giua - 1;
        }
    }
    if (canBac2 * canBac2 == n) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    cout << canBac2 << '\n';
}