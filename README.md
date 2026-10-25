# NIRBHAY: Modular Mining Exploration & Rescue Robot

Vishwakarma Awards 2026-27 | Application ID **VK26-IITH-SM-0079** | VESIT, Mumbai | Fabrication lab: MBF Tinkerers Lab (MBFTL)

A snake-style crawler built from swappable segments for narrow, unsafe mine passages. It logs its joint moves to retrace its path and drops LoRa relay nodes instead of dragging a tether.

## Status (honest)
| Subsystem | Designed | Built | Validated |
|---|---|---|---|
| Yaw joint + pogo docking face (Fusion 360) | yes | 3-segment, 2-servo printed chain | no |
| ESP32 gait + joint log | starter sketch | no | no |
| Gas (MQ) + temperature (DS18B20) | yes | parts in hand | no |
| LoRa relay chain | architecture | no | no |
| Camera dehazing (from SIH 26007) | yes | no | no |

## Layout
- `cad/` Fusion 360 screenshots; add `.f3d`, `.step`, `.3mf` exports
- `electronics/` pin map, BOM; add KiCad `.kicad_sch` / `.kicad_pcb`
- `firmware/` ESP32 starter sketch
- `docs/` architecture, safety (FMEA), roadmap
- `photos/` real build photos (MBFTL, VESIT)
- `diagrams/` AI-generated diagrams (labelled)

Credit: list any open-source snake robot design used for the yoke geometry here.
