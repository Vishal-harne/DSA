//first make sure the searchhas to be lies between the element avalable in atrr else put it into the first positoion or last positoj
if(target<nums[0])return 0;
if(target>nums[n-1] )return n;
//else go on the loop and do chekc the given element is equl to value or not if not go left right 
//else do check is there any ement whicg is greter than him and and alson less than him and there is no existaence of this ellemntb 
//that is the insert position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        if(target<nums[0])return 0;
        if(target>nums[n-1])return n;
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target  && nums[mid+1]>target  && mid+1<n){
                return mid+1;
            }
            else if(nums[mid]<target){
                i=mid+1;
            }
            else if(nums[mid]>target){
                j=mid-1;
            }
        }
       return 0;
    }
};
