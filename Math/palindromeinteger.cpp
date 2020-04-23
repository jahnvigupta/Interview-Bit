int Solution::isPalindrome(int A) {
    string s;
    s=to_string(A);
    if(s.length()==1)
        return 1;
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-1-i])
            return 0;
    }
    return 1;
}

