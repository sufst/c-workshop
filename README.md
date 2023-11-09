# C Workshop

This workshop is designed to help you learn C. The aim is to make it as advanced or simple as you want.

### Rules

These are to try and get you used to writing C for embedded devices. 

- No using `int`. Use fixed-width types, e.g. `uint16_t`.
- No using `malloc`

## Tasks

1. In the `src` folder, make a file called `workshop.c`. Make this file print `Hello World!` to the command line.
2. Edit the `main` method to read a string from the command line and then print it. This can either be passed as a command line argument or taken as input within the function.
3. Create a header file with a `struct` for a person. This should have fields for name and age.
4. In your `main` method, use user input to populate an instance of your `struct`.
5. Make a function that takes a pointer to a `struct` and prints each field to the command line
6. Using the GPIO library (`gpio.h`), create a GPIO pin then continuously take a user value and write it to the pin.
7. Create another GPIO pin and run your function which prints a `struct` to print the GPIO pin `struct` whenever the value of the pin is above 128.
8. If you get this far, look at multithreading (`pthreads`) and synchronisation. Run two functions at once, one which adds `struct`s to an array (a queue), then one which reads from the counter and prints the `struct` to the terminal. (Hint: this is a producer-consumer synchronisation problem.)


## Compiling

This project uses CMake to generate the build file. This is a common way to make building software easier.

1. Make a folder called `build` and change to it
2. Run `cmake ..`
3. Run `make -s`

You will need a C compiler installed (probably either `gcc` or `clang`). This should be easy on Linux or Mac. On Windows, please use WSL otherwise it will be a pain.