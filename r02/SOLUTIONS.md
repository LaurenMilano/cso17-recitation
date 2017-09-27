Tutorial 2
==========

## Exercise 1 
1. func1 changes the input value because the argument is a pointer.
2. func2 doesn't change the input value because the argument is an int variable.
3. func3 doesn't change the input value because the argument is an int variable.
4. func4 changes the input value because the argument is a pointer and it passes the pointer to func4\_pre.
5. func5 doesn't change the input value. Although the argument of func5 is a pointer, it passes the dereferenced value of that pointer to func5\_pre.
6. func6 changes the input value because the argument is a pointer.
7. func7 doesn't change the input value because the argument is an int variable.

So we only consider about func1, func4 and func6. Then we can get the formula, **(answer / 2 - 1) / 3 = 3360153**. The answer is 20160920. However, 20160920 to 20160925 can all be the answer. The reason is **/ 2** and **/ 3** are integer divisions (note that **20160920 / 2 == 20160921 / 2**).

## Exercise 2
1. p1 - p2 == -28
2. (unsigned)(&array[i]) - (unsigned)(&array[j]) == -28
3. address of array[i] - address of array[j] == -28
4. (address of array + i * 4) - (address of array + j * 4) == -28
5. i - j == -7

Any values that satify **i - j == 7** are correct. But the best answer should be **(0, 7)** because it is within the array boundary.

## Exercise 3
1. 1069547520 == **0b00111111110000000000000000000000**
2. **0b00111111110000000000000000000000** is 1.5 when viewing it as a floating point value.

The answer is **1.5**.

## Exercise 4
1. 39661568 == **0b00000010010111010011000000000000**
2. The inverse function of (<<6) is (>>6). **0b00000010010111010011000000000000** >> 6 => **0b??????00000010010111010011000000**.
3. The inverse function of (>>5) is (<<5).  **0b??????00000010010111010011000000** << 5 => **0b?00000010010111010011000000?????**.

Any number which has the binary representation, 0b?00000010010111010011000000?????, can be the answer.
