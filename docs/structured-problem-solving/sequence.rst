.. _sequence:

Sequence
========

A loop is a sequence of instructions that are repeated until a certain boolean condition is true (or false). When looping, the program must have an instruction to allow the loop to stop. If the instruction is missing (or present but never triggered), the repetitions will go on forever. This is known as an infinite loop. If you accidentally create an infinite loop, you will have logical error in you program. The program will compile but when you run it, it will most likely give you an overflow error. The condition that must be triggered can either be at the beginning or the end of the repletion structure. There are several repletion structures, just like there were several different conditional structures, each for a different purpose.

.. toctree::
   :maxdepth: 1
   :glob:

   While Loop <while-loop>
   Do…While Loop <do-while-loop>
   For Loop <for-loop>
   Break Statement <break-statement>
   Continue Statement <continue-statement>
   Nested Loops <nested-loops>
   Loops and If Statements <loops-and-if-statements>