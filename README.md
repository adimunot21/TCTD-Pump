# TCTD-Pump

Design files and build instructions for a low-cost infusion pump prototype built at TCTD in 2022.

A stepper motor turns a camshaft of 10 laser-cut acrylic cams, each rotated 40 degrees from the previous one. Each cam moves its own follower, and the followers press along the tube in sequence to push fluid through. An Arduino Uno drives the stepper through an A4988 driver, with a bubble sensor and a buzzer for alarms.

## Contents

| File | What it is |
|---|---|
| `DesignAssembly.md` | CAD, 3D printing settings and mechanical assembly |
| `Electronics.md` | Wiring for the Arduino, driver, stepper, sensor and buzzer |
| `Infusion Pump CAD (Printed).f3d`, `.step` | Casing in Fusion 360 and STEP format |
| `Infusion Pump Suggested Changes.f3d` | Revised casing |
| `Cam Circle DXF.dxf`, `Cam Follower DXF.dxf` | Laser-cutting files for the cams and followers |
| `infusion_pump_updated_sketch.ino` | Arduino sketch |
| `pump_with_libryr_try.ino` | Earlier sketch using the AccelStepper library |

## Building it

1. Print the two casing halves (ABS, 20 to 30 percent infill, with supports).
2. Laser-cut the cams and followers from the DXF files and assemble the camshaft.
3. Wire the electronics as described in `Electronics.md`.
4. Install the AccelStepper library in the Arduino IDE and upload the sketch.
