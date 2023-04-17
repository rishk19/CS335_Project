class short_circuit{

    public static void main()
    {                       // Array Access
        int a[][] = new int[5][6];
        int i = 1;
        a[--i][2] = 1 + 3;
        int j = a[1][2];
    }

 }