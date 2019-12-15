.. _lists:

Lists
=====

Since in many prgramming languages, when you create an array the size must be set during coding so that the memory can be allocated when it is compiled, there is no way to dynamically change the size of an array during run time. This can be a huge disadvantage. One great example of wanting to have dynamic arrays is the classic video game, Space Invaders. If you imagine that all the lazer you shoot are held in an array, then how big should the array be? You have no idea how fast the user can press the "A" button. You can not tell how many lazers might be on the screen at any given time! If you cannot change the size of the array, what can we do, just making a "huge" array is wasteful and not really practical. Fortunately in many programming languages there is a class called “Lists”.
A list is similar to an array in that it is an ordered grouping of data. You still reference the items in the list using an index. The key difference is that the size of the list can shrink and grow, during run time as needed. As you need to add items, you just use an “.Add” method (or something similar like append). The list class usually has many useful methods for adding, sorting, clearing, finding the length an so on.

Here is an example of creating a list of items:
