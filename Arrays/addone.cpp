vector<int> Solution::plusOne(vector<int> &A) {
    
    vector<int> B(A.size()+1);
    int k=0;
    for(int i=0;i<A.size();i++){
        if(A[i]!=0){
            break;
        }
        else
            k++;
    }
    vector<int> C;
    if(k!=A.size())
    for(int z=k;z<A.size();z++){
        C.push_back(A[z]);
    }
    else
        C.push_back(0);
    C[C.size()-1]++;
    int i=C.size()-1;
    while(i>0 and C[i]>9){
            C[i]=0;
            C[i-1]++;
            i--;
        
    }
    if(C[0]<=9)
        return C;
    else {
        C[0]=0;
        for(int i=0;i<C.size()+1;i++){
            if(i==0)
                B[0]=1;
            else
                B[i]=C[i-1];
        }
        return B;
    }
    
}
