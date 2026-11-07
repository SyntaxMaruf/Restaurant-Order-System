# 🍔 Restaurant Order System in C

> Order your favorite food, apply a promo code, and get a clean, ready-to-print bill, all from your terminal.

---

## 👋 Hello, I'm Maruf Billah

I'm a CSE student at **Daffodil International University**. I built this project in my **1st year, 3rd semester** while learning C programming.

I created a **restaurant order and billing system** that works just like a real cashier counter: pick your food, choose how many you want, and get a neat cash memo with discount and VAT already calculated. I wanted to make something simple, useful, and fun to use, and I hope you enjoy it as much as I enjoyed building it.

---

## ✨ Key Features

| | Feature | What it does |
| :-: | :--- | :--- |
| 🍽️ | **Easy Menu** | See all food items and prices clearly at the start. |
| 🛒 | **Order Many Items** | Add as many items as you like, each with its own quantity. |
| ➕ | **Smart Quantity** | Order the same item again and it adds to your total. |
| 🎟️ | **Promo Code** | Use code `maruf50` on orders of 100 BDT or more and get 50 BDT off. |
| 🧾 | **Auto VAT** | 5% VAT is calculated for you. No manual math needed. |
| ✅ | **Confirm Before Billing** | Check your order first, then confirm to get the bill. |
| 🚫 | **Input Safety** | Wrong item number? The program tells you and lets you try again. |
| 📄 | **Clean Cash Memo** | A tidy receipt with item, quantity, price, discount, VAT, and grand total. |

---

## 📋 Menu & Pricing

| No. | Food Item | Price (BDT) |
| :-: | :--- | :-: |
| 1 | 🍔 Burger | 149.99 |
| 2 | 🍕 Pizza | 349.99 |
| 3 | 🍝 Pasta | 199.99 |
| 4 | 🥤 Cold Drinks | 39.99 |
| 5 | 🚪 No more today (finish ordering) | – |

---

## 🧮 How the Bill Is Calculated

```
Sub Total        = sum of (price × quantity) for every item
Discount         = 50 BDT (only with promo code "maruf50")
Discounted Total = Sub Total − Discount
VAT              = 5% of Discounted Total
Grand Total      = Discounted Total + VAT
```

---

## 🚀 Try It Yourself

**1. Clone the repository**
```bash
git clone https://github.com/SyntaxMaruf/Restaurant-Order-System.git
```

**2. Go to the project folder**
```bash
cd Restaurant-Order-System
```

**3. Compile the code**
```bash
gcc main.c -o main
```

**4. Run it**

- Windows:
  ```bash
  main.exe
  ```
- Linux / Mac:
  ```bash
  ./main
  ```

---

## 🛠️ Built With

- **Language:** C
- **Compiler:** GCC
- **Libraries:** `stdio.h`, `string.h`

## 📚 What I Practiced

Loops, conditions, calculations, and string handling in C, all in one real-life project.

---

## 🙌 Support

If you like this project, please give it a ⭐ on GitHub. It really motivates me to keep building!

## 📜 License

This project is open source under the [MIT License](LICENSE).

---

<p align="center">Made with ❤️ by <b>Maruf Billah</b> · CSE, Daffodil International University</p>
