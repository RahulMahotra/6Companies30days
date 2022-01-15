 void ans(int a[], int N, int curridx, string s, vector<string>&v, unordered_map<int, string>&mp)
    {
        if(curridx>=N)
        {
            v.push_back(s);
            return;
        }
        string temp = mp[a[curridx]];
        for(int i=0; i<temp.size(); i++)
        ans(a, N, curridx+1, s+temp[i], v, mp);
        return;
    }
        vector<string> possibleWords(int a[], int N)
    {
        vector<string>v;
        unordered_map<int, string>mp;
        mp[2]="abc";
        mp[3]="def";
        mp[4]="ghi";
        mp[5]="jkl";
        mp[6]="mno";
        mp[7]="pqrs";
        mp[8]="tuv";
        mp[9]="wxyz";
        ans(a, N, 0, "", v, mp);
        return v;
    }
