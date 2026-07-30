# ⌨️ KEYBOARD

*A custom mechanical keyboard, designed from the switches down.*

![status](https://img.shields.io/badge/status-under%20review-yellow)

</div>

---

## Overview

This repository documents the design and build of a fully custom keyboard from scratch.

> [Thought I could get out of my comfort zone and try something I haven't done before. I'm mainly a CS guy, but have always wanted to design and make something for myself!]

Want to note that everything below is entirely conceptual. I have not researched at all about specific electronic parts nor have I explored options with 3d printing and etc. All of the stuff I am saying is coming straight from the little information I know about assembling a keyboard

| | |
|---|---|
| **Layout** | 97% (104-3) |
| **Switches** | Cherry MX (Red) |
| **Case material** | 3D-printed atm, maybe switch to heavy material afterwards |
| **Mounting style** | Tray Mount |
| **Microcontroller** | Raspberry Pi Pico |
| **Firmware** | QMK |


---

## ✨ Features

- [x] RGB Implementation (toggleable)
- [x] Rotary Encoder (Volume, pause/play)
- [x] OLED Screen (Cool displays / Current Spotify / etc...)

---

## 🧩 Design

Currently, I have a Lenovo SK-8815 released in 2004. This thing is older than me (and could be classified as a antique), but it is reliable and I love it. Been using it since 5th grade, and has never failed me. 
However, it can be improved. This organization, HackClub, allows me to sort of improve on its design in ways that I sort of want, through OLED screens and rotary encoders, and more.

For that reason, I want a 100% keyboard with a similar configuration to my old keyboard, but with different switches, RGB(?), wireless, and more if I can fit it within the given timeframe. 
Kinda like this, except the empty space above the numpad has a rotary encoder and an OLED screen
<img width="1235" height="368" alt="image" src="https://github.com/user-attachments/assets/015c0119-300d-4286-b068-9812ba31948f" />


### Some Images
<img width="1873" height="842" alt="image" src="https://github.com/user-attachments/assets/6c19b740-c72d-490a-8d09-0d5b59741b3d" />
<img width="1711" height="931" alt="image" src="https://github.com/user-attachments/assets/86f9bd05-bceb-41fc-8c78-e1a9723c2a7d" />
<img width="2749" height="845" alt="image" src="https://github.com/user-attachments/assets/3a3554ad-dba8-4c22-85fd-553784ca4e58" />
<img width="3032" height="1150" alt="image" src="https://github.com/user-attachments/assets/e10ec8ee-d4d6-4c4a-a61d-e4cce44a01c1" />

---

## 🗂️ Repository Structure

```
├── pcb/          # KiCad project, schematics, gerbers
├── case/         # CAD files, STLs, technical drawings
├── firmware/     # QMK firmware for the keyboard
├── bom.csv/      # da bill of materials (please approve me)
├── WORKLOG/      # da diary entries of my progress
└── README.md
```

## 🚧 Roadmap

- [x] Making GitHub Repo
- [x] Planning Your Keyboard
- [x] Designing the PCB
- [x] Designing the Case
- [x] Writing Firmware
- [x] Adding Extra Parts
- [ ] Submitting
---



PLEASE APPROVE ME
