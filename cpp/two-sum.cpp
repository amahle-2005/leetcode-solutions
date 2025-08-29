#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {

            vector<int> solution;
            unordered_map<int,vector<int>> map;

            for (int i = 0 ; i < nums.size();i++) {
                map[nums[i]].push_back(i);
            }

            for(int i = 0; i < nums.size();i++)
            {
                auto value = map.find(target - nums[i]);

                if( value != map.end())
                {     
                    vector<int> &list = value ->second;
                    
                    if( list.size() == 1 && i != list[0])
                    {
                        solution.push_back(i);
                        solution.push_back(list[0]);
                        return solution;
                    }
                    if(list.size() > 1)
                        if(i == list[0])
                        {
                            solution.push_back(i);
                            solution.push_back(list[1]);
                            return solution;
                        }else
                        {
                            solution.push_back(i);
                            solution.push_back(list[0]);
                            return solution;
                        }
                }
            }
            return solution;
        }
};
