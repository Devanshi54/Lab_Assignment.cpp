class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> s(nums.begin(), nums.end());

        int i=0;

        for(int num :nums){
            int j=1;
            if(s.find(num-1) == s.end()){
                int curr_n= num;


                while(s.find((curr_n+1)) != s.end()){
                    j++;
                    curr_n++;
                }

                i= max(i, j);

            }

        }

        return i;

    }
};
