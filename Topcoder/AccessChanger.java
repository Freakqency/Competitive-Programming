// BEGIN CUT HERE
// PROBLEM STATEMENT
// You are converting old code for a new compiler version. Each "->" string should be replaced by ".", but this replacement shouldn't be done inside comments. A comment is a string that starts with "//" and terminates at the end of the line.
You will be given a String[] program containing the old code.  Return a String[] containing the converted version of the code.


DEFINITION
Class:AccessChanger
Method:convert
Parameters:String[]
Returns:String[]
Method signature:String[] convert(String[] program)


CONSTRAINTS
-program will have between 1 and 50 elements, inclusive. 
-Each element of program will contain between 1 and 50 characters, inclusive. 
-Each character in program will have ASCII value between 32 and 127, inclusive.


EXAMPLES

0)
{"Test* t = new Test();", 
 "t->a = 1;", 
 "t->b = 2;", 
 "t->go(); // a=1, b=2 --> a=2, b=3"}

Returns: {"Test* t = new Test();", "t.a = 1;", "t.b = 2;", "t.go(); // a=1, b=2 --> a=2, b=3" }

1)
{"---> // the arrow --->",
 "---",
 "> // the parted arrow"}

Returns: {"--. // the arrow --->", "---", "> // the parted arrow" }

2)
{"->-> // two successive arrows ->->"}

Returns: {".. // two successive arrows ->->" }

// END CUT HERE
import java.util.*;
public class AccessChanger {
	public String[] convert(String[] program) {
		
	}
	public static void main(String[] args) {
		AccessChanger temp = new AccessChanger();
		System.out.println(temp.convert(String[] program));
	}
}
