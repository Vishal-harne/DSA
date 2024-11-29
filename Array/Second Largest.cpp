//make 2 varieble largest and seclargest
//make 2 check condition one for the largest and by default set previous largest as secondlargest
//incase if we get rlrmrnt which is smaller than the largest but greter than the previus senconfd largest then make it as secind 
//lagest that it 




class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
     int largest=INT_MIN;
     int secondlargest=INT_MIN;
     for(int i=0;i<arr.size();i++){
         if(arr[i]>largest){
             secondlargest=largest;
             largest=arr[i];
         }
          if(arr[i]>secondlargest  &&  arr[i]<largest){
             secondlargest=arr[i];
         }
         
     }
     if(secondlargest==INT_MIN){
         return -1;
     }
     return secondlargest;
    }
};
