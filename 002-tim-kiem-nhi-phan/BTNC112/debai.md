# BTNC112: Tìm vị trí

## Đề bài

Cho **mảng A có n phần tử số nguyên** và **một số nguyên x**. Hãy lập trình thực hiện các yêu cầu sau:

- Sắp xếp mảng A tăng dần
- Tìm vị trí đầu tiên của phần tử x trong mảng A
- Tìm vị trí cuối cũng của phần tử x trong mảng A
- Tìm vị trí đầu tiên của phần tử lớn hơn x trong mảng A

## Mô tả đầu vào

- Dòng đầu cho 2 số nguyên n và x (0 < n <= 10^7)
- Dòng tiếp theo chứa n số nguyên cách nhau khoảng trắng là giá trị các phần tử trong mảng A.
- x, và Ai có giá trị trong miền giá trị kiểu int

## Ràng buộc

- Subtask 1: 50% test với n <= 10^4
- Subtask 2: Không có giới hạn nào thêm

## Mô tả đầu ra

Ghi ra các vị trí tìm kiếm theo yêu cầu, mỗi vị trí trên một dòng theo định dạng như testcase mẫu.
Trường hợp không tìm thấy thì dòng đó ghi "No"

## Test case mẫu

### Đầu vào mẫu 1

```text
10 3
1 1 2 2 3 3 3 5 7 9
```

### Đầu ra mẫu 1

```text
Vi tri dau tien cua 3 trong mang A la 5
Vi tri cuoi cung cua 3 trong mang A la 7
Vi tri cua phan tu dau tien > 3 trong mang A la 8, gia tri 5
```
