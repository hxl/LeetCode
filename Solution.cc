// LeetCode, Remove Duplicates from Sorted Array
// 时间复杂度O(n)，空间复杂度O(1)
class Solution {
public:
int removeDuplicates(int A[], int n) {
if (n == 0) return 0;
int index = 0;
for (int i = 1; i < n; i++) {
if (A[index] != A[i])
A[++index] = A[i];
}
return index + 1;
}
};