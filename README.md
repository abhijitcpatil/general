This file builds a hash table for text. It indexes words based on the first letter of the word. The hash key is generated based on the ascii integer representation of the first letter of the word. Hence the words are indexed from 0-25 and then all other characters(special and numerical ) get indexed into the 27th row(index = 26) of the table.


Example: Giving the following text as input in a file:
Atticus said to Jem one day, “I’d rather you shot at tin cans in the backyard, but I know you’ll go after birds. Shoot all the blue jays you want, if you can hit ‘em, but remember it’s a sin to kill a mockingbird.” That was the only time I ever heard Atticus say it was a sin to do something, and I asked Miss Maudie about it. “Your father’s right,” she said. “Mockingbirds don’t do one thing except make music for us to enjoy. They don’t eat up people’s gardens, don’t nest in corn cribs, they don’t do one thing but sing their hearts out for us. That’s why it’s a sin to kill a mockingbird.

Output:

Enter the name of the file to be read:
sample

0 --> a   a   about   asked   and   a   Atticus   a   a   all   after   at   Atticus   
1 --> but   but   blue   birds.   but   backyard   
2 --> cribs   corn   can   cans   
3 --> do   don’t   don’t   don’t   do   don’t   do   day   
4 --> eat   enjoy.   except   ever   
5 --> for   for   father’s   
6 --> gardens   go   
7 --> hearts   heard   hit   
8 --> it’s   in   it.   I   it   I   it’s   if   I   in   
9 --> jays   Jem   
10 --> kill   kill   know   
11 --> 
12 --> mockingbird.   music   make   Maudie   Miss   mockingbird.”   
13 --> nest   
14 --> out   one   one   only   one   
15 --> people’s   
16 --> 
17 --> right   remember   rather   
18 --> sin   sing   said.   she   something   sin   say   sin   Shoot   shot   said   
19 --> to   That’s   their   thing   they   They   to   thing   to   time   the   That   to   the   the   tin   to   
20 --> us.   up   us   
21 --> 
22 --> why   was   was   want   
23 --> 
24 --> you   you   you’ll   you   
25 --> 
26 --> “Mockingbirds   ”   “Your   ‘em   “I’d   

