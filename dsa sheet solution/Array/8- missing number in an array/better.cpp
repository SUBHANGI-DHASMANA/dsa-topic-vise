int missingNumber(vector<int>&a, int N) {
    int hash[N+1] = {0};
    int i,j;
    for(i =0; i<N; i++){
        hash[a[i]] = 1;
    }
    for(j =0; j<N-1; j++){
        if(hash[j] == 0){
            return j;
        }
    }
}