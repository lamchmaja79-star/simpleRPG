# ⚔️ Simple RPG

A small **C++17 object-oriented RPG project** demonstrating inheritance, polymorphism, multiple inheritance, RTTI, operator overloading, and CMake.

## ✨ Features

* 🧙 Character and creature class hierarchy
* 🧬 Inheritance and virtual inheritance
* 🔀 Multiple inheritance with `Paladin` and `Lich`
* 🧠 Runtime polymorphism and RTTI
* 🏆 Entity scoring system
* 🔎 Entity searching and type counting
* 🧩 Operator overloading (`+=`, `[]`, `()`, `<<`)
* 🧹 Dynamic memory management
* ⚙️ CMake build system

## 🛠️ Tech Stack

* **C++17**
* **CMake**
* **STL**
* **GCC / Clang**

## 📂 Structure

```text
simpleRPG/
├── include/    # Class declarations
├── src/        # Implementations
├── Main.cpp    # Application entry point
└── CMakeLists.txt
```

## 🚀 Build & Run

```bash
mkdir build
cd build
cmake ..
cmake --build .
./Parser
```

The program creates an adventure containing different RPG entities and demonstrates their properties, actions, scores, and runtime type information.

## 🧠 Main Concepts

The project focuses on practical C++ OOP concepts:

* Abstract classes
* Polymorphism
* Multiple & virtual inheritance
* `dynamic_cast` and `typeid`
* Operator overloading
* STL containers
* Manual resource management

> This is an educational OOP project rather than a complete RPG game. It currently does not include graphics, combat, inventory, quests, or save systems.
