Вывод: в int 32 бита (4 байта). Диапазон int (обычно от -2147483648 до 2147483647) определяется формулой для знакового целого: от -2^(N-1) до 2^(N-1)-1, где N — количество бит. Один бит тратится на знак, остальные 31 — на значение.
Было: 2147483647
Стало: -2147483648
Удвоенное: -2
warning: integer literal is too large to be represented in type 'int' is converted to 'long long' [-Woverflow]
(или error: narrowing conversion of '8100000000' from 'long long' to 'int' при строгих настройках компилятора)
