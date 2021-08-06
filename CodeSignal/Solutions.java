import java.util.*;

public class Solutions {
    String[] addBorder(String[] picture) {
        int len = picture.length + 2;
        int stars = picture[0].length() + 2;
        String[] returnArr = new String[len];
        StringBuilder s1 = new StringBuilder();
        for (int i = 0; i < stars; i++) {
            s1.append('*');
        }
        StringBuilder sb = new StringBuilder();
        returnArr[0] = s1.toString();
        returnArr[len - 1] = s1.toString();
        int k = 1;
        for (int i = 0; i < picture.length; i++) {
            for (int j = 0; j < picture[i].length(); j++) {
                if (j == 0)
                    sb.append('*');

                sb.append(picture[i].charAt(j));

                if (j == picture[i].length() - 1)
                    sb.append('*');
            }
            returnArr[k++] = sb.toString();
            sb.setLength(0);
        }
        return returnArr;
    }

    int[] alternatingSums(int[] a) {
        int[] arr = new int[2];
        for (int i = 0; i < a.length; i++) {
            if (i % 2 == 0)
                arr[0] += a[i];
            else
                arr[1] += a[i];
        }
        return arr;
    }

    // Amazon
    char firstNotRepeatingCharacter(String s) {
        int[] ht = new int[26];
        for (int i = 0; i < s.length(); i++) {
            ht[s.charAt(i) - 97]++;
        }
        for (int i = 0; i < s.length(); i++) {
            if (ht[s.charAt(i) - 97] == 1)
                return s.charAt(i);
        }
        return '_';
    }

    // Google
    int firstDuplicate(int[] a) {
        int[] arr = new int[a.length + 1];
        for (int i = 0; i < a.length; i++) {
            arr[a[i]]++;
            if (arr[a[i]] > 1) {
                return a[i];
            }
        }
        return -1;
    }

    String reverseInParentheses(String inputString) {
        StringBuilder str = new StringBuilder();
        int start = 0;
        int end = inputString.length() - 1;
        str.setLength(0);
        if (inputString.contains("(")) {
            start = inputString.lastIndexOf("(");
            end = inputString.indexOf(")", start);
            str.append(inputString, start + 1, end);
            return reverseInParentheses(
                    inputString.substring(0, start) + str.reverse().toString() + inputString.substring(end + 1));
        }
        return inputString;
    }

    int add(int param1, int param2) {
        return param1 + param2;
    }

    int centuryFromYear(int year) {
        return year % 100 == 0 ? year / 100 : (year / 100) + 1;
    }

    boolean checkPalindrome(String inputString) {
        for (int i = 0, j = inputString.length() - 1; i < j; i++, j--) {
            if (inputString.charAt(i) != inputString.charAt(j)) {
                return false;
            }
        }
        return true;
    }

    int adjacentElementsProduct(int[] inputArray) {
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < inputArray.length - 1; i++) {
            if (inputArray[i] * inputArray[i + 1] > max) {
                max = inputArray[i] * inputArray[i + 1];
            }
        }
        return max;
    }

    int shapeArea(int n) {
        if (n == 1)
            return 1;

        return n * n + ((n - 1) * (n - 1));
    }

    int lateRide(int n) {
        int hours = n / 60;
        int min = n % 60;
        int sum = 0;
        while (hours > 0) {
            sum += hours % 10;
            hours /= 10;
        }
        while (min > 0) {
            sum += min % 10;
            min /= 10;
        }
        return sum;
    }

    int circleOfNumbers(int n, int firstNumber) {
        return firstNumber + n / 2 >= n ? firstNumber - n / 2 : firstNumber + n / 2;
    }

    int maxMultiple(int divisor, int bound) {
        return bound / divisor * divisor;
    }

    int seatsInTheater(int nCols, int nRows, int col, int row) {
        return (nRows - row) * (nCols - col + 1);
    }

    int candies(int n, int m) {
        return m - m % n;
    }

    int largestNumber(int n) {
        return (int) Math.pow(10, n) - 1;
    }

    int addTwoDigits(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int matrixElementsSum(int[][] matrix) {
        int sum = 0;
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                if (matrix[i][j] == 0 && i + 1 < matrix.length) {
                    matrix[i + 1][j] = 0;
                }
                sum += matrix[i][j];
            }
        }
        return sum;
    }

    boolean almostIncreasingSequence(int[] sequence) {
        int count1 = 0, count2 = 0;
        for (int i = 0; i < sequence.length - 1; i++) {
            if (sequence[i] >= sequence[i + 1])
                count1++;
        }

        for (int i = 0; i < sequence.length - 2; i++) {
            if (sequence[i] >= sequence[i + 2])
                count2++;
        }
        return (count1 <= 1) && (count2 <= 1);
    }

    int makeArrayConsecutive2(int[] statues) {
        Arrays.sort(statues);
        int max = statues[statues.length - 1];
        int min = statues[0];
        int diff = max - min + 1;
        return diff - statues.length;
    }

    int phoneCall(int min1, int min2_10, int min11, int s) {
        if (s < min1)
            return 0;
        if (s == min1)
            return 1;
        int duration = 1;
        s -= min1;
        if (min2_10 * 9 <= s) {
            duration += 9;
            s -= min2_10 * 9;
        } else {
            int mod = s % min2_10;
            while (s >= mod) {
                s -= min2_10;
                duration++;
            }
        }
        duration += s / min11;
        return duration;
    }

    String[] allLongestStrings(String[] inputArray) {
        int size = 0;
        int max = 0;
        for (int i = 0; i < inputArray.length; i++) {
            if (inputArray[i].length() >= max)
                max = inputArray[i].length();
        }
        for (int i = 0; i < inputArray.length; i++) {
            if (inputArray[i].length() == max)
                size++;
        }
        String[] returnArr = new String[size];
        int k = 0;
        for (int i = 0; i < inputArray.length; i++) {
            if (inputArray[i].length() == max)
                returnArr[k++] = inputArray[i];
        }

        return returnArr;
    }

    int commonCharacterCount(String s1, String s2) {
        int[] htS1 = new int[26];
        int[] htS2 = new int[26];
        for (int i = 0; i < 26; i++) {
            htS1[i] = 0;
            htS2[i] = 0;
        }
        for (int i = 0; i < s1.length(); i++) {
            htS1[s1.charAt(i) - 97]++;
        }
        for (int i = 0; i < s2.length(); i++) {
            htS2[s2.charAt(i) - 97]++;
        }
        int count = 0;
        for (int i = 0; i < 26; i++) {
            if (htS1[i] != 0 && htS2[i] != 0) {
                count += Math.min(htS1[i], htS2[i]);
            }
        }
        return count;
    }

    boolean isLucky(int n) {
        int left = 0;
        int right = 0;
        int copy = n;
        int digits = 0;
        while (copy > 0) {
            copy /= 10;
            digits++;
        }
        int control = digits / 2;
        int track = 0;
        while (n > 0) {
            if (track < control) {
                left += n % 10;
            } else {
                right += n % 10;
            }
            track++;
            n /= 10;
        }

        return left == right;
    }

    int[] sortByHeight(int[] a) {
        int[] returnArr = new int[a.length];
        int higher = 0, lower = 0;
        for (int i = 0; i < a.length; i++) {
            if (a[i] < 0)
                lower++;
            else
                higher++;
        }
        int[] lowerArr = new int[lower];
        int[] higherArr = new int[higher];
        int x = 0, y = 0;
        for (int i = 0; i < a.length; i++) {
            if (a[i] > 0)
                higherArr[y++] = a[i];
            else
                returnArr[i] = a[i];
        }

        Arrays.sort(higherArr);
        for (int i = 0; i < a.length; i++) {
            if (a[i] != -1) {
                returnArr[i] = higherArr[x++];
            }
        }
        return returnArr;
    }

    // -------- 06.08.2021 ----------

    boolean areSimilar(int[] a, int[] b) {
        int n = a.length;
        int differences = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] != b[i])
                differences++;
        }

        if (differences == 0)
            return true;

        Arrays.sort(a);
        Arrays.sort(b);

        boolean same = Arrays.equals(a, b);

        return (differences <= 2) && same;
    }

    int arrayChange(int[] inputArray) {
        int i = 0;
        int count = 0;
        while (i < inputArray.length - 1) {
            if (inputArray[i] >= inputArray[i + 1]) {
                int temp = inputArray[i + 1];
                inputArray[i + 1] = inputArray[i] + 1;
                count += inputArray[i + 1] - temp;
            }
            i++;
        }
        return count;
    }

    boolean palindromeRearranging(String inputString) {
        int[] ht = new int[26];
        for (int i = 0; i < inputString.length(); i++) {
            ht[inputString.charAt(i) - 97]++;
        }
        int count = 0;
        for (int i = 0; i < 26; i++) {
            if (ht[i] % 2 == 1)
                count++;
            if (count > 1)
                return false;
        }
        return true;
    }

    boolean reachNextLevel(int experience, int threshold, int reward) {
        return experience + reward >= threshold;
    }

    int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) {
        return ((weight1 + weight2 <= maxW) ? (value1 + value2)
                : ((weight1 > maxW) ? ((weight2 > maxW) ? (0) : (value2))
                        : ((weight2 > maxW) ? (value1) : ((value1 > value2) ? (value1) : (value2)))));
    }

    boolean areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
        int yourStronger;
        int yourWeaker;
        if (yourLeft > yourRight) {
            yourStronger = yourLeft;
            yourWeaker = yourRight;
        } else {
            yourStronger = yourRight;
            yourWeaker = yourLeft;
        }
        int friendsStronger;
        int friendsWeaker;
        if (friendsLeft > friendsRight) {
            friendsStronger = friendsLeft;
            friendsWeaker = friendsRight;
        } else {
            friendsStronger = friendsRight;
            friendsWeaker = friendsLeft;
        }

        return yourStronger == friendsStronger && yourWeaker == friendsWeaker;
    }

    int arrayMaximalAdjacentDifference(int[] inputArray) {
        int diff = Integer.MIN_VALUE;
        for (int i = 0; i < inputArray.length - 1; i++) {
            if (Math.abs(inputArray[i] - inputArray[i + 1]) > diff)
                diff = Math.abs(inputArray[i] - inputArray[i + 1]);
        }
        return diff;
    }

    boolean isIPv4Address(String inputString) {
        String PATTERN = "^((0|1\\d?\\d?|2[0-4]?\\d?|25[0-5]?|[3-9]\\d?)\\.){3}(0|1\\d?\\d?|2[0-4]?\\d?|25[0-5]?|[3-9]\\d?)$";

        return inputString.matches(PATTERN);
    }

    int avoidObstacles(int[] inputArray) {
        int k = 0;
        for (int i = 1;; i++) {
            int count = 0;
            for (int j = 0; j < inputArray.length; j++) {
                if (inputArray[j] % i != 0) {
                    count++;
                }
            }
            if (count == inputArray.length) {
                k = i;
                break;
            }
        }
        return k;
    }

    int[][] boxBlur(int[][] image) {
        int[][] arr = new int[image.length - 2][image[0].length - 2];
        for (int i = 0; i < image.length; i++) {
            int sum = 0;
            for (int j = 0; j < image[i].length; j++) {
                if (i + 3 <= image.length && j + 3 <= image[i].length) {
                    sum = image[i][j] + image[i][j + 1] + image[i][j + 2] + image[i + 1][j] + image[i + 1][j + 1]
                            + image[i + 1][j + 2] + image[i + 2][j] + image[i + 2][j + 1] + image[i + 2][j + 2];
                    arr[i][j] = sum / 9;
                }
            }
        }
        return arr;
    }

    int[][] minesweeper(boolean[][] matrix) {
        int result[][] = new int[matrix.length][matrix[0].length];
        int count = 0;
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                if (j != matrix[i].length - 1 && matrix[i][j + 1])
                    count++;
                if (i != matrix.length - 1 && matrix[i + 1][j])
                    count++;
                if (j != 0 && matrix[i][j - 1])
                    count++;
                if (i != 0 && matrix[i - 1][j])
                    count++;
                if (i != matrix.length - 1 && j != matrix[0].length - 1 && matrix[i + 1][j + 1])
                    count++;
                if (i != 0 && j != 0 && matrix[i - 1][j - 1])
                    count++;
                if (i != 0 && j != matrix[i].length - 1 && matrix[i - 1][j + 1])
                    count++;
                if (j != 0 && i != matrix.length - 1 && matrix[i + 1][j - 1])
                    count++;
                result[i][j] = count;
                count = 0;
            }
        }

        return result;
    }

    int[] arrayReplace(int[] inputArray, int elemToReplace, int substitutionElem) {
        for (int i = 0; i < inputArray.length; i++) {
            if (inputArray[i] == elemToReplace)
                inputArray[i] = substitutionElem;
        }
        return inputArray;
    }

    boolean evenDigitsOnly(int n) {
        while (n > 0) {
            if ((n % 10) % 2 == 1)
                return false;
            n /= 10;
        }
        return true;
    }

    boolean variableName(String name) {
        return name.matches("^[_a-zA-Z][a-zA-Z_$0-9]*");
    }

    String alphabeticShift(String inputString) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < inputString.length(); i++) {
            if (inputString.charAt(i) == 'z')
                sb.append('a');
            else {
                char x = inputString.charAt(i);
                x += 1;
                sb.append(x);
            }
        }

        return sb.toString();
    }

    boolean chessBoardCellColor(String cell1, String cell2) {
        int cell1_pos = 0, cell2_pos = 0;
        for (char c : cell1.toCharArray()) {
            cell1_pos += c;
        }

        for (char c : cell2.toCharArray()) {
            cell2_pos += c;
        }

        return ((cell1_pos - '0') % 2 == (cell2_pos - '0') % 2);
    }
    // -------- 07.08.2021 --------
}
