# QtCalc

QtCalc is a simple calculator application built using Qt5 and QtWidgets. This README.md file provides instructions on how to install dependencies and build the QtCalc application.

## Dependencies

Before building QtCalc, ensure that you have the following dependencies installed on your system:

- Qt5: Qt is a powerful cross-platform C++ library that is the foundation of the QtCalc application. You can download and install Qt from the [official Qt website](https://www.qt.io/download).

- QtWidgets: QtWidgets is a module of Qt that provides a set of UI components. It is a part of the standard Qt installation.

## Build Instructions

To build the QtCalc application, follow these steps:

1. Open a terminal and navigate to the root directory of the QtCalc repository.

2. Run the following command to generate the Makefile using qmake:

    ```bash
    qmake
    ```

3. After the Makefile is generated, run the following command to build the application:

    ```bash
    make
    ```

4. Once the build process is complete, you can run the QtCalc application using the following command:

    ```bash
    ./qtcalc
    ```

Congratulations! You have successfully built and run the QtCalc application.

Feel free to explore the code and customize the application to meet your needs.
