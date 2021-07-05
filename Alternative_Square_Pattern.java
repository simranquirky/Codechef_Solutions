/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int n= sc.nextInt();
		for (int i=1; i<=n; i++)
		{
		    if(i%2!=0)
		    {
		        for(int j=(5*(i-1)+1);j<=(5*i);j++)
		        {
		            System.out.print(j+" ");
		        }
		         System.out.println();
		    }
		    else{
		        for(int j=(5*i);j>=(5*(i-1)+1);j--)
		    {
		            System.out.print(j+" ");
		    }
		     System.out.println();
		    }
		   
		    
		}
	}
}
