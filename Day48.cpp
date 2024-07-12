class Solution {
public:
    string frequencySort(string s) {
        map<char, int>mp;
        string ans = "";
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }

        priority_queue<pair<int, char>>pq;
        for(auto x:mp){
            pq.push({x.second, x.first});
        }
        while(!(pq.empty())){
            int times = pq.top().first;
            char ele = pq.top().second;
            ans += string(times, ele);
            pq.pop();
        }
        return ans;
    }
};
