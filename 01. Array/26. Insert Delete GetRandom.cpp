class RandomizedCollection {
    unordered_multiset<int> s;
    random_device rd;
public:
    RandomizedCollection() {
    }
    
    bool insert(int val) {
        bool result = false;
        if(s.find(val) == s.end())
            result = true;
        s.insert(val);
        return result;
    }
    
    bool remove(int val) {
        auto it = s.find(val);
        if(it == s.end())
            return false;
        s.erase(it);
        return true;
    }
    
    int getRandom() {
        if(s.empty())
            throw runtime_error("Multiset is empty");
        
        auto it = s.begin();
        int n = s.size();
        advance(it, rd() % n);
        return *it;
    }
};
