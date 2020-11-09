class FindMin {
 public int findMin(int[] nums) {
     if (nums == null || nums.length <= 0) {
         return 0;
     }
     
     int len = nums.length;
     if (len == 1) {
         return nums[0];
     }
     
     int start = 0;
     int end = nums.length - 1;
     while (start < end) {
         int mid = (start + end) >> 1;
         // 需要与nums[end]比较才能判断出来mid的位置
         if (nums[mid] > nums[end]) {
             start = mid + 1;
         } else if (nums[mid] < nums[end]) {
             end = mid;
         } else {
             // 存在重复元素时，此题目不重复 可直接使用break
             end = end - 1;
         }
     }
     return nums[start];
 }
}
