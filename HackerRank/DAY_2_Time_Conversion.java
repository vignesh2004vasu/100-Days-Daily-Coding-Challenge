Given a time in -hour AM/PM format, convert it to military (24-hour) time.
Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

Sample Input
07:05:45PM
  
Sample Output
19:05:45

Answer:
import java.io.*;
import java.util.*;
import java.text.DecimalFormat;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        
        String str=sc.nextLine();
        int h = Integer.parseInt(str.substring(0,2));
        int m = Integer.parseInt(str.substring(3,5));
        int s = Integer.parseInt(str.substring(6,8));
        String ampm=str.substring(8);
        
        if(ampm.equals("PM")&&(h!=12))
        {
            h=h+12;
        }
        if((h==12)&&(ampm.equals("AM")))
        {
            h=0;
        }
        
        
        DecimalFormat decimalFormat = new DecimalFormat("00");
        
        String hh = decimalFormat.format(h);
        String mm = decimalFormat.format(m);
        String ss = decimalFormat.format(s);
        
        String time=hh+":"+mm+":"+ss;
        System.out.print(time);
        
        
        
        
    }
}
