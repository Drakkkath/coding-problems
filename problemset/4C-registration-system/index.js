n = +(readline());
userNames = [];
userNumbers = [];
print();

for (i = 0; i < n; ++i) {
    user = readline();
    if (userNames.indexOf(user) == -1) {
        userNames.push(user);
        userNumbers.push("");
        print("OK");
    } else {
        pos = userNames.indexOf(user);
        if (userNumbers[pos] == "") {
            userNumbers[pos] = 1;
        } else {
            userNumbers[pos] += 1;
        }
        print(userNames[pos] + userNumbers[pos]);
    }
}
