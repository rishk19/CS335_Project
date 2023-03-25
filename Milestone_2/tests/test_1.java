class Person{
  String name;
  
  int i[] = {1,2};
  int i,j=1;
  public Person(){
     //this("John");   // Explicit Constructor Invocation
  }

  public Person(String name){
     this.name = name;
  }

  public void displayMyName(){
     System.out.println(this.name);
  }
}




