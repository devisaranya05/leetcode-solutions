int countSpecialIntegers(int* nums, int numsSize) {
    int  ans=0;
    for(int val=1; val<=100; val++){
        int idx[3], count=0;
        for(int i=0; i<numsSize; i++){
            if(nums[i] == val){
                if(count < 3) idx[count] = i;
                count++;
            }
        }
        if(count == 3 && idx[1] - idx[0] == idx[2] - idx[1]){
            ans++;
        }
    }
    return ans;
}