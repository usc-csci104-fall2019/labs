#ifndef SEARCH_H
#define SEARCH_H

#include <string>
#include <vector>

/*
Seardching an element in a list is a critical aspect of software development.
Performing a search quickly is essential for a good user experieence. One such
way to perform the search is going through the array from start to finish. But, 
if your array is sorted we can do this faster, with a method called Binary Search.

Here is a simulation for Binary Search v/s Linear Serach, to help you visualize: 
https://www.mathwarehouse.com/programming/gifs/binary-vs-linear-search.php

Binary Search can only be conducted on a sorted array, where you start in 
the middle of the array and compare the element with the one you are looking for. 
If they are equal, then you are done. If they are not equal compare, then
you repeat the search in left of the middle array if element you are looking 
for is less than middle else, search the right. This can be recurive or iterative.
You wil need to keep track of your left bound and right bound. 

Given a SORTED array, determine whether or not it contains num.
If it is, return the true, if not return false.


arr 	- Array To Search
n 		- Number of Elements In Array
num 	- Number to look for
*/

bool contains (int arr[], int n, int num);

#endif