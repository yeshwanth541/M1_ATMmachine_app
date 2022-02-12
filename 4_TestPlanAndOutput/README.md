# Test plan and Output

## High level requirments
 |TD01|HLR|DESCRIPTION|INPUTS|EXPECTED O/P|ACTUAL O/P|
 |---|---|---|---|---|---|
 |TD01|HLR01|Withdraw the amount|Choice|success|success|
 |TDO2|HLR02|Deposit the amount|Choice|success|success|
 |TDO3|HLR03|Balance enquiry of the amount|Choice|success|success|
 |TDO4|HLR04|Net banking |choice|success|success
 
 # Low level requirments
 |TESTID|LLR|Description|INPUT|EXPECTED O/P|ACTUAL O/P|
 |---|---|---|---|---|---|
 |TD01|LLR01_HLR01|Asking for the pin|1234|success|success|
 |TDO2|LLR02_HLR01|Enter amount to withdraw|200|9800|9800|
 |TD03|LLR03_HLR02|Enter amount to deposit|500|10500|10500|
 |TD04|LLR04_HLR03|Enter the pin to check the balance|1234|10000|10000|
 |TD05|LLR05_HLR03|Wish to have another transition|1|success|success|
 |TD06|LLR06_HLR04|To stop the transition|0|terminated|terminated|
 
 
 
 
