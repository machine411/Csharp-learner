/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/
//solution 1 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {   
    vector<int> result;
    for(int i=0;i<nums.size()-1;i++)
    {
      for(int j=1;j<=nums.size()-1-i;j++)  
      {
          if(nums[i]+nums[i+j]==target)
          {
              result.push_back(i);
              result.push_back(i+j);
              return result;
          }
      }
    }
        return result;
    }
};
/*
Runtime: 148 ms, faster than 24.76% of C++ online submissions for Two Sum.
Memory Usage: 9.2 MB, less than 88.56% of C++ online submissions for Two Sum.
*/

//solution2
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {   
    vector<int> result;
    for(int i=0;i<nums.size()-1;i++)
    {
        int j=1;
        int rest=nums.size()-i-1;

       while(j<=rest)
       {
        if(nums[i]+nums[i+j]==target)
       {
           result.push_back(i);
           result.push_back(i+j);
         return result;
       }
           j++;
       }
     
    }
        return result;
 }
};
/*
Runtime: 152 ms, faster than 21.27% of C++ online submissions for Two Sum.
Memory Usage: 9.3 MB, less than 78.47% of C++ online submissions for Two Sum.
*/

//solution3
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {   
    vector<int> result;
    unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.count(target-nums[i]))
            {
                result.push_back(i);
                result.push_back(m[target-nums[i]]);
                return result;
            }     
            m[nums[i]] = i;
     }

        return result;
    }
};

/*
Runtime: 8 ms, faster than 93.47% of C++ online submissions for Two Sum.
Memory Usage: 10 MB, less than 56.13% of C++ online submissions for Two Sum.
*/
