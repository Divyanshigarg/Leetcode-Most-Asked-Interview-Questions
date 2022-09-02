class Solution {
public:
    int search(vector<int>& nums, int target) {
//         int n=nums.size();
//         for(int i=0;i<n;i++)
//         {
//             if(target==nums[i])
//                 return i;
//         }
//         return -1;
//     }
        
        
        //second method to solve this
//         int n = nums.size();
//         int low = 0 , high = n-1;
//         while(low <= high)
//         {
//             if(nums[low] == target)    return low;
//             else if(nums[high] == target)   return high;
//             else{   low++;  high--; }
//         }
//         return -1;
//     }
        
       //third method and the fastest one is to use the binary search algorithm
 int n = nums.size();
int s= 0;
int e=n-1;

    while(s<=e){
        int mid=(s+e)/2;
        
        if(nums[mid]==target){
            return mid;
        }
        
        if(nums[s]<=nums[mid]){
            if(target >= nums[s] && target<=nums[mid]){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }else{
            if(target<=nums[e] && target>=nums[mid]){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
    }
    return -1;
    }
    
};
problem link:
https://leetcode.com/problems/search-in-rotated-sorted-array/
