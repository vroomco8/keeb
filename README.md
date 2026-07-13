<div align="center">

# ⌨️ KEYBOARD

*A custom mechanical keyboard, designed from the switches down.*

![status](https://img.shields.io/badge/status-in%20progress-yellow)
![layout](https://img.shields.io/badge/layout-%5BLayout%2C%20%20100%25%5D-blue)

</div>

---

## Overview

This repository documents the design and build of a fully custom keyboard from scratch.

> [Thought I could get out of my comfort zone and try something I haven't done before. I'm mainly a CS guy, but have always wanted to design and make something for myself!]

**At a glance:**

Want to note that everything below is entirely conceptual. I have not researched at all about specific electronic parts nor have I explored options with 3d printing and etc. All of the stuff I am saying is coming straight from the little information I know about assembling a keyboard

| | |
|---|---|
| **Layout** | 100% |
| **Switches** | Cherry MX (Silent Red) |
| **Case material** | 3D-printed atm, maybe switch to heavy material afterwards |
| **Mounting style** | Tray Mount seems easiest, maybe will do a Top/Gasket mount if I want |
| **Microcontroller** | Raspberry Pi Pico |
| **Firmware** | [No idea lmao] |


---

## ✨ Features

- [ ] RGB Implementation (idk if I want this, maybe make it toggleable?)
- [ ] Rotary Encoder (Volume, puase/play)
- [ ] OLED Screen (Cool displays / Current Spotify / etc...)
- [ ] Is Bluetooth an option?

---

## 🧩 Design

Currently, I have a Lenovo SK-8815 released in 2004. This thing is older than me (and could be classified as a antique), but it is reliable and I love it. Been using it since 5th grade, and has never failed me. 
However, it can be improved. This organization, HackClub, allows me to sort of improve on its design in ways that I sort of want, through OLED screens and rotary encoders, and more.

For that reason, I want a 100% keyboard with a similar configuration to my old keyboard, but with different switches, RGB(?), wireless, and more if I can fit it within the given timeframe. 
Kinda like this, except the empty space above the numpad has a rotary encoder and an OLED screen
<img width="1235" height="368" alt="image" src="https://github.com/user-attachments/assets/015c0119-300d-4286-b068-9812ba31948f" />


### PCB

[Describe your PCB design approach — schematic capture tool (KiCad, EAGLE, etc.), routing decisions, diode/matrix layout, and anything tricky about the electrical design.]

### Case

[Describe the case design — CAD tool, construction method, and design intent (thin bezels, weight, acoustics, etc.)]

- **Tooling:** KiCAD, Onshape (I have the most experience with EAGLE and Fusion 360, but I've heard good things about both of these options plus its in the docs)
- **Construction:**  
- **Design goals:** [e.g. sound profile, ergonomics, weight]

### Firmware

[Notes on your firmware configuration — keymap philosophy, layers, any custom features or macros.]

---

## 🗂️ Repository Structure

```
.
├── pcb/          # KiCad project, schematics, gerbers
├── case/         # CAD files, STLs, technical drawings
├── bom.csv/      # da bill of materials (please approve me)
├── images/       # images of PROGRESS
└── README.md
```

## 🚧 Roadmap

- [x] Making GitHub Repo
- [ ] Planning Your Keyboard
- [ ] Designing the PCB
- [ ] Designing the Case
- [ ] Writing Firmware
- [ ] Adding Extra Parts
- [ ] Submitting
---
