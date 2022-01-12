public class Dimond program
{

    public static void main(String[] args) {
        int n = 10;
        int i = 1;
        while (i <= n) {
            int j = 1;
            while (j <= n - i) {
                System.out.print(" ");
                j = j + 1;
            }

            int k = 1;
            while (k <= i * 2 - 1) {
                System.out.print("*");
                k += 1;
            }
            System.out.println();
            i++;
        }
        i = n;
        while (i >= 1) {
            int j = 1;
            while (j <= n - i) {
                System.out.print(" ");
                j = j + 1;
            }

            int k = 1;
            while (k <= i * 2 - 1) {
                System.out.print("*");
                k += 1;
            }
            System.out.println();
            i--;
        }

    }
}
