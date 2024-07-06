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
