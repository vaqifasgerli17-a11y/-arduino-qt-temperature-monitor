# Arduino DHT11 + Qt/QML Temperature Monitor

*[Azərbaycan dilində aşağıda / Azerbaijani version below]*

A real-time temperature and humidity monitoring application built with
Arduino Uno, a DHT11 sensor, and a Qt/QML interface.

## Features

- Reads temperature and humidity from a DHT11 sensor
- Sends data from Arduino to the Qt application via serial (UART)
- Live-updating QML interface
- Connection status indicator

## Components used

- Arduino Uno (or compatible clone)
- DHT11 temperature/humidity sensor
- Qt 6 (Core, Gui, Qml, Quick, SerialPort)
- CMake build system

## Wiring diagram

| DHT11 Pin | Arduino Pin |
|-----------|-------------|
| S (Data)  | Pin 2       |
| + (VCC)   | 5V          |
| - (GND)   | GND         |

## Setup

### 1. Arduino code

Open the `.ino` file in the `arduino/` folder with Arduino IDE, install the
Adafruit DHT sensor library, and upload the code to the Arduino.

### 2. Qt application

```bash
git clone https://github.com/vaqifasgerli17-a11y/temp.git
cd temp
cmake -S . -B build
cmake --build build
./build/apptemp
```

### Serial port permission on Linux

```bash
sudo usermod -aG dialout $USER
```

Then log out and back in (or reboot).

## License

MIT

---

# Arduino DHT11 + Qt/QML Temperatur Monitoru

Arduino Uno (klon) və DHT11 sensoru istifadə edərək real-vaxt temperatur və rütubət
məlumatlarını Qt/QML tətbiqində göstərən layihə.

## Xüsusiyyətlər

- DHT11 sensorundan temperatur və rütubət oxunması
- Serial port (UART) vasitəsilə Arduino-dan Qt tətbiqinə data ötürülməsi
- QML ilə canlı, real-vaxt interfeys
- Bağlantı statusunun göstərilməsi

## İstifadə olunan komponentlər

- Arduino Uno (və ya uyğun klon)
- DHT11 temperatur/rütubət sensoru
- Qt 6 (Core, Gui, Qml, Quick, SerialPort)
- CMake build sistemi

## Pin bağlantı sxemi

| DHT11 Pin | Arduino Pin |
|-----------|-------------|
| S (Data)  | Pin 2       |
| + (VCC)   | 5V          |
| - (GND)   | GND         |

## Quraşdırma

### 1. Arduino kodu

`arduino/` qovluğundakı `.ino` faylını Arduino IDE ilə aç, DHT sensor
kitabxanasını (Adafruit DHT sensor library) quraşdır və kodu Arduino-ya yüklə.

### 2. Qt tətbiqi

```bash
git clone https://github.com/vaqifasgerli17-a11y/temp.git
cd temp
cmake -S . -B build
cmake --build build
./build/apptemp
```

### Linux-da serial port icazəsi

```bash
sudo usermod -aG dialout $USER
```

Sonra sistemi yenidən başlat və ya çıxış edib yenidən giriş et.

## Lisenziya

MIT
