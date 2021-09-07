/*******************************************************************************************************************
1_two-sum.c 
方法一：暴力枚举

最容易想到的方法是枚举数组中的每一个数 x，寻找数组中是否存在 target - x。

当我们使用遍历整个数组的方式寻找 target - x 时，需要注意到每一个位于 x 之前的元素都已经和 x 匹配过，因此不需要再进行匹配。
而每一个元素不能被使用两次，所以我们只需要在 x 后面的元素中寻找 target - x。
********************************************************************************************************************/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    if(nums == NULL || numsSize == 0)
        return NULL;

    for(int i = 0; i < numsSize; i++)
        for(int j = i+1; j < numsSize; j++)
            if(nums[i] + nums[j] == target){
                int* res = malloc(sizeof(int) * 2);
                res[0] = i;
                res[1] = j;
                *returnSize = 2;
                return res;
            }
    
    *returnSize = 0;
    return NULL;
}
