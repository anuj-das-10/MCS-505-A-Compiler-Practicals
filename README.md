# MCS-505-(A): Principles of Compiler Design

1. Write a program to implement Lexical Analyzer.
-   [Solution](lexical-analyzer/lexical_analyzer.c)✅

<br>

2. Write a program to implement Top-Down Parser for a given grammar.

```
[Denote ε as @ in program]

E -> TE'
E' -> +TE' | ε
T -> FT'
T' -> *FT' | ε
F -> (E) | id
```
-  [Solution](top-down-parser/LL1_Parser.c)✅

<br>

3. Write a program to implement Bottom-Up Parser.
-  [Solution](bottom-up-parser/LR-Parser.c)✅

<br>

4. Write a program to recognize strings under the following regular expression:

```
a*,     abb,     a*b+
```
-  [Solution](regular-expression/regular_expression.c)✅

<br>

5. Write a program to use register variable as counter of loop.
-  [Solution](register-variables-as-counter-in-loop/register_variable_as_counter.c)✅

<br>

6. Write a program to demonstrate optimization in loops.
-  [Optimized Solution](optimization-in-loop/loop_optimization_(optimized).c)✅
-  [Unoptimized Solution](optimization-in-loop/loop_optimization_(unoptimized).c)✅

<br>

7. Write a program to demonstrate how to avoid calculations in loop.
-  [Optimized Solution](avoid-calculations-in-loop/avoid_calculations_(optimized).c)✅
-  [Unoptimized Solution](avoid-calculations-in-loop/avoid_calculations_(unoptimized).c)✅

<br>

8. Write a program to demonstrate how to avoid pointer dereferencing in loop.
-  [Optimized Solution](avoid-pointer-dereferencing-in-loop/avoid_pointer_dereferencing_(optimized).c)✅
-  [Unoptimized Solution](avoid-pointer-dereferencing-in-loop/avoid_pointer_dereferencing_(unoptimized).c)✅