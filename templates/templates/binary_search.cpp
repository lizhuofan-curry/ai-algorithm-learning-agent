// Algorithm: Binary Search
// Use case: Find boundary in a monotonic interval
// Time complexity: O(log n)

#include <iostream>
using namespace std;

// Placeholder function, define according to problem
bool check(int x) { return x > 0; }

// Left boundary search
int bsearch_left(int l,int r){
    while(l<r){
        int mid=l+r>>1;
        if(check(mid)) r=mid;
        else l=mid+1;
    }
    return l;
}

// Right boundary search
int bsearch_right(int l,int r){
    while(l<r){
        int mid=l+r+1>>1;
        if(check(mid)) l=mid;
        else r=mid-1;
    }
    return l;
}

/*
Notes:
1. Binary search relies on monotonicity
2. Choose left/right template based on check(mid) meaning
3. mid = l+r+1>>1 avoids infinite loop in right-boundary search
*/
