/*
 * Compile assim: javac tableswitch.java -target 1.2 -source 1.2
 */
public class tableswitch{
	public static int chooseNear(int i) {
		switch (i) {
			case 0:  return 0;
			case 1:  return 1;
			case 2:  return 2;
			default: return -1;
		}
	}
	public tableswitch(){
		System.out.println("Ops!");
	}
	public static void main(String args[]){
		System.out.println(tableswitch.chooseNear(-1));
		System.out.println(tableswitch.chooseNear(0));
		System.out.println(tableswitch.chooseNear(1));
		System.out.println(tableswitch.chooseNear(2));
		System.out.println(tableswitch.chooseNear(3));
	}
}