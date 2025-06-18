# BTNC127: Ví dụ kiểu vector

Trong kì thi tuyển sinh vào lớp 10 trường Phổ Thông Năng Khiếu, để bảo mật điểm số của học sinh người ta chỉ lưu số báo danh và tổng điểm 4 môn văn, toán, anh và môn chuyên. 
Sau khi hoàn tất phần chấm bài, nhà trường có một danh sách gồm N học sinh tham gia thi, mỗi học sinh có 2 thông tin là số báo danh S và tổng điểm T. 
Để thực hiện việc xét tuyển, nhà trường cần thực hiện các yêu cầu sau:

Xóa tất cả các học sinh có tổng điểm nhỏ hơn 20.
Do sai sót trong khâu nhập điểm, nhà trường cần tìm và điều chỉnh tổng điểm của học sinh có số báo danh cụ thể.
Chèn thêm thông tin của học sinh thi bổ sung vào danh sách tại vị trí đầu tiên.
Xuất ra 10 học sinh có tổng điểm cao nhất theo thứ tự từ trên xuống để vinh danh.

## Mô tả đầu vào

- Mỗi dòng ghi 2 số S (1000 <= S <= 9999) là số báo danh và T (0 <= T <= 50) là tổng điểm của 1 học sinh cách nhau khoảng trắng.

- 2 dòng cuối,
  - Dòng đầu ghi số báo danh và tổng điểm của học sinh bị sai sót.
  - Dòng kế tiếp ghi số báo danh và tổng điểm của học sinh thi bổ sung

## Ràng buộc

1000 <= S <= 9999
0 <= T <= 50

## Mô tả đầu ra

- Ghi danh sách sau khi điều chỉnh và bổ sung thí sinh, mỗi học sinh trên 1 dòng gồm 2 giá trị là số báo danh và tổng điểm cách nhau khoảng trắng.
- Cách một dòng trống ghi danh sách top 10 tổng điểm theo thứ tự giảm dần, mỗi học sinh trên 1 dòng gồm 2 giá trị là số báo danh và tổng điểm cách nhau khoảng trắng.

Đầu vào mẫu 1
2410 37.83
1108 35.5
2610 43.7
2404 18.37
2610 19.35
1234 24.67

Đầu ra mẫu 1
1234 24.67
2410 37.83
1108 35.5

2410 37.83
1108 35.5
1234 24.67