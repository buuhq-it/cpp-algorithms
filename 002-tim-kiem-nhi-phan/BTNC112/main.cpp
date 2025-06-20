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

void input(vector<int> &arrA, unsigned int &n, unsigned &x) {
    string line, temp;
    // Line 1
    getline(cin, line);
    stringstream ss(line);
    ss >> temp; n = stoi(temp);
    ss >> temp; x = stoi(temp);
    // Line 2
    getline(cin, line);
    ss.clear(); 
    ss.str(line);
    int i = 0;
    while (ss >> temp)
    {
        arrA.push_back(stoi(temp));
    }
    
}

void output() {}
void outputTest(vector<int> &arrA, unsigned int &n, unsigned &x) {
    cout << "n: " << n << "; x: " << x << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arrA[i] << " ";
    }
    
}

bool sapxep(int a, int b){
    return a < b;
}

//Tìm vị trí đầu tiên của phần tử x trong mảng A
int timViTriDau(vector<int> &arrA, unsigned int n, unsigned x){
    int trai = 0; int phai = n - 1; int vitri = -1;
    while(trai <= phai){
        int giua = (trai + phai)/2;
        if (arrA[giua] == x){
            // Vị trí x đầu tiên nằm phía TRÁI
            vitri = giua;
            phai = giua - 1;
        } else if (arrA[giua] > x){
            // x nằm phía bên trái
            phai = giua - 1;
        } else {
            trai = giua + 1;
        }
    }
    
    return vitri;
}
// Tìm vị trí cuối cũng của phần tử x trong mảng A
int timViTriCuoi(vector<int> &arrA, unsigned int n, unsigned x){
    int trai = 0; int phai = n - 1; int vitri = -1;
    while(trai <= phai){
        int giua = (trai + phai)/2;
        if (arrA[giua] == x){
            // Vị trí x đầu tiên nằm phía PHẢI
            vitri = giua;
            trai = giua + 1;
        } else if (arrA[giua] > x){
            // x nằm phía bên trái
            phai = giua - 1;
        } else {
            trai = giua + 1;
        }
    }
    return vitri;
}
//Tìm vị trí đầu tiên của phần tử lớn hơn x trong mảng A
pair<int,int> timViTriDauPhanTuLonHon (vector<int> &arrA, unsigned int n, unsigned x){
    int trai = 0; int phai = n - 1; pair<int,int> kq = {-1, 0};
    while(trai <= phai) {
        int giua = (trai + phai)/2;
        if (arrA[giua] > x){
            // vị trí đầu tiên của phần tử lớn hơn x nằm phía TRÁI
            phai = giua - 1;
            kq.first = giua; kq.second = arrA[giua];
        } else {
            trai = giua + 1;
        }
    }
    return kq;
}

int main(){
    controlIO();
    const unsigned int nMax = 1e7;
    vector<int> arrA;
    unsigned int n, x;
    input(arrA, n, x);
    //===========Logic here==========
    sort(arrA.begin(), arrA.end(), sapxep);
    //===============================
    // outputTest(arrA, n, x);

    int vitri;
    vitri = timViTriDau(arrA, n, x);
    if (vitri == -1) cout << "No\n";
    else cout << "Vi tri dau tien cua " << x << " trong mang A la " << vitri + 1 << "\n";

    vitri = timViTriCuoi(arrA, n, x);
    if (vitri == -1) cout << "No\n";
    else cout << "Vi tri cuoi cung cua " << x << " trong mang A la " << vitri + 1 << "\n";

    pair<int,int> kq = timViTriDauPhanTuLonHon(arrA, n, x);
    if (kq.first == -1) cout << "No\n";
    else cout << "Vi tri cua phan tu dau tien > " << x << " trong mang A la " << kq.first + 1 << ", gia tri " << kq.second;
    
   return 0;
}