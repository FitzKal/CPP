import java.util.Scanner;

/*class  szamologep {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Adj meg egy szamot");
        double a = scanner.nextInt();
        System.out.println("Adj meg egy masik szamot");
        double b = scanner.nextInt();
        System.out.println("Add meg a szamok kozotti muveletet");
        char c = scanner.next().charAt(0);
        double eredmeny = 0;
        switch (c){
            case '+':
                eredmeny = a+b;
                break;
            case '-':
                eredmeny = a-b;
                break;
            case '*':
                eredmeny = a*b;
                break;
            case '/':
                eredmeny = a/b;
                break;
            default:
                System.out.println("Rossz muveletet adtal meg");
        }
        System.out.println("Az eredmeny = " + eredmeny);

    }
}*/

class sztringek{
    static int charszam(String s){
        int n = 0;
        for (int i = 0; i < s.length(); i++){
            n = n+1;
        }
        return n;
    }

    public static void main(String[] args) {
        String  s = "Bruh";
        for(char c : s.toCharArray()){
            System.out.println(c);
        }
        System.out.println(charszam(s));

    }

}

