.. _goal-of-this-book:

=================
Goal of this book
=================

The goal of this book is to make you a “good” programmer. Despite the fact that a normal high school semester courses only run for about 90 days, you will not become an expert programmer in just one semester. It has been said that it takes around `10,000 hours<https://en.wikipedia.org/wiki/Outliers_(book)>`_ to really become proficient at anything and programming is no different. By the end of the book you will be very much on your way and have a good foundation in the skills you will need. The important thing to remember is that the point is not to teach you a specific programming language, since programming languages come and go and change over time. This is just like real languages. 

Although it is the official language of the Catholic Church, not too many people go around on the streets and speak Latin to their friends. Many years ago, it might have been common but not today. The tools you will learn from this book are good programming techniques. These tools will be useful no matter what programming language you are using. Just like in the real world, you cannot be called a “linguist” if you only know one language. The same thing is true for a programmer; knowing more than one language is essential. The fortunate thing is that if you know one programming language, picking up a second one is much easier. The cornerstone of being a good programmer is to be able to solve problems in a logical and systematic way and hopefully have fun in the process.


Set up your development environment
===================================

First thing is to ensure that you have Python 3 and pip installed. To do this run the following commands:



Next, go to `the Toga page on Github <https://github.com/beeware/toga>`__, and
fork the repository into your own account, and then clone a copy of that
repository onto your computer by clicking on "Clone or Download". If you
have the Github desktop application installed on your computer, you can
select "Open in Desktop"; otherwise, copy the URL provided, and use it
to clone using the command line:

* **Improve the testing API for application writers** The dummy backend exists
  to validate that Toga's internal API works as expected. However, we would like
  it to be a useful resource for *application* authors as well. Testing GUI
  applications is a difficult task; a Dummy backend would potentially allow an
  end user to write an application, and validate behavior by testing the
  properties of the Dummy. Think of it as a GUI mock - but one that is baked into
  Toga as a framework. See if you can write a GUI app of your own, and write
  a test suite that uses the Dummy backend to validate the behavior of that app.
