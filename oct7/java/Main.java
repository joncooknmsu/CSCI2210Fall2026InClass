//
// Demonstration of object lifetimes in Java
// 
// Java is simple: ALL objects are created using 
// the keyword 'new', and objects exist until the
// built-in garbage collector decides to clean them
// up and destroy them. Objects become garbage when
// the program no longer has any variables that refer
// to them, but they are not immediately destroyed.
//
// - the ONE exception to the creation rule is the
//   built-in language syntax that support String 
//   objects created from string constants
//

class Dog
{
private String name;

public Dog(String name)
{
   System.out.println("Dog constructor for "+name);
   this.name = name;
}

public void speak()
{
   System.out.println(name+" barks loudly!");
}

} // ------------ end class Dog -----------------

public class Main
{
public static void main(String args[])
{
   // In Java ALL variables of a class type 
   // are REFERENCES, not actual objects
   Dog d1; // no object is created on this line
   String s = "Hello World"; // the one exception to 'new'
   System.out.println(s);
   d1 = new Dog("Soba"); // object created here
   System.out.println("Starting main, d1 is "+d1);
   d1.speak();
   // the next line creates another Dog object but
   // uses the same reference variable, so the Soba
   // Dog object becomes garbage at that point
   d1 = new Dog("Ziva");
   d1.speak();
   System.out.println("Ending main, d1 is "+d1);
}

} // ------------ end class Main -----------------


