//import java.util.Collections;
//import java.util.Scanner;
//import java.util.Vector;
//
//public class Solutions {
//    public static void main(String[] args) {
//        Scanner scn = new Scanner(System.in);
//        String s;
//        int n;
//        s = scn.nextLine();
//        n = scn.nextInt();
//        Vector vcn = new Vector();
//        for(int i = 0;i <= s.length()-n;i++) {
//            vcn.add(s.substring(i,i+3));
//        }
//
//        Collections.sort(vcn);
//
//        System.out.println(vcn.firstElement());
//        System.out.println(vcn.lastElement());
//    }
//}

//import java.util.Scanner;
//
//public class Solutions {
//
//    public static String getSmallestAndLargest(String s, int k) {
//        String smallest = "";
//        String largest = "";
//
//        // Complete the function
//        // 'smallest' must be the lexicographically smallest substring of length 'k'
//        // 'largest' must be the lexicographically largest substring of length 'k'
//        String[] arr = new String[s.length()-k+1];
//        smallest = s.substring(0,0+k);
//        largest = s.substring(0,0+k);
//        for(int i = 1;i < s.length()-k+1;i++) {
//            arr[i] = s.substring(i,i+k);
//            if(arr[i].compareTo(smallest) < 0) {
//                smallest = arr[i];
//            }
//            else if(arr[i].compareTo(largest) > 0) {
//                largest = arr[i];
//            }
//        }
//        return smallest + "\n" + largest;
//    }
//
//
//    public static void main(String[] args) {
//        Scanner scan = new Scanner(System.in);
//        String s = scan.next();
//        int k = scan.nextInt();
//        scan.close();
//
//        System.out.println(getSmallestAndLargest(s, k));
//    }
//}

//import java.util.Scanner;
//
//public class Solutions {
//
//    public static void main(String[] args) {
//
//        Scanner sc=new Scanner(System.in);
//        String A=sc.next();
//        /* Enter your code here. Print output to STDOUT. */
//        if(isPalindrome1(A)) {
//            System.out.println("Yes");
//        }else {
//            System.out.println("No");
//        }
//    }
//    public static boolean isPalindrome1(String s) {
//        if (s == null || s.length() <= 1) {
//            return true;
//        }
//        for (int i = 0, j = s.length() - 1; i < j; ++i, --j) {
//            if (s.charAt(i) != s.charAt(j)) {
//                return false;
//            }
//        }
//        return true;
//    }
//}

//public class Solutions {
//    public static void main(String[] args) {
//        int x = 45;
//        System.out.println((x > 40) ? "Gecti" : "Kaldi");
//    }
//}
//

//import java.util.Locale;
//import java.util.Scanner;
//
//public class Solutions {
//    static boolean isAnagram(String a, String b) {
//        // Complete the function
//        int[] arr = new int[26];
//        a = a.toLowerCase();
//        b = b.toLowerCase();
//        for(int i = 0;i < arr.length;i++) {
//            arr[i] = 0;
//        }
//        for(int i = 0;i < a.length();i++) {
//            arr[(int) a.charAt(i)-97]++;
//        }
//        for(int i = 0;i < b.length();i++) {
//            arr[(int) b.charAt(i) -97]--;
//        }
//        for(int i = 0;i < arr.length;i++) {
//            if(arr[i] != 0) return false;
//        }
//        return true;
//    }
//
//    public static void main(String[] args) {
//
//        Scanner scan = new Scanner(System.in);
//        String a = scan.next();
//        String b = scan.next();
//        scan.close();
//        boolean ret = isAnagram(a, b);
//        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
//    }
//}

//import java.util.Scanner;
//import java.util.StringTokenizer;
//
//public class Solutions {
//    public static void main(String[] args) {
//        Scanner scan = new Scanner(System.in);
//        String s = scan.nextLine();
//        StringTokenizer st = new StringTokenizer(s, ":_//. -,@.?!'");
//        // StringTokenizer st = new StringTokenizer(s);
//        System.out.println(st.countTokens());
//        while (st.hasMoreTokens()) {
//            System.out.println(st.nextToken());
//
//        }
//        scan.close();
//    }
//}

//import java.io.IOException;
//import java.math.BigInteger;
//import java.util.Scanner;
//
//public class Solutions {
//    public static void main(String[] args) throws IOException {
//        Scanner scn = new Scanner(System.in);
//        BigInteger big = new BigInteger("1");
//        big = scn.nextBigInteger();
//        System.out.println((big.isProbablePrime(1)) ? "prime" : "not prime");
//    }
//}

//import java.math.BigDecimal;
//import java.util.*;
//public class Solutions {
//    public static void main(String []args){
//        //Input
//        Scanner sc= new Scanner(System.in);
//        int n=sc.nextInt();
//        String []s=new String[n+2];
//        for(int i=0;i<n;i++){
//            s[i]=sc.next();
//        }
//        sc.close();
//        Arrays.sort(s, 0, n, (s1, s2) -> {
//            BigDecimal a = new BigDecimal(s1);
//            BigDecimal b = new BigDecimal(s2);
//            return b.compareTo(a);
//        });
//        for(int i=0;i<n;i++)
//        {
//            System.out.println(s[i]);
//        }
//    }
//}

//import java.util.Scanner;
//import java.util.regex.Matcher;
//import java.util.regex.Pattern;
//
/////* Solution assumes we can't have the symbol "<" as text between tags */
////public class Solution{
////    public static void main(String[] args){
////        Scanner scan = new Scanner(System.in);
////        int testCases = Integer.parseInt(scan.nextLine());
////
////        while (testCases-- > 0) {
////            String line = scan.nextLine();
////
////            boolean matchFound = false;
////            Pattern r = Pattern.compile("<(.+)>([^<]+)</\\1>");
////            Matcher m = r.matcher(line);
////
////            while (m.find()) {
////                System.out.println(m.group(2));
////                matchFound = true;
////            }
////            if ( ! matchFound) {
////                System.out.println("None");
////            }
////        }
////    }
////}
//
//import java.util.Scanner;

//import java.util.Collections;
//import java.util.List;
//import java.util.Scanner;
//import java.util.Vector;
//
//public class Solutions {
//    public static void main(String[] args) {
//        Scanner scn = new Scanner(System.in);
//        int[][] arr = new int[6][6];
//        for (int i = 0; i < 6; i++) {
//            for (int j = 0; j < 6; j++) {
//                arr[i][j] = scn.nextInt();
//            }
//        }
//        Vector ax = new Vector();
//        for (int i = 1; i < 5; i++) {
//            int k = 0;
//            for (int j = 1; j < 5; j++) {
//                k = arr[i][j] + arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1] + arr[i + 1][j - 1] + arr[i + 1][j] + arr[i + 1][j + 1];
//                ax.add(k);
//            }
//        }
//        Collections.sort(ax, Collections.reverseOrder());
//        System.out.println(ax.firstElement());
//    }
//}

//import java.util.Scanner;

//import java.util.Scanner;
//
//public class Solutions {
//    public static void main(String[] args) {
//        Scanner scn = new Scanner(System.in);
//        int n;
//        n = scn.nextInt();
//        int[] arr = new int[n];
//        for(int i = 0;i < n;i++) {
//            arr[i] = scn.nextInt();
//        }
//
//        int negativeSum = 0;
//        for(int i = 0;i < n;i++) {
//            int sum = 0;
//            for(int j = i;j < n;j++) {
//                sum += arr[j];
//                if(sum < 0) negativeSum++;
//            }
//            sum = 0;
//        }
//        System.out.println(negativeSum);
//    }
//}

//import java.util.Scanner;
//public class Solutions {
//    static boolean isFind(int[] arr, int value) {
//        for (int i : arr) {
//            if (i == value) {
//                return true;
//            }
//        }
//
//        return false;
//    }
//
//    public static void main(String[] args) {
//        int[] list = {3, 7, 3, 3, 2, 9, 10, 21, 1, 33, 9, 1};
//        int[] duplicate = new int[list.length];
//        int startIndex = 0;
//        for (int i = 0; i < list.length; i++) {
//            for (int j = 0; j < list.length; j++) {
//                if ((i != j) && (list[i] == list[j])) {
//                    if (!isFind(duplicate, list[i])) {
//                        duplicate[startIndex++] = list[i];
//                    }
//                    break;
//                }
//            }
//        }
//
//        for (int value : duplicate){
//            if (value != 0){
//                System.out.println(value);
//            }
//        }
//    }
//}

//import java.util.*;
//
//public class Solutions {
//    public static boolean canWin(int leap, int[] game) {
//        // Return true if you can win the game; otherwise, return false.
//        return isSolvable(0, leap, game);
//    }
//
//    private static boolean isSolvable(int pos, int leap, int[] game) {
//        //base
//        if (pos < 0 || game[pos] == 1){
//            return false;
//        }
//        else if(pos + leap >= game.length || pos == game.length - 1){
//            return true;
//        }
//        game[pos] = 1;
//
//        return isSolvable(pos + 1, leap, game)
//                || isSolvable(pos + leap, leap, game)
//                || isSolvable(pos - 1, leap, game);
//
//    }
//
//    public static void main(String[] args) {
//        Scanner scan = new Scanner(System.in);
//        int q = scan.nextInt();
//        while (q-- > 0) {
//            int n = scan.nextInt();
//            int leap = scan.nextInt();
//
//            int[] game = new int[n];
//            for (int i = 0; i < n; i++) {
//                game[i] = scan.nextInt();
//            }
//
//            System.out.println((canWin(leap, game)) ? "YES" : "NO");
//        }
//        scan.close();
//    }
//}
//
//import java.util.*;
//
//public class Solutions {
//    public static void main(String[] args) {
//        Scanner scn = new Scanner(System.in);
//
//        int n;
//        System.out.print("Eleman sayısını giriniz: ");
//        n = scn.nextInt();
//
//        int[] arr = new int[n];
//        for(int i = 0;i < n;i++) {
//            arr[i] = scn.nextInt();
//        }
//
//        int counter = 0;
//        for(int i = 0;i < n;i++) {
//            for(int j = 0;j < n;j++) {
//                if(arr[i] == arr[j]) {
//                    if(j > i) {
//                        counter = 0;
//                        break;
//                    }
//                    counter++;
//                }
//            }
//            if(counter >= 1) {
//                System.out.printf("%d toplamda %d kez tekranlardı\n", arr[i],counter);
//            }
//            counter = 0;
//        }
//    }
//}

//import java.util.Scanner;
//
//public class Solutions {
//    public static void main(String[] args) {
//        Scanner scn = new Scanner(System.in);
//        int row,column;
//        System.out.print("Satırı giriniz: ");
//        row = scn.nextInt();
//        System.out.print("Sutünü giriniz: ");
//        column = scn.nextInt();
//
//        MineSweeper mn = new MineSweeper(row,column);
//        mn.run();
//    }
//}
//
//class MineSweeper {
//    private int row;
//    private int column;
//    private char[][] table = new char[row][column];
//    private char[][] mines = new char[row][column];
//
//    public MineSweeper(int row, int column) {
//        this.row = row;
//        this.column = column;
//        this.table = new char[row][column];
//        this.mines = new char[row][column];
//    }
//
//    public void run() {
//        int mayinAdet = (row * column) / 4;
//        for(int i = 0;i < row;i++) {
//            for(int j = 0;j < column;j++) {
//                table[i][j] = '-';
//                mines[i][j] = '-';
//            }
//        }
//        while(mayinAdet > 0) {
//            int randomRow = (int) Math.ceil(Math.random() * row) - 1;
//            int randomColumn = (int) Math.ceil(Math.random() * column) - 1;
//            mines[randomRow][randomColumn] = '*';
//            mayinAdet--;
//        }
//        int select1,select2;
//        while(!isFinished()) {
//            Scanner scn = new Scanner(System.in);
//            do {
//                System.out.print("Tahmin satırını giriniz: ");
//                select1 = scn.nextInt();
//            }while (select1 < 0 || select1 >= row);
//            do {
//                System.out.print("Tahmin sutünunu giriniz: ");
//                select2 = scn.nextInt();
//            } while(select2 < 0 || select2 >= column);
//            if(mines[select1][select2] == '*') {
//                System.out.println("Mayına bastınız, maalesef kaybettiniz.");
//                printMineTable();
//                break;
//            } else if(table[select1][select2] == '0') {
//                System.out.println("Lütfen daha önce girmediğiniz bir konum giriniz");
//            } else if(table[select1][select2] == '-') {
//                System.out.println("Diğer tura geçebilirsiniz");
//                table[select1][select2] = '0';
//                mines[select1][select2] = '0';
//            }
//
//            if(isFinished()) {
//                System.out.println("Tebrikler");
//                printMineTable();
//            }
//            printTable();
//        }
//    }
//    public void printTable() {
//        for(int i = 0;i < row;i++) {
//            for(int j = 0;j < column;j++) {
//                if(table[i][j] == '*') {
//
//                }
//                System.out.printf("%c ",table[i][j]);
//            }
//            System.out.println();
//        }
//        System.out.println("======================");
//    }
//    public boolean isFinished() {
//        for(int i = 0;i < row;i++) {
//            for(int j = 0;j < column;j++) {
//                if(table[i][j] == '-') return false;
//            }
//        }
//        return true;
//    }
//    public void printMineTable() {
//        for(int i = 0;i < row;i++) {
//            for(int j = 0;j< column;j++) {
//                System.out.printf("%c ",mines[i][j]);
//            }
//            System.out.println("");
//        }
//        System.out.println("======================");
//    }
//}

//import java.util.*;
//import java.io.*;
//
//class Solutions {
//
//    public static void main(String[] args) {
//        Exercise.run();
//    }
//}
//
//class Exercise {
//    public static void run() {
//        Scanner scn = new Scanner(System.in);
//        double a, b, c;
//        System.out.print("A katsayısını giriniz: ");
//        a = Double.parseDouble(scn.nextLine());
//        System.out.print("B katsayısını giriniz: ");
//        b = Double.parseDouble(scn.nextLine());
//        System.out.print("C katsayısını giriniz: ");
//        c = Double.parseDouble(scn.nextLine());
//
//        solve(a, b, c);
//    }
//
//    public static void solve(double a, double b, double c) {
//        double delta = b * b - 4 * a * c;
//        double x1, x2;
//        if (delta > 0) {
//            x1 = (-b + Math.sqrt(delta)) / (2 * a);
//            x2 = (-b - Math.sqrt(delta)) / (2 * a);
//            System.out.printf("x1 = %f // x2 = %f", x1, x2);
//        } else if (delta == 0) {
//            x1 = -b / (2 * a);
//            System.out.printf("x1 ve x2 = %.2f", x1);
//        } else if (delta < 0) {
//            System.out.printf("Gerçek kök yok.\n");
//        }
//    }
//}

import javax.sound.sampled.FloatControl;
import java.math.BigDecimal;
import java.text.DecimalFormat;
import java.util.*;
import java.io.*;

public class Solutions {
    public static void main(String[] args) {
        float x = -6.4375f;

        DecimalFormat df = new DecimalFormat("#");
        df.setMaximumFractionDigits(6);
        System.out.println(Float.toHexString(x));
    }
}