class Solution {
public:
    int sumOfList(vector<int>& lists) {
        int sum = 0;
        for(int i = 0; i < lists.size(); i++) sum += lists[i];
        return sum; 
    }
    
    int missingNumber(vector<int>& nums) {
        if(find(nums.begin(), nums.end(), 0) == nums.end()) return 0;
        
        int max_num = *max_element(nums.begin(), nums.end());
        
        vector<int> copy;
        for(int i = 0 ; i < max_num + 1; i++) copy.push_back(i);
        
        //int copy_sum = sumOfList(copy);
        //int nums_sum = sumOfList(nums);
        if(sumOfList(copy) - sumOfList(nums) == 0) return max_num+1;
        else return sumOfList(copy) - sumOfList(nums);
    }
};
