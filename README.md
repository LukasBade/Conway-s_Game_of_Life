# Conway-s_Game_of_Life
University project following the rules of Conway’s Game of Life (https://de.wikipedia.org/wiki/Conways_Spiel_des_Lebens). The first set of code was extracted from the existing repository "C_Labor".




Vorgehensweise/Notizen zur Game of Life Aufgabe

RULES:

 Eine lebende Zelle lebt auch in der Folgegeneration, wenn sie entweder zwei oder drei lebende Nachbarn hat.

 Eine tote Zelle „wird geboren“ (lebt in der Folgegeneration), wenn sie genau drei lebende Nachbarn hat.



GRID:
1. 
20x20 -> Matrix mit 0 und 1 
0 = tote Zelle
1 = lebende Zelle

zwei-dimensionale Matrix: ARRAY[20] [20]
char oder int als datentyp, da es nur characters sind.


2. 
Lineare Berechnung mit Koordinaten?
-> Bisschen umständlich

