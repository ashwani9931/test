#include <stdio.h>

int main() {
    int A[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(A) / sizeof(A[0]);
    int low = 0, high = n - 1;
    
    if (low < high) {
        int mid = (low + high) / 2;
        
        int low1 = low, high1 = mid;
        if (low1 < high1) {
            int mid1 = (low1 + high1) / 2;
        }
        
        int low2 = mid + 1, high2 = high;
        if (low2 < high2) {
            int mid2 = (low2 + high2) / 2;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    
    return 0;
}