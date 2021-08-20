// Problem:
// Given n houses in ringroad which can only be parcoured clockwise, what is the minimal steps to take
// in order to visit all mentioned houses

x = readline().split(" ").map(x => +x);
n = x[0]; // number of houses in ringroad
m = x[1]; // number of houses to visit

y = readline().split(" ").map(x => +x); // houses to be visited

currentHouse = 1;
steps = 0;

for (i = 0; i < m; ++i) {
    if (currentHouse <= y[i]) {
        steps += y[i] - currentHouse;
        currentHouse = y[i];
    } else {
        steps += (n - currentHouse) + y[i];
        currentHouse = y[i];
    }
}

print(steps);
