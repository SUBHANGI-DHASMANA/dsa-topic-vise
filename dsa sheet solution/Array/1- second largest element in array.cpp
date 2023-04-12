int secondLargest(int n, vector<int> &a){
    int largest = a[0];
    int sLargest = -1;
    for(int i=0; i<n; i++){
        if(a[i]>largest){
            sLargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > sLargest){
            sLargest = a[i];
        }
    }
    return sLargest;
}

int secondSmallest(int n, vector<int> &a){
    int smallest = a[0];
    int sSmallest = 1000;
    for(int i=0; i<n; i++){
        if(a[i]<smallest){
            sSmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] > smallest && a[i] < sSmallest){
            sSmallest = a[i];
        }
    }
    return sSmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int sLargest = secondLargest(n, a);
    int sSmallest = secondSmallest(n, a);
    return {sLargest, sSmallest};
}