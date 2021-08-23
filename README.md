202108231043
Tags: #my, #project 
___
# dr-quine
Проект подготовительный к ветви school21 по написанию вирусов.
## Colleen.
Collen.c выводит свой код после запуска в стандартный вывод.

## Grace.
Grace.c сохраняет свой код в файл используя только код записанный в не более чем 3-х макросах и без main.

## Sully.
Sully.c сохраняет свой код в файл, компилирует его и исполняет 5 раз.
Пример:
```console
$> clang -Wall -Wextra -Werror ../Sully.c -o Sully ; ./ Sully
$> ls -al | grep Sully | wc -l
13
$> diff ../Sully.c Sully_0.c
1c1
< int i = 5;
---
> int i = 0;
$> diff Sully_3.c Sully_2.c
1c1
< int i = 3;
---
> int i = 2;
$> _
```
