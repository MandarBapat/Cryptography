### About the code

All code is written in C. Use GCC to compile using the following command:

**gcc -o \[binary_file_name_as_you_wish\] \[C program file\]**

1. The **generate_key.c** file generates a random number between 0 to 25. The binary file requires no arguments. Just compile and run the program. You will get a random number between 0 to 25 as an output on the console.
2. The **encrypt.c** file encrypts an English language message, without spaces and in lower case, into ciphertext, given a key. First argument is the English message and the second argument is the key generated from the **generate_key.c** file. The ciphertext is displayed on the console.
3. The **decrypt.c** file decrypts a ciphertext into English language message in lower-case and without any spaces. It generates the messages for all the possible keys, 0 to 25, on the console. The user can then pick the message which appears in English language.


### Random Number generator

The **rand()** function can be used to generate a random number between 0 to RAND_MAX. But it generates the same number for multiple executions of the binary. To randomize this, the **srand()** function is used with **time** as the seed. This gives us different numbers on different executions of the **generate_key.c** binary file.

You dont have to manually write the inputs. Just use piping to supply outputs and inputs to the respective binary files.
