# so_long

A simple 2D game built using the MinilibX graphics library. The player needs to collect all collectibles and reach the exit while avoiding obstacles.

## Description

so_long is a basic 2D game where the player navigates through a map to collect all items before reaching the exit. The game features:

- Simple controls (WASD movement)
- Collectible items
- Exit point
- Score tracking
- Basic sprite animations


## Map Components

The game maps use the following characters:
- `1`: Wall
- `0`: Empty space
- `P`: Player starting position
- `C`: Collectible
- `E`: Exit


## Controls

- `W`: Move up
- `A`: Move left
- `S`: Move down
- `D`: Move right
- `ESC`: Exit game

## Requirements

- MinilibX library
- macOS environment
- C compiler

## Installation

1. Clone the repository:
```bash
git clone https://github.com/your-username/so_long.git
```

2. Navigate to the project directory:
```bash
cd so_long
```

3. Compile the game:
```bash
make
```

4. Run the game with a map:
```bash
./so_long maps/map.ber
```


## Map Format

Maps must be in `.ber` format and follow these rules:
- Must be rectangular
- Must be surrounded by walls ('1')
- Must contain exactly one exit ('E')
- Must contain exactly one starting position ('P')
- Must contain at least one collectible ('C')
- Must be possible to reach all collectibles and the exit

Example map:
```
111111111111111
10P0000E000C001
111111111111111
```
