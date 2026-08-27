# Maze Escape 🎮

A simple maze navigation game built in C using the `graphics.h` library (Turbo C / BGI graphics), developed as a microproject for **Computer Graphics (313304)** — Diploma in Computer Technology, MSBTE.

## About
Control a ball through a maze using arrow keys. Avoid the walls and reach the exit to win. Built to demonstrate raster graphics, real-time rendering, and collision detection using fundamental C graphics functions.

## Features
- Maze rendered using `line()` drawing functions
- Player-controlled ball using `fillellipse()`
- Real-time collision detection via `getpixel()`
- Win condition on reaching the exit point

## Tech Stack
- **Language:** C
- **Graphics Library:** graphics.h (BGI)
- **Compiler:** Turbo C++ / WinBGIm (for modern systems)

## How to Run
1. Requires a BGI-compatible C compiler (Turbo C++ or WinBGIm setup on modern Windows/GCC).
2. Update the `initgraph()` path in `main()` to point to your BGI driver folder.
3. Compile and run — use arrow keys to move, `ESC` to quit.

## Controls
| Key | Action |
|-----|--------|
| ↑   | Move Up |
| ↓   | Move Down |
| ←   | Move Left |
| →   | Move Right |
| ESC | Exit Game |

## Learning Outcomes
- Raster scan and 2D graphics fundamentals
- Real-time collision detection
- Event-driven programming in C

## Contributors
- Kartik Pandurang Gundla
- Shlok Balaji Punjal
- Onkar Shrikant Ekkaldevi

## Project Guide
R. V. Mundhe Sir — Department of Computer Technology, Government Polytechnic, Solapur

## License
This project is for academic purposes (MSBTE microproject, 2025–2026).
