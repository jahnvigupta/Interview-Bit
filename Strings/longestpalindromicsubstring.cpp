string expnd(string s, int start,int end){
    //cout<<"hi"<<endl;
    while(start>-1 and end<s.length() and (s[start]==s[end])){
        start--;
        end++;
    }
    return s.substr(start+1, end-start-1);
}

string Solution::longestPalindrome(string A) {
    string s="";
    for(int i=0;i<A.length();i++){
        //cout<<i<<endl;
        string s1="";
        s1=expnd(A,i,i);
        if(s1.length()>s.length())
            s=s1;
        s1=expnd(A,i,i+1);
        if(s1.length()>s.length())
            s=s1;
    }
    return s;
}

