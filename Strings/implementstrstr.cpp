int Solution::strStr(const string A, const string B) {
    if(A.size()==0 or B.size()==0)
        return -1;
    else {
        if(A.size()>=B.size()){
            for(int i=0;i<A.size()-B.size()+1;i++){
                if(A[i]==B[0]){
                    string s1=A.substr(i,B.size());
                    if(s1==B)
                        return i;
                }
            }
            return -1;
        }
        else {
            return -1;
        }
    }
}

