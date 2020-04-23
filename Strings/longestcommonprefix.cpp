string Solution::longestCommonPrefix(vector<string> &A) {
    string s1,s2="";
    int len=INT_MAX;
    for(int i=0;i<A.size();i++)
        if(A[i].length()<len){
            len=A[i].length();
            s1=A[i];
        }
    int flg=0;
    for(int i=0;i<s1.length();i++){
        for(int j=0;j<A.size();j++){
            if(A[j][i]!=s1[i]){
                flg=1;
                break;
            }
        }
        if(flg==1)
            break;
        s2+=s1[i];
    }
    return s2;
}

