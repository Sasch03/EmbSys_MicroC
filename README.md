# EmbSys_MicroC
This project contains code for the university module **Embedded Systems** and aims to run code on STM32 L412KB microcontrollers and fitting accessoiries.
The module was taken in German. 

This Readme file contains setup instructions for Windows as well as (Arch) Linux.


## VSCode Setup for C (Windows)

Follow these instructions to the end to successfully run the C-Code of this project on your Windows machine. 

1. Download and setup [VSCode](https://apps.microsoft.com/detail/XP9KHM4BK9FZ7Q?hl=de-DE&gl=DE&ocid=pdpshare).
<br>

2. Download and Install [Github Desktop](https://desktop.github.com/download/). Log in to your personal Github-Account in Github Desktop.
<br>

3. Clone the Repository to your local Github-Repository on your device using the Github Desktop Graphical Interface.
<br>

4. Open this project in VSCode. 
<br>

5. Install these VSCode Extensions: 

    - ms-vscode.cpptools
    - shd101wyy.markdown-preview-enhanced
    - ms-vscode.cmake-tools
    - formulahendry.code-runner
    - bmd.stm32-for-vscode
<br>

6. VSCode will likely prompt you to install Git to your device. Accept the suggestion. If not prompted, install [Git](https://git-scm.com/install/windows) manually to your device. 
<br>

7. Download and install GCC to compile and run C-Code on your Windows device. We recommend [MSYS2](https://www.msys2.org/). 
<br>

8. Open the MSYS2 UCRT64 Terminal after the installation and enter the following command to install the necessary toolchain:

`pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain`  
<br>

9. To run C-Code of the project without using the command line you must create a System Variable on your system. Open the app **Edit Environment Variables** (in ger: **Umgebungsvariablen für dieses Konto bearbeiten**) on your Windows system. Double-click on the variable **Path** in the upper menu. Create a **new** Variable and enter the installation path of your GCC binary. Usually:

C:\msys64\ucrt64\bin`
<br>

10. Restart VSCode after finishing and run your .c-file over the button on the top right of your code window. If not successfull, restart your computer. 
<br>

## VSCodium Setup on (Arch) Linux 

1. Install an VSCodium on your Linux System. In our case on Arch Linux: 

`yay -S vscodium`

<br>

2. Install Github Desktop on your distro: 

`yay -S github-desktop`

<br>

3. Log in to Github Desktop with your personal account and pull the repository to your local device storage.
<br>

4. Open the repository in VSCodium and install the following extensions: 

- formulahendry.code-runner
- bmd.stm32-for-vscode
- llvm-vs-code-extensions.vscode-clangd
<br>

5. Also install the following package for syntax-highlighting and other useful features for C Code: 

`sudo pacman -S clang`

<br>

6. Restart the IDE afterwards and run the local C Code over the Graphical Interface on the top right. 
<br>

## STM32CUBEIDE & STM32CUBEMX installation on Arch Linux

The following instructions describe the installation process of STM32CUBEIDE v2.0.0 and STM32CUBEMX v6.16.1-1. 

Please mind the recommended version of STM32CUBEIDE for the university course by the professor is v1.19.0 due to UI changes and instructions deviating in the new v2.0.0. 

### Installing STM32CUBEMX on Arch Linux

STM32CUBEMX is found in the AUR under the package name [stm32cubemx](https://aur.archlinux.org/packages/stm32cubemx). Install this package: 

`yay -S stm32cubemx`
<br>

Alternatively download the software package from the [ST-website](https://www.st.com/en/development-tools/stm32cubemx.html) and build it from source. 
<br>

### Installing STM32CUBEIDE

1. Before beginning the installation, make sure you have an [AUR-helper](https://wiki.archlinux.org/title/AUR_helpers) like [yay](https://github.com/Jguer/yay) installed. 
<br>

2. Prepare your system for the installation with the necessary packages: 

`sudo pacman -S --needed base-devel git`

<br>

3. Install additional dependencies for the installation: 

```
sudo pacman -S webkit2gtk
yay -S ncurses5-compat-libs
```
<br>

4. Download the Generic Linux Installer from the [manufacturers website](https://www.st.com/en/development-tools/stm32cubeide.html) for STM32CUBEIDE. 
<br>

5. Download the installation file from the [manufacturers website](https://www.st.com/en/development-tools/st-link-server.html) for ST-LINK-SERVER. This package is mandatory for the following process.
<br>

6. Prepare the needed directories for the installation process: 

```
# Create the needed folders in case they dont yet exist
mkdir -p ~/.cache/yay/stm32cubeide
mkdir -p ~/.cache/yay/stlink-server
```
<br>

7. Copy the ZIP-files you downloaded in the previous steps to the newly created system folders: 

```
# Copy the ZIP-files to the newly created folders
cp ~/Downloads/st-stm32cubeide_2.0.0_*.zip ~/.cache/yay/stm32cubeide/
cp ~/Downloads/st-link-server-v2-1-*.zip ~/.cache/yay/stlink-server/
```
<br>

8. Start the [AUR installation script](https://aur.archlinux.org/packages/stm32cubeide) for the STM32CUBEIDE: 

`yay -S stm32cubeide`

When yay asks whether you want to create the packages anew, answer **`[N]None`**. If you answer `[Y]All`, the downloaded ZIP-files will be deleted and not used. 

<br>

9. Enable your user to allow the firmware flashing to usb devices:

`sudo usermod -aG uucp $USER`

Log off from your user and log in again to activate the group change. 

<br>

10. Start the IDE and commence the setup of the STM  controller according to the official instructions. 