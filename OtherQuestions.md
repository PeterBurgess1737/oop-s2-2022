# Primitive types
#### As discussed in the lectures, pointers are variables that refer to memory locations.
#### One way of obtaining a pointer to a variable is by writing something like:
```cpp
// line 1:
int a, *p;

// line 2:
p = &a;
```

#### Another way of doing this is to write something like:
```cpp
// line 3:
int *t = new int;
```

#### This allocates a memory location to which the variable t will point.

## 1.1
### Write a function that includes line 1-2 or line 3 of the code above and returns the size of the memory location occupied by variable t.
### First, discuss how to write the function in your group then write the function and the matching main function.  
#### The function signature is:
```cpp
int size_of_variable_star_t() ;
```

## 1-2
### What does that number represent?
It represents the number of bytes the variable t takes up in memory.

# Arrays
#### If we want to allocate an array, we could write something like:
```cpp
// line 4:
int *arr = new int[3];
```

## 1.3
### What do you think line 4 will do?
### Write the answer in plain English and be prepared to discuss with your workshop supervisor. 
Line 4 will allocate space for 3 integers and return a pointer the start of this allocated space.

## 1.4
### Write a function that includes the line 4 above and returns the size of the memory location occupied by variable arr.
### What do you notice?
#### The function signature is:
```cpp
int size_of_variable_star_arr();
```

I noticed that it only returned the size of the pointer rather than the size of the whole array.  
The size of the whole array needs to be stored prior as it cannot be found using the pointer.

## 1.5
### Write a function that includes the line 4 above and returns the size of the memory occupied by the entire array.
#### The function signature is:
```cpp
int size_of_array_arr() ;
```

# Dynamically allocated arrays
#### If we want to allocate an array, we could also write something like:
```cpp
// line 5:
int n = 3;

// line 6:
int *arr = new int[n];
```

## 1.6
### In your teams, discuss the advantages of this.
It stores the size of the dynamic array alongside the array, this allows the program to know the length of the array.  
This is otherwise impossible to find out.

# Understanding new
#### The new operator obtains a free memory location from somewhere and allocates it to the variable.
#### Answer the following questions in your groups - use any resources.

## 1.7
### Where do you think the free memory location is located? 
The heap.

## 1.8
### How does the program know which memory location is free?
### Conversely, how does the program and operating system know which memory location is not free?
The os tells it. Otherwise it cant really tell.  
The os tracks memory useage and tells the program if it is requested. 

## 1.9
### Why is it important that 1.7 and 1.8 are known?
### Describe a scenario where not knowing which memory location is not free can have negative consequences.
To prevent rewriting memory which is in use by another program.  
Overwriting the memory of a counter in a for loop can prevent it from ending.

## 1.10
### What do you think happens with the memory location assigned to a variable for the duration of a program?
### Does it automatically get freed when we are not using the variable anymore?
### If this were the case, what would your program need to know?
It lasts the duration of the program.  
No, unless it is a local variable and the function/program terminates/ends.  

# Understanding delete
#### As you saw from 1.10, your program and system would need to know a lot of things for it to be able to free a memory location when it is not needed!
#### This is not the case in C++.
#### Here, you are responsible for freeing up any memory location that you have allocated using new.

## 1.11
### What do you think are the consequences of you NOT freeing up memory locations?
Memory leaks can occur, when memory is allocated and the pointer to it is forgotten the memory can no longer be deallocated and will remain till program termination.

## 1.12
### The way memory locations are freed is by using the delete operator.
### In this activity, we very briefly cover these.
#### Simply put, delete can be used in two ways:
```cpp
delete pointer;  // -- deletes one memory location
delete[] pointer;  // -- deletes a number of  memory locations
```

#### Copy function-1-4.cpp above and modify it to delete arr just before the function returns.
#### Compile and run it and make sure that it works.
#### What happens if you try to reference arr (say by printing one of its elements) after it was deleted?
#### The function signature is:
```cpp
int size_of_variable_star_arr();
```

Referencing arr after deleting doesn't appear to do anything, and the value in arr hasn't changed.  
The memory however can be written over by another program.  