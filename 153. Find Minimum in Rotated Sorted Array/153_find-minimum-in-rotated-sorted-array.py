
class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.empty())
            return -1;

        int index1 = 0;
        int index2 = nums.size()-1;
        int IndMid = index1;

        while(nums[index1] >= nums[index2])
        {
            if(index2 - index1 == 1)
            {
                IndMid = index2;
                break;
            }

            IndMid = index1 + (index2-index1)/2;
            //IndMid = (index2 + index1) /2;

            if(nums[index1] == nums[index2] && nums[index1] == nums[IndMid])
                return MinInOrder(nums, index1 ,index2);
            if(nums[index1] < nums[IndMid])
                index1 = IndMid;
            else if(nums[index2] > nums[IndMid])
                index2 = IndMid;
        }
        return nums[IndMid];
    }

    int MinInOrder(vector<int>& nums, int left, int right)
    {
        int result = nums[left];

        for(unsigned int i = left+1; i < right; i++)
        {
            if(result > nums[i])
                result = nums[i];
        }

        return result;
    }
};
