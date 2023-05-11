# Search-for-inducted-claw-in-graph

Claw (labs)
POLSKI
Czy graf nie zawiera indukowanego szponu? Podpowiedź: W teoriografowej nomenklaturze szpon to gwiazda na czterech wierzchołkach.

Wejście
W pierwszej linii liczba kolejnych linii. W kolejnych liniach. Macierz sąsiedztwa zapisana w jednej linii po spacjach (od lewej do prawej oraz z góry na dół).

Wyjście
W kolejnych liniach jedna z poniższych odpowiedzi. Cyfra 0 oznaczająca fałsz. Cyfra 1 oznaczająca prawdę.

Przykład

Wejście

4

6 001110001000110101101011100100001100

6 010001101000010100001010000101100010

4 0100101101000100

4 0100101001010010



Wyjście

0

1

0

1



ENGLISH


Is a graph denoted by the adjacency matrix does not contain a claw?


Input

In the first line: a number of next lines.

In a line (expect the first): a number of vertices and after space an adjacency matrix written from the left to the right and from the top to the bottom.

Output

In the next lines one of the following digits:
0 which mean false,
1 which mean true. 


0 if a graph inlcude a claw, 1 else.

Example

Input

6 001110001000110101101011100100001100

6 010001101000010100001010000101100010

4 0100101101000100

4 0100101001010010


Output

0

1

0

1
