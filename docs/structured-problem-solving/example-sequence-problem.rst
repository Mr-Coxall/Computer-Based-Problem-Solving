.. _example-sequence-problem:

Example Sequence Problem
========================

The following is an example problem that has been solved using the six step computer based problem solving method mentioned above. The goal is to show you how a sequential program works and also to show how the six steps are used to develop a program from a given problem.

Sequence Programming Example
----------------------------

Here is the problem:
Write a program that will allow the user to enter a subtotal and the program will calculate the final total including tax.

1. Top-Down Chart
The first thing we need to find out is how to calculate tax in your particular province. If the program is to be used anywhere in Canada, it could get really confusing since each province has a different tax rate and some even calculate taxes differently than other provinces. To help simplify the problem, we are just going to do it for Ontario. The Harmonized Sale Tax (HST) in Ontario is currently 13%. The following is a top-down design breaking the problem up into smaller manageable pieces:
.. image:: ./images/tax.png
   :alt: tax problem
   :align: center