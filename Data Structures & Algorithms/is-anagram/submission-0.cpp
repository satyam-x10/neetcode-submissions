class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> smap;
        unordered_map <char,int> tmap;

        int sn=s.size();
        int tn=t.size();
        if (sn!=tn) return false;
        for(int i=0;i<sn;i++){
            smap[s[i]]++;
        }
        for(int i=0;i<tn;i++){
            tmap[t[i]]++;
        }
        for(int i=0;i<sn;i++){
            if(smap[s[i]]!=tmap[s[i]])return false;
        }
        return true;
    }
};
