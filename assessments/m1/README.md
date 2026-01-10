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
- `make`
- `./stats`

## Unit tests
- I use `assert.h` since its the purest form of C tests IMO
- `make test`
- `./test_stats`