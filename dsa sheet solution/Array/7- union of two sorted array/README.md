
# [Union of two sorted array](https://bit.ly/419I1dW)

### Problem statement
Given two sorted arrays, 'A' and 'B', of size 'N' and 'M, respectively, return the union of the arrays.
The union of two sorted arrays can be defined as an array consisting of the common and the distinct elements of the two arrays. The final array should be sorted in ascending order.
Note: A and B may contain duplicate elements but the union array must contain unique elements.

```
Example:
Input: 'N' = 5 'M' = 3
"A" = [1, 2, 3, 4, 6]
'B' = [2, 3, 5]
Output: [1, 2, 3, 4, 5, 6]
Explanation: Common elements in 'A' and 'B' are: [2, 3]
Distinct elements in 'A' are: [1, 4, 6]
Distinct elements in 'B' are: [5]
Union of 'A' and 'B' is: [1, 2, 3, 4, 5, 6]
```

### Sample input 1:
```
5 3
1 2 3 4 6
2 3 5
```
### Sample Output 1:
```
1 2 3 4 5 6
```
### Explanation Of Sample Input 1:
```
Input: ‘N’ = 5 ‘M’ = 3
‘A’ = [1, 2, 3, 4, 6]
‘B’ = [2, 3, 5]

Output: [1, 2, 3, 4, 5, 6]

Explanation: Common elements in ‘A’ and ‘B’ are: [2, 3]
Distinct elements in ‘A’ are: [1, 4, 6]
Distinct elements in ‘B’ are: [5]
Union of ‘A’ and ‘B’ is: [1, 2, 3, 4, 5, 6]
```

### Sample input 2:
```
4 3
1 2 3 3
2 2 4
```
### Sample Output 2:
```
1 2 3 4
```

### Constraints:
```
1 <= N, M <= 10^5 
-10^9 <= A[i], B[i] <= 10^9
Time Limit: 1 sec
```