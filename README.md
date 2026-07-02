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
git clone https://github.com/İSTİFADƏÇİ_ADIN/temp.git
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
