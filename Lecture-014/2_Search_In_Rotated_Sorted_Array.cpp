#include <iostream>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = pivotIndex(nums, n);

        // Search in the appropriate half depending on the target and pivot
        if (target >= nums[pivot] && target <= nums[n-1]) {
            return searchElement(nums, 0, pivot - 1, target);
        } else {
            return searchElement(nums, pivot, n - 1, target);
        }
    }
    
private:
    // Function to find the pivot index in a rotated sorted array
    int pivotIndex(vector<int>& nums, int size) {
        int start = 0;
        int end = size - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] > nums[size - 1]) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }

        return start;
    }

    // Function to perform binary search for a target in a specified range
    int searchElement(vector<int>& nums, int start, int end, int target) {
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return -1; // Target not found
    }
};
