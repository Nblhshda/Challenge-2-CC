# Challenge-2-CC
### Nor Nabilah Shuhada Binti Mohd Kamal  1817510
## Title: Money Transfer Application
## Whether or not the application should accept the request to transfer money between different account depends on three factors:
      1) Whether the user is authorized to use the money transfer
      application.
      2) Whether the OTP input by the user matches.
      3) Whether the user has sufficient money to proceed with the
      transaction.
## State transition diagram

  πΏ
  ππππππ‘ = {πππ}

  πΏ
  ππππππ‘ = {πΉ, ππΉ, πππΉ}

![alt text](https://github.com/Nblhshda/Challenge-2-CC/blob/main/cc1.PNG?raw=true)

## State transition table

| Condition                      |             |              |              |                 | 
|--------------------------------|-------------|--------------|--------------|-----------------|
| 1. Authorized user?            | F           | T            | T            | T               | 
| 2. OTP match?                  | -           | F            | T            | T               | 
| 3. Sufficient money available? | -           | -            | F            | T               |
| Action                         |             |              |              |                 |
| 1. Accept                      |             |              |              | /               |
| 2. Reject                      | /           | /            | /            |                 | 

## Based on the finite automata, a c++ program is build to design a Deterministic Finite Automata (DFA) that accept the language L={t^N | Nβ₯1}.
### The regular language L is {t, tt, ttt, ttttβ¦, }.
### If the string input by the user follows the given language L, then the program will print βAcceptedβ. Otherwise, the program will print βRejectedβ.

## Examples:

      Input: S = βttfβ
      Output: Rejected
      Explanation: String must only contain t.

      Input: S = βttβ
      Output: Accepted

