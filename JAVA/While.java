public class Main {
    public static void main(String[] args) {
        int num = 10000;
        int key = 153;
        int i = 1;
        int m = 1;

        // 여기에 코드를 작성하세요.
        while (i <= num/key) {
            m = key * i;
            i++;
        }
        System.out.println(m);
    }
}