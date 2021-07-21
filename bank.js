const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
console.log("~~~~~~~~~~~~~ BANK OF TRITON ~~~~~~~~~~~~~")
console.log("Enter your account information\n")
rl.question("Username: ", (name) => {
    const getPswd = () => rl.question("Password: ", (pswd) => {
        if (pswd !== "124816") {
          console.log("Invalid password")
           getPswd()
        } else {
          console.log("Successfully logged in!")
        }
        rl.close();
    });
    getPswd()
});
