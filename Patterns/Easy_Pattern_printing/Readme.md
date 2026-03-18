# 🔷 Pattern Printing Problems — DSA Practice

A collection of classic **pattern printing programs** solved in code, organized for clarity and learning. These problems are commonly asked in technical interviews to test your understanding of **nested loops**, **logic building**, and **output formatting**.

> 📅 Started: March 18, 2026  
> 🔗 Reference: [GeeksforGeeks — Pattern Printing Problems](https://www.geeksforgeeks.org/dsa/pattern-printing-problems/)

---

## 📌 Why Pattern Printing?

Pattern problems are one of the best ways to strengthen your fundamentals:

- **Loop control** — mastering `for`, `while`, and nested loops
- **Conditional logic** — deciding when to print a character vs. a space
- **Row-column thinking** — visualizing 2D output from 1D code
- **Interview readiness** — frequently tested in beginner and mid-level rounds

If you're just starting out with DSA, patterns are a perfect warm-up before moving to arrays, strings, or recursion.

---

## ✅ Problems Solved

> All problems are solved and available in this repository. Each section links to the corresponding GeeksforGeeks problem page for reference and deeper reading.

| # | Pattern | GFG Link |
|---|---------|----------|
| 1 | Right Half Pyramid | [View Problem](https://www.geeksforgeeks.org/dsa/pattern-printing-problems/) |
| 2 | Inverted Right Half Pyramid | [View Problem](https://www.geeksforgeeks.org/dsa/pattern-printing-problems/) |
| 3 | Inverted Left Half Pyramid | [View Problem](https://www.geeksforgeeks.org/dsa/pattern-printing-problems/) |
| 4 | Left Half Pyramid | [View Problem](https://www.geeksforgeeks.org/dsa/pattern-printing-problems/) |
| 5 | Full Pyramid | [View Problem](https://www.geeksforgeeks.org/dsa/pattern-printing-problems/) |
| 6 | Inverted Full Pyramid | [View Problem](https://www.geeksforgeeks.org/dsa/pattern-printing-problems/) |
| 7 | Half Diamond | [View Problem](https://www.geeksforgeeks.org/dsa/pattern-printing-problems/) |
| 8 | Star Diamond | [View Problem](https://www.geeksforgeeks.org/dsa/pattern-printing-problems/) |
| 9 | Alphabet "A" using Stars | [View Problem](https://www.geeksforgeeks.org/dsa/pattern-printing-problems/) |
| 10 | Solid Square | [View Problem](https://www.geeksforgeeks.org/dsa/pattern-printing-problems/) |
| 11 | Hollow Rectangle / Square | [View Problem](https://www.geeksforgeeks.org/dsa/pattern-printing-problems/) |
| 12 | Star Staircase | [View Problem](https://www.geeksforgeeks.org/dsa/pattern-printing-problems/) |

---

## 🧠 How to Approach Any Pattern Problem

Before writing a single line of code, follow this thought process:

### Step 1 — Observe the pattern
Count the rows and columns. Look at what changes per row (number of stars, spaces, characters).

### Step 2 — Identify the structure
Most patterns follow one of these structures:
- **Triangle / Pyramid** — stars increase or decrease per row
- **Diamond** — pyramid + inverted pyramid combined
- **Hollow shape** — only borders are printed, inside is spaces

### Step 3 — Plan your loops
```
Outer loop  →  controls rows (i = 1 to n)
Inner loop  →  controls columns per row (j = 1 to some function of i)
```

### Step 4 — Handle spaces
Spaces are just as important as stars. If a pattern is center-aligned, you'll need a loop for leading spaces before the stars.

### Step 5 — Code and verify
Run your code for small inputs (n = 3 or 4) and compare visually before testing larger inputs.

---

## 📂 Repository Structure

```
pattern-printing/
│
├── README.md
│
├── pyramids/
│   ├── right_half_pyramid.cpp
│   ├── inverted_right_half_pyramid.cpp
│   ├── left_half_pyramid.cpp
│   ├── inverted_left_half_pyramid.cpp
│   ├── full_pyramid.cpp
│   └── inverted_full_pyramid.cpp
│
├── diamonds/
│   ├── half_diamond.cpp
│   └── star_diamond.cpp
│
├── shapes/
│   ├── solid_square.cpp
│   ├── hollow_rectangle.cpp
│   └── staircase.cpp
│
└── special/
    └── alphabet_A.cpp
```

> 📝 *Adjust folder/file names to match your actual language and structure.*

---

## 💡 Quick Cheat Sheet

| Pattern Type | Key Idea |
|---|---|
| Right Half Pyramid | `j <= i` stars per row |
| Left Half Pyramid | leading spaces + stars |
| Full Pyramid | spaces + stars + spaces, centered |
| Inverted versions | start from `n`, count down |
| Diamond | pyramid (rows 1 to n) + inverted pyramid (rows n-1 to 1) |
| Hollow shapes | print `*` only on borders, spaces inside |
| Staircase | increasing stars with each row, left-aligned |

---

## 🚀 Getting Started

Clone this repo and run any file locally:

```bash
git clone https://github.com/your-username/pattern-printing.git
cd pattern-printing
```

**For C++:**
```bash
g++ pyramids/right_half_pyramid.cpp -o output && ./output
```

**For Python:**
```bash
python pyramids/right_half_pyramid.py
```

---

## 📚 Resources

- [GeeksforGeeks — All Pattern Problems](https://www.geeksforgeeks.org/dsa/pattern-printing-problems/)
- [GFG — Loops in C++](https://www.geeksforgeeks.org/loops-in-c-and-cpp/)
- [GFG — Nested Loops](https://www.geeksforgeeks.org/nested-loops-in-c-with-examples-2/)

---

## 🙌 Contributing

Found a bug or have a cleaner solution? Feel free to open a pull request or raise an issue. All improvements are welcome!

---

## 📄 License

This project is open-source and available under the [MIT License](LICENSE).