# Crafting Wooden Tables

A lot of people are stuck at home due to the unfortunate pandemic this year. They thus resort to building their wonderful home on a deserted island. Rolan is such an deserted islander.

To live a fruitful life on a deserted island, Rolan needs to craft a lot of furniture. One of Rolan's favorite, is the wooden table. Crafting a wooden table requires C pieces of wood, which is a resource obtainable by chopping trees on the island. Rolan has a pocket of limited size that can hold the wood and the crafted wooden tables. Her pocket has N slots, and each slot can hold either a single wooden table, or a pile of wood with at most P pieces of wood.

Rolan has W pieces of wood at the beginning and can distribute them into the N pocket slots arbitrarily. To craft a wooden table, Rolan takes C pieces of wood from any of the pocket slots, removing them from those slots. If any pile of wood becomes empty, the pocket slot becomes free. If there is no free slot in Rolan's pocket, the crafting stops. Otherwise, the crafted wooden table will be placed in a free pocket slot. Rolan repeats the crafting until no more wooden tables can be crafted.

How many wooden tables will Rolan eventually have?
## Standard input

The input has four integers C,N,P,W on a single line.
## Standard output

Output a single integer, the number of wooden tables that Rolan can craft.
##  Constraints and notes
*       1≤C,N,P,W≤10^15 
*       W≤N⋅P

##  Examples

###  Input

4 3 3 8

###  Output

2


