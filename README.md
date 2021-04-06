# Challenge-2-CC

## Title: Money Transfer Application
## Whether or not the application should accept the request to transfer money between different account depends on three factors:
      1) Whether the user is authorized to use the money transfer
      application.
      2) Whether the OTP input by the user matches.
      3) Whether the user has sufficient money to proceed with the
      transaction.
## State transition diagram

  𝐿
  𝑎𝑐𝑐𝑒𝑝𝑡 = {𝑇𝑇𝑇}

  𝐿
  𝑟𝑒𝑗𝑒𝑐𝑡 = {𝐹, 𝑇𝐹, 𝑇𝑇𝐹}

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
