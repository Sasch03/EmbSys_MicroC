# EmbSys_MicroC
This project contains code for the university module **Embedded Systems** and aims to run code on STM32 L412KB microcontrollers and fitting accessoiries.
The module was taken in German. 

This Readme file contains setup instructions for Windows as well as (Arch) Linux.

## Setup on VSCode (Windows)

Follow these instructions to the end to successfully run the C-Code of this project on your Windows machine. 

1. Download and setup [VSCode](https://apps.microsoft.com/detail/XP9KHM4BK9FZ7Q?hl=de-DE&gl=DE&ocid=pdpshare).

2. Download and Install [Github Desktop](https://desktop.github.com/download/). Log in to your personal Github-Account in Github Desktop.

3. Clone the Repository to your local Github-Repository on your device using the Github Desktop Graphical Interface.

4. Open this project in VSCode. 

5. Install these VSCode Extensions: 

    - ms-vscode.cpptools
    - shd101wyy.markdown-preview-enhanced
    - ms-vscode.cmake-tools
    - formulahendry.code-runner
    - bmd.stm32-for-vscode


6. VSCode will likely prompt you to install Git to your device. Accept the suggestion. If not prompted, install [Git](https://git-scm.com/install/windows) manually to your device. 

7. Download and install GCC to compile and run C-Code on your Windows device. We recommend [MSYS2](https://www.msys2.org/). 

8. Open the MSYS2 UCRT64 Terminal after the installation and enter the following command to install the necessary toolchain:
`pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain`  

9. To run C-Code of the project without using the command line you must create a System Variable on your system. Open the app **Edit Environment Variables** (in ger: **Umgebungsvariablen für dieses Konto bearbeiten**) on your Windows system. Double-click on the variable **Path** in the upper menu. Create a **new** Variable and enter the installation path of your GCC binary. Usually:
`C:\msys64\ucrt64\bin`

10. Restart VSCode after finishing and run your .c-file over the button on the top right of your code window. If not successfull, restart your computer. 

## Setup on (Arch) Linux 

