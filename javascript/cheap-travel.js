// Example 1: 
// 1000 3 1000 1000

// special: 1000$/3rides ==> can buy 333 special tickets, remaining 1000 - 333*3 = 1 ride
// normal: 1000$/ride ==> complete it with 1 ticket = 1000$
// answer = special (333 * 1000 = 333000) + 1000 = 334000$


// Example 2:
// 5 2 2 3
// special: 3$/2rides ==> 2 tickets = 6$
// normal: 2$/ride ==> 1 ticket remains = 2$
// answer = 6 + 2 = 8$

// Example 3:
// 10 3 5 1
// special: 1$/3rides ==> 3 tickets = 3$
// normal: 5$/ride ==> 10 % 3 = 1 ticket left = 5$
// answer = 5 + 3 = 8$

x = readline().split(" ").map(x => +x);
n = x[0]; // number of rides
m = x[1]; // rides per special ticket
a = x[2]; // price of normal ticket
b = x[3]; // price of special ticket

// Output:
// Minimum price to pay for n rides

normalPrice = a * n;
specialPrice = (n % m == 0) ? (n / m) * b : Math.floor((n / m) + 1) * b;

specialTickets = Math.floor(n / m);
normalTicketsLeft = n % m;

mixedPrice = (specialTickets * b) + (normalTicketsLeft * a);

print(Math.min(normalPrice, mixedPrice, specialPrice));





