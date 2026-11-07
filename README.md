# Restaurant Order System in C

A simple console-based Restaurant Order and Billing System built using C language. This project allows users to select food items from a menu, enter quantities, apply promo codes for discounts, and generate a formatted cash memo with calculated VAT.

Designed as a fundamental project for Computer Science students to demonstrate core concepts like loops, conditional statements, calculations, and string handling in C.

---

## 🌟 Key Features

- **Interactive Menu:** Simple console menu for easy navigation.
- **Multiple Item Selection:** Add multiple food items with custom quantities in a single session.
- **Promo Code System:** Automatically applies a discount (`50 BDT`) for orders of `100 BDT` or more using code `maruf50`.
- **Dynamic Billing & VAT:** Calculates subtotal, promo discount, 5% VAT, and grand total accurately.
- **Formatted Cash Memo:** Generates a clean and easy-to-read final receipt.

---

## 📋 Menu & Pricing

| Item No. | Food Item | Unit Price (BDT) |
| :--- | :--- | :--- |
| 1 | Burger | 149.99 |
| 2 | Pizza | 349.99 |
| 3 | Pasta | 199.99 |
| 4 | Cold Drinks | 39.99 |

---

## 🛠️ Built With

- **Language:** C (`GCC` compiler standard)
- **Header Files:** `<stdio.h>`, `<string.h>`

---

## 🚀 How to Run the Project

### Execution Steps

1. **Clone the repository:**
   ```bash
   git clone https://github.com/SyntaxMaruf/Restaurant-Order-System.git
   ```

2. **Navigate to the project directory:**
   ```bash
   cd Restaurant-Order-System
   ```

3. **Compile the code:**
   ```bash
   gcc main.c -o main
   ```

4. **Run the program:**
   - On Windows:
     ```bash
     main.exe
     ```
   - On Linux/Mac:
     ```bash
     ./main
     ```

---

## 📜 License

This project is open source and available under the [MIT License](LICENSE).
