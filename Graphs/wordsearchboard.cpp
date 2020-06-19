int m,n;
string s;
void dfs(vector<string> &A,int &ans,int i,int j,int p){
    if(p>s.length())
        return;
    if(A[i][j]!=s[p])
        return;
    if(p==s.length()-1 and A[i][j]==s[p]) {
        //cout<<A[i][j]<<" "<<s[p]<<endl;
        ans=1;
        return;
    }
    if(i-1>-1)
        dfs(A,ans,i-1,j,p+1);
    if(i+1<m)
        dfs(A,ans,i+1,j,p+1);
    if(j-1>-1)
        dfs(A,ans,i,j-1,p+1);
    if(j+1<n)
        dfs(A,ans,i,j+1,p+1);
    return;
}
int Solution::exist(vector<string> &A, string B) {
    int ans=0;
    s=B;
    //cout<<s.length()<<endl;int n=0,m=0;
string s;
void dfs(vector &A,int x,int y,int p,int &ok) // p is current index of B(0 base)
{
if(p>=s.length()) return;
if(x<0||
    m=A.size(),n=A[0].length();
    for(int k=0;k<m;k++){
        for(int l=0;l<n;l++){
            if(A[k][l]==B[0])
                dfs(A,ans,k,l,0);
            if(ans==1) {
                //cout<<"k "<<k<<" l "<<l<<endl;
                break;
            }
        }
        if(ans==1) {
            break;
        }
    }
    return ans;
}

