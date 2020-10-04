import java.util.*;
public class binaryTodecimal {

	public static void main(String[] args) {
		
         Scanner sc=new Scanner(System.in);
         System.out.println("enter a Decimal Number:");
         int n=sc.nextInt();
         int num=n;
         String s="";
         while(num!=0) {
        	 int d=num%2;
        	 s=d+s;
        	 num/=2;
         }
         if(num!=0)
        	 s="1"+s;
         
         System.out.println(s);
	}

}
