
# [Left Rotate an Array by d place](https://bit.ly/413kJGl)

### Problem statement
Given an array with N elements, the task is to rotate the array to the left by K steps, where K is non-negative.

```
Example:
Input: 'N' = 5, 'ARR' = [1, 2, 3, 4, 5]
Output: [2, 3, 4, 5, 1]
We moved the 2nd element to the 1st position and 3rd element to the 2nd position and 4th element to the 3rd position and 5th element to the 4th position and move 0th element to the 5th position.
```

## Detailed explanation (Input/output format, Notes, Images}
### Input Format:
```
The first line contains an integer N representing the size of the array.
The second line contains N space-separated integers representing the elements of the array.
The last line contains an integer K representing the number of times the array has to be rotated in the left direction.
```
### Output Format:
```
The only line of the output prints N space-separated integer representing the Rotated aray elements.
```
### Constraints:
```
1 <= N <= 10^3
1 <= arr[i] <= 10^9
1 <= K < N
```

### Sample input:
```
8
7 5 2 11 2 43 1 1
2
```
### Sample output:
```
2 11 2 43 1 1 7 5
```

### Explanation Of Sample Input:
```
Rotate 1 steps to the left: 5 2 11 2 43 1 1 7
Rotate 2 steps to the left: 2 11 2 43 1 1 7 5
```