import java.util.*;
import java.io.*;

public class Main
{
    private static String conv( int dow )
    {
        switch( dow )
        {
        case GregorianCalendar.SUNDAY:
            return "Sunday";
        case GregorianCalendar.MONDAY:
            return "Monday";
        case GregorianCalendar.TUESDAY:
            return "Tuesday";
        case GregorianCalendar.WEDNESDAY:
            return "Wednesday";
        case GregorianCalendar.THURSDAY:
            return "Thursday";
        case GregorianCalendar.FRIDAY:
            return "Friday";
        case GregorianCalendar.SATURDAY:
            return "Saturday";
        default:
            return "";
        }
    }

    public static void main( String[] args )
    {
        Scanner in = new Scanner( System.in );
        for ( int n = in.nextInt(); n != -1; n = in.nextInt() )
        {
            GregorianCalendar cal = new GregorianCalendar( 2000,
                GregorianCalendar.JANUARY, 1 );
            cal.add( cal.DAY_OF_YEAR, n );
            System.out.printf( "%4d-%02d-%02d %s\n", cal.get( cal.YEAR ),
                cal.get( cal.MONTH ) + 1, // months are 0-based
                cal.get( cal.DAY_OF_MONTH ),
                conv( cal.get( cal.DAY_OF_WEEK ) ) );
        }
    }
}
