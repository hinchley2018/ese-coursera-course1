# Coursera ESE Course 1
- Author: Jonathon Hinchley

## Environment
- Any Linux based system
- I use raspi 4 for local
- then I have GitHub Actions setup to run Ubuntu latest 
- for embedded code I often use my esp32 or arduino uno 3 depending on what I need

## Dependencies
- gcc

## Running the code
- I departed from the instructions a bit to make a more testable and elegant submission
- main.c has the code to run all the functions implemented in stats.c
- this enables unit tests to be written and guarantee correctness following industry standards
- `make`
- `./main`

## Unit tests
- I use `assert.h` since its the purest form of C tests IMO
- `make test`
- `./test_stats`