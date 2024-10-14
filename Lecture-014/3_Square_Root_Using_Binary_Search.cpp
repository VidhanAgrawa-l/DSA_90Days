//leetcode ->69

class Solution {
public:
    long long int mySqrt(int x) {
        int start = 0;
        int end = x;
        long long int save = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            long long int square = (long long)mid * mid;

            if (square == x) {
                return mid;  // Found exact square root
            } else if (square < x) {
                save = mid;  // Possible candidate for the truncated square root
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        return save;  // Return the truncated square root
    }
};


            // if (square >= x ){
            //     end = mid - 1;
            // }if(square < x){
            //     save = mid;
            //     start = mid + 1;
            // }else{
            //     return mid;
            // }


// The issue with your code is in the conditions inside the while loop. 
// Specifically, the else statement, which is meant to return mid when square == x, 
// is placed after both if conditions. This means that when square == x, it first checks square >= x, 
// which causes end to be adjusted, and it doesn't return immediately.

// Corrected Code:

// To fix this, you should handle the square == x case directly with an else if rather than a separate else. Here’s the corrected version of the code:
