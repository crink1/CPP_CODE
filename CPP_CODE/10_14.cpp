class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         vector<int> v;
//         v.push_back(nums[0]);
//         for(int i = 1; i<nums.size(); i++)
//         {
//             int tmp = v[i - 1] + nums[i];
//             v.push_back(tmp);
//         }
//         for(int i = 0 ; i <nums.size(); i++)
//         {
//             int tmp = v[i];
//             int left = 0;
//             if( i != 0)
//             {
//                 left = v[i - 1];
//             }
            
//             if((v[nums.size()-1] - tmp) == left)
//             {
//                 return i;
//             }
//         }
//         return -1;
//     }
// };
