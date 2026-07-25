class Solution {
public:
    int maxProduct(int n) {
        if(n < 100 && n > 9 && n % 10 == 0) {
            return 0;
        }
        int product = 1 ;
        if(n < 100 && n > 9 && n % 10 != 0) {
            while(n) {
            product *= n % 10 ;
            n = n / 10;
            }
            return product;
        }
        if(n < 10) {
            return n;
        }
        vector<int> arr;
        int maxi = 0;
        while(n) {
            arr.push_back(n%10);
            n = n/10;
        }
        for(int i = 0 ; i < arr.size() - 1; i++) {
            for(int j = i+1 ; j < arr.size() ; j++) {
                maxi = max(maxi , arr[i] * arr[j]);
            }
        }
        return maxi;
    }
};