class factorial  
{ 

int factorialexm(int num){  
if(num==0)  
return 1;  
else   
return (num * factorialexm(num-1));  
  

}
public void main2(int args[]){  
int fact = 1, i;  
int num = 8;  
fact = factorialexm(num);  
System.out.println("Factorial of "+num+" is: "+fact);  
}  

} 