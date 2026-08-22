class KthLargest {
    priority_queue<int, vector<int>, greater<int>> pq;
    int count;
    int max;
public:
    KthLargest(int k, vector<int>& nums) {
        this->count = 0;
        this->max = k;
        // this->pq = new priority_queue<int>();

        for(int i:nums){
            this->add(i);
        }
    }
    
    int add(int val) {
        if(count<this->max){
            pq.push(val);
            count++;
        }else{
            if(pq.top()<val){
                pq.pop();
                pq.push(val);
            }
        }
        return pq.top();
    }
};
