vector<string> Solution::fizzBuzz(int A) {
    vector<string> res;
    for(int i=1;i<=A;i++){
        string s=to_string(i);
        if(i%3==0)
            s="Fizz";
        if(i%5==0)
            s="Buzz";
        if(i%3==0 and i%5==0)
            s="FizzBuzz";
        res.push_back(s);
    }
    return res;
}

