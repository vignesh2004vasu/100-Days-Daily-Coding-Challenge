Problem Statement
You are given an integer array 'A' of size 'N', sorted in non-decreasing order. YOL
are also given an integer 'target'.
Your task is to write a function to search for 'target' in the array 'A'. If it exists,
return its index in O-based indexing. If 'target' is not present in the array 'A',
return -1.

Answer:
int search(vector<int> &nums, int target) {

    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;  
        }

        if (nums[mid] < target) {
            left = mid + 1;  
        } else {
            right = mid - 1;  
        }
    }

    return -1;

}
