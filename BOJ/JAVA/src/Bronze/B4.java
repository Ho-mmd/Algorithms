package Bronze;

import java.util.Arrays;
import java.util.Date;
import java.text.SimpleDateFormat;
import java.util.Scanner;
import java.math.BigInteger;

class BOJb4 {
	BOJb4() {}

/* B4 */	

	// https://www.acmicpc.net/problem/1008
	void BOJ1008() {
		Scanner sc = new Scanner(System.in);
        int A = sc.nextInt(); 
        int B = sc.nextInt();  
        System.out.println((double)A / B);
	}
	
	// https://www.acmicpc.net/problem/9498
	void BOJ9498() {
		Scanner sc = new Scanner(System.in); 
        int A = sc.nextInt(); 
        //if - else if - else 조건문 사용
        if(A >= 90) {
        	System.out.println("A");
        } else if(A >= 80 && A <= 89) {
        	System.out.println("B");
        } else if(A >= 70 && A <= 79) {
        	System.out.println("C");
        } else if(A >= 60 && A <= 69) {
        	System.out.println("D");
        }else {
        	System.out.println("F");
        }
	}
	
	// https://www.acmicpc.net/problem/1330
	void BOJ1330() {
		Scanner sc = new Scanner(System.in); 
        int A = sc.nextInt(); 
        int B = sc.nextInt();
        if(A > B)
        	System.out.print(">");
        else if(A < B)
        	System.out.print("<");
        else
        	System.out.print("==");
	}
	
	// https://www.acmicpc.net/problem/2753
	void BOJ2753() {
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		if((A % 4 == 0 && A % 100 != 0) || A % 400 == 0)
			System.out.println(1);
		else
			System.out.println(0);
	}
	
	// https://www.acmicpc.net/problem/2588
	void BOJ2588() {
		Scanner sc = new Scanner(System.in);
		String num1 = sc.nextLine();
		String num2 = sc.nextLine();
		int num3 = Integer.parseInt(num1); //String to Integer
		int i = num2.length() - 1; //.length를 통해 문자열 길이 확인
		int sum = 0;
		int multi = 1;
		//반복문을 통해 문자열 길이만큼 곱 실행
		while(i > -1) {
			int process = num3 * (int)(num2.charAt(i) - '0');
			System.out.println(process);
			sum += process * multi;
			multi *= 10;
			i--;
		}
		System.out.println(sum);
	}
	
	// https://www.acmicpc.net/problem/14681
	void BOJ14681() {
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();
		int y = sc.nextInt();
		if(x > 0 & y > 0)
			System.out.println(1);
		else if(x < 0 & y > 0)
			System.out.println(2);
		else if(x < 0 & y < 0)
			System.out.println(3);
		else 
			System.out.println(4);
	}
	
	// https://www.acmicpc.net/problem/1712
	void BOJ1712() {
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		int count = C - B;
		if(B >= C) {
			System.out.println(-1);
		}
		else {	
			System.out.println(A / count + 1);
		}
	}	
	
	// https://www.acmicpc.net/problem/10039
	void BOJ10039() {
		Scanner sc = new Scanner(System.in);
		int sum = 0;
		for(int i = 0; i < 5; i++) {
			int A = sc.nextInt();
			if(A < 40)
				A = 40;
			sum += A;
		}
		System.out.println(sum / 5);
	}
		
	// https://www.acmicpc.net/problem/5543
	void BOJ5543() {
		Scanner sc = new Scanner(System.in);
		int[] cost = new int[5]; //크기가 5인 int형의 배열 생성
		int min1 = 2000;
		for(int i = 0; i < 5; i++) {
			cost[i] = sc.nextInt();
			if(i <= 2 & min1 > cost[i])
				min1 = cost[i];
		}
		int min2 = cost[3] > cost[4] ? cost[4] : cost[3]; //삼항연산자로 크기 비교
		System.out.println(min1 + min2 - 50);
	}	
		
	// https://www.acmicpc.net/problem/5543
	void BOJ10797() {
		Scanner sc = new Scanner(System.in);
		int count = 0;
		int day = sc.nextInt();
		for(int i = 0; i < 5; i++) {
			int num = sc.nextInt();
			if(num == day)
				count++;
		}
		System.out.println(count);
	}
	// https://www.acmicpc.net/problem/2525
	void BOJ2525() {
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		B = B + C;
		if(B >= 60) {
			A += B / 60;
			B -= 60 * (B / 60);
			if(A > 23) {
				A -= 24;
			}
		}
		System.out.println(A + " " + B);
	}
	
	// https://www.acmicpc.net/problem/2752
	void BOJ2752() {
		Scanner sc = new Scanner(System.in);
		int[] arr = new int[3];
		for(int i = 0; i < 3; i++) {
			arr[i] = sc.nextInt();
		}
		Arrays.sort(arr); //Arrays.sort: 배열을 오름차순으로 정렬
		for(int num : arr)
			System.out.print(num + " ");
	}	
	
	// https://www.acmicpc.net/problem/10162
	void BOJ10162() {
		Scanner sc = new Scanner(System.in);
		int A = 0;
		int B = 0;
		int C = 0;
		int T = sc.nextInt();
		A = T / 300;
		B = (T % 300) / 60;
		C = (T % 60) / 10;
		if(A * 300 + B * 60 + C * 10 != T)
			System.out.println(-1);
		else
			System.out.print(A + " " + B + " " + C);
	}	
	
	// https://www.acmicpc.net/problem/2480
	void BOJ2480() {
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		int max = 0;
		if((A >= B & B >= C) || (A >= C & C >= B))
			max = A;
		else if((B >= A & A >= C) || (B >= C & C >= A))
			max = B;
		else
			max = C;
		if(A == B & B == C) {
			System.out.println(10000 + A * 1000);
		} else if(A == B || A == C || B == C) {
			if(A == B || A == C)
				System.out.println(1000 + A * 100);
			else 
				System.out.println(1000 + C * 100);
		} else {
			System.out.println(100 * max);
		}
	}	
	
	// https://www.acmicpc.net/problem/10156
	void BOJ10156() {
		Scanner sc = new Scanner(System.in);
		int K = sc.nextInt();
		int N = sc.nextInt();
		int M = sc.nextInt();
		if(K * N <= M)
			System.out.println(0);
		else
			System.out.println(K * N - M);
	}

	// https://www.acmicpc.net/problem/2420
	void BOJ2420() {
		Scanner sc = new Scanner(System.in);
		long N = sc.nextLong();
		long M = sc.nextLong();
		long differ = N - M;
		if(differ < 0)
			System.out.println((-1L) * differ);
		else
			System.out.println(differ);
	}	
	
	// https://www.acmicpc.net/problem/2530
	void BOJ2530() {
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		int D = sc.nextInt();
		int min = C + D;
		if(min >= 60) {
			B += min / 60;
			min = min % 60;
			if(B >= 60) {
				A += B / 60;
				B %= 60;
				if(A >= 24) {
					A = A % 24;
				}
			}
			System.out.println(A + " " + B + " " + min);
		} else {
			System.out.println(A + " " + B + " " + min);
		}
	}
	
	// https://www.acmicpc.net/problem/5532
	void BOJ5532() {
		Scanner sc = new Scanner(System.in);
		int L = sc.nextInt();
		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		int D = sc.nextInt();
		if((A / C + 1) - (B / D + 1) >= 0) {
			if(A % C == 0)
				System.out.print(L - (A / C));
			else
				System.out.print(L - (A / C + 1));
		}
		else {
			if(B % D == 0)
				System.out.print(L - (B / D));
			else
				System.out.print(L - (B / D + 1));
		}
	}
	
	// https://www.acmicpc.net/problem/10101
	void BOJ10101() {
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		if(A + B + C == 180) {
			if(A == B & B == C)
				System.out.print("Equilateral");
			else if(A == B || B == C || A == C)
				System.out.print("Isosceles");
			else
				System.out.print("Scalene");
		} else {
			System.out.print("Error");
		}
	}
	
	// https://www.acmicpc.net/problem/5596
	void BOJ5596() {
		Scanner sc = new Scanner(System.in);
		int sum1 = 0;
		int sum2 = 0;
		for(int i = 0; i < 8; i++) {
			if(i < 4)
				sum1 += sc.nextInt();
			else
				sum2 += sc.nextInt();
		}
		System.out.print(sum1 > sum2 ? sum1 : sum2);
	}
	
	// https://www.acmicpc.net/problem/10707
	void BOJ10707() {
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		int D = sc.nextInt();
		int P = sc.nextInt();
		A *= P;
		if(P > C)
			B = B + (P - C) * D;
		System.out.print(A > B ? B : A);
	}
	
	// https://www.acmicpc.net/problem/15680
	void BOJ15680() {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		if(N == 0)
			System.out.print("YONSEI");
		else if(N == 1)
			System.out.print("Leading the Way to the Future");
	}
	
	// https://www.acmicpc.net/problem/1297
	void BOJ1297() {
		Scanner sc = new Scanner(System.in);
		int D = sc.nextInt();
		int H = sc.nextInt();
		int W = sc.nextInt();
		//Math.sqrt(a): a의 제곱근, Math.pow(a, b): a의 b제곱을 의미
		double ans = Math.sqrt(Math.pow(D, 2) / (Math.pow(H, 2) + Math.pow(W, 2)));
		System.out.print((int)(H * ans) + " " + (int)(W * ans));
	}
	
	// https://www.acmicpc.net/problem/11943
	void BOJ11943() {
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		int D = sc.nextInt();
		if(A + D >= B + C) 
			System.out.println(B + C);
		else
			System.out.println(A + D);
	}
	
	// https://www.acmicpc.net/problem/15963
	void BOJ15963() {
		Scanner sc = new Scanner(System.in);
		long N = sc.nextLong();
		long M = sc.nextLong();
		if(N == M)
			System.out.print(1);
		else
			System.out.print(0);
	}
	
	// https://www.acmicpc.net/problem/10768
	void BOJ10768() {
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		if(A > 2)
			System.out.print("After");
		else if(A == 2) {
			if(B == 18)
				System.out.print("Special");
			else if(B > 18)
				System.out.print("After");
			else
				System.out.print("Before");
		}
		else
			System.out.print("Before");
	}
	
	// https://www.acmicpc.net/problem/5575
	void BOJ5575() {
		Scanner sc = new Scanner(System.in);
		int[] TimeA = new int[18];
		int i = 0;
		int h, m ,s;
		for(int j = 0; j < 18; j++) {
			TimeA[j] = sc.nextInt();
		}
		while(true) {
			s = TimeA[i + 5] - TimeA[i + 2];
			if(s < 0) {
				if(TimeA[i + 4] == 0) {
					TimeA[i + 4] = 59;
					TimeA[i + 3]--;
				}
				else 
					TimeA[i + 4]--;
				s = TimeA[i + 5] + 60 - TimeA[i + 2];
				
			}
			m = TimeA[i + 4] - TimeA[i + 1];
			if(m < 0) {
				if(TimeA[i + 3] == 0)
					TimeA[i + 3] = 23;
				else 
					TimeA[i + 3]--;
				m = TimeA[i + 4] + 60 - TimeA[i + 1];
			}
			h = TimeA[i + 3] - TimeA[i];
			System.out.println(h + " " + m + " " + s);
			i += 6;
			if(i > 12)
				break;
		}
	}
	
	// https://www.acmicpc.net/problem/11948
	void BOJ11948() {
		Scanner sc = new Scanner(System.in);
		int sum = 0;
		int min1 = 0;
		int min2 = 0;
		for(int i = 0; i < 6; i++) {
			int score = sc.nextInt();
			sum += score;
			if(i < 4) {
				if(i == 0)
					min1 = score;
				else
					min1 = min1 > score ? score : min1;
			} else {
				if(i == 4)
					min2 = score;
				else
					min2 = min2 > score ? score : min2;
			}
		}	
		System.out.print(sum - min1 - min2);
	}
	
	// https://www.acmicpc.net/problem/17362
	void BOJ17362() {
		Scanner sc = new Scanner(System.in);
		long A = sc.nextLong();
		long line = (A - 1) / 4;
		if(A <= 5)
			System.out.print(A);
		else if(line % 4 == 0)
			
		
		
	}
}

public class B4 {
	public static void main(String[] args) {
		BOJb4 b = new BOJb4();
		b.BOJ11948();
		//test
	}
}