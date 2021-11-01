# Blackgate Penitentiary

Vangelis the Batbear trapped all the members of Joker's Streetgang in a basement.

Your job as a police officer is to transport all gang members to Blackgate Penitentiary.

To facilitate the transport, you should form a row such that the heights of the gang members are in non-decreasing order. For each gang member you should find the minimum and the maximum position where they can be in a valid sorted row and produce a roster with this information. 
## Standard input

Input will start with a line that contains only one integer nnn, the number of crew members that were arrested. On each of the following nnn lines there will be a single word sss and an integer hhh separated by a space character, where sss is the name and hhh is the height of the crew member.
## Standard output

On the output, there will be ggg lines. Each line will contain in alphabetical order and space separated the names of the crew members that have the same height, followed by the minimum and the maximum position where any member of the specific group can be placed. The groups should be printed in increasing order of their members' heights. 
##  Constraints and notes
*       1 ≤ n ≤ 1000 
*       1 ≤ length(si​) ≤ 10
*       120 ≤ hi​ ≤ 250
*       Names are only composed of characters of the Latin alphabet. 

##  Examples

###  Input

6
TheJoker 180
HarleyQuin 160
MrHammer 220
Boody 220
Muggs 180
Paulie 180

###  Output

HarleyQuin 1 1
Muggs Paulie TheJoker 2 4
Boody MrHammer 5 6