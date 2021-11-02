# Hotel Wiring

A construction company has decided to let an inexperienced electrician work on power supply wiring for their newest hotel building. After the construction and wiring of the building has been completed, it was identified that the electrician has made a mistake in wiring and it will take a significant amount of time to fix the issue.

The hotel consists of M floors and each floor has N rooms. Power supply to rooms is controlled by one master switch on each floor. By design, power is supplied to all the rooms on a floor if and only if the master switch of that floor is on. However due to the electrician's mistake in wiring, some rooms have incorrect wiring and their power is supplied the other way around. A room with incorrect wiring receives power if and only if the master switch of its floor is off.

There can be both correctly and incorrectly wired rooms on a same floor. For example, consider a floor has 4 rooms with correct wiring and 2 rooms with incorrect wiring. If the master switch of that floor is on, 4 rooms will have power and 2 rooms will not have power. If the master switch is off, then, 4 rooms will not have power and 2 rooms will have power.

The company does not want to spend extra money to fix the wiring mistake. Instead, they decide to first turn on all the master switches, and then turn off exactly K of them to maximize the total number of rooms across all floors that will receive power. 
## Standard input

The first line has a single integer T, the number of test cases.

For each test case, the first line consists of there integers M, N and K where M is the number of floors in the hotel, N is the number of rooms per floor, and K is the exact number of master switches that will be turned off.

For each of the the next M lines, there is a single integer between 0 and N that indicates the number of rooms that are wired correctly on one floor.
## Standard output

For each test case, output in a single line the maximum number of rooms that may receive power. 
##  Constraints and notes
*       1 ≤ T ≤  20
*       1 ≤ K ≤ M ≤10^6 
*       1 ≤ N ≤10^6 

##  Examples

###  Input

2
2 2 1
2
0
2 4 2
0
3

###  Output

4
5


