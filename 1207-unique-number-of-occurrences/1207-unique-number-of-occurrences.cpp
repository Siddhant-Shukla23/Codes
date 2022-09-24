class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> umap;
        unordered_set<int> st;
        for(auto n: arr) ++umap[n]; 
        for(auto& p:umap) st.insert(p.second);
        return umap.size()==st.size();
    }
};




// unordered_map<int, int> m;
//   unordered_set<int> s;
//   for (auto n : arr) ++m[n];
//   for (auto& p : m) s.insert(p.second);
//   return m.size() == s.size();