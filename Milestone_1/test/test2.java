class bubblesort {
    int printInt(int n);
    void sort(int arr[], int len) {
        int n = len;
        int temp, i, j;
        for(i=0; i < n; i++){
            for(j=1; j < (n-i); j++){
                if(arr[j-1] > arr[j]){
                    temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    public static void main() {
                int arr[] = new int[7];
                arr[0] = 7;
                arr[1] = 6;
                arr[2] = 5;
                arr[3] = 4;
                arr[4] = 3;
                arr[5] = 2;
                arr[6] = 1;
                for(int i=0; i < 7; i++){
                        printInt(arr[i]);
                        if (arr[i] > 5) {
                            break;
                        }
                }
                sort(arr, 7);//sorting array elements using bubble sort
                for(int i=0; i < 7; i++){
                        printInt(arr[i]);
                }

        }
}
