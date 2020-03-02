int max(int* nums, int numsSize) {
    int max = nums[0];
    for(int i = 1; i < numsSize; i++) {
        if(nums[i] > max) max = nums[i];
    }
    return max;
}

int sumOfList(int* lists, int numsSize) {
    int sum = 0;
    for(int i = 0; i < numsSize; i++) sum += lists[i];
    return sum; 
}

int missingNumber(int* nums, int numsSize){
    bool have = false;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == 0) {
            have = true;
            break;
        }
    }
    
    if(have == false) return 0;
    
    int max_num = max(nums, numsSize);
        
    int* copy = malloc((max_num+1) * sizeof(int));
    for(int i = 0 ; i < max_num + 1; i++) copy[i] = i;
        
    int copy_sum = sumOfList(copy, max_num+1);
    int nums_sum = sumOfList(nums, numsSize);
    if(copy_sum - nums_sum == 0) return max_num+1;
    else return copy_sum - nums_sum;
}
