package Bronze;

import java.util.Date;
import java.text.SimpleDateFormat;
import java.util.Scanner;
import java.math.BigInteger;

class BOJb5 {
	BOJb5() {}

/* B5 */	
	
	// https://www.acmicpc.net/problem/2557
	void BOJ2557() {
		System.out.println("Hello World!"); //System.out.println을 이용해서 출력
	}
	
	// https://www.acmicpc.net/problem/1000
	void BOJ1000() {
		Scanner sc = new Scanner(System.in); //Scanner 생성
		int A = sc.nextInt(); //A 입력 받기
		int B = sc.nextInt(); //B 입력 받기
		System.out.println(A + B);
	}
	
	// https://www.acmicpc.net/problem/1001
	void BOJ1001() {
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		System.out.println(A - B);
	}
	
	// https://www.acmicpc.net/problem/10718
	void BOJ10718() {
		System.out.println("강한친구 대한육군"); //System.out.println을 이용해 출력 및 줄 바꾸기
        System.out.println("강한친구 대한육군");
	}
	
	// https://www.acmicpc.net/problem/10998
	void BOJ10998() {
		Scanner sc = new Scanner(System.in); 
		int A = sc.nextInt(); 
		int B = sc.nextInt(); 
		System.out.println(A * B);
	}
	
	// https://www.acmicpc.net/problem/10869
	void BOJ10869() {
		Scanner sc = new Scanner(System.in); 
		int A = sc.nextInt(); 
		int B = sc.nextInt(); 
		System.out.println(A + B);
        System.out.println(A - B);
        System.out.println(A * B);
        System.out.println(A / B); 
        System.out.println(A % B); 
	}
	
	// https://www.acmicpc.net/problem/10430
	void BOJ10430() {
		Scanner sc = new Scanner(System.in); 
		int A = sc.nextInt(); 
		int B = sc.nextInt(); 
		int C = sc.nextInt(); 
		System.out.println((A + B) % C);
        System.out.println(((A % C) + ( B % C)) % C);
        System.out.println((A * B) % C);
        System.out.println(((A % C) * (B % C)) % C);
	}
	
	// https://www.acmicpc.net/problem/10172
	void BOJ10172() {
		System.out.println("|\\_/|"); // ' \ ' 출력 필요시 \\ 입력 
        System.out.println("|q p|   /}");
        System.out.println("( 0 )\"\"\"\\"); // ' " ' 출력 필요시 /" 입력
        System.out.println("|\"^\"`    |");
        System.out.println("||_/=\\\\__|");
	}
	
	// https://www.acmicpc.net/problem/8393
	void BOJ8393() {
		Scanner sc = new Scanner(System.in); 
		int n = sc.nextInt(); 
		System.out.println((n * (n + 1)) / 2);
	}
	
	// https://www.acmicpc.net/problem/10171
	void BOJ10171() {
        System.out.println("\\    /\\");
        System.out.println(" )  ( ')");
        System.out.println("(  /  )");
        System.out.println(" \\(__)|");
	}
	
	// https://www.acmicpc.net/problem/11654
	void BOJ11654() {
		Scanner sc = new Scanner(System.in); //입력되는 값은 알파벳 대소문자 & 숫자 0 - 9
		int A = sc.next().charAt(0); //입력 받은 후 .charAt()를 이용해 char형으로 바꾼 후 다시 int 타입에 저장
		System.out.println(A); //A에 저장된 글자의 아스키 코드 값 출력
	}
	
	// https://www.acmicpc.net/problem/2558
	void BOJ2558() {
		Scanner sc = new Scanner(System.in); 
		int A = sc.nextInt(); 
		int B = sc.nextInt(); 
		System.out.println(A + B);
	}
	
	// https://www.acmicpc.net/problem/7287
	void BOJ7287() {
		System.out.println(12); 
		System.out.println("********");
	}
	
	// https://www.acmicpc.net/problem/2475
	void BOJ2475() {
		Scanner sc = new Scanner(System.in);
		int Ans;
		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		int D = sc.nextInt();
		int E = sc.nextInt();
		Ans = (A*A + B*B + C*C + D*D + E*E) % 10;
		System.out.print(Ans);
	}
	
	// https://www.acmicpc.net/problem/10757
	void BOJ10757() {
		Scanner sc = new Scanner(System.in); 
		//BigInteger: 사용 숫자 범위가 int, long을 넘어 무한의 정수가 들어갈 가능성이 있을 때 사용
		//          : 문자열 형태로 저장 
		BigInteger A = new BigInteger(sc.next()); //BigInteger 생성 및 입력 받기
		BigInteger B = new BigInteger(sc.next()); 
		System.out.println(A.add(B));
	}
	
	// https://www.acmicpc.net/problem/3046
	void BOJ3046() {
		Scanner sc = new Scanner(System.in);	
		long R1 = sc.nextLong(); //숫자 1
		long S = sc.nextLong(); //평균
		long R2; //숫자 2				
		R2 = 2 * S - R1;		
		System.out.println(R2);
	}
	
	// https://www.acmicpc.net/problem/5338
	void BOJ5338() {
		System.out.println("       _.-;;-._");
		System.out.println("'-..-'|   ||   |");
		System.out.println("'-..-'|_.-;;-._|");
		System.out.println("'-..-'|   ||   |");
		System.out.println("'-..-'|_.-''-._|");
	}
	
	// https://www.acmicpc.net/problem/2914
	void BOJ2914() {
		Scanner sc = new Scanner(System.in);			
		int A = sc.nextInt(); //곡 개수		
		int I = sc.nextInt(); //평균 값		
		int M; //멜로디 개수		
		M = A * (I - 1) + 1;
		System.out.println(M);
	}
	
	// https://www.acmicpc.net/problem/1550
	void BOJ1550() {
		Scanner sc = new Scanner(System.in);
		String A = sc.nextLine();
		int M;
	    M = Integer.parseInt(A, 16); //.parseInt(a, b): 문자열 a를 b진수로 변경
        System.out.println(M);
	}
	
	// https://www.acmicpc.net/problem/11942
	void BOJ11942() {
        System.out.println("고려대학교");
	}
	
	// https://www.acmicpc.net/problem/10699
	void BOJ10699() {
        SimpleDateFormat format = new SimpleDateFormat("yyyy-MM-dd"); //SimpleDateFormat: 시간을 출력할 때 원하는 포맷 설정
        Date time = new Date(); //Date: 현재 시간 출력
        System.out.println(format.format(time));
	}
	
	// https://www.acmicpc.net/problem/5337
	void BOJ5337() {
		System.out.println(".  .   .");
		System.out.println("|  | _ | _. _ ._ _  _");
		System.out.println("|/\\|(/.|(_.(_)[ | )(/.");
	}
	
	// https://www.acmicpc.net/problem/2845
	void BOJ2845() {
		Scanner sc = new Scanner(System.in);
		int L = sc.nextInt();
		int P = sc.nextInt();
		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		int D = sc.nextInt();
		int E = sc.nextInt();
		int total = L * P;
		A = A - total;
		B = B - total;
		C = C - total;
		D = D - total;
		E = E - total;
		System.out.print(A + " " + B + " " + C + " " + D + " " + E);
	}
	
	// https://www.acmicpc.net/problem/9653
	void BOJ9653() {
		System.out.println("    8888888888  888    88888");
		System.out.println("   88     88   88 88   88  88");
		System.out.println("    8888  88  88   88  88888");
		System.out.println("       88 88 888888888 88   88");
		System.out.println("88888888  88 88     88 88    888888");
		System.out.println("");
		System.out.println("88  88  88   888    88888    888888");
		System.out.println("88  88  88  88 88   88  88  88");
		System.out.println("88 8888 88 88   88  88888    8888");
		System.out.println(" 888  888 888888888 88  88      88");
		System.out.println("  88  88  88     88 88   88888888");
	}
	
	// https://www.acmicpc.net/problem/5339
	void BOJ5339() {
		System.out.println("     /~\\");
		System.out.println("    ( oo|");
		System.out.println("    _\\=/_");
		System.out.println("   /  _  \\");
		System.out.println("  //|/.\\|\\\\");
		System.out.println(" ||  \\ /  ||");
		System.out.println("============");
		System.out.println("|          |");
		System.out.println("|          |");
		System.out.println("|          |");
	}
	
	// https://www.acmicpc.net/problem/9654
	void BOJ9654() {
		System.out.println("SHIP NAME      CLASS          DEPLOYMENT IN SERVICE");
		System.out.println("N2 Bomber      Heavy Fighter  Limited    21        ");
		System.out.println("J-Type 327     Light Combat   Unlimited  1         ");
		System.out.println("NX Cruiser     Medium Fighter Limited    18        ");
		System.out.println("N1 Starfighter Medium Fighter Unlimited  25        ");
		System.out.println("Royal Cruiser  Light Combat   Limited    4         ");
	}
	
	// https://www.acmicpc.net/problem/10926
	void BOJ10926() {
		Scanner sc = new Scanner(System.in);
		String A = sc.nextLine();
		System.out.println(A + "??!");
	}
	
	// https://www.acmicpc.net/problem/3003
	void BOJ3003() {
		Scanner sc = new Scanner(System.in);
		int K = sc.nextInt();
		int Q = sc.nextInt();
		int R = sc.nextInt();
		int B = sc.nextInt();
		int Kn = sc.nextInt();
		int P = sc.nextInt();
		K = 1 - K;
		Q = 1 - Q;
		R = 2 - R;
		B = 2 - B;
		Kn = 2 - Kn;
		P = 8 - P;
		System.out.print(K + " " + Q + " " + R + " " + B + " " + Kn + " " + P);
	}
	
	// https://www.acmicpc.net/problem/10170
	void BOJ10170() {
		System.out.println("NFC West       W   L  T");
		System.out.println("-----------------------");
		System.out.println("Seattle        13  3  0");
		System.out.println("San Francisco  12  4  0");
		System.out.println("Arizona        10  6  0");
		System.out.println("St. Louis      7   9  0");
		System.out.println("");
		System.out.println("NFC North      W   L  T");
		System.out.println("-----------------------");
		System.out.println("Green Bay      8   7  1");
		System.out.println("Chicago        8   8  0");
		System.out.println("Detroit        7   9  0");
		System.out.println("Minnesota      5  10  1");
	}
	
	// https://www.acmicpc.net/problem/5554
	void BOJ5554() {
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		int D = sc.nextInt();
		int min = (A + B + C + D) / 60;
		int sec = (A + B + C + D) % 60;
		System.out.println(min);
		System.out.println(sec);
	}
	
	// https://www.acmicpc.net/problem/5522
	void BOJ5522() {
		Scanner sc = new Scanner(System.in);
		int sum = 0;
		for(int i = 0; i < 5; i++) {
			int A = sc.nextInt();
			sum += A;
		}
		System.out.print(sum);
	}
	
	// https://www.acmicpc.net/problem/1271
	void BOJ1271() {
		Scanner sc = new Scanner(System.in);
		BigInteger n = sc.nextBigInteger();
		BigInteger m = sc.nextBigInteger();
		System.out.println(n.divide(m)); //BigInterger에서 .divide는 몫을 의미
		System.out.println(n.remainder(m)); //BigInterger에서 .remainder는 나머지를 의미
	}
	
	// https://www.acmicpc.net/problem/14645
	void BOJ14645() {
		Scanner sc = new Scanner(System.in);
		for(int i = 0; i < 8; i++) {
			int A = sc.nextInt();
		}
		System.out.println("비와이");
	}
	
	// https://www.acmicpc.net/problem/15894
	void BOJ15894() {
		Scanner sc = new Scanner(System.in);
		BigInteger A = sc.nextBigInteger();
	    BigInteger B = new BigInteger("4"); //B에 4 입력
		System.out.println(A.multiply(B)); //BigInterger에서 .multiply는 곱하기를 의미
	}
	
	// https://www.acmicpc.net/problem/16394
	void BOJ16394() {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        System.out.println((a-1946));
	}
	
	// https://www.acmicpc.net/problem/15962
	void BOJ15962() {
		 System.out.println("파이팅!!");
	}

	// https://www.acmicpc.net/problem/2338
	void BOJ2338() {
		Scanner sc = new Scanner(System.in);
        BigInteger A = sc.nextBigInteger();
        BigInteger B = sc.nextBigInteger();
        System.out.println(A.add(B)); //BigInterger에서 .add는 더하기를 의미
        System.out.println(A.subtract(B)); //BigInterger에서 .subtract는 빼기를 의미
        System.out.println(A.multiply(B));
	}
	
	// https://www.acmicpc.net/problem/15733
	void BOJ15733() {
		System.out.println("I'm Sexy");
	}
	
	// https://www.acmicpc.net/problem/16430
	void BOJ16430() {
		   Scanner sc = new Scanner(System.in);
	       int a = sc.nextInt();
	       int b = sc.nextInt();
	       System.out.print((b-a) + " " + b);
	}
	
	// https://www.acmicpc.net/problem/15740
	void BOJ15740() {
		Scanner sc = new Scanner(System.in);
		BigInteger a = sc.nextBigInteger();
		BigInteger b = sc.nextBigInteger();
		System.out.print(a.add(b));
	}
	
	// https://www.acmicpc.net/problem/15964
	void BOJ15964() {
    	Scanner sc = new Scanner(System.in);
    	BigInteger A = sc.nextBigInteger();
    	BigInteger B = sc.nextBigInteger();
    	System.out.print(A.add(B).multiply(A.subtract(B)));
	}
	
	// https://www.acmicpc.net/problem/11382
	void BOJ11382() {
		Scanner sc = new Scanner(System.in);
    	BigInteger A = sc.nextBigInteger();
    	BigInteger B = sc.nextBigInteger();
    	BigInteger C = sc.nextBigInteger();
    	System.out.print(A.add(B.add(C)));
	}
	
	// https://www.acmicpc.net/problem/18108
	void BOJ18108() {
		Scanner sc = new Scanner(System.in);
    	int A = sc.nextInt();
    	System.out.print(A - 543);
	}
	
	// https://www.acmicpc.net/problem/15727
	void BOJ15727() {
		Scanner sc = new Scanner(System.in);
    	int A = sc.nextInt();
    	int count = 1;
    	while(A > 5) {
    		A -= 5;
    		count += 1;
    	}
    	System.out.print(count);
	}
	
	// https://www.acmicpc.net/problem/17295
	void BOJ17295() {
		Scanner sc = new Scanner(System.in);
    	String A = sc.nextLine();
    	System.out.print("Avengers: Endgame");
	}
	
	// https://www.acmicpc.net/problem/16170
	void BOJ16170() {
		SimpleDateFormat format1 = new SimpleDateFormat("yyyy");
		SimpleDateFormat format2 = new SimpleDateFormat("MM");
		SimpleDateFormat format3 = new SimpleDateFormat("dd");
        Date time = new Date();
        System.out.println(format1.format(time));
        System.out.println(format2.format(time));
        System.out.println(format3.format(time));
	}
	
	// https://www.acmicpc.net/problem/14652
	void BOJ14652() {
		Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        int K = sc.nextInt();
        System.out.print((K / M) + " " + (K % M));
	}
	
	// https://www.acmicpc.net/problem/13277
	void BOJ13277() {
		Scanner sc = new Scanner(System.in);
        BigInteger A = sc.nextBigInteger();
        BigInteger B = sc.nextBigInteger();
        System.out.println(A.multiply(B));
	}
	
	// https://www.acmicpc.net/problem/17256
	void BOJ17256() {
		Scanner sc = new Scanner(System.in);
    	int a = sc.nextInt();
    	int b = sc.nextInt();
    	int c = sc.nextInt();
    	int d = sc.nextInt();
    	int e = sc.nextInt();
    	int f = sc.nextInt();
    	System.out.print((d - c) + " " + e / b + " " + (f - a));
	}
	
	// https://www.acmicpc.net/problem/6749
	void BOJ6749() {
		Scanner sc = new Scanner(System.in);
    	int a = sc.nextInt();
    	int b = sc.nextInt();
    	b += b - a;
    	System.out.print(b);
	}
	
	// https://www.acmicpc.net/problem/8370
	void BOJ8370() {
		Scanner sc = new Scanner(System.in);
    	int a = sc.nextInt();
    	int b = sc.nextInt();
    	int c = sc.nextInt();
    	int d = sc.nextInt();
    	System.out.print(a * b + c * d);
	}
	
	// https://www.acmicpc.net/problem/17496
	void BOJ17496() {
		Scanner sc = new Scanner(System.in);
    	int N = sc.nextInt();
    	int T = sc.nextInt();
    	int C = sc.nextInt();
    	int P = sc.nextInt();
    	int total;
    	total = (N - 1) / T * C * P;
    	System.out.println(total);
	}
	
	// https://www.acmicpc.net/problem/15439
	void BOJ15439() {
    	Scanner sc = new Scanner(System.in);
    	int N = sc.nextInt();
    	System.out.println((N - 1) * N);
	}
	
	// https://www.acmicpc.net/problem/20492
	void BOJ20492() {
    	Scanner sc = new Scanner(System.in);
    	int  N = sc.nextInt();
    	System.out.println((int)(N * 0.78));
    	System.out.println((int)(N * 0.8 + N * 0.2 * 0.78));
	}
	
	// https://www.acmicpc.net/problem/14928
	void BOJ14928() {
		Scanner sc = new Scanner(System.in);
    	String N = sc.nextLine();
    	long ans = 0;
        for (int i = 0; i < N.length(); i++) {
          	ans = (ans * 10 + (N.charAt(i) - '0')) % 20000303; //아스키 코드 값과 동일한 숫자를 만들기 위해 -'0'을 실행
          }
        System.out.println(ans);
	}
	
	// https://www.acmicpc.net/problem/18301
	void BOJ18301() {
		Scanner sc = new Scanner(System.in);
    	int a = sc.nextInt();
    	int b = sc.nextInt();
    	int c = sc.nextInt();
    	System.out.print((a + 1) * (b + 1) / (c + 1) - 1);
	}
	
	// https://www.acmicpc.net/problem/11283
	void BOJ11283() {
		Scanner sc = new Scanner(System.in);
        String a = sc.next();
        int num = (int)(a.charAt(0));
        System.out.print(num - 44031); //유니코드에서 '가'는 44032의 값을 가짐
	}
	
	// https://www.acmicpc.net/problem/20254
	void BOJ20254() {
		Scanner sc = new Scanner(System.in);
    	int a = sc.nextInt();
    	int b = sc.nextInt();
    	int c = sc.nextInt();
    	int d = sc.nextInt();
    	System.out.print(56*a + 24*b + 14*c + 6*d);
	}
	
	// https://www.acmicpc.net/problem/21300
	void BOJ21300() {
		Scanner sc = new Scanner(System.in);
    	int sum = 0;
    	for(int i = 0; i < 6; i++) {
    		int a = sc.nextInt();
    		sum += a;
    	}
    	System.out.print(sum * 5);
	}
	
	// https://www.acmicpc.net/problem/22193
	void BOJ22193() {
		Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        BigInteger N = sc.nextBigInteger();
        BigInteger M = sc.nextBigInteger();
        System.out.println(N.multiply(M));
	}
	
	// https://www.acmicpc.net/problem/23234
	void BOJ23234() {
		System.out.println("The world says hello!");
	}
}

public class B5 {
	public static void main(String[] args) {
		BOJb5 b = new BOJb5();
		b.BOJ23234();
	}

}