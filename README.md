# password-generator
Overview:-
This Password Generator is a simple C++ terminal-based application that generates a secure, random password of a specified length. It ensures that each generated password includes at least one digit and one special character, improving its strength and reliability for secure uses such as account logins or encryption keys.
Character Set (alphanum)
A predefined array of possible characters:
Digits: 0–7
Special characters: !@#$%&*^
Alphabet: Uppercase and lowercase English letters

2. Random Character Generator (genrand)
A function that returns a single random character from the alphanum set using rand().

3. Password Generation Loop
A do-while loop generates passwords repeatedly until the password contains:

At least one digit

At least one special character

4. Random Seeding (srand)
Initializes the random number generator using the current time to ensure different outputs in each run.

