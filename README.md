# odg-controller-cpp

This is the desktop version of the ODG Controller Application for Mac and Linux operating systems. 

To dowload, navigate to the Releases tab and click on the zip file for your operating system.


Installing onto a computer running macOS:
* In order to install onto a Mac computer, you require the program CMake. Download the binary distribution for Mac OS from https://cmake.org/download/. Open the download, and copy the application to your applications folder.
* Open the downloaded folder titled odg-controller-macos in Finder. Inside is an executable file called install-macos. Double click on this file to run the install script. If you do not have it installed already, you will be prompted to install the Xcode Command Line Tools.
* After the Command Line Tools have installed, you will be prompted to input the user password you use to unlock your Mac computer. It will not show any of the characters you input on screen; this is normal.


Installing onto a computer running Linux:
* Open the downloaded folder titled odg-controller-linux. Inside is an executable file called install-linux. Double click on this file to run the install script. It will install a couple of required packages, including CMake, SFML and SFGUI.
* You will be prompted to input your user password. It will not show any of the characters you input on screen; this is normal.


Running the application:
* Included with the source code is an executable file titled ODG Controller. After the install script has finished running, double click on this file to open the application. You can drag this file anywhere onto your computer’s drive and open it from there.
* You can also open the application at any time by opening a Terminal (On Mac found in Applications/Utilities/Terminal.app) and typing in:
		BCCH
	If you wish to load the app using a specific resolution, you can input the width and height in pixels:
		BCCH [width] [height]
	For example: 
		BCCH 1080 920
	To launch the app press Return.
* If you wish to use the application with the footpedal, be sure the footpedal is plugged into one of your computer’s USB ports while the application is running.