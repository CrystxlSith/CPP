# Exercise 01 - Zombie Horde

## Overview

This exercise involves creating a simple program to manage a horde of zombies. The goal is to understand dynamic memory allocation and object-oriented programming in C++.

## Files

- `main.cpp`: The entry point of the program.
- `newZombie.cpp`: Contains the function to create a new zombie.
- `randomChump.cpp`: Contains the function to create a random zombie and announce it.
- `Zombie.cpp`: Implementation of the `Zombie` class.
- `Zombie.hpp`: Declaration of the `Zombie` class.
- `Makefile`: Makefile to compile the program.

## Classes

### Zombie

The `Zombie` class represents a zombie with a name. It has the following members:

- `Zombie(std::string name)`: Constructor to initialize the zombie with a name.
- `~Zombie()`: Destructor to announce the zombie's destruction.
- `void announce() const`: Method to announce the zombie's name.

## Functions

### newZombie

```cpp
Zombie* newZombie(std::string name);