- If it is a problem related to formulas, solve and organize it if possible !!!

# Prefix Sum

- Sum(i ... j) = Sum(j) - Sum(i + 1)

------------------------------------------

# Modular Arithmetic

- N mod m: Output is within the range 0 to (m - 1)
- If N is negative, N mod m = -(|N| mod m) + m
- Modular Congruent
    - N mod m = K mod m
    - N ≡ K mod m
- Properties
    - (a + b)mod n = (a mod n + b mod n)mod n
    - (a - b)mod n = (a mod n - b mod n)mod n
    - (a * b)mod n = (a mod n * b mod n)mod n
- Division
    - Seek inverse element of Modular multiplication
    - Change division to multiplication
    - Proceed multiplication
    - i.g) 10/3 mod 11 
        - (3 * x) mod 11 = 1
        - x = 4
        - 10/3 mod 11 = (10 * 4) mod 11 = 7 mod 11

------------------------------------------

# Fermat's little theorem

- If p is prime and a is an integer not divisible by p, then
    - a^(p-1) ≡ 1 (mod p)
- Furthermore, for every integer a we have
    - a^p ≡ a (mod p)

- i.g) 6^222 mod 11
        - 6^(11 - 1) ≡ 1 (mod 11)
        - 6^222 ≡ 6^(22 * 10) * 6^2
        - 6^222 ≡ 1^22 * 6^2 (mod 11)
        - 6^222 ≡ 36 (mod 11)
        - 6^222 ≡ 3 (mod 11)
    
