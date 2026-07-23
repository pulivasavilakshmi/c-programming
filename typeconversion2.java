package day3;

public class typeconversion2 {
    public static void main(String[] args) {
        char check = 'R', match = 'a';
        check = (char)(check^match);
        match = (char)(check^match);
        check = (char)(check^match);
        System.out.println(check+" "+match);
    }
    
}
