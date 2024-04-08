// Input:
// t (number of test cases)
// t following numbers (each number consists of the same digits), they represent apartment numbers

// Output:
// Number of pressed buttons to reach each number

// Explanation:
// For example we have the apartment number 33
// In order to reach that number, our caller makes the following calls:
// 1, 11, 111, 1111, 2, 22, 222, 2222, 3, 33

// Total numbers pressed: 1 + 2 + 3 + 4 + 1 + 2 + 3 + 4 + 1 + 2 = 23

// Algorithm:
// We notice a repeating pattern of (1 + 2 + 3 + 4)
// And if the repeating digit of an apartment number is for example 5
// Then the pattern repeats 4 times
// Thus, number of pressed buttons would be 4 * (1 + 2 + 3 + 4)
// In addition to:
// - (1 + 2 + 3 + 4) if the number consists of 4 digits
// - (1 + 2 + 3) if the number consists of 3 digits
// And so on.

function solution(str) {
    repeatingTimes = +str[0] - 1;
    switch (str.length) {
        case 1:
            return (1 + 2 + 3 + 4) * repeatingTimes + 1;
        case 2:
            return (1 + 2 + 3 + 4) * repeatingTimes + 1 + 2;
        case 3:
            return (1 + 2 + 3 + 4) * repeatingTimes + 1 + 2 + 3;
        case 4:
            return (1 + 2 + 3 + 4) * repeatingTimes + 1 + 2 + 3 + 4;
    }
}

t = +readline();

answers = [];

for (var i = 0; i < t; ++i) {
    n = readline();
    x = solution(n);
    answers.push(x);
}

for (answer of answers) {
    print(answer);
}