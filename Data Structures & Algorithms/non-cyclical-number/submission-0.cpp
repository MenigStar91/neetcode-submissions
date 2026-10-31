class Solution {
public:
    int sumOfSq(int n){
        int x = 0;
        while(n){
            x += (n%10)*(n%10);
            n = n/10;
        }
        return x;
    }

    bool isHappy(int n) {
        unordered_set<int> rem;
        while(n!=1){
            int sq = sumOfSq(n);

            if(rem.count(sq)) return false;
            rem.insert(sq);  

            n = sq;
        }
        return true;
    }
};
