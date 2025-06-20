# BTNC120: Tìm kiếm

## Đề bài

Cho hai dãy số nguyên 𝐴 = (𝑎1, 𝑎2, …, 𝑎𝑚) và 𝐵 = (𝑏1 ,𝑏2, …, 𝑏𝑛).
Yêu cầu: Với mỗi phần tử của dãy 𝑏𝑗 của dãy 𝐵, hãy tìm phần tử có xuất hiện trong dãy 𝐴 không.

## Mô tả đầu vào

• Dòng 1 chứa hai số nguyên dương 𝑚,𝑛 ≤ 10^6
• Dòng 2 chứa 𝑚 số nguyên 𝑎1, 𝑎2, …, 𝑎𝑚 (∀𝑖:|𝑎𝑖| < 2.10^9)
• Dòng 3 chứa 𝑛 số nguyên 𝑏1, 𝑏2, …, 𝑏𝑛 (∀𝑗:|𝑏𝑗| < 2.10^9)

## Ràng buộc

0 < m, n <= 10^6
0 < ai, bj <= 2.10^9

## Mô tả đầu ra

gồm 𝑛 dòng, dòng thứ 𝑗 ghi YES nếu số 𝑏𝑗 xuất hiện trong dãy 𝐴, ngược lại ghi NO.

## Test case mẫu

### Đầu vào mẫu 1

```text
10 5 
1 2 3 4 5 6 7 8 9 10
-2 0 4 9 12
```

### Đầu ra mẫu 1

```text
NO
NO
YES
YES
NO
```
