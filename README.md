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
1. [addr_bit](../../addr_bit) — Первый проект.
2. [bit_log](../../bit_log) — Второй.
3. **neuron** — Текущий этап: Нейрон.

## Этап 1 Мой первый нейрон "На самом деле ни чего не понятно !?"
 
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
  
  ![Скриншот 1](имя_скрина_1.png)
  
</details>

# Установка компилятора (если нет)
pkg install clang

# Компиляция
clang my_one_neuron.c -o neuron

# Запуск
./neuron

