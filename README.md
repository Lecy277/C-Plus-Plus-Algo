

# DoorProblem-ListSorts 

DoorProblem.cpp is for the door problem below and ListSorts.cpp is just showing how to create and manipulate lists in various ways.

Door Problem:

There are d number of doors and n number of persons.  The first person passes through all the doors he toggles (if door is closed, he opens it and vice versa) every door. The second person passes through every 2nd door (2,4,6,8,…..) and toggle them.  The third person passes through every 3rd door (3,6,9,….) and toggle them.

Challenge: Assume all doors are closed initially, find the number of doors open and closed after the last person is passed through all of them.
Inputs will be number of doors, number of persons and output should be number of doors open and number of doors closed.

Solution:
The way to solve the door problem was to notice that the doors are the progressive square roots.  If the doors ≤ persons then the closed doors are all the progressive square roots.  If the persons ≤ doors then up to the point where the persons = doors all the closed doors are the progressive square roots as stated above and when the doors>persons then the inverse is true the open doors becomes the square roots and the closed doors are every other number.

So I wrote a solution that loops through the square roots and then prints out open or closed based on whether or not doors ≤ persons or persons ≤ doors.

# Progressive square roots:

# 1 Squared = 1^2= 1 × 1 = 1

# 2 Squared = 2^2 = 2 × 2 = 4

# 3 Squared = 3^2 = 3 × 3 = 9

# 4 Squared = 4^2 = 4 × 4 = 16

# 5 Square = 5^2 = 5 × 5 = 25

# 6 Squared = 6^2 = 6 × 6 = 36

So if you had 10 doors and 10 persons.  The open doors would be 3 and the closed doors 7, because 1,4,9 would be the progressive square roots up to 10. If you had 10 persons and 20 doors.  The open doors would be 12 and the closed doors 8 because 1,4,9 would be the progressive square roots up to 10 but then the inverse happens from 11-20 because 16 is the only closed door since its now the square root and the rest of the doors are open.
