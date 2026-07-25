class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();

        if (n1 > n2) return false;

        vector<int> v1(26, 0), v2(26, 0);

        for (char c : s1)
            v1[c - 'a']++;

        for (int i = 0; i < n1; i++)
            v2[s2[i] - 'a']++;

        int index = 0;

        while (index + n1 < n2) {
            if (v1 == v2)
                return true;

            v2[s2[index] - 'a']--;
            v2[s2[index + n1] - 'a']++;
            index++;
        }

        return v1 == v2;
    }
};