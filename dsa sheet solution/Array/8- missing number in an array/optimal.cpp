int missingNumber(vector<int>&a, int N) {
    int xor1 = 0, xor2 = 0;
    for(int i=0; i<N; i++){
        xor2 ^= a[i];
        xor1 ^= (i+1);
    }
    return xor1^xor2;
}

int missingNumber(vector<int>&a, int N) {
    int xor1 = 0, xor2;
    for(int i=1; i<=N; i++){
        xor1 ^= i;
        xor2 = 0;
    }
    for(int i=0; i<N; i++){
        xor2 ^= a[i];
    }
    return xor1^xor2;
}

int missingNumber(vector<int>&a, int N) {
    int s1 = (N*(N+1))/2;
    int s2 = 0;
    for(int i=0; i<N; i++){
        s2 += a[i];
    }
    int num = s1-s2;
    return num;
}