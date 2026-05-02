# Bank Management System in C

A simple console-based Bank Management System written in C.
This project allows both admin and customers to perform various banking operations such as account creation, transactions, and loan management.

Data is stored using file handling to ensure persistence.


## Features

### Admin
- Create account
- View all accounts
- Delete account
- Update account details
- Search account
- View total balance
- Process loan requests
- Freeze / Unfreeze accounts
- Add interest (5%)

### Customer
- View account balance
- Deposit money
- Withdraw money
- Transfer money
- Apply for loan
- Check loan status

 ## Technologies Used
- C Programming Language
- File Handling (bank.txt)

## Project Structure

- main.c → Entry point
- admin.c → Admin operations
- customer.c → Customer operations
- create.c → Create account
- delete.c → Delete account
- update.c → Update account
- deposit.c → Deposit money
- withdraw.c → Withdraw money
- transfer.c → Transfer money
- loan.c → Loan processing
- data.c / data.h → Data handling
- bank.txt → Data storage file

## How to Run

1. Compile the program:
   gcc *.c -o bank

2. Run the program:
   ./bank

## Default Admin Login
ID: admin  
Password: 1234

## Notes

- Minimum balance required: 1500
- Account must be active for login
- Data is stored in a text file (bank.txt)

## Future Improvements

- Add GUI interface
- Improve security (password encryption)
- Add transaction history display
- Use database instead of file storage

## Author
MADHAV GOEL
