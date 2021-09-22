// Input:
// n (number of athletes)
// n values of each athlete's strength

// Output:
// Minimum difference between strengths

t = +readline();

sol = [];

for (var test = 0; test < t; ++test) {
    n = +readline();
    x = readline().split(" ").map(x => +x);

    x.sort((a, b) => (a - b));
    var min = x[1] - x[0];

    for (var i = 1; i < n - 1; ++i) {
        if (x[i + 1] - x[i] < min) {
            min = x[i + 1] - x[i];
        }
    }
    sol.push(min);
}

for (var element of sol) {
    print(element);
}