
//first check which part io sortedbu lloking at first and the mid element 
//one get that if left is sorted search in left
//if right part is sorted then serach in right











class Solution {
public:
    int search(vector<int>& arr, int x) {
        int i=0;
        int n=arr.size();
        int j=n-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid]==x){
                return mid;
            }
            if(arr[i]<=arr[mid]){
                if(x<=arr[mid] && x>=arr[i]){
                    j=mid-1;
                }else{
                    i=mid+1;
                }
            }
            else{
                if(x>=arr[mid]  && x<=arr[j]){
                    i=mid+1;
                }else{
                    j=mid-1;
                }
            }
        }
        return -1;
    }
};
