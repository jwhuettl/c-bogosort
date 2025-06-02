## C-BOGOSORT

This is an implementation of the sorting algorithm BOGOSORT, which is a very poor sorting algorithm but I think that it provides an opportunity to optimize the algorithm and possibly to make it at least a little bit more 'usable'.

#### BOGOSORT

BOGOSORT functions by shuffling the list to be sorted and then checking all of the items for sortedness. It does not store any of the correctly sorted items after each attempt, so it is basically gambling that the algorithm will randomly shuffle all items perfectly in a single try.

#### Why C?

Originally, I had used Python which was fine but there were constant issues with the larger input sizes. I believe the issue had to do with memory management and the program slowly taking up too much memory. 

Because of this, I decided to use C, which is the language I know best with the ability to manage your own memory. Additionally, C is quite fast meaning that I should be able to make this implementation both efficient and fast (relatively).

#### Shuffling

C has no built-in function for shuffling an array unlike Python, which has its own built-in. That shuffling function uses the 'Fisher-Yates' algorithm, so I will be implementing the same, which will shuffle the input array in place. 

#### Logging

As of 1.0, the only logging in down via the command line, i.e. the program should print out the input size it finished, as well as how many attempts it took, and if needed, the amount of times counter would have overflowed the limit of a 32-bit integer. 

In the future, as with my original version, there will be a file-based logging system to make the program easier to run in the background or on other hardware. 
