import java.util.*;
import java.math.*;

public class sol
{
    public static void main( String[] args )
    {
        Scanner sc = new Scanner( System.in );
        BigInteger a = BigInteger.ONE, b = BigInteger.ONE;
        int n = sc.nextInt();
        for (int i = 2; i < n; i++)
        {
            BigInteger t = a.add(b);
            a = b;
            b = t;
        }
        System.out.println( b.toString() );
    }
}
