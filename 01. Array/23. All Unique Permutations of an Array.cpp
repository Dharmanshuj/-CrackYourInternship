public:
   set<vector<int>>st;
    
    void solve (int index, vector<int> &arr , int n){
        if(index == n) {
            st.insert(arr);
            return ;
        }
        
        for(int i=index; i<n; i++){
            if(i!= index && arr[index] == arr[i])
                continue;
            swap(arr[i], arr[index] );
            solve(index+1, arr , n);
            swap(arr[i], arr[index] );
        }
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
       sort(arr.begin(), arr.end());
       solve(0, arr , n);
       
       vector<vector<int>>ans(st.begin(), st.end());
       return ans;
    }
