## C BOGOSORT

This is an implementation of the sorting algorithm BOGOSORT, which is a very poor sorting algorithm but I think that it provides an opportunity to optimize the algorithm and possibly to make it at least a little bit more 'usable'.

#### BOGOSORT

BOGOSORT functions by shuffling the list to be sorted and then checking all of the items for sortedness. It does not store any of the correctly sorted items after each attempt, so it is basically gambling that the algorithm will randomly shuffle all items perfectly in a single try.

#### Why C?

Originally, I had used Python which was fine but there were constant issues with the larger input sizes. I believe the issue had to do with memory management and the program slowly taking up too much memory. 

Because of this, I decided to use C, which is the language I know best with the ability to manage your own memory. Additionally, C is quite fast meaning that I should be able to make this implementation both efficient and fast (relatively).

#### Shuffling

C has no 'shuffle' function unlike Python, so I will have to write my own. The Python `shuffle()` uses the 'Fisher-Yates' algorithm, thus so will we. 
