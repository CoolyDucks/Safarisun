# 🌞 Safarisun by CoolyDucks 🐬🔥

**Safarisun** is an innovative programming language designed to run on **any device**, combining **mathematics, physics, science, file management, games, and programming challenges** into a **single, simple, and elegant syntax**.  

Safarisun is for developers, learners, and educators who want a **universal language** capable of everything: building games, physics simulations, scientific computations, and file manipulations — all **without installing extra libraries**.  

---

## ⚡ Core Philosophy

- **Simplicity first**: Easy to learn, easy to read, but **powerful enough for serious work**.  
- **Science-friendly**: Built-in support for advanced math (`sin`, `cos`, `tan`, `pow`, `sqrt`) and scientific operations.  
- **Hardware-aware**: Access system time, UTC, and basic device information effortlessly.  
- **Universal**: Runs anywhere you can compile C — Linux, Termux, Windows (with GCC).  
- **Fun & Creative**: Create mini-games, ASCII art, puzzles, and interactive programs.  

---

## 📝 Full Example Code

Here’s how you can use **Print, Time, Math & Science, and File commands** together in Safarisun:

```c
// === Printing / Output ===
say("Hello World");     // Simple print
say:-$ANYTHING$;        // Variable output
say.right(Dog)$;        // Directional text
say.right2(wolf)$;      // Chained output

// === Time & Date ===
use time.device;        // Access local and UTC time
say("Local Time:")(tag=leftByte)
    :leftbyte
time.device(print.animtion:
:🕕 , 🕖 , 🕘 , 🕤 , 🕥 , 🕟 , 🕞 , 🕜 
      :time.device
(UTC.device)
);

// === Math & Science ===
math.sin(3.14159/2);   // sin(π/2)
math.cos(0);           // cos(0)
math.tan(3.14159/4);   // tan(π/4)
math.sqrt(16);         // 4
math.pow(2,8);         // 256

// === File & Directory Management ===
mkdir MyFolder;                     // Create a folder
use file.device;                    
file.device.create("example.txt");  
file.device.write("example.txt", "Hello World!");  
file.device.read("example.txt");
