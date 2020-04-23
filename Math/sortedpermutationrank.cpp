long long factorial(int n) 
{ 
    return (n==1 || n==0) ? 1:  (n*(factorial(n-1)%1000003))%1000003;  
} 
int Solution::findRank(string A) {
    vector<char> c;
    for(int i=0;i<A.length();i++)
        c.push_back(A[i]);
    sort(c.begin(),c.end());
    int cn[c.size()]={0};
    int ans=0;
    for(int i=0;i<A.size();i++){
        int pos=find(c.begin(),c.end(),A[i])-c.begin();
        int cnt=0;
        for(int i=0;i<pos;i++){
            if(cn[i]==0)
                cnt++;
        }
        cn[pos]=1;
        ans+=(cnt*(factorial(A.size()-1-i))%1000003);
        //cout<<ans<<endl;
    }
    return (ans+1)%1000003;
}

