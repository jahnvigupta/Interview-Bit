/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool compare(Interval i1,Interval i2){
    if(i1.start>i2.start)
        return 0;
    else if(i1.start==i2.start and i1.end>=i2.end)
        return 0;
    else
        return 1;
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> res;
    sort(A.begin(),A.end(),compare);
    if(A.size()==1)
        return A;
    else {
        for(int i=0;i<A.size();i++){
            if(A[i].end>=A[i+1].start and i!=A.size()-1){
                int j=i;
                Interval temp;
                temp.start=A[i].start;
                temp.end=A[i].end;
                while(j<A.size()-1 and temp.end>=A[j+1].start){
                    j++;
                    temp.end=max(temp.end,A[j].end);
                }
                res.push_back(temp);
                i=j;
                continue;
            }
            else
                res.push_back(A[i]);
        }
    }
    return res;
    
}

