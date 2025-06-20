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

void input(unsigned int &m, unsigned int &n, vector<int> &arrA, vector<int> &arrB) {
    string line; string temp;
    // Line 1
    getline(cin, line);
    stringstream ss(line);
    ss >> temp; m = stoi(temp);
    ss >> temp; n = stoi(temp);
    // Line 2
    getline(cin, line);
    ss.clear(); ss.str(line);
    for (unsigned int i = 0; i < m; i++)
    {
        ss >> temp;
        arrA.push_back(stoi(temp));
    }
    // Line 2
    getline(cin, line);
    ss.clear(); ss.str(line);
    for (unsigned int i = 0; i < n; i++)
    {
        ss >> temp;
        arrB.push_back(stoi(temp));
    }
}

string timKiem(int m, vector<int> &arr, int x){
    int trai = 0; int phai = m - 1;
    while (trai <= phai)
    {
        int giua = (phai + trai)/2;
        if(arr[giua] == x){
            return "YES";
        } else if(arr[giua] > x){
            //x nằm phía trái
            phai = giua - 1;
        } else {
            trai = giua + 1;
        }
    }
    return "NO";
}

bool sapxep(int a, int b){
    return a < b;
}

void output(vector<int> &arrA, vector<int> &arrB, int m) {
    for (unsigned int i = 0; i < arrB.size(); i++)
    {
        cout << timKiem(m, arrA, arrB[i]) << endl;
    }
    
}
void outputTest(unsigned int &m, unsigned int &n, vector<int> &arrA, vector<int> &arrB) {
    cout << m << endl;
    cout << n << endl;
    for (unsigned int i = 0; i < m; i++)
    {
        cout << arrA[i] << " ";
    }
    cout << endl;
    for (unsigned int i = 0; i < n; i++)
    {
        cout << arrB[i] << " ";
    }
}

int main(){
    controlIO();
    //===========Logic here==========
    vector<int> arrA; vector<int> arrB;
    unsigned int m, n;

    input(m, n, arrA, arrB);
    sort(arrA.begin(), arrA.begin() + m, sapxep);
    // sort(arrB.begin(), arrB.begin() + n, sapxep);
    // outputTest(m, n, arrA, arrB);
    output(arrA, arrB, m);
    //===============================
    return 0;
}