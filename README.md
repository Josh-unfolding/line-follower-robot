# 🚗 Line Follower Robot  
*A beginner-friendly hands-on robotics project*

---

## 📌 Project Overview

This project is a **basic Line Follower Robot** built as a self-learning, hands-on robotics project during my initial days in college. The robot follows a black line on a lighter surface using **IR sensors**, an **Arduino Uno**, and a **motor driver**.

The goal of this project was **not competition-level performance**, but to deeply understand:

- How sensors work  
- How a microcontroller processes inputs  
- How motors are controlled using logic  
- How real hardware debugging happens  

This project became my **first real robotics build** and played a major role in shaping my confidence in robotics and embedded systems.

---

## 🎯 Motivation & Background

I was always passionate about robotics and wanted to work on **hands-on projects**, not just theory. After joining college, I found a group of like-minded friends who shared the same interest.

We formed a team of **15 members**, and since I already had slightly more exposure and obsession towards robotics, I naturally took the role of **team lead**.

We chose a Line Follower Robot because:

- It is a fundamental robotics project  
- It involves sensors, motors, logic, and debugging  
- I had only seen such robots in videos before, never built one  
- It was perfect for learning Arduino and robotics from scratch  

The project was done purely for **self-learning and curiosity**.

---

## 👥 Team & My Role

- **Team size:** 15 members  
- **Experience level:** Everyone was a beginner  
- **My role:** Team Lead & Main Developer  

### What I did as a leader:
- First learned Arduino basics myself  
- Taught the team from **absolute zero**  
- Explained:
  - What a breadboard is  
  - How wiring works  
  - What power, ground, and signal mean  
  - How sensors and motors actually behave  
- Wrote and debugged the code  
- Coordinated testing and troubleshooting  

One challenge was that the team included students from different states, so communication had to be done mostly in **English**, which pushed me to improve my technical communication skills.

---

## 🧠 Initial Understanding (Before Building)

At the start:

- I thought the robot would be very easy  
- Expected to finish in **1–2 days** (maximum 3)  
- Assumed IR sensors would behave intuitively  
- Did not fully understand:
  - Motor driver logic  
  - Power requirements  
  - Datasheets  
  - Common ground concept  

In reality, the project took **4 full days** and taught us far more than expected.

---

## 🛠️ Components & Materials Used

### Hardware
- Arduino Uno  
- L293D Motor Driver Module  
- 2 × IR Sensor Modules  
- 2 × DC Gear Motors  
- 2 × Wheels  
- Chassis  
- Caster Wheel  
- Breadboard  
- Male-to-male jumper wires  
- Battery / Power supply  

### Software & Tools
- Arduino IDE  
- Serial Monitor  
- ChatGPT & online resources  
- YouTube tutorials  
- Datasheets  
- Multimeter (for debugging voltage issues)  

---

## ⚙️ Build Process (How We Actually Built It)

We followed a **step-by-step, level-wise approach**, not everything at once:

1. Learned Arduino IDE basics  
2. Tested IR sensors independently  
   - Even tested without Arduino initially  
3. Tested motors separately  
4. Tested motor driver independently  
5. Learned wiring and pin connections  
6. Wrote small test codes for each component  
7. Integrated all components together  
8. Modified and rewrote the final code multiple times  
9. Tuned sensors and tested on a real surface  

This incremental testing approach helped us isolate problems instead of guessing blindly.

---

## ❌ Major Mistakes & How We Fixed Them

### 1. Wrong IR Sensor Assumption
- Initially thought:
  - Black = 0  
  - White = 1  
- Reality:
  - **Black = 1**  
  - **White = 0**  
- Learned by printing values on the Serial Monitor  

---

### 2. Using `analogRead()` Instead of `digitalRead()`
- Used analog values initially → unstable & noisy  
- Realized we only need **ON / OFF**  
- Switching to `digitalRead()` was a **game changer**

---

### 3. Motor Driver Jumper Issue (Biggest Problem)
- Removed the ENA/ENB jumper without knowing its importance  
- Motors didn’t run at all  
- Fixed after consulting seniors and checking the datasheet  
- Learned:
  - Datasheets are not optional  
  - Small hardware details matter  

---

### 4. Battery & Power Supply Issue
- Battery voltage was insufficient  
- Robot behaved unpredictably  
- Measured voltage using a multimeter  
- Replaced / charged the battery properly  
- Learned:
  - Voltage limits must match datasheet specifications  

---

### 5. Common Ground Mistake
- Arduino and motor driver grounds were not connected  
- Fixed by using a **common ground**  
- After fixing, the system stabilized  

---

## 🔄 Final Working Logic

The robot uses **two IR sensors**:
- Left IR Sensor  
- Right IR Sensor  

### Decision Logic

| Left Sensor | Right Sensor | Action |
|------------|-------------|--------|
| 1 (Black) | 1 (Black) | Stop |
| 1 (Black) | 0 (White) | Turn Left |
| 0 (White) | 1 (Black) | Turn Right |
| 0 (White) | 0 (White) | Move Forward |

The Arduino continuously reads sensor inputs and controls the motors through the motor driver accordingly.

---

## 🧪 Testing & Observations

- Tested on a **greyish floor** with black tape  
- Did not work perfectly in the first run  

### Issues observed:
- Robot going out of track  
- Failing at intersections  
- Speed affecting accuracy  

### Fixed partially by:
- Sensor tuning  
- Code simplification  

**Final result:**  
Works reliably for **simple curves and straight paths**.

---

## ⚠️ Limitations

- Uses only **2 IR sensors**  
- Cannot handle:
  - Intersections  
  - Complex paths  
  - High-speed tracking  
- No PID control  
- Accuracy drops on uneven lighting or surface color changes  

This robot is meant for **learning**, not competitions.

---

## 🚀 Future Improvements

- Add multiple IR sensors  
- Implement PID control  
- Improve speed and accuracy  
- Handle intersections and junctions  
- Upgrade to maze-solving logic  

---

## 📚 What I Learned

### Technical
- Arduino programming  
- IR sensor behavior  
- Motor driver working  
- Importance of datasheets  
- Power management  
- Debugging hardware + software together  

### Problem Solving
- Trial-and-error approach  
- Step-by-step testing  
- Simplifying logic instead of overcomplicating  
- Asking seniors and using resources wisely  

### Personal
- Team leadership  
- Teaching beginners  
- Technical communication in English  
- Patience and planning  
- Confidence in building real robots  

---

## ✅ Conclusion

This project was **completely worth doing**.

It transformed my understanding of robotics from watching videos to **building real systems**. I gained confidence, technical clarity, and leadership experience.

I strongly recommend this project to **any beginner** who wants to start robotics the right way — by **building, failing, debugging, and learning**.
