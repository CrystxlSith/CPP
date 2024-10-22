# Exercise 00 - : BraiiiiiiinnnzzzZ

## Overview

This exercise involves creating a simple program to create one Zombie. The goal is to understand dynamic memory allocation and object-oriented programming in C++.

## Files

- `main.cpp`: The entry point of the program.
- `Zombie.cpp`: Implementation of the `Zombie` class.
- `Zombie.hpp`: Declaration of the `Zombie` class.
- `Makefile`: Makefile to compile the program.
- `randomChump.cpp`: Contains the function to create a random zombie and announce it.
- `newZombie.cpp`: Contains the function to create a new zombie.

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
```

# Exercise 01 - Zombie Horde

## Overview

This exercise involves creating a simple program to manage a horde of zombies. The goal is to understand dynamic memory allocation and object-oriented programming in C++.

## Files

- `main.cpp`: The entry point of the program.
- `zombieHorde.cpp`: Contains the function to create a horde of zombies.
- `Zombie.cpp`: Implementation of the `Zombie` class.
- `Zombie.hpp`: Declaration of the `Zombie` class.
- `Makefile`: Makefile to compile the program.

## Classes

### Zombie

The `Zombie` class represents a zombie with a name. It has the following members:

- `Zombie(std::string name)`: Constructor to initialize the zombie with a name.
- `~Zombie()`: Destructor to announce the zombie's destruction.
- `void announce() const`: Method to announce the zombie's name.
- `std::string name`: Name of the zombie.
- `setName(std::string name)`: Method to set the name of the zombie.
- `zombieHorde(int N, std::string name)`: Constructor to create a horde of zombies.

## Functions

### zombieHorde

```cpp
Zombie* zombieHorde(int N, std::string name);
```

