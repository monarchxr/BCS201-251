//ice cream parlor question
//just replace the function with this

int* icecreamParlor(int m, int arr_count, int* arr, int* result_count) {
    *result_count = 2;
    static int res[2] = {0,0};
    
    for(int i = 0; i<arr_count; i++){
        for(int j = 1; j<arr_count; j++){
            if(arr[i]+arr[j]==m && i!=j){
                res[0] = i+1;
                res[1] = j+1;
                return res;
            }
        }
    }
    return res;
}