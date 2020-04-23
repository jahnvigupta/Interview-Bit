long long power(long long x,long long n,long long d){
    if(n==0)
        return 1;
    long long temp=power(x,n/2,d)%d;
    if(n%2==0)
        return (temp*temp)%d;
    else {
        if(x>=0)
            return ((x%d)*((temp*temp)%d))%d;
        else 
            return (d+((x%d)*(temp*temp)%d))%d;
        
    }
    
}

int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(x==0)
        return 0;
    long long x1=x,n1=n,d1=d;
    return power(x1,n1,d1);
}

