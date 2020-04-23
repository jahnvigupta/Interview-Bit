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
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> res; 
    for(int i=0;i<intervals.size();i++){
        if(intervals[i].end<newInterval.start)
            res.push_back(intervals[i]);
        else if((intervals[i].start>=newInterval.start and intervals[i].end<=newInterval.end) or (intervals[i].start<=newInterval.start and intervals[i].end>=newInterval.start) or (intervals[i].end>=newInterval.end and intervals[i].start<=newInterval.end) ){
            int j=i;
            while(j<intervals.size() and intervals[j].start<=newInterval.end){
                j++;
            }
            Interval temp;
            temp.start=min(intervals[i].start,newInterval.start);
            temp.end=max(newInterval.end,intervals[j-1].end);
            res.push_back(temp);
            for(int k=j; k<intervals.size();k++)
                res.push_back(intervals[k]);
            return res;
            break;
        }
    }
    intervals.push_back(newInterval);
    sort(intervals.begin(),intervals.end(),compare);
    return intervals;
}

