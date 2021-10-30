string convert(string s, int numRows) {
        
        if(numRows == 1)
            return s;
        
        vector<string> ans(numRows);
        int p = 0, inc = 1;
        
        for(int i=0; i<s.length(); i++)
        {
            ans[p].push_back(s[i]);
            
            if(p+inc >= numRows or p+inc < 0)
            inc *= (-1);
            
            p += inc;
        }
        
        string res;
        
        for(int i=0; i<numRows; i++)
        res += ans[i];
        
        return res;
    }
