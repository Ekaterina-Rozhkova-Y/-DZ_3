# Домашнее задание к работе 3

## Условие задачи
Составьте программу для определения сдачи после покупки в магазине товара:
перчаток стоимостью А руб., портфеля стоимостью Б руб., галстука стоимостью С руб.
Исходная сумма, выделенная на покупку – Д руб. В случае нехватки денег сдача
получится отрицательной.

## 1. Алгоритм и блок-схема

### Алгоритм

1. Начало

2. Задать исходные данные:
   - k — количество товара (шт.)
   - c — стоимость единицы товара (руб.)

3. Ввести с клавиатуры количество товара:
   - Вывести приглашение "введите количество товара"
   - Считать значение в k

4. Ввести с клавиатуры стоимость единицы товара:
   - Вывести приглашение "введите стоимость единицы товара"
   - Считать значение в cena

5. Вычислить стоимость покупки:
   - s = k * c

6. Вывести результат:
   - Вывести k, c, s

7. Конец

## Блок-схема
<mxfile host="app.diagrams.net">
  <diagram name="Страница-1" id="v_S-BezkDnIzrULs6bUd">
    <mxGraphModel dx="1030" dy="552" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <mxCell id="8wBTFA3-urgUwe8vaQvU-1" parent="1" style="rounded=1;whiteSpace=wrap;html=1;" value="Начало" vertex="1">
          <mxGeometry height="30" width="96" x="366" y="20" as="geometry" />
        </mxCell>
        <mxCell id="8wBTFA3-urgUwe8vaQvU-3" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;shapeInside=1;fixedSize=1;" value="&lt;span style=&quot;background-color: transparent; color: light-dark(rgb(0, 0, 0), rgb(255, 255, 255)); text-decoration-line: inherit;&quot;&gt;&amp;nbsp;Вывод k,&lt;/span&gt;&lt;span style=&quot;text-decoration-line: inherit; background-color: transparent; color: light-dark(rgb(0, 0, 0), rgb(255, 255, 255));&quot;&gt;&amp;nbsp;с ,&lt;/span&gt;&lt;span style=&quot;text-decoration-line: inherit; background-color: transparent; color: light-dark(rgb(0, 0, 0), rgb(255, 255, 255));&quot;&gt;s&lt;/span&gt;" vertex="1">
          <mxGeometry height="60" width="120" x="354" y="260" as="geometry" />
        </mxCell>
        <mxCell id="8wBTFA3-urgUwe8vaQvU-4" parent="1" style="rounded=0;whiteSpace=wrap;html=1;" value="&lt;pre style=&quot;font-style: normal; font-variant: normal; font-size-adjust: none; font-language-override: normal; font-kerning: auto; font-optical-sizing: auto; font-feature-settings: normal; font-variation-settings: normal; font-stretch: normal; font-size: 13px; line-height: 22px; font-family: Menlo, Monaco, Consolas, &amp;quot;Cascadia Mono&amp;quot;, &amp;quot;Ubuntu Mono&amp;quot;, &amp;quot;DejaVu Sans Mono&amp;quot;, &amp;quot;Liberation Mono&amp;quot;, &amp;quot;JetBrains Mono&amp;quot;, &amp;quot;Fira Code&amp;quot;, Cousine, &amp;quot;Roboto Mono&amp;quot;, &amp;quot;Courier New&amp;quot;, Courier, sans-serif, system-ui; overflow: auto; white-space: pre-wrap; word-break: break-all; padding: 16px; color: rgb(15, 17, 21); text-align: start; margin: 0px !important;&quot;&gt;s= &lt;font style=&quot;color: light-dark(rgb(15, 17, 21), rgb(222, 223, 227)); background-color: transparent; font-size: 11px;&quot;&gt;k * c  &lt;/font&gt;&lt;font style=&quot;color: light-dark(rgb(15, 17, 21), rgb(222, 223, 227)); background-color: transparent; font-size: 7px;&quot;&gt;  &lt;/font&gt;&lt;/pre&gt;" vertex="1">
          <mxGeometry height="60" width="120" x="354" y="170" as="geometry" />
        </mxCell>
        <mxCell id="8wBTFA3-urgUwe8vaQvU-5" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;shapeInside=1;fixedSize=1;" value="&lt;span style=&quot;color: rgb(15, 17, 21); font-family: Menlo, Monaco, Consolas, &amp;quot;Cascadia Mono&amp;quot;, &amp;quot;Ubuntu Mono&amp;quot;, &amp;quot;DejaVu Sans Mono&amp;quot;, &amp;quot;Liberation Mono&amp;quot;, &amp;quot;JetBrains Mono&amp;quot;, &amp;quot;Fira Code&amp;quot;, Cousine, &amp;quot;Roboto Mono&amp;quot;, &amp;quot;Courier New&amp;quot;, Courier, sans-serif, system-ui; font-size: 13px; text-align: start; white-space: pre-wrap; text-decoration-line: inherit; background-color: transparent;&quot;&gt; Ввод k, &lt;/span&gt;&lt;span style=&quot;color: rgb(15, 17, 21); font-family: Menlo, Monaco, Consolas, &amp;quot;Cascadia Mono&amp;quot;, &amp;quot;Ubuntu Mono&amp;quot;, &amp;quot;DejaVu Sans Mono&amp;quot;, &amp;quot;Liberation Mono&amp;quot;, &amp;quot;JetBrains Mono&amp;quot;, &amp;quot;Fira Code&amp;quot;, Cousine, &amp;quot;Roboto Mono&amp;quot;, &amp;quot;Courier New&amp;quot;, Courier, sans-serif, system-ui; font-size: 13px; text-align: start; white-space: pre-wrap; text-decoration-line: inherit; background-color: transparent;&quot;&gt;c &lt;/span&gt;" vertex="1">
          <mxGeometry height="60" width="120" x="354" y="80" as="geometry" />
        </mxCell>
        <mxCell id="8wBTFA3-urgUwe8vaQvU-6" parent="1" style="rounded=1;whiteSpace=wrap;html=1;" value="Конец" vertex="1">
          <mxGeometry height="40" width="96" x="366" y="350" as="geometry" />
        </mxCell>
        <mxCell id="8wBTFA3-urgUwe8vaQvU-7" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="413.83" y="80" />
              <mxPoint x="413.83" y="60" />
            </Array>
            <mxPoint x="413.83" y="50" as="sourcePoint" />
            <mxPoint x="413.83" y="80" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="8wBTFA3-urgUwe8vaQvU-9" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="414" y="170" />
              <mxPoint x="414" y="150" />
            </Array>
            <mxPoint x="414" y="140" as="sourcePoint" />
            <mxPoint x="414" y="170" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="8wBTFA3-urgUwe8vaQvU-10" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="414" y="260" />
              <mxPoint x="414" y="240" />
            </Array>
            <mxPoint x="414" y="230" as="sourcePoint" />[1111.drawio](https://github.com/user-attachments/files/32715088/1111.drawio)

            <mxPoint x="414" y="260" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="8wBTFA3-urgUwe8vaQvU-11" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;" value="">
          <mxGeometry height="50" relative="1" width="50" as="geometry">
            <Array as="points">
              <mxPoint x="413" y="350" />
              <mxPoint x="413" y="330" />
            </Array>
            <mxPoint x="413" y="320" as="sourcePoint" />
            <mxPoint x="413" y="350" as="targetPoint" />
          </mxGeometry>
        </mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
[Диаграмма без названия.drawio](https://github.com/user-attachments/files/32715065/default.drawio)


## 2. Реализация программы
#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

#include <locale.h>

#include <stdlib.h>


void M(void)
{
    setlocale(LC_CTYPE, "RUS");
}

void DZ(void)
{
    int k;
    float c;
    float s;

    puts("введите количество товара");
    scanf_s("%d", &k);

    puts("введите стоимость единицы товара");
    scanf_s("%f", &c);

    s = k * c;

    printf("%d шт. по %.2f руб. - это %.2f руб.\n", k, c, s);
}

int main()

{

    M();
    
    DZ();
    
    return 0;
    
}

## 3. Результаты работы программы
введите количество товара
5

введите стоимость единицы товара
120.50

5 шт. по 120.50 руб. - это 602.50 руб.
## 4. Информация о разработчике

- **ФИО:** Рожкова Екатерина Юрьевна
- **Группа:** бИЦТ-261
