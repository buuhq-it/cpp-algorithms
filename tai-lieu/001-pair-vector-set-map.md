# pair, vector, iterator, set, map

## pair

```cpp
//pair là một cấu trúc dữ liệu đặc biệt trong C++. Nó lưu trữ hai giá trị có thể khác kiểu dữ liệu
// thư viện cho: pair, vector, set, map
#include <bits/stdc++.h>

// khai báo pair: pair <tên kiểu 1, tên kiểu 2> tên biến pair;
pair<int, string> hocsinh;
pair<int, string> lop[50]; //mảng pair

// gán pair
hocsinh.first = 1;
hocsinh.second = "Quang Minh";

// Duyệt từ đầu đến cuối danh sách lớp, lưu thông tin học sinh vào mảng
for (int i = 1; i <= n; ++i) {
    cin >> hoten;
    lop[i] = make_pair(i, hoten);
}

// truy xuất pair
cout << hocsinh.first << ") " << hocsinh.second;

for (int i = 1; i <= n; ++i) {
    cout << lop[i].first << ") " << lop[i].second << "\n";
}

```

## vector

```cpp
// Vector trong C++ là mảng động (dynamic array)
// khai báo vector rỗng: vector <tên kiểu> tên biến vector;
vector<double> m;
vector<pair<int, string>> nhanvien;
vector<int> vec1 = {1, 2, 3, 4, 5}; //khai báo và gán giá trị
vector<int> vec1 = {1, 2, 3, 4, 5};
vector<int> vec2 = vec1;
//Khai báo một vector có sẵn số phần tử cho trước
int spt = 1000;
vector<int> vec3(spt);

// Khai báo một vector dạng ma trận
vector<long> mt; // vector 1 chiều

// Khai báo vector dạng ma trận biết trước dòng và cột
int row = 5, col = 7;
vector<vector<int>> mtrc(row, vector<int>(col));

// Thao tác vector: vector.size(); vector.push_back(giá trị);
// Thêm giá trị 3.14 vào cuối vector m
m.push_back(3.14);

// Thêm thông tin nhân viên (kiểu pair) vào cuối vector nhanvien
nhanvien.push_back({1, "Minh Khoa"});
// Gán giá trị 9999 vào vị trí phần tử thứ 5 trong vector (chỉ số = 5)
vec1[5] = 9999;

// Xuất các phần tử từ vị trí 0 đến vị trí 9 trong vector
for (int i = 0; i < 10; i++)
    cout << vec1[i] << " ";

vector.pop_back(); // Xóa phần tử cuối cùng trong vector: 
vector.empty();  // Trả về true nếu rỗng, ngược lại trả về false
vector.clear(); // Xóa toàn bộ vector
```

## iterator: bộ lặp

```cpp
// công cụ giúp duyệt qua từng phần tử của vector, list, set...
vector.begin(); vector.end();
sort(<tên biến> vector.begin(), <tên biến> vector.end()); //Sắp xếp vector: 

vector.insert(<vị trí iterator>, <giá trị cần chèn>);
m.insert(m.begin() + 5, 5.4);

m.erase(m.begin() + 5);
// Xóa các phần tử từ vị trí 5 đến vị trí 15 trong vector
m.erase(m.begin() + 5, m.begin() + 15);
// Xóa các phần tử từ vị trí 5 đến cuối vector
m.erase(m.begin() + 5, m.end());
<Tên biến vector 1>.swap(<tên biến vector 2>);

// Duyệt vector bằng index
for (int i = 0; i < m.size(); ++i)
    cout << m[i] << " ";

for (auto nv = nhanvien.begin(); nv != nhanvien.end(); ++nv)
    cout << nv->first << ") " << nv->second << "\n";

// Sử dụng vector với index âm (vector phải được khởi tạo đủ số phần tử trước)
for (int i = -10; i <= 10; i++)
    vec3[i] = i;

for (int i = -10; i <= 10; i++)
    cout << vec3[i] << " ";

```

## set

```cpp
// set là một cấu trúc dữ liệu chứa các phần tử không trùng nhau.
set <tên kiểu> tên set;

set<int> myset;                        // Khai báo set có thứ tự tăng dần
set<int, greater<int>> decset;        // Khai báo set có thứ tự giảm dần

// Hàm: size(), insert(x), empty(), count(x) kiểm tra x có tồn tại, find(x), erase(x), clear()
// Duyệt
for (auto x : myset)
    cout << x << " ";

for (auto it = myset.begin(); it != myset.end(); ++it)
    cout << *it << " ";

for (auto it = myset.rbegin(); it != myset.rend(); ++it)
    cout << *it << " ";

```

## map

```text
map là một cấu trúc dữ liệu lưu trữ dữ liệu tương tự như một từ điển, mỗi phần tử trong map là một cặp key - value.
Ta có thể hình dung map là mở rộng của set nhưng thêm thành phần value. Lúc này mỗi phần tử trong map là 1 pair
Ví dụ: danh bạ {tên – số điện thoại}, từ điển {từ - nghĩa củatừ} danh sách học sinh {mã học sinh – tên học sinh}
```

```cpp
map <tên kiểu key, tên kiểu value > tên map; //khai báo

map<int, string> dssinhvien;
map<int, string, greater<int>> decsv;

dssinhvien.insert({1, "A"});          // Thêm sinh viên có key 1 với value A vào map
dssinhvien.insert({1, "B"});          // Không thêm được vì trùng key
dssinhvien.insert(make_pair(2, "A")); // Dùng make_pair để thêm sinh viên key 2 với value A
dssinhvien[3] = "C";                  // Thêm sinh viên có key 3 với value C
dssinhvien[2] = "D";                  // Gán lại value của key 2 thành D

for (auto sv : dssinhvien)
    cout << "Key: " << sv.first << " - value: " << sv.second << "\n";

// Duyệt danh sách sinh viên, thêm "CTIN - " vào đầu họ tên mỗi sinh viên
for (auto &sv : dssinhvien)
    sv.second = "CTIN - " + sv.second;

for (auto it = dssinhvien.begin(); it != dssinhvien.end(); ++it)
    cout << "Key: " << it->first << " - value: " << it->second << "\n";

```
