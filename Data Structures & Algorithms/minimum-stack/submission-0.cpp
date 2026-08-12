class MinStack {
    vector<pair<int,int>> arr;
    int count;
    int currMin;
public:

    MinStack() {
        count = 0;
        currMin = INT_MIN;
    }
    
    void push(int val) {
        if(count==0)
            // currMin = val;
            arr.push_back({val, val});
        else{
            // currMin = min(val, getMin())
            arr.push_back({val, min(val, getMin())});
        }
        count++;
    }
    
    void pop() {
        if(count<=0) return;
        arr.pop_back();
        currMin = arr[count-1].second;
        count--;
    }
    
    int top() {
        // if(count<=0) return -1;
        return arr[count-1].first;
    }
    
    int getMin() {
        // if(count<=0) return ;
        return arr[count-1].second;
    }
};
