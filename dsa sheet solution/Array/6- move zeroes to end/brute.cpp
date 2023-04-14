vector<int> moveZeros(int n, vector<int> a) {
    vector<int> temp;
    for(int i =0; i<n; i++){
        if(a[i] != 0){
            temp.push_back(a[i]);
        }
    }
    int tn = temp.size();
    for(int i =0; i<tn; i++){
        a[i] = temp[i];
    }
    for(int i = tn; i<n; i++){
        a[i] = 0;
    }
    return a;
}
