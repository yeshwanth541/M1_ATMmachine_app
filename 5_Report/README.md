# ATM MACHINE
## Introduction:
This is a web application software for making a specialized computer that makes it convenient to manage a bank account holder's funds. It allows a person to check account balances, withdraw or deposit money, print a statement of account activities ortransactions, and even purchase stamps.

## Features:
In my Project there are some features which will be easy to the handler to store the information in their application

Available transactions

Withdrawl

Deposit

Balance enquiry

## Swot analysis:

### Strengths:

Access to hard Cash Anywhere at Anytime.

ATM Machines offer Financial Inclusion.

ATM Machines offer wide range of services.

ATM machines are Cheaper to Maintain.

ATM machines Serve an Important Function in times of Crisis.

### Weakness

If you get a problem with your bank card, or forget your pin, you can’t withdraw your money

Cash withdrawal limits on ATM Machines

If an ATM card is lost, it can be misused

Banks have limited ATM Machine in rural areas

# 4W's & 1H
WHAT : Automated teller machine

WHY : To make transactions with respect to bank

WHERE: In the application of software

HOW : By selecting the neccesary option we can enter the input of an transaction and store the information in an application.

# Requirements
 * High level requirements
 
  Select anyone to continue
 |HLR(ID)|DESCRIPTION|
 |---|---|
 |HLR01|Withdraw of the amount|
 |HLR02|Deposit of the amount|
 |HLR03|Balance enquiry of the amount|
 |HLR04|Net banking|

     
 * Low level requirments
 
   Enter the following information to machine
   
  |LLR(ID)|DESCRIPTION|
  |---|---|
  |LLR01_HLR_01|Asking for the pin|
  |LLR02_HLR_01|Enter the following amount to withdraw|
  |LLR03_HLR_01|Choose the transaction|
  |LLR04_HLR_02|Enter the following amount to deposit|
  |LLR05_HLR_03|Enter the pin for the balance check|
  
  # Behaviour and Structural diagrams
  ### Use_case diagram
![atm1](https://user-images.githubusercontent.com/62649824/153695859-fd36d6f3-0abd-4ba4-8155-a412ee1d8b55.png)

### Low Level Behavioural Diagram
![Highleveldesign](https://user-images.githubusercontent.com/62649824/153637880-d856bede-41f0-43b6-8a6f-28ad29d33bec.jpg)

### Structural Diagram
![dig](https://user-images.githubusercontent.com/62649824/153696092-64c06797-4343-4660-ba5d-0f79641b4bc3.jpg)

# Tested output
### High level requirments
 |TD01|HLR|DESCRIPTION|INPUTS|EXPECTED O/P|ACTUAL O/P|
 |---|---|---|---|---|---|
 |TD01|HLR01|Withdraw the amount|Choice|success|success|
 |TDO2|HLR02|Deposit the amount|Choice|success|success|
 |TDO3|HLR03|Balance enquiry of the amount|Choice|success|success|
 |TDO4|HLR04|Net banking |choice|success|success
 
 ### Low level requirments
 |TESTID|LLR|Description|INPUT|EXPECTED O/P|ACTUAL O/P|
 |---|---|---|---|---|---|
 |TD01|LLR01_HLR01|Asking for the pin|1234|success|success|
 |TDO2|LLR02_HLR01|Enter amount to withdraw|200|9800|9800|
 |TD03|LLR03_HLR02|Enter amount to deposit|500|10500|10500|
 |TD04|LLR04_HLR03|Enter the pin to check the balance|1234|10000|10000|
 |TD05|LLR05_HLR03|Wish to have another transition|1|success|success|
 |TD06|LLR06_HLR04|To stop the transition|0|terminated|terminated|
 
 # Output
 
 ![Screenshot (64)](https://user-images.githubusercontent.com/62649824/153708404-01bed5ca-fec9-4bc9-b079-faf4811e8916.png)
![Screenshot (65)](https://user-images.githubusercontent.com/62649824/153708411-774c9a19-9497-4c8a-bbc5-040b8b96056a.png)
![Screenshot (69)](https://user-images.githubusercontent.com/62649824/153708429-720382f5-887c-4546-9d49-9704b6ff62e6.png)
![Screenshot (70)](https://user-images.githubusercontent.com/62649824/153708433-c62a85e4-ba27-41f3-bf74-f39c61270872.png)
![Screenshot (71)](https://user-images.githubusercontent.com/62649824/153708436-2380cfe3-9114-42a4-aae8-06b29a5b8990.png)
 


