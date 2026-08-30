# Scientific Calculator (C++)

A console-based scientific calculator built in C++ that supports basic arithmetic, trigonometric, logarithmic, and memory operations through a simple menu-driven interface.

## Features

- **Basic operations:** addition, subtraction, multiplication, division, modulo
- **Scientific functions:** square, cube, power, square root, factorial, natural log
- **Trigonometry:** sin, cos, tan (input in degrees)
- **Memory functions:** M+ (store), MR (recall), MC (clear)
- **Chained calculations:** reuse the previous result as the next `num1` automatically
- **Basic error handling:** division by zero, modulo by zero, negative square roots, invalid log/factorial input

## Menu Reference

| Key | Operation      | Key | Operation |
|-----|----------------|-----|-----------|
| `+` | Add            | `s` | sin       |
| `-` | Subtract       | `c` | cos       |
| `*` | Multiply       | `t` | tan       |
| `/` | Divide         | `r` | sqrt      |
| `m` | Mod            | `!` | Factorial |
| `L` | Log (natural)  | `A` | M+ (store)|
| `S` | Square         | `R` | MR (recall)|
| `C` | Cube           | `Z` | MC (clear)|
| `p` | Power          | `k` | Clear result|
| `.` | Exit           |     |           |

## Build & Run

Requires a C++ compiler (e.g. `g++`).

```bash
g++ -o calculator calculator.cpp -lm
./calculator
```

On Windows (MinGW):

```bash
g++ -o calculator.exe calculator.cpp -lm
calculator.exe
```

## Example Usage

```
Enter operation: +
Enter num1: 5
Enter num2: 3

========= RESULT =========
Answer: 8
==========================
```

## Notes / Known Limitations

- Trigonometric input is expected in **degrees**, not radians.
- Factorial is computed as a `double`, so very large inputs (roughly `n > 170`) will overflow to `inf` rather than producing an error.
- Invalid (non-numeric) input at a number prompt can cause repeated invalid prompts; type only numeric values when asked for `num1`/`num2`.

## Author
Shabd Gaur
Built as a fun project.

## License

This project is open source and available under the [MIT License](LICENSE).
