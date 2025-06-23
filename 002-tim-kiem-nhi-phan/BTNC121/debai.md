# BTNC121: Tìm min max

## Đề bài

Cho hai dãy số nguyên 𝐴 = (𝑎1, 𝑎2, …, 𝑎𝑚) và 𝐵 = (𝑏1, 𝑏2, …, 𝑏𝑛)
Yêu cầu: Với mỗi phần tử của dãy 𝑏𝑗 của dãy 𝐵, hãy **tìm hai chỉ số nhỏ nhất 𝑖𝑚𝑖𝑛 và lớn nhất 𝑖𝑚𝑎𝑥** sao cho a𝑖𝑚𝑖𝑛 = a𝑖𝑚𝑎𝑥 = 𝑏𝑗

## Mô tả đầu vào

• Dòng 1 chứa hai số nguyên dương 𝑚,𝑛 ≤ 10^6
• Dòng 2 chứa 𝑚 số nguyên 𝑎1, 𝑎2, …, 𝑎𝑚 (∀𝑖:|𝑎𝑖| < 2.10^9)
• Dòng 3 chứa 𝑛 số nguyên 𝑏1, 𝑏2, …, 𝑏𝑛 (∀𝑗:|𝑏𝑗| < 2.10^9)

## Ràng buộc

0 < m, n <= 10^6
-2.10^9 <= ai, bj <= 2.10^9

## Mô tả đầu ra

gồm 𝑛 dòng, dòng thứ 𝑗 ghi hai số 𝑖𝑚𝑖𝑛 và 𝑖𝑚𝑎𝑥 tìm được.
Trong trường hợp không xuất hiện phần tử có giá trị bằng 𝑏𝑗 trong dãy 𝐴 ghi ra duy nhất số 0.

## Test case mẫu

### Đầu vào mẫu 1

```text
15 5 
1 2 3 4 4 4 4 4 4 5 6 7 8 9 10
-2 0 4 9 12
```

### Đầu ra mẫu 1

```text
0
0
4 9
14 14
0
```
