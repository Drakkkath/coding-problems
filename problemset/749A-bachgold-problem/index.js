// Input:
// n (number)

// Output:
// k (maximum number of primes whose sum is = n)
// k following primes

// Algorithm:
// if n is even => k = n / 2; list k following '2's
// if n is odd => k = (n - 1) / 2; because n = ((n - 1) / 2) - 1 times "2" + one "3"

var n = +readline();
var k;
var primes = "";
var lastPrime;

if (n % 2 == 0) {
    k = n / 2;
    lastPrime = "2";
}
else {
    k = (n - 1) / 2;
    lastPrime = "3";
}

for (var i = 0; i < k - 1; ++i) {
    primes += "2 ";
}

primes += lastPrime;

print(k);
print(primes);