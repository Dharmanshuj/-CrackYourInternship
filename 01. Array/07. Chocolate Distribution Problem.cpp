class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(), a.end());
        long long i=0, j=m-1;
        long long diff = a[j] - a[i];
        while(j < n) {
            diff = min(diff, a[j]-a[i]);
            i++;
            j++;
        }
        return diff;
    }   
};
