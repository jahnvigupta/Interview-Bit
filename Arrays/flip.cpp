vector<int> Solution::flip(string A) {
    int X=-1,Y=-1,x=INT_MIN,y=INT_MIN,flg=0,z=0,o=0,ma=INT_MIN;;
    for(int i=0;i<A.length();i++){
        if(A[i]=='1')
            o++;
        else
            z++;
        if(o>z){
            z=0;
            o=0;
            flg=0;
        }
        
        if(z>o and flg==0){
            x=i+1;
            y=i+1;
            flg=1;
        }
        
        if(z>o and flg==1){
            int tmp=z-o;
            y=i+1;
            if(tmp>ma){
                ma=tmp;
                X=x;
                Y=y;
            }
            
        }
    }
    vector<int> V;
    if(X==-1 and Y==-1)
        return V;
    else {
        V.push_back(X);
        V.push_back(Y);
    
        return V;
    }
}
