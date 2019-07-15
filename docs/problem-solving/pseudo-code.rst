.. _pseudo-code:

Pseudocode
===========

`Pseudocode <https://en.wikipedia.org/wiki/Pseudocode>`_ is a kind of structured English for describing algorithms. It allows the designer to focus on the logic of the algorithm without being distracted by details of language syntax. At the same time, the pseudo code needs to be complete. It describes the entire logic of the algorithm so that implementation becomes a rote mechanical task of translating line by line into source code. 

We will be translating our flow-chart that we create from the previous step into pseudo code to aid us in writing our computer program. In general the vocabulary used in the pseudo code should be the vocabulary of the problem, not written in “computer speak”. A non-computer scientist should be able to read and understand what is going on. The pseudo code is a narrative for someone who knows the problem and is trying to learn how the solution is organized. Several keywords are often used to indicate common input, output, and processing operations.

Input: READ, OBTAIN, GET
Output: PRINT, DISPLAY, SHOW
Input: READ, OBTAIN, GET
Output: PRINT, DISPLAY, SHOW
Compute: COMPUTE, CALCULATE, DETERMINE
Initialize: SET, INIT
Add one: INCREMENT, BUMP

Here is the burger example from above in pseudo code:
GET burger order
IF (want fries = yes) THEN
Order fries
ENDIF
IF (want drink = yes) THEN
Order drink
ENDIF
PAY cashier
GET order