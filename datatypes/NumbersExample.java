
public class NumbersExample
{

// Does Java have global variables? In a real sense, no.
// BUT a public static class variable acts as a global
// because the entire program can access it -- in this
// case by the name "NumbersExample.m"
public static int m = 99999;

public static void main(String args[])
{
    // Java does have the integer datatype "short"
    // which is 16 bit signed integers (regular "int"
    // is 32 bit signed integers
    short x = 42;
    System.out.println("x = "+x+" and m="+m);
    x += m;  // Java allows this assignment silently...
    System.out.println("after adding m to x:");
    System.out.println("x = "+x+" and m="+m);
}

}


