# Kiểu dữ liệu C++

## integer

| Kiểu dữ liệu         | Kích thước (byte)       | Phạm vi giá trị                                 | Ghi chú                     |
| -------------------- | ----------------------- | ----------------------------------------------- | --------------------------- |
| `bool`               | 1                       | `true (1)` hoặc `false (0)`                     | Biểu diễn logic             |
| `char`               | 1                       | -128 đến 127 (signed) hoặc 0 đến 255 (unsigned) | Dùng cho ký tự ASCII        |
| `unsigned char`      | 1                       | 0 đến 255                                       |                             |
| `short`              | 2                       | -32,768 đến 32,767                              |                             |
| `unsigned short`     | 2                       | 0 đến 65,535                                    |                             |
| `int`                | 4                       | -2,147,483,648 đến 2,147,483,647                | Số nguyên chuẩn             |
| `unsigned int`       | 4                       | 0 đến 4,294,967,295                             |                             |
| `long`               | 4 (Windows) / 8 (Linux) | Tùy hệ thống                                    |                             |
| `unsigned long`      | 4 hoặc 8                | Tùy hệ thống                                    |                             |
| `long long`          | 8                       | ±9.2×10¹⁸                                       | Dùng nhiều trong thuật toán |
| `unsigned long long` | 8                       | 0 đến 18,446,744,073,709,551,615                |                             |


## floating

| Kiểu dữ liệu  | Kích thước (byte) | Độ chính xác          | Phạm vi xấp xỉ                |
| ------------- | ----------------- | --------------------- | ----------------------------- |
| `float`       | 4                 | \~7 chữ số thập phân  | ±3.4 × 10^38                  |
| `double`      | 8                 | \~15 chữ số thập phân | ±1.7 × 10^308                 |
| `long double` | 8 / 12 / 16       | Hệ thống-dependent    | Thường chính xác hơn `double` |

## string

| Kiểu dữ liệu | Mô tả                          |
| ------------ | ------------------------------ |
| `string`     | Chuỗi ký tự (trong `<string>`) |
| `char[]`     | Mảng ký tự (kiểu C)            |
| `wchar_t`    | Ký tự rộng (Unicode)           |
| `void`       | Không trả về gì (hàm `void`)   |
