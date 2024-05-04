int linearSearch(int arr[], int n, int val) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            return i; // return the index of the first occurrence of 'val'
        }
    }
    return -1; // return -1 if 'val' is not found in 'arr'
}