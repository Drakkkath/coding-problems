// Input:
// n (number of lanterns in the street) l (street's length)
// n numbers representing the position of each lantern in the street

// Output:
// Shortest radius d so that all of the street is lit

// Algorithm:
// 1. Calculate the maximal distance difference between consecutive lanterns
// 2. Divide the difference by 2 to get the radius
// 3. Testing the edge cases; if there is a lantern at pos 0 and/or at the end
// 4. Calculate the maximum of
// calculated difference, distance between pos 0 and first lantern, distance between the last lantern and the end

x = readline().split(" ").map(x => +x);

n = x[0];
l = x[1];

lanterns = readline().split(" ").map(x => +x);

lanterns.sort((a, b) => {
    return a - b;
});

maxDistanceDiff = 0;

for (i = 0; i < n - 1; ++i) {
    currentDistanceDiff = Math.abs(lanterns[i] - lanterns[i + 1]);
    maxDistanceDiff = (currentDistanceDiff > maxDistanceDiff) ? currentDistanceDiff : maxDistanceDiff;
}

maxRadNeeded = maxDistanceDiff / 2;


if (lanterns.indexOf(0) == -1) {
    maxRadNeeded = Math.max(lanterns[0], maxRadNeeded);
}
if (lanterns.indexOf(l) == -1) {
    maxRadNeeded = Math.max(l - lanterns[n - 1], maxRadNeeded);
}

print(maxRadNeeded);