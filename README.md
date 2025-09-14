# Análisis de Circuitos RLC Serie

Una aplicación de escritorio desarrollada en Qt Creator que permite el análisis completo de circuitos RLC serie, incluyendo cálculo de impedancias, potencias, voltajes y análisis de resonancia.

## Características Principales

- **Interfaz gráfica intuitiva** con campos organizados por categorías
- **Validación automática** de datos de entrada
- **Cálculos precisos** de todos los parámetros eléctricos
- **Análisis de resonancia** con detección automática
- **Identificación del tipo de circuito** (Resistivo, Inductivo, Capacitivo)
- **Códigos de colores** para fácil identificación de resultados
- **Alertas informativas** para condiciones especiales

## Requisitos del Sistema

### Software Necesario
- **Qt Creator** (versión 6.0 o superior)
- **CMake** (versión 3.16 o superior)
- **Compilador C++17** compatible
- **Sistema Operativo:** Windows, macOS, o Linux

### Dependencias
- Qt Widgets
- Qt Core
- Bibliotecas matemáticas estándar de C++

## Instalación y Compilación

### Paso 1: Clonar o Descargar el Proyecto
```bash
git clone https://github.com/Sakhura/CircuitoRLC
cd CircuitoRLC
```

### Paso 2: Abrir en Qt Creator
1. Abrir Qt Creator
2. Archivo → Abrir Archivo o Proyecto
3. Seleccionar `CMakeLists.txt`
4. Configurar el kit de desarrollo

### Paso 3: Compilar
1. Presionar **Ctrl+B** o Build → Build Project
2. Esperar a que compile sin errores

### Paso 4: Ejecutar
1. Presionar **Ctrl+R** o Build → Run
2. La aplicación se abrirá automáticamente

## Guía de Uso

### Interfaz de Usuario

La aplicación está organizada en 6 secciones principales:

#### 1. Parámetros de la Fuente (Entrada)
- **Voltaje RMS (V):** Voltaje eficaz de la fuente AC
- **Frecuencia (Hz):** Frecuencia de operación del circuito
- **Fase inicial (°):** Ángulo de fase de la fuente (-180° a +180°)

#### 2. Parámetros del Circuito (Entrada)
- **Resistencia R (Ω):** Valor de la resistencia en ohms
- **Inductancia L (mH):** Valor de la inductancia en milihenrios
- **Capacitancia C (µF):** Valor de la capacitancia en microfaradios

#### 3. Resultados - Reactancias (Verde)
- **XL (Ω):** Reactancia inductiva
- **XC (Ω):** Reactancia capacitiva
- **X neta (Ω):** Reactancia neta (XL - XC)

#### 4. Impedancia y Corriente (Azul)
- **Z (Ω):** Impedancia total del circuito
- **φ (°):** Ángulo de fase de la impedancia
- **I RMS (A):** Corriente eficaz del circuito
- **Tipo:** Clasificación del comportamiento del circuito

#### 5. Voltajes y Potencias
- **Voltajes (Amarillo):**
    - VR, VL, VC: Voltajes RMS en cada componente
- **Potencias (Rojo):**
    - P (W): Potencia activa
    - Q (VAR): Potencia reactiva
    - S (VA): Potencia aparente
    - Factor de Potencia: cos(φ)

#### 6. Análisis de Resonancia (Morado)
- **fr (Hz):** Frecuencia de resonancia
- **Q factor:** Factor de calidad del circuito
- **BW (Hz):** Ancho de banda del circuito

### Instrucciones de Operación

#### Paso 1: Ingresar Datos
1. Complete **todos los campos** de entrada con valores numéricos positivos
2. Use punto decimal (no coma) para números decimales
3. Máximo 3 decimales permitidos

#### Paso 2: Calcular
1. Presione el botón **"CALCULAR"**
2. Los resultados aparecerán inmediatamente en los campos correspondientes
3. Si hay campos vacíos o valores inválidos, aparecerá un mensaje de error

#### Paso 3: Interpretar Resultados
- **Verde (Reactancias):** Comportamiento reactivo individual
- **Azul (Impedancia):** Características generales del circuito
- **Amarillo (Voltajes):** Distribución de voltaje
- **Rojo (Potencias):** Análisis energético
- **Morado (Resonancia):** Características de frecuencia

#### Paso 4: Limpiar (Opcional)
- Presione **"LIMPIAR"** para borrar todos los datos
- Presione **"SALIR"** para cerrar la aplicación

## Casos de Prueba Recomendados

