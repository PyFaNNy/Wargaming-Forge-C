Задача C. Еще одна игра о танках
После года работы в Wargaming Алисе пришла в голову идея новой игры о танках. Эта игра проходит на карте размером 𝑛 × 𝑚, которая разделена на сектора размером 1 × 1. В левом верхнем секторе стоит единственный танк. Два игрока по очереди его перемещают, при этом каждый из них может за свой ход подвинуть танк на один сектор вправо, либо на один сектор вниз, либо на 𝑘 секторов по диагонали вправо-вниз. Проигрывает тот игрок, кто не сможет сделать ход.

Входные данные
В первой строке содержится два целых числа 𝑡 и 𝑘 (1 ≤ 𝑡 ≤ 20; 1 ≤ 𝑘 ≤ 109) разделенные пробелом. Каждая из следующих 𝑡 строк содержит (также через пробел) два целых числа 𝑚 и 𝑛 (1 ≤ 𝑚, 𝑛 ≤ 109) – размеры игровой карты.

Выходные данные
Выведите 𝑡 строк – исходы игры для каждой карты в порядке их следования во входных данных. Если первый игрок имеет выигрышную стратегию, выведите «+» (без кавычек), иначе выведите «-» (без кавычек).

Пример
Входные данные
1 10
10 10
Выходные данные
