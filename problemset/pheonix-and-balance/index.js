// Input:
// t (test cases)
// t following numbers representing n (which is even)

// Output:
// Minimum difference between the sums of the two piles

// Algorithm:
// The number of coins per pile is (n / 2)
// We take the biggest number and sum it with the smallest ones till size of pile = (n / 2)
// Then subtract that with the sum of the remaning numbers

// Examples:
// n = 6:
// We have the weights: 2 4 8 16 32 64
// Minimal sum = (64 + 2 + 4) - (8 + 16 + 32)

function geometricSum(first, last) {
    terms = last - first + 1;
    firstTerm = Math.pow(2, first);
    return firstTerm * ((1 - Math.pow(2, terms)) / (1 - 2));
}

function solution(x) {
    size = x / 2;
    biggerPile = Math.pow(2, x) + geometricSum(1, size - 1);
    smallerPile = geometricSum(size, x - 1);
    return biggerPile - smallerPile;
}

t = +readline();
answers = [];

for (var i = 0; i < t; ++i) {
    n = +readline();
    answers.push(solution(n));
}

for (var answer of answers) {
    print(answer);
}


