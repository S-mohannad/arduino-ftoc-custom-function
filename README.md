# 🌡️ Fahrenheit to Celsius Converter with Custom Function

> **Arduino Project #24** — تحويل درجات الحرارة من فهرنهايت لسيلزيوس باستخدام دالة FtoC() مخصصة

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Level](https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge)](https://github.com/S-mohannad)

---

## 📋 Description

مشروع يحول درجتين من فهرنهايت إلى سيلزيوس عبر دالة `FtoC()` مُعرَّفة من قبل المستخدم:

- يحول **0°F** و **40°F** إلى سيلزيوس
- يطبع القيم الأصلية والمحولة في Serial Monitor
- النتائج تُطبع مرة واحدة في `setup()`
- `loop()` فارغة لأن العملية تحتاج تشغيل مرة واحدة فقط

---

## 🔌 Circuit

لا يحتاج مكونات خارجية — يعمل بـ Arduino وحده عبر USB.

---

## 💡 Concepts Used

- **Custom Function with Return Value** — دالة `FtoC(float f)` تأخذ قيمة وترجع قيمة
- `float` — أرقام عشرية لدقة أعلى في حسابات الحرارة
- معادلة التحويل: `C = (F - 32) × 5 / 9`
- `Serial.print()` و `Serial.println()` — طباعة النتائج

---

## 📊 Behavior

| القيمة المُدخلة | النتيجة |
|----------------|---------|
| 0°F | -17.78°C |
| 40°F | 4.44°C |

---

## 🔗 Code

```cpp
float F1 = 0.0;
float F2 = 40.0;

void setup() {
  Serial.begin(9600);
  float C1 = FtoC(F1);
  float C2 = FtoC(F2);
  Serial.print(F1);
  Serial.print("c1 is: ");
  Serial.print(C1);
  Serial.print("f2 is: ");
  Serial.print(F2);
  Serial.print("c2 is: ");
  Serial.println(C2);
}

void loop() {
}

float FtoC(float f) {
  float c = f - 32.0;
  c = c * 5.0 / 9.0;
  return(c);
}
```

---

## 🔧 How to Run

1. افتح **Arduino IDE**
2. وصّل Arduino بالكمبيوتر عبر USB
3. انسخ الكود والصقه في المحرر
4. اختر **Board:** Arduino UNO
5. اختر **Port** الصحيح
6. اضغط ⬆️ **Upload**
7. افتح **Serial Monitor** (9600 baud)
8. شاهد نتيجتي التحويل تظهران مرة واحدة

---

## 👨‍💻 Author

**S-mohannad** — [@S-mohannad](https://github.com/S-mohannad)
