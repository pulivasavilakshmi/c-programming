#include <limits.h>

#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

double findMedianSortedArrays(int* nums1, int m, int* nums2, int n) {
    if (m > n) return findMedianSortedArrays(nums2, n, nums1, m);
    
    int low = 0, high = m, total = (m + n + 1) / 2;
    
    while (low <= high) {
        int i = (low + high) / 2;
        int j = total - i;
        
        int maxL1 = (i == 0) ? INT_MIN : nums1[i - 1];
        int minR1 = (i == m) ? INT_MAX : nums1[i];
        int maxL2 = (j == 0) ? INT_MIN : nums2[j - 1];
        int minR2 = (j == n) ? INT_MAX : nums2[j];
        
        if (maxL1 <= minR2 && maxL2 <= minR1) {
            if ((m + n) % 2 != 0) return MAX(maxL1, maxL2);
            return (MAX(maxL1, maxL2) + MIN(minR1, minR2)) / 2.0;
        }
        if (maxL1 > minR2) high = i - 1;
        else low = i + 1;
    }
    return 0.0;
}