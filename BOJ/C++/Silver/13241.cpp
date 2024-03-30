#include <iostream>                                                                                                                            
                                                                                                                                               
long long int gcd(long long int a, long long int b) {                                                                                                    
        if(b == 0)                                                                                                         
                return a;

		return gcd(b, a % b);  
}

int main() {
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);

		long long int A, B;

		std::cin >> A >> B;

        if(A > B)                                                                                                                                     
            std::cout << A * B / gcd(A, B) << "\n";                                                                                               
        else                                                                                                                                          
            std::cout << A * B / gcd(B, A) << "\n";                                                                                               
        
		return 0;
}
