class short_circuit{

    public static void main()
    {
        int i,j;
        i = 1+4*7/9+9+0+1;
        boolean k = true && true ;
        if(k == true){
            i = 1;
        }
        else if(k == false){
            j = 1;
        }
        else if(i == 1){
            j ++;
        }
        else{
            k = true;
        }
        i = 0;
    }

 }