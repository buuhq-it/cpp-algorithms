# BTNC133: Ví dụ BS

Cho một mảng A có n (0 < n <= 10^7) phần tử khác nhau, phần tử Ai có trị tuyệt đối <= 10^9. 
Các phần tử của mảng A được sắp xếp tăng dần.
Yêu cầu: trả về vị trí của phần tử có giá trị x trong A.

## Mô tả đầu vào

- Dòng thứ nhất ghi số n
- Dòng tiếp theo ghi các phần tử trong mảng, mỗi phần tử cách nhau khoảng trắng
- Dòng cuối ghi giá trị phần tử x cần tìm

## Ràng buộc

0 < n <= 10^7
-10^9 < Ai < 10^9

## Mô tả đầu ra

- Ghi vị trí phần tử x tìm được. Nếu không tìm thấy xuất -1

## Test case mẫu

- Đầu vào mẫu 1
10
5 14 21 29 30 39 48 50 57 60
29
- Đầu ra mẫu 1
3
