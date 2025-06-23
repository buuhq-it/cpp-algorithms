# Bài 3: Tên trộm

## Đề bài

Có một dãy ngôi nhà dọc theo một con đường.
Trong mỗi ngôi nhà, chủ nhân đều có cất một số tiền.
Một tên cướp muốn trộm tiền trong các ngôi nhà đó nhưng **không dám trộm các ngôi nhà liền kề nhau** vì sợ để lại dấu vết.
Tên cướp **có khả năng trộm số tiền tối đa từ một ngôi nhà trong số tất cả các ngôi nhà** mà nó có thể trộm.
Số tiền trong các ngôi nhà được cho trong một mảng số nguyên biểu thị ngôi nhà thứ i có A[i] usd. Cho số
**K là số nhà tối thiểu mà tên cướp sẽ trộm**. Tên cướp có thể trộm ít nhất K căn nhà

## Yêu cầu

Cho biết **số tiền tối thiểu** mà tên cướp có thể trộm được trong tất cả các phương án có thể trộm từ ít nhất K ngôi nhà

## Mô tả Đầu vào

vào từ file văn bản **TENTROM.INP** gồm

- Dòng đầu chứa hai số nguyên N (1 <= N <= 10^6) và K (1 <= K <= (N+1)/2)
- Dòng tiếp theo chứa N số nguyên cách nhau khoảng trắng là số tiền có trong mỗi ngôi nhà (1 <= ai <= 109).

## Ràng buộc

## Mô tả đầu ra

Kết quả: ghi ra file văn bản **TENTROM.OUT** ghi số tiền trộm it nhất trong các phương án

## Giải thích

Có ba phương án để trộm tiền từ ít nhất 2 ngôi nhà.
Số tiền lớn nhất có thể trộm từ nhà thứ 0 đến thứ 2 là 5
Số tiền lớn nhất có thể trộm từ nhà thứ 0 đến thứ 3 là 9
Số tiền lớn nhất có thể trộm từ nhà thứ 1 đến thứ 3 là 9
Do đó, số tiền tối thiểu tên cướp có thể trộm từ 3 phương án trên là 5

## Test case mẫu

### Đầu vào mẫu 1

```text
4 2
2 3 5 9
```

### Đầu ra mẫu 1

```text
5
```