### Caso 1: Circuito en Resonancia
```
Voltaje RMS: 220.0 V
Frecuencia: 60.0 Hz
Fase inicial: 0.0°
Resistencia: 100.0 Ω
Inductancia: 159.15 mH
Capacitancia: 44.21 µF
```
**Resultado esperado:** X ≈ 0, Tipo = "Resistivo (Resonancia)"

### Caso 2: Circuito Inductivo
```
Voltaje RMS: 120.0 V
Frecuencia: 30.0 Hz
Resistencia: 50.0 Ω
Inductancia: 200.0 mH
Capacitancia: 100.0 µF
```
**Resultado esperado:** X > 0, Tipo = "Inductivo"

### Caso 3: Circuito Capacitivo
```
Voltaje RMS: 110.0 V
Frecuencia: 120.0 Hz
Resistencia: 75.0 Ω
Inductancia: 100.0 mH
Capacitancia: 50.0 µF
```
**Resultado esperado:** X < 0, Tipo = "Capacitivo"

## Fórmulas Utilizadas

### Reactancias
- **XL = 2πfL** (Reactancia inductiva)
- **XC = 1/(2πfC)** (Reactancia capacitiva)
- **X = XL - XC** (Reactancia neta)

### Impedancia
- **Z = √(R² + X²)** (Magnitud de impedancia)
- **φ = arctan(X/R)** (Ángulo de fase)

### Corriente y Voltajes
- **I = V/Z** (Ley de Ohm para AC)
- **VR = I × R**, **VL = I × XL**, **VC = I × XC**

### Potencias
- **P = I² × R** (Potencia activa)
- **Q = I² × X** (Potencia reactiva)
- **S = V × I** (Potencia aparente)
- **cos φ = P/S** (Factor de potencia)

### Resonancia
- **fr = 1/(2π√(LC))** (Frecuencia de resonancia)
- **Q = (1/R)√(L/C)** (Factor de calidad)
- **BW = fr/Q** (Ancho de banda)

## Alertas del Sistema

### Condición de Resonancia
- Se activa cuando la frecuencia está dentro del 1% de la frecuencia de resonancia
- Muestra información detallada sobre la condición

### Circuito Altamente Reactivo
- Se activa cuando |X|/R > 10
- Indica que la componente reactiva domina sobre la resistiva

## Validaciones Implementadas

- **Campos obligatorios:** Todos los campos deben estar completos
- **Valores positivos:** Todos los valores deben ser mayores que cero
- **Formato numérico:** Solo se aceptan números con hasta 3 decimales
- **Rango de fase:** -180° a +180° para el ángulo de fase inicial

## Estructura del Proyecto

```
CircuitoRLC/
├── CMakeLists.txt          # Configuración de CMake
├── main.cpp               # Función principal
├── mainwindow.h           # Declaración de la clase principal
├── mainwindow.cpp         # Implementación de la lógica
├── mainwindow.ui          # Diseño de la interfaz gráfica
└── README.md             # Este archivo
```

## Tecnologías Utilizadas

- **Lenguaje:** C++17
- **Framework:** Qt 6.x
- **Sistema de construcción:** CMake
- **Bibliotecas:** Qt Widgets, Qt Core, QtMath

## Características Técnicas

- **Precisión de cálculo:** Hasta 4 decimales para corriente, 2-3 para otros valores
- **Validación en tiempo real:** Los campos solo aceptan valores numéricos válidos
- **Interfaz responsiva:** Diseño adaptable y fácil de usar
- **Gestión de memoria:** Uso eficiente de recursos Qt

## Notas para Desarrolladores

### Modificaciones Futuras
- Agregar gráficos de respuesta en frecuencia
- Implementar guardado/carga de configuraciones
- Añadir más tipos de análisis (fasores, análisis transitorio)

### Arquitectura del Código
- **Separación de responsabilidades:** Interfaz, lógica y validación bien separadas
- **Código modular:** Funciones específicas para cada cálculo
- **Estilo consistente:** Nomenclatura clara y comentarios descriptivos

## Créditos y Licencia

Desarrollado como proyecto de ejemplo para loa alumnos de Introducciín a la Programación IpChile: Análisis de circuitos eléctricos RLC serie.
- Docente: Sabina Romero Rodríguez
- sabina.romero@edu.ipchile.cl
- sabina.clases25@gmail.com
- Wsp: +56 9 8193 0993 (solo msj texto) 


---

**Versión:** 1.0  
**Última actualización:** 14 Septiembre 2025  
**Compatibilidad:** Qt 6.x, C++17
