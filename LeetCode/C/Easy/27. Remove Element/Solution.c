int removeElement(int* nums, int numsSize, int val) {
    int k = 0;  // Count of elements not equal to val

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];  // Move valid element to front
            k++;
        }
    }

    return k;
}