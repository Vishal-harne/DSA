//first take i and j as first and last and then make loop till they both not cross each ohter
//make mid of both and then go proceed chekc 
//mid is on evn number or not if so then take it to odd position chekc both element form odd to even are same or not
//if same menas element lies in right side else in left side make the mid as last element kepp on
//finally our start pointer weill stop on answer


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
       // int mid=start+(end-start)/2;
        while(i<j){
           int  mid=(i+j)/2;
           if(mid%2==1){
            mid--;
           }
           if(nums[mid]==nums[mid+1]){
                i=mid+2;
           }
           else{
            j=mid;
           }
        }
        return nums[i];
    }
};
