class large_expression{

    public static int maxx(int a, int b){
        //return 1;
        if(a < b){
            return b;
        }
        else{
            return a;
        }
    }

    public static void main(){
        int r = 101;
        // r = 5-1+6-2+7-3+8+9+10+5-1+6-2+7-3+8+9+10+5-1+6-2+7-3+8+9+10;
        // r = r++;
        int j = 2;
        int arr[] = new int[5];
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 2;
        arr[3] = 3;
        arr[4] = 4;
        
        // arr[1] = 1;
        r = arr[1];

        // int x = 100 ;
        // x = maxx(0,1);
        // System.out.println(x);
        // for (int i =0; i < 6; i++)
        // {
        //     r = r + 'a';
        // }
    }
}
