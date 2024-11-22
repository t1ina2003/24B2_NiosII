# NiosII LED Control Project

## Overview
This project implements a simple LED control system using the Intel NiosII soft-core processor on a MAX 10 FPGA. The system demonstrates basic I/O control by creating an LED chasing effect on 8 LEDs.

## Hardware Requirements
- MAX 10 FPGA Development Board (10M08SAM153C8G)
- 8 LEDs connected to pins K11, L11, K12, L15, M12, M14, N14, N15
- Reset button connected to pin J9
- Clock input connected to pin J5

## Project Structure
- `niosii.v` - Top-level Verilog module
- `niosii.qsys` - Platform Designer system file
- `software/Nios_ii/hello_world.c` - Main application code
- `NiosII.qsf` - Quartus project settings

## Features
- 8-bit LED output control
- LED chasing effect with 500ms interval
- System clock: 12MHz input, PLL configured for 50MHz operation
- JTAG UART interface for debugging
- Reset button with interrupt capability

## Software Description
The main program implements a simple LED chasing pattern where:
- LEDs light up sequentially from LED0 to LED7
- Each LED stays on for 500ms before moving to the next
- The pattern repeats continuously

## Building and Running
1. Open the project in Quartus Prime
2. Generate the QSYS system
3. Compile the hardware design
4. Open NiosII Software Build Tools
5. Build the software project
6. Program the FPGA
7. Download and run the software

## Memory Map
- ROM: 0x0000 - 0x2800
- RAM: 0x10000 - 0x16400
- PIO LED: 0x5020
- PIO Reset: 0x5010
- JTAG UART: 0x5030

## License
This project is open source and available under standard Intel FPGA IP license terms.

## Author
Shawn ZS Wang

## Version
0.0.4
