class Solution {
public:

    bool sortt(pair<int ,int> p1, pair<int, int> p2){
            return p1.second > p2.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int , int> m;

        vector<int> sol;

        for(auto val: nums){
            m[val]++;
        }


        vector<pair<int, int>> v(m.begin(), m.end());

        sort(v.begin(), v.end(), [](pair<int, int> p1, pair<int, int> p2) {
        return p1.second > p2.second;
        });

        for(int i=0 ; i < k; i++ ){
            sol.push_back(v[i].first);                       
        }

        return sol;

    }
};
