class Solution {
public:
    //题解1：暴力法
    bool searchMatrix_1(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()||matrix[0].empty())return false;
        for(const auto& m:matrix)
        {
            if(find(m.begin(),m.end(),target)!=m.end())return true;
        }
        return false;
    }

    //题解2：缩小领域法
    //因为每一行递增，每一列递增。所以我们可以从右上角往左下角找或者从左下角往右上角找。每次比较可以排除一行或者一列，时间复杂度为O(m+n)
    bool searchMatrix_2(vector<vector<int>>& matrix,int target){
        if(matrix.empty()||matrix[0].empty())return 0;
        //从左下角上右上角寻找目标值
        int x=matrix.size()-1,y=0;
        while(x>=0&&y<matrix[0].size())
        {
            if(matrix[x][y]>target)x--;//[x,y]的值比目标值大，上移
            else if(matrix[x][y]<target)y++;//[x,y]的值比目标值小，右移
            else return true;
        }
        return false;
    }

    //题解3：标准的二分查找模板，将二维矩阵拖为一维矩阵，然后就是一个有序的一维数组了，利用二分查找就行
    bool searchMatrix(vector<vector<int>>& matrix,int target){
        if(matrix.empty()||matrix[0].empty())return 0;
        int left=0,right=matrix.size()*matrix[0].size()-1;
        int n=matrix[0].size();
        while(left<=right)//循环结束的条件为区间内没有元素了
        {
            int mid=left+((right-left)>>1);
            if(matrix[mid/n][mid%n]>target)right=mid-1;
            else if(matrix[mid/n][mid%n]<target)left=mid+1;
            else return true;
        }
        return false;
    }
};
