class Qsort
{       public int a,b,c[][];
        char d = 'd',e;

        static {
                int xyzz = 1;
                float ghd = 9.00;
        }

        int printInt(int n);
        public static int quicksort(int [][]x[], int first, int last){
                int pivot,j,temp,i1,f,e,a[];
                int arr[]={1,2,3};
                if(first<last){
                        int arr2;
                        pivot=first;
                        i=first;
                        j=last;

                        while(i<j){
                                int while_x,yy,zz;
                                while((x[i] <= x[pivot]) && (i < last)){
                                        int k;
                                        i= i + 1;
                                }
                                while(x[j]>x[pivot]){
                                        int dd;
                                        j= j - 1;
                                }
                                if(i<j){
                                        int x;
                                        temp=x[i];
                                        x[i]=x[j];
                                        x[j]=temp;
                                }
                        }

                        temp=x[pivot];
                        x[pivot]=x[j];
                        x[j]=temp;
                        f = j - 1 ;
                        e = j + 1;

                        quicksort(x,first,f);
                        quicksort(x,e,last);

                }
                return 0;
        }

        private void mm(int alpha){
                int delta;
        }
        public private static void main(int delta){
                int x[] = new int[5];
                int size = 5;
                int first = 0;
                int l = size - 1;
                int i2;

                x[0] = 2;
                x[1] = 1;
                x[3] = 5;
                x[4] = 6;
                x[2] = 0;

                // for(i=0;i<size;i++){
                        // System.out.println(l);
                // }
                quicksort(x,first,l);

                for(int i=0;i<size;i++){
                        int i;
                        printInt(x[i]);
                }
                return 0;
        }

}
