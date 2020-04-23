void reverseStr(string& str) 
{ 
    int n = str.length(); 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 
int Solution::reverse(int A) {
    if(A<0){
        string s=to_string(A);
        string s1="";
        for(int i=1;i<s.length();i++)
            s1+=s[i];
        reverseStr(s1);
        return -1*stod(s1)<INT_MIN ? 0:-1*stod(s1);
    }
    else {
        string s=to_string(A);
        reverseStr(s);
        return stod(s)>INT_MAX ? 0 : stod(s);
    }
        
}

