// Input:
// s (Kirit's initial strength) n (number of following lines)
// each line has: x (dragon's strength) y (bonus in strength if duel is won)

// Output:
// Determine if Kirito can defeat all of the dragons
// Given that the duels can take any order

// Algorithm:
// Store all the dragons' strengths and the corresponding strength gains in case the duels are won
// in separate arrays, though in the same order.
// 1. Take the weakest dragon (min of dragonsStrength) and compare it to current s
// 2. If (s <= min) Kiriti is defeated else he wins
// 3. Take the index of the defeated dragon (which is the weakest)
// 4. Add the corresponding strength gain to s with the index
// 5. Remove dragonsStrength[index] and strengthGains[index] and repeat.

// Example: 
// 50 2
// 12 3
// 3 50
// dragonsStrength = [12, 3]; strengthGains = [3, 50]


x = readline().split(" ").map((x) => +x);
s = x[0];
n = x[1];

isDefeated = false;
strengthGains = [];
dragonsStrength = [];

Array.min = (array) => {
    return Math.min.apply(Math, array);
};

for (i = 0; i < n; ++i) {
    y = readline().split(" ").map((x) => +x);
    dragonsStrength.push(y[0]);
    strengthGains.push(y[1]);
}

i = 0;
while (i < n && !isDefeated) {
    min = Array.min(dragonsStrength);
    if (s <= min) {
        isDefeated = true;
    } else {
        index = dragonsStrength.indexOf(min);
        s += strengthGains[index];
        dragonsStrength.splice(index, 1);
        strengthGains.splice(index, 1);
        i += 1;
    }
}

print(isDefeated ? "NO" : "YES");
