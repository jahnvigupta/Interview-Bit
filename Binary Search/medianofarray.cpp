double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A.size()==0){
        double ans=0;
        if(B.size()%2==0){
            ans=(B[B.size()/2-1]+B[B.size()/2])/2.0;
        }
        else
            ans=B[B.size()/2];
        //cout<<ans<<endl;
        return (double)ans;
    }
    else if(B.size()==0){
        double ans=0;
        if(A.size()%2==0){
            
            //cout<<"hi"<<endl;
            ans=(A[A.size()/2-1]+A[A.size()/2])/2.0;
        }
        else
            ans=A[A.size()/2];
        //cout<<ans<<endl;
        return (double)ans;
    } else {
        if((A.size()+B.size())%2==1){
            int mi=min(A[0],B[0]);
            int ma=max(A[A.size()-1],B[B.size()-1]);
            int req=(A.size()+B.size())/2+1;
            while(mi<ma){
                int mid=(mi+ma)/2;
                if(mi+ma<0 and abs(mi+ma)%2==1)
                    mid--;
                int temp=0;
                temp+=upper_bound(A.begin(),A.end(),mid)-A.begin();
                temp+=upper_bound(B.begin(),B.end(),mid)-B.begin();
                if(temp<req)
                    mi=mid+1;
                else
                    ma=mid;
            } 
            return double(mi);
        }
        else {
            //cout<<"hi"<<endl;
            int mi=min(A[0],B[0]);
            int ma=max(A[A.size()-1],B[B.size()-1]);
            int req=(A.size()+B.size())/2;
            while(mi<ma){
                //cout<<mi<<" "<<ma<<endl;
                int mid=(mi+ma)/2;
                if(mi+ma<0 and abs(mi+ma)%2==1)
                    mid--;
                int temp=0;
                temp+=upper_bound(A.begin(),A.end(),mid)-A.begin();
                temp+=upper_bound(B.begin(),B.end(),mid)-B.begin();
                if(temp<req)
                    mi=mid+1;
                else
                    ma=mid;
            } 
            double ans1=0,ans2=0;
            ans1 = double(mi);
            
            mi=min(A[0],B[0]);
            ma=max(A[A.size()-1],B[B.size()-1]);
            req=(A.size()+B.size())/2+1;
            while(mi<ma){
                int mid=(mi+ma)/2;
                if(mi+ma<0 and abs(mi+ma)%2==1)
                    mid--;
                int temp=0;
                temp+=upper_bound(A.begin(),A.end(),mid)-A.begin();
                temp+=upper_bound(B.begin(),B.end(),mid)-B.begin();
                if(temp<req)
                    mi=mid+1;
                else
                    ma=mid;
            } 
            ans2= (double)mi;
            
            return (ans1+ans2)/2;
        }
        
    }
    
}

