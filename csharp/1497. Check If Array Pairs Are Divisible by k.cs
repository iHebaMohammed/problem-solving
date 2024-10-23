using System;
using System.Collections.Generic;

public class Solution {
    public bool CanArrange(int[] arr, int k) {
        int[] remainderCounts = new int[k];
        
        foreach (int num in arr) {
            int remainder = num % k;
            if (remainder < 0) remainder += k; 
            remainderCounts[remainder]++;
        }
        
        for (int i = 0; i <= k / 2; i++) {
            if (i == 0) {
                if (remainderCounts[i] % 2 != 0) {
                    return false;
                }
            } else {
                if (remainderCounts[i] != remainderCounts[k - i]) {
                    return false;
                }
            }
        }
        
        return true;
    }
}
