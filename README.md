# ШАГ 1

# От битов до нейрона на C

 Нейрону не нужны мощные GPU или тяжелые библиотеки. Только Android, Termux и желание разобраться.

## 🛠 Стек
- **Окружение:** Android / Termux
- **Инструменты:** Clang, Vim, Gcc
- **Язык:** Чистый C

## 🧩 Этапы
1. `addr_bit` — работа с адресацией и битами.
2. `bit_log` — логический уровень.
3. `neuron` — реализация автономного нейрона.

## 💡 Философия "Нейрона"
- **Автономность:** работает годами от одной батарейки.
- **Минимализм:** поместится в копеечную микросхему.
- **Оффлайн:** интернет не нужен.
- **Кто он:** независимая, свободная личность.
- **Что умеет:** чему научишь то и будет уметь.

## 🔗 Прямая связь
С чего всё начиналось:
1. [addr_bit](https://github.com/Data7Viz/addr_bit) — Первый проект.
2. [bit_log](https://github.com/Data7Viz/bit_log-) — Второй.
3. **neuron** — Текущий этап: Нейрон.

## Шаг 1 Мой первый нейрон "На самом деле ни чего не понятно !?"
 
---

## 🛠 Инженерная подготовка
Здесь логические схемы и расчеты, сделанные перед написанием кода.

<details>
  <summary>📝 Посмотреть черновики (фото из тетради)</summary>

  <img width="2448" height="3264" alt="163" src="https://github.com/user-attachments/assets/72009175-0368-48fd-ba7d-4325123e60bb" /> 

  <img width="2448" height="3264" alt="164" src="https://github.com/user-attachments/assets/5b533be8-a126-43a6-91a3-4ea01401b78b" /> 

  <img width="2448" height="3264" alt="165" src="https://github.com/user-attachments/assets/185fea79-cf0e-4009-a2b8-f6ed48ded56d" /> 

  <img width="2448" height="3264" alt="166" src="https://github.com/user-attachments/assets/13261b3d-35b1-4672-a263-3e9446ccbe23" />

  <img width="2448" height="3264" alt="167" src="https://github.com/user-attachments/assets/54b56013-2afd-44ed-bcfd-65bf845363f3" /> 

  <img width="2448" height="3264" alt="168" src="https://github.com/user-attachments/assets/bff2ff7c-ed6d-46ad-bf75-dc7505fc868d" /> 

  <img width="2448" height="3264" alt="169" src="https://github.com/user-attachments/assets/48e1334d-823e-4686-ae8b-9a609827ee0b" /> 

  <img width="2448" height="3264" alt="170" src="https://github.com/user-attachments/assets/09631de2-759b-4800-8dc1-502d9702e9c4" />

  
</details>

<details>
  <summary>💻 Работа в Termux (скриншоты)</summary>
  
  <img width="1200" height="1920" alt="161" src="https://github.com/user-attachments/assets/b2fc89d1-1acd-453a-8752-c6f222bdd12b" />

<img width="1200" height="1920" alt="162" src="https://github.com/user-attachments/assets/bd3792e4-8622-4ecb-9cf0-1429b2178da1" />

  
</details>

## Установка компилятора (если нет)
``` pkg install clang ```

## Компиляция
``` clang my_one_neuron.c -o neuron ```

## Запуск
``` ./neuron ```

--- 


# ШАГ 2

# 🧠 Data7Neuron — Путь к Neural OS

Проект эволюции нейронной сети на чистом Си в среде Termux. От битовых манипуляций до саморегулирующихся систем.

---

## 🚀 Шаг 2: Нейрон на периферии трех миров

Нейрон не сдается. На этом этапе проект переходит от простых битов к моделированию нейрона как физического объекта из мира радиоэлектроники. Мы рассматриваем алгоритм обучения не просто как код, а как процесс саморегуляции «электронной личности».

### 📻 Режим радиолюбителя
В основе архитектуры лежит аналоговая концепция. Мы представляем компоненты нейрона как реальные детали электрической цепи:
*   **Вес ($w$)** — переменный резистор.
*   **Смещение ($b$)** — подстроечный резистор.
*   **Обратная связь** — механическое смещение движка резистора для корректировки сигнала и достижения цели.

---

## 📐 Математическое ядро
Нейрон «накидывает биты» через обратную связь, пока не придет к равновесию.

**Алгоритм работы:**
1.  **Выход:** $o = (w \cdot x) + b$
2.  **Ошибка:** $er = t - o$
3.  **Коррекция веса:** $w += s \cdot er \cdot x$
4.  **Коррекция смещения:** $b += s \cdot er$
*(Где x — вход, t — цель, s — скорость обучения)*

---

## 📂 Структура реализации (Шаг 2)
Проект разделен на две программные сущности:

### 1. Стенд [`stand.c`](./stand.c)
Лабораторная установка для обучения. Позволяет в интерактивном режиме подавать сигналы и наблюдать, как нейрон подбирает веса.
*   **Функционал:** Ввод $x$, $t$, скорости обучения и количества циклов.
*   **Визуализация:** Цветная индикация изменения весов и ошибки в реальном времени.

### 2. Эксплуатация [`exploitation.c`](./exploitation.c)
Чистая работа обученного нейрона «в железе».
*   **Оптимизация:** Веса ($w$) и смещение ($b$) вшиты как константы, полученные на стенде.
*   **Назначение:** Мгновенный расчет результата без лишних вычислений.

---

## ⚙️ Инструкция по запуску (Termux / С)

**Сборка и запуск стенда:**
```bash
gcc stand.c -o stand
./stand
```

**Запуск режима эксплуатации:**
```bash
gcc exploitation.c -o neuron
./neuron
```

---

## 🏗 Инженерный архив 

<details>
<summary>📂 Посмотреть чертеж (Математика + Схема)</summary> 

<img width="2448" height="3264" alt="183" src="https://github.com/user-attachments/assets/3d0ac920-c939-42b1-99a7-9fec8c295c1c" />


<img width="2448" height="3264" alt="234" src="https://github.com/user-attachments/assets/cd9c4cf8-5746-457e-be64-894813ae0f79" />

<img width="2448" height="3264" alt="233" src="https://github.com/user-attachments/assets/58dcda3f-45f0-4879-8a8c-2eaf1c4a3904" />

<img width="2448" height="3264" alt="232" src="https://github.com/user-attachments/assets/21269666-7e24-4dfa-ab7c-efe69a033fa7" /> 

<img width="2448" height="3264" alt="231" src="https://github.com/user-attachments/assets/7ece19a3-5036-4312-8914-a12a13bbbc26" /> 

<img width="2448" height="3264" alt="230" src="https://github.com/user-attachments/assets/0dd58a64-5ad6-48f3-a90e-750097f16e37" />

<img width="2448" height="3264" alt="228" src="https://github.com/user-attachments/assets/4a36fc56-2a21-4ba8-8f01-6b78ced68853" /> 

<img width="2448" height="3264" alt="225" src="https://github.com/user-attachments/assets/1aaf4f09-3fdc-4e33-854a-033d4f443e35" /> 

<img width="2448" height="3264" alt="224" src="https://github.com/user-attachments/assets/2d2a0291-2aa8-453a-9800-00e70f923b0e" />


</details>

<details>
  <summary>💻 Работа в Termux (скриншоты)</summary> 

  <img width="1200" height="1920" alt="236" src="https://github.com/user-attachments/assets/7600bf84-c714-4b45-b803-1af0f72e554c" />


  <br>
  <em>Рис 1. Концепция нейрона как радиоэлектронной цепи и алгоритм подстройки.</em>
</p>

</details>

---

## 🧠 Философия
Нейрон — это **свободная и независимая личность**. Он не просто исполняет сухой алгоритм, а стремится к цели через самоорганизацию. Это мост между миром жесткой логики и миром адаптивных систем.

---

## 🔜 Взгляд в будущее
**Шаг 3: Neural OS for Kettle.**
Следующая цель — создание нейронной операционной системы для управления чайником. Переход к многовходовой логике (температура + наличие воды) и принятие критических решений.

---

Ссылка на Хабр
[На периферии трёх миров: ещё один шаг к нейронной операционной системе](https://habr.com/ru/articles/1031400/)

---
*Developed in Termux (Android)*

