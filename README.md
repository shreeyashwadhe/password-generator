# password-generator
Overview:-
This project is a password generator application that allows users to create secure passwords based on three distinct difficulty levels. The difficulty levels vary in the types of characters allowed:

Easy – Includes letters and digits only.

Moderate – Includes letters, digits, and special characters.

Hard – Includes letters, digits, special characters, and ensures strong password validation, guaranteeing the presence of at least one lowercase letter, one uppercase letter, one digit, and one special character.
ey Components of the Project
Character Sets for Different Difficulty Levels

Easy Set: Characters include lowercase, uppercase letters, and digits (e.g., a-z, A-Z, 0-9).

Moderate Set: Characters include the easy set plus common special characters (e.g., !@#$%^&*()).

Hard Set: Combines the moderate set and includes additional special characters like -_+=<>? and adds the logic for password validation.

Password Generation Logic

A random character generator function genRand picks a random character from the specified character set.
Three different password generation functions are used based on the user’s choice:
generateEasyPassword(int) – Generates passwords using easy characters.
generateModeratePassword(int) – Generates passwords with a moderate difficulty set.
generateHardPassword(int) – Ensures the generated password contains at least one uppercase letter, one lowercase letter, one digit, and one special character.

Password Validation (for Hard Level)

The Hard password generator function validates the generated password to ensure it meets specific criteria (e.g., one lowercase letter, one uppercase letter, one digit, one special character).
User Interaction and Input


Randomness and Seeding
Random number generation is initialized using srand(time(0)) to ensure different results each time the program is run.
