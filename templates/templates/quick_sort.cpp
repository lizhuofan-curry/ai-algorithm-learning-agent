// Algorithm: Quick Sort
// Use case: Sort an array in ascending order
// Time complexity: Average O(n log n), worst O(n^2)

#include <iostream>
using namespace std;

const int N = 100010;
int q[N];

void quick_sort(int q[], int l, int r)
{
    if (l >= r) return;
    int i = l - 1, j = r + 1;
    int x = q[l + r >> 1];

    while (i < j) {
        do i++; while(q[i] < x);
        do j--; while(q[j] > x);
        if(i < j) swap(q[i], q[j]);
    }

    quick_sort(q, l, j);
    quick_sort(q, j+1, r);
}

int main() {
    int n; cin >> n;
    for(int i=0;i<n;i++) cin >> q[i];
    quick_sort(q,0,n-1);
    for(int i=0;i<n;i++) cout << q[i] << ' ';
    return 0;
}

/*
Common mistakes:
1. Pivot choice不当可能导致性能下降
2. 递归边界 [l, j] 和 [j+1, r] 必须正确
3. 循环边界 l>=r
4. do-while 确保 i,j 至少移动一次
*/
