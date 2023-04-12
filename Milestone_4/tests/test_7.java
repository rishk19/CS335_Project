class Qsort
{       public int a,b,c[][];
        char d = 'd',e;
        static {
                int xyzz = 1;
                float ghd = 9;
        }

        int printInt(int n){
                return 1+4+7*8;
        }
        public static int quicksort(int x[], int first, int last){
                int pivot,i,temp,i1,f,e,a[];
                char arr;
                int j;
                if(first<last){
                        //xyzz = 1;
                        int arr2;
                        int xcc = 1;
                        pivot=first;
                        i=first;
                        j=last;
                        while(i<j){
                                int while_x,yy,zz;
                                while((x[i] <= x[pivot]) && (i < last)){
                                        int k;
                                        int k2;
                                        i= i + 1;
                                }
                                while(x[j]>x[pivot]){
                                        int dd;
                                        j= j - 1;
                                }
                                if(i<j){
                                        //int x;
                                        temp=x[i-1];
                                        x[i-1]=x[j+1];
                                        x[j]=temp;
                                }
                        }

                        temp=x[pivot];
                        x[pivot]=x[j];
                        x[j]=temp;
                        f = j - 1 ;
                        e = j + 1;

                        //quicksort(t);
                        quicksort(x,first,f);
                        quicksort(x,e,last);

                }
                return 0;
        }

        private void mm(int alpha){
                int delta;
        }
        public private static void main(int delta){
                //int x[] = new int[5];
                int x[];
                int size = 5;
                int first = 0;
                int l = size - 1;
                int i2;

                x[0] = 2;
                x[1] = 1;
                x[3] = 5;
                x[4] = 6;
                x[2] = 0;

                //quicksort(x,first,l);

                for(byte i=0;i<size;i++){
                        int j;
                        printInt(x[i]);
                }

        }

}