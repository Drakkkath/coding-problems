// Input:
// t (test cases)
// t following numbers representing n

// Output:
// Greatest GCD of numbers from 1 to n inclusively

// Algorithm:
// if n is pair => GCD = n / 2
// else => GCD = (n - 1) / 2

// Examples:
// n = 10 (1 2 3 4 5 6 7 8 9 10) => GCD(5, 10) = 5
// n = 7 (1 2 3 4 5 6 7) => GCD(3, 6) = 3

function solution(n) {
    return (n % 2 == 0) ? n / 2 : (n - 1) / 2;
}

var t = +readline();
answers = [];

for (var i = 0; i < t; ++i) {
    n = +readline();
    answers.push(solution(n));
}

for (var answer of answers) {
    print(answer);
}
