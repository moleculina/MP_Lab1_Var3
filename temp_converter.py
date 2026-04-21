def celsius_to_fahrenheit(c):
    return c * 9 / 5 + 32


def celsius_to_kelvin(c):
    return c + 273.15


def main():
    print("Конвертер температуры (C, F, K)")
    print("Доступные шкалы: C, F, K")

    value = float(input("Введите значение: "))
    unit = input("Введите исходную шкалу (C/F/K): ").strip().upper()

    if unit == "C":
        f = celsius_to_fahrenheit(value)
        k = celsius_to_kelvin(value)
        print(f"{value}°C = {f:.2f}°F = {k:.2f}K")
    elif unit == "F":
        c = (value - 32) * 5 / 9
        k = celsius_to_kelvin(c)
        print(f"{value}°F = {c:.2f}°C = {k:.2f}K")
    elif unit == "K":
        c = value - 273.15
        f = celsius_to_fahrenheit(c)
        print(f"{value}K = {c:.2f}°C = {f:.2f}°F")
    else:
        print("Ошибка: неизвестная шкала")
        return

    # Таблица от -50 до +50 по Цельсию
    print("\nТаблица перевода (Цельсий -> Фаренгейт, Кельвин):")
    print("  C     F     K")
    for c in range(-50, 51, 10):
        f = celsius_to_fahrenheit(c)
        k = celsius_to_kelvin(c)
        print(f"{c:4} {f:5.1f} {k:5.1f}")


if __name__ == "__main__":
    main()