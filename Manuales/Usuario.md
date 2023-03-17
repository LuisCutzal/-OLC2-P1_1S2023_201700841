### Universidad de San Carlos de Guatemala
### Facultad de Ingenieria
### Arquitectura de Computadoras y Ensambladores 1 - "A"
### Catedratico: 
### Auxiliar: 
<br><br><br><br>
<p style="text-align: center;"> Proyecto 1 <br>
Manual de usuario </p>
<br><br><br><br>

| Nombre Completo                     | Carnet    
| :---:                               |  :----: 
| Luis Antonio Cutzal Chalí           | 201700841


<br><br>

---
<br><br>

### Descripcion general de la solución:
<br>
<p style="text-align: justify;">
De acuerdo con el enunciado del Proyecto 1 del curso de Organización de Lenguajes y Compiladores 2 se desarrollo la aplicación con un enfoque en el análisis estadístico pero sin perder una clara influencia por uno de los lenguajes más mediáticos, influyentes e importantes de las ciencias computaciones como lo es C. El motivo de su creación es poder brindar una sintaxis clásica al programador pero con funciones para análisis y manejo de
datos.
<br><br>
mini OL🅒 IDE es un entorno de desarrollo que provee las herramientas para la escritura de
programas en lenguaje mini OL🅒. Este IDE nos da la posibilidad de visualizar tanto la
salida en consola de la ejecución del archivo fuente como los diversos reportes de la
aplicación que se explican más adelante. La interfaz y el framework para el desarrollo de
GUI queda a elección por parte del estudiante, siempre y cuando se utilice el lenguaje
indicado por los tutores.
</p>
<br><br>
Características Básicas <br><br>
1. <p style="text-align: justify;">Abrir, guardar y guardar como</p>
2. <p style="text-align: justify;">Editor de código</p>
3. <p style="text-align: justify;">Botón para ejecutar archivo</p>
4. <p style="text-align: justify;">Reporte de errores</p>
5. <p style="text-align: justify;">Reporte de tabla de símbolos</p>
6. <p style="text-align: justify;">Reporte de AST</p>
7. <p style="text-align: justify;">Consola de salida</p>
<br><br>


Requerimientos minimos del sistema 
<br> 
<br> 
1. <p style="text-align: justify;">Tener un sistema operativo Windows 10 o superior, o cualquier version de Linux o Mac</p>
2. <p style="text-align: justify;">Tener como minimo 4GB de memoria RAM</p>
3. <p style="text-align: justify;">Tener instalado Graphiz para los reportes</p>
4. <p style="text-align: justify;">Tener el compilador de C/C++ instalado</p>
<br><br>

Uso del sistema
<br>
Pantalla principal
<br>

![imagen 1 de app](img1.png)
<br><br>
<p style="text-align: justify;">
La función principal del editor será el ingreso del codigo fuente el cual será análizado. En este se podra abrir diversos archivos.
</p>
<br>
<br>
Reporte de errores <br><br>

![imagen 2 de app](img2.png)
<p style="text-align: justify;">
El intérprete deberá ser capaz de detectar todos los errores que se encuentren durante el proceso de compilación. Todos los errores se deberán de recolectar y se mostrará un reporte de errores en el que, como mínimo, debe mostrarse el tipo de error, su ubicación y una breve descripción de por qué se produjo.
</p>
<br>

Tabla de Simbolos<br><br>
![imagen 3 de app](img3.png)
<p style="text-align: justify;">
Este reporte mostrará la tabla de símbolos después de la ejecución del archivo. Se deberán de mostrar todas las variables, funciones y procedimientos que fueron declarados, así como su tipo y toda la información que el estudiante considere necesaria para demostrar que el intérprete ejecutó correctamente el código de entrada.
</p>
Reporte AST <br><br>
<br>

![imagen 5 de app](img5.png)
<br>
<p style="text-align: justify;">
Este reporte mostrará el árbol de análisis sintáctico que se produjo al analizar el archivo de
entrada. Este debe de representarse como un grafo, se recomienda utilizar Graphviz para la
implementación de dicho árbol. El Estudiante deberá mostrar los nodos que considere
necesarios y se realizarán preguntas al momento de la calificación para que explique su
funcionamiento.
</p>