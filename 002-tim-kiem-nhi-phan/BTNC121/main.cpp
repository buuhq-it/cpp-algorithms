#include <bits/stdc++.h>
using namespace std;

void nhapXuatTuFile();

void nhap(int &m, int &n, vector<int> &a, vector<int> &b);
// Tìm vị trí đầu tiên >=x
int viTriDauLonHonHoacBang(const vector<int>& a, int x);
// Tìm vị trí đầu tiên > x
int viTriDauLonHon(const vector<int>& a, int x);

int main() {
    nhapXuatTuFile();
    int m, n;
    int maxSize = 1e6 + 5;
    vector<int> a(maxSize); vector<int> b(maxSize); 
    nhap(m, n, a, b);
    // Gộp vị trí để giữ lại index sau sort
    vector<int> indexA(m);
    for (int i = 0; i < m; ++i) indexA[i] = i;

    // sort theo giá trị a[index[i]]
    sort(indexA.begin(), indexA.end(), [&](int i, int j) {
        return a[i] < a[j];
    });

    // tạo value[] và pos[] sau khi sort
    vector<int> value(m), viTriGoc(m);
    for (int i = 0; i < m; ++i) {
        value[i] = a[indexA[i]];
        viTriGoc[i] = indexA[i] + 1; // lưu vị trí gốc, 1-based
    }

    for (int j = 0; j < n; ++j) {
        int x = b[j];
        int trai = viTriDauLonHonHoacBang(value, x);
        int phai = viTriDauLonHon(value, x);

        if (trai == phai) {
            cout << "0\n"; // ko tìm thấy
        } else {
            // Tìm min max đoạn trái sang phải
            int imin = viTriGoc[trai], imax = viTriGoc[trai];
            for (int i = trai + 1; i < phai; ++i) {
                if (viTriGoc[i] < imin) imin = viTriGoc[i];
                if (viTriGoc[i] > imax) imax = viTriGoc[i];
            }
            cout << imin << ' ' << imax << '\n';
        }
    }


    return 0;
}


void nhapXuatTuFile(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void nhap(int &m, int &n, vector<int> &a, vector<int> &b){
    
    cin >> m >> n;
    a.resize(m); b.resize(n);

    for (int i = 0; i < m; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
}

// Tìm vị trí đầu tiên >=x
int viTriDauLonHonHoacBang(const vector<int>& a, int x) {
    int trai = 0, phai = a.size() - 1, vitri = a.size();
    while (trai <= phai) {
        int giua = (trai + phai) / 2;
        if (a[giua] >= x) {
            vitri = giua;
            phai = giua - 1;
        } else {
            trai = giua + 1;
        }
    }
    return vitri;
}

// Tìm vị trí đầu tiên > x
int viTriDauLonHon(const vector<int>& a, int x) {
    int trai = 0, phai = a.size() - 1, vitri = a.size();
    while (trai <= phai) {
        int giua = (trai + phai) / 2;
        if (a[giua] > x) {
            vitri = giua;
            phai = giua - 1;
        } else {
            trai = giua + 1;
        }
    }
    return vitri;
}