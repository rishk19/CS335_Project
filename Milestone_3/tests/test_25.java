class short_circuit{
    int printInt(int n);
    public static void main(int k)
    {
        int a = 0 + 2;
        float b = 2.3f;
        a = a + b;
        printInt(a);
    }
 }