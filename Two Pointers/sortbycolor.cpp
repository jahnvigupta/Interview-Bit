void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int j=0,flg=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==0)
            continue;
        else if(flg==0){
           j=i+1;
           while(j<A.size() and A[j]!=0){
               j++;
           }
           if(j==A.size())
               break;
            else
                swap(A[i],A[j]);
            flg=1;
        }
        else {
            while(j<A.size() and A[j]!=0){
               j++;
            }
            if(j==A.size())
               break;
            else
                swap(A[i],A[j]);
        }
    }
    int tmp=A.size();
    for(tmp=0;tmp<A.size();tmp++){
        if(A[tmp]!=0)
            break;
    }
    //cout<<tmp<<endl;
    j=0,flg=0;
    for(int i=tmp;i<A.size();i++){
        if(A[i]==1)
            continue;
        else if(flg==0){
          j=i+1;
          while(j<A.size() and A[j]!=1){
              j++;
          }
          if(j==A.size())
              break;
            else
                swap(A[i],A[j]);
            flg=1;
        }
        else {
            while(j<A.size() and A[j]!=1){
              j++;
            }
            if(j==A.size())
              break;
            else
                swap(A[i],A[j]);
        }
    }
    tmp=A.size();
    for(tmp=0;tmp<A.size();tmp++){
        if(A[tmp]!=1 and A[tmp]!=0)
            break;
    }
    //cout<<tmp<<endl;
    j=0,flg=0;
    for(int i=tmp;i<A.size();i++){
        if(A[i]==2)
            continue;
        else if(flg==0){
          j=i+1;
          while(j<A.size() and A[j]!=2){
              j++;
          }
          if(j==A.size())
              break;
            else
                swap(A[i],A[j]);
            flg=1;
        }
        else {
            while(j<A.size() and A[j]!=2){
              j++;
            }
            if(j==A.size())
              break;
            else
                swap(A[i],A[j]);
        }
    }
    
}

