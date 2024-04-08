// Input:
// t (number of test cases)
// n (number of letters)
// n following letters

// Output:
// YES/NO for every test case

// Algorithm:
// Non consecutive occurance of some letter => NO
// Otherwise, YES

function deleteConsecutiveRepetitions(str, len) {
    j = 0;
    output = str[0];
    for (var i = 0; i < len; ++i) {
        if (str[i] != output[j]) {
            output += str[i];
            ++j;
        }
    }
    return output;
}

function countOccurrence(str, letter) {
    count = 0;
    for (var i = 0; i < str.length; ++i) {
        if (str[i] == letter) {
            ++count;
        }
    }
    return count;
}

function solution(str) {
    for (letter of str) {
        if (countOccurrence(str, letter) > 1) {
            return "NO";
        }
    }
    return "YES";
}

answers = [];

t = +readline();
for (var i = 0; i < t; ++i) {
    n = +readline();
    x = deleteConsecutiveRepetitions(readline(), n);
    answers.push(solution(x));
}

for (answer of answers) {
    print(answer);
}