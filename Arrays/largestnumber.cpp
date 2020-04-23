bool compare(string s1, string s2) 
{ 
    if(s1+s2>s2+s1)
        return 0;
    else
        return 1;
}
string Solution::largestNumber(const vector<int> &A) {
    
    vector<string> B;
    int z=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==0)
            z++;
        B.push_back(to_string(A[i]));
    }
    if(z!=A.size()) {
        sort(B.begin(),B.end(),compare);
        string s="";
        for(int i=B.size()-1;i>-1;i--)
            s+=B[i];
        return s;
    }
    else    
        return "0";
}
 
