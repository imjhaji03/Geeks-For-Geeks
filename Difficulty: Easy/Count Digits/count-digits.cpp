int countDigits(int n) {
    
    vector<int> vcc;
    
    
    while(n != 0){
        int num = n % 10;
        vcc.push_back(num);
        n = n /10;
    }
    
    return vcc.size();
    
    
    
}