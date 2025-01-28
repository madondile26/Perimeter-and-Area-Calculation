# Circle Perimeter and Area Calculator

## Overview

The **Circle Perimeter and Area Calculator** is a simple C++ program that calculates the perimeter and area of a circle based on user input. The program provides an interactive menu for users to select the type of calculation they wish to perform.

## Features

- **User Input:**
  - Allows users to input the radius of the circle.
- **Calculation Options:**
  - Provides two options:
    - Calculate the perimeter of the circle.
    - Calculate the area of the circle.
- **Error Handling:**
  - Displays an exit message if an invalid choice is entered.

## How to Run the Program

1. **Compile the program:**

   ```bash
   g++ Task_B.cpp -o circle_calculator
   ```

2. **Run the executable:**

   ```bash
   ./circle_calculator
   ```

3. **Follow the on-screen instructions:**

   - Enter the radius value.
   - Choose an option to calculate the perimeter or area.

## Sample Input/Output

**Example Input:**

```
Enter the radius value of a circle: 10

Choose your choice of calculation out of the following options:
A: Calculate the Perimeter of the circle.
B: Calculate the Area of the circle.
Please only type A or B then press ENTER
A
```

**Example Output:**

```
The Perimeter of the circle is: 62.8
```

## Formulae Used

- **Perimeter of a Circle:**
  ```
  Perimeter = 2 * π * radius
  ```
- **Area of a Circle:**
  ```
  Area = π * radius^2
  ```

## Technologies Used

- C++
- Standard I/O (`iostream`)
- Mathematical functions (`math.h`)

## Future Improvements

- Add input validation for non-numeric entries.
- Provide additional geometric calculations.
- Allow the user to perform multiple calculations in a single session.

---

Thank you for using the Circle Perimeter and Area Calculator!

