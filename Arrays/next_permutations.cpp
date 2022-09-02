class Solution {
public:
    void nextPermutation(vector<int>& nums) {   
        if(nums.size()==1){
            return;
        }
        int idx1;
        for(int i=nums.size()-2;i>=0;i--){   // index 0 1 2 3 4 
            if(nums[i]<nums[i+1]){          //  e.g. 4 1 5 3 2
                idx1=i;                   //  so here idx1=1
                break;
            }
        }
        if(idx1<0){
            reverse(nums.begin(),nums.end());       //this loop is basically for e.g 2 cases
        }else{
            int idx2=0;
            for(int i=nums.size()-1;i>=0;i--){
                if(nums[i]>nums[idx1]){
                    idx2=i;                        //here idx2=4
                    break;
                }
            }
            swap(nums[idx1],nums[idx2]);      // swaping index 1 to 4 we will get 4 2 5 3 1
            sort(nums.begin()+idx1+1,nums.end());   //than sorting we wil get 4 2 1 3 5 
        }   
    }
};

problem link:
https://leetcode.com/problems/next-permutation/
