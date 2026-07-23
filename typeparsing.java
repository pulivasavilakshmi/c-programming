package day3;

public class typeparsing {
    public static void main(String[] args) {
        String StrWt = "64.10",strWt="158";
        double weight = Double.parseDouble(StrWt);
        int height = Integer.parseInt(StrWt);
        double ht =(double)height/100;
        double bmi = (double)(weight/(ht*ht));
       System.out.println("your BMI"+bmi);
    }
    
}
