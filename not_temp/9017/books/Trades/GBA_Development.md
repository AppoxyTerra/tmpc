




 GBA Development/Printable version - Wikibooks, open books for an open world
 








































 GBA Development/Printable version
====================================




 From Wikibooks, open books for an open world
 



 <
 [GBA Development](/wiki/GBA_Development "GBA Development") 







[Jump to navigation](#mw-head) 
[Jump to search](#searchInput) 




|  |  |
| --- | --- |
| 



 | **This is the
 [print version](/wiki/Help:Print_versions "Help:Print versions") 
 of
 [GBA Development](/wiki/GBA_Development "GBA Development")**

 You won't see this message or any elements not part of the book's content when you print or
 [preview](https://en.wikibooks.org/w/index.php?title=GBA_Development/Printable_version&printable=yes) 
 this page.
  |




  





 GBA Development
 



 The current, editable version of this book is available in Wikibooks, the open-content textbooks collection, at
   


<https://en.wikibooks.org/wiki/GBA_Development>





 Permission is granted to copy, distribute, and/or modify this document under the terms of the
 [Creative Commons Attribution-ShareAlike 3.0 License](/wiki/Wikibooks:Creative_Commons_Attribution-ShareAlike_3.0_Unported_License "Wikibooks:Creative Commons Attribution-ShareAlike 3.0 Unported License") 
 .
 





 Contents
----------







* [1
 

 HAM IDE](#HAM_IDE)
	+ [1.1
	 
	
	 GBA development with the HAM IDE and compiler](#GBA_development_with_the_HAM_IDE_and_compiler)
		- [1.1.1
		 
		
		 Step 1 - Setup](#Step_1_-_Setup)
		- [1.1.2
		 
		
		 Step 2 - Getting started with a new project](#Step_2_-_Getting_started_with_a_new_project)
		- [1.1.3
		 
		
		 Step 3 - Getting acquainted with the main.cpp file](#Step_3_-_Getting_acquainted_with_the_main.cpp_file)
		- [1.1.4
		 
		
		 Step 4 - Building and running your game](#Step_4_-_Building_and_running_your_game)
		- [1.1.5
		 
		
		 Step 5 - Adding our first additional function to main.cpp](#Step_5_-_Adding_our_first_additional_function_to_main.cpp)
		- [1.1.6
		 
		
		 Step 6 - Saving information with variables](#Step_6_-_Saving_information_with_variables)
		- [1.1.7
		 
		
		 Step 6 - Getting input from the keyboard](#Step_6_-_Getting_input_from_the_keyboard)
		- [1.1.8
		 
		
		 Step 7 - Making the Game loop](#Step_7_-_Making_the_Game_loop)
	+ [1.2
	 
	
	 End notes & Resources](#End_notes_&_Resources)
* [2
 

 Source](#Source)
* [3
 

 Nintendo e-Reader](#Nintendo_e-Reader)
	+ [3.1
	 
	
	 Nintendo e-Reader](#Nintendo_e-Reader_2)
	+ [3.2
	 
	
	 Further reading](#Further_reading)
* [4
 

 Resources](#Resources)









 HAM IDE
==========




 Game Boy Advance Development
 

*Development of a sample drawing application* 


### 

 GBA development with the HAM IDE and compiler
 


 [
 
[edit](/w/index.php?title=GBA_Development/HAM_IDE&veaction=edit&section=T-1 "Edit section: GBA development with the HAM IDE and compiler") 

 |
 
[edit source](/w/index.php?title=GBA_Development/HAM_IDE&action=edit&section=T-1 "Edit section: GBA development with the HAM IDE and compiler") 

 ]


#### 

 Step 1 - Setup
 


 [
 
[edit](/w/index.php?title=GBA_Development/HAM_IDE&veaction=edit&section=T-2 "Edit section: Step 1 - Setup") 

 |
 
[edit source](/w/index.php?title=GBA_Development/HAM_IDE&action=edit&section=T-2 "Edit section: Step 1 - Setup") 

 ]



 The first thing that needs to be done for this project is to download and install the necessary programs. Download the following files from these links
 


* [Software Development Kit](https://www.cameronjtinker.com/posts/gba-development-with-ham-271-sdk-for-windows)
* [Graphical User Interface Update](http://www.console-dev.de/bin/vham-26.zip)



 Open up the first executable and run it, when it is done extracting the files it will ask you to type in 'OK' (so do that), and also put in an installation path. Make the installation path C:\GBADev . When these steps are done, click on 'Install', and it should finish just fine.
 



 Next run the second executable, click on 'Next', then select 'I accept the agreement', click next again, select the folder that vham will be installed to (it should already be selected, but if not, put it under C:\GBADev\vham ), then click 'Next' -> 'Next' -> 'Next'-> 'Install' -> Finish'. If all went well you should have your Gameboy Advance development environment all set up and ready to make some games!
 


#### 

 Step 2 - Getting started with a new project
 


 [
 
[edit](/w/index.php?title=GBA_Development/HAM_IDE&veaction=edit&section=T-3 "Edit section: Step 2 - Getting started with a new project") 

 |
 
[edit source](/w/index.php?title=GBA_Development/HAM_IDE&action=edit&section=T-3 "Edit section: Step 2 - Getting started with a new project") 

 ]



 If you haven't already opened up the VHam environment, go ahead and double-click on the 'VisualHAM' icon on your desktop. Once its open we are going to create a new project, so go ahead and click on 'File' >> 'New' >> 'New Project'. The project type that we are going to make is a '[C++ Empty]' type project, so select that, and then type in a project name and location. It doesn't matter what the project name is, as long as you remember it, and the location can be any folder on the hard drive. (If you can't think of a good project name, or location just input "etchasketch" as the project name and "c:\projects\etchasketch" as the Location).
 


#### 

 Step 3 - Getting acquainted with the main.cpp file
 


 [
 
[edit](/w/index.php?title=GBA_Development/HAM_IDE&veaction=edit&section=T-4 "Edit section: Step 3 - Getting acquainted with the main.cpp file") 

 |
 
[edit source](/w/index.php?title=GBA_Development/HAM_IDE&action=edit&section=T-4 "Edit section: Step 3 - Getting acquainted with the main.cpp file") 

 ]



 Once the project has been created you will have in the left hand window 2 files that you can edit, main.cpp and makefile. Do not make any changes to the makefile (it will not be needed in this project), it is only needed for more advanced projects. The only file that we are going to be changing is the main.cpp file. Basically this file is the code that is executed when the game is being run. Go ahead and double click on 'main.cpp' in that left hand pane.
 



 Mostly this file is pretty empty, except for a few lines. All that your game does right now is just display's the HAM logo, and then shows a blank black screen. Let me explain what some of the items in this file are, and what they do.
 



```
#include <mygba.h>

```


 This line includes into the program a whole bunch of other functions and declaration that we can use. This is needed unless you want to do everything at a machine level (not pretty)
 



```
MULTIBOOT

```


 Allows your game to boot off off a linker cable and not need a cartridge. Not needed for our project, and it can be deleted.
 



```
int main(void)
{}

```


 Everything within the first and the very last curly brace is the main body of the program. The game starts at the first curly brace, and ends at the last ending brace.
 



```
ham_Init();

```


 First statement in the body of the program. Initializes all of the HAM features. Also causes that little 'Created with HAM" logo to show up at the beginning of your game.
 



```
while(true)
{}

```


 A loop that continues to run over and over again and never finishes. This basically stalls the game and causes it to never finish (Most of the time a console game will finish by the user turning off the power). If the game gets all the way to the end it will restart back at the begning. This statement just keeps things from ever ending.
 



```
return 0;

```


 This statement just tells your main() function to exit out with a return code of '0'. Generally this means that the program ended successfully. When this line is executed the game ends, and then restarts back up again (if the power is still on).
 


#### 

 Step 4 - Building and running your game
 


 [
 
[edit](/w/index.php?title=GBA_Development/HAM_IDE&veaction=edit&section=T-5 "Edit section: Step 4 - Building and running your game") 

 |
 
[edit source](/w/index.php?title=GBA_Development/HAM_IDE&action=edit&section=T-5 "Edit section: Step 4 - Building and running your game") 

 ]



 This step should be fairly easy to do. Once you have made any of your changes to the main.cpp file and you want to see how they affect the game, simply save your code by clicking on 'File' >> 'Save All', and then compile and run your game by pressing the 'F6' key on your keyboard. You can also build with other options by clicking on the red ! If everything worked correctly, you should have a running game! Congratulations... its not much yet, but soon it will be.
 


#### 

 Step 5 - Adding our first additional function to main.cpp
 


 [
 
[edit](/w/index.php?title=GBA_Development/HAM_IDE&veaction=edit&section=T-6 "Edit section: Step 5 - Adding our first additional function to main.cpp") 

 |
 
[edit source](/w/index.php?title=GBA_Development/HAM_IDE&action=edit&section=T-6 "Edit section: Step 5 - Adding our first additional function to main.cpp") 

 ]



 Now we are going to get into really adding some useful code into this game. We want our game to show something on the screen, right? Lets add a function that will draw a certain colored pixel to the screen. If you have questions about pixels or functions, I will explain this in class.
 



 Right after the line of code that says ham\_Init(); you will need to add the following line of code
 



```
ham_SetBgMode(3);

```


 This will set the gameboy hardware into a certain video mode (mode 3) that will give us direct access to the video memory in a sequential memory array (I'll explain that term in class). This makes it easy to put a single pixel on the screen basically.
 



 Now we need to add a function to our program. All functions will be added above the main() function, but below the #include <mygba.h> section. Any function that calls another can only call the functions that are declared above it. main() will be calling all of our other functions, so it needs to be at the bottom. Add the following function to your main.cpp file
 



```
//Function that draws a single pixel to the screen
void drawPix(int xPos, int yPos, int color)
{
unsigned short* videoBuffer = (unsigned short*)0x6000000;
videoBuffer[(yPos*240) + xPos] = color;
}

```


 Now that you have that function, anywhere in your main() function you can call drawPix(). You need to give the function how far to the right of the screen (xPos), how far down on the screen (yPos), and what color to make the pixel (color). I'll explain this is better detail in class. But if example you wanted to draw a single white pixel 50 pixels over and 100 pixels down, you would call in your main() the following line of code
 



```
drawPix(50,100,0xFFFFFF);

```


 You can test this, save your project, and then run your program (see step 4 for detail on that).
 


#### 

 Step 6 - Saving information with variables
 


 [
 
[edit](/w/index.php?title=GBA_Development/HAM_IDE&veaction=edit&section=T-7 "Edit section: Step 6 - Saving information with variables") 

 |
 
[edit source](/w/index.php?title=GBA_Development/HAM_IDE&action=edit&section=T-7 "Edit section: Step 6 - Saving information with variables") 

 ]



 With our Etch-A-Sketch program we are going to need to save certain information about where the Etch-A-Stetch pen is, and what color it is currently drawing. This is going to take 5 variables. 2 of them will save where the pen is at (how far over and down it is), and then other 4 for the color (how much Red, Green, and Blue is in the pen, as well as the total pen color).
 



 Right above your function that we just declared, we are going to make 6 global variables. Put the following lines right below your #include <mygba.h> section (but above the other functions).
 



```
// Global variables
int curX, curY, curColor;
u8 cR, cG, cB;

```


 We also need to initialize these variables in your main() function so that the values are set to zero, and not to some random garbage value. Right under the statement ham\_SetBgMode(3); put the following lines
 



```
curX = 0;
curY = 0;
cR = 0xFF;
cG = 0xFF;
cB = 0xFF;
curColor = 0xFFFF;

```


 Now you can keep track of your drawing pen from any function by either checking the value of this variable, or you can change the value to something else. We will be doing this later on when we get input from the joypad. In fact this leads right up to our next section.
 


#### 

 Step 6 - Getting input from the keyboard
 


 [
 
[edit](/w/index.php?title=GBA_Development/HAM_IDE&veaction=edit&section=T-8 "Edit section: Step 6 - Getting input from the keyboard") 

 |
 
[edit source](/w/index.php?title=GBA_Development/HAM_IDE&action=edit&section=T-8 "Edit section: Step 6 - Getting input from the keyboard") 

 ]



 What good is a game if you can't control it? Input is actually pretty easy. Its just a matter of checking to see if certain values are true are false. Basically the 'A' button is either being pressed at a given time, or its not. The tricky part is deciding what each of these key buttons being pressed means. Lets make another function right under the drawPix() function that gets input from the joypad, and changes our variables based on that input.
 



```
//Gets input from the joypad
void query_input()
{

}

```


 Notice how there is some blank space in between the curly braces. We are going to add some more code in here that is actually going to check the joypad buttons. This is done by using an If() statement. If the statement is true, then the line of code right below will get run, otherwise it will be skipped. Lets say that we want to move the pen down when the down button is pressed. We would use the following 2 lines of code
 



```
if (F_CTRLINPUT_DOWN_PRESSED)
curY++;

```


 If the down button is being held down when this code executes, the variable curY will be incremented by 1. variable++ means the same as varible = variable + 1
Lets put the following code into the query\_input() function
 



```
if (F_CTRLINPUT_UP_PRESSED)
curY--;
if (F_CTRLINPUT_DOWN_PRESSED)
curY++;
if (F_CTRLINPUT_LEFT_PRESSED)
curX--;
if (F_CTRLINPUT_RIGHT_PRESSED)
curX++;
if (F_CTRLINPUT_B_PRESSED)
curColor = RGB(--cR, cG, cB);
if (F_CTRLINPUT_A_PRESSED)
curColor = RGB(cR, --cG, cB);
if (F_CTRLINPUT_L_PRESSED)
curColor = RGB(cR, cG, --cB);
if (F_CTRLINPUT_R_PRESSED)
{
cR = 0xFF;
cG = 0xFF;
cB = 0xFF;
curColor = RGB(cR, cG, cB);
}

```


 This code segment is a little long and ugly, and I will explain more in class about specifics, but all it pretty much does it check the up, down, left, right, B, A, L, and R buttons on the joypad. When those are pressed it sets variables to certain values.
 


#### 

 Step 7 - Making the Game loop
 


 [
 
[edit](/w/index.php?title=GBA_Development/HAM_IDE&veaction=edit&section=T-9 "Edit section: Step 7 - Making the Game loop") 

 |
 
[edit source](/w/index.php?title=GBA_Development/HAM_IDE&action=edit&section=T-9 "Edit section: Step 7 - Making the Game loop") 

 ]



 We've got a function to get input from the user, we have a function to put stuff on the screen, not we just have to put it all togeather by making our main game loop. We are making one more function that will be called on every screen refresh, basically once every 60 seconds or so. Every screen refresh we are going to check the input buttons, and then draw to the screen. Right after your drawPix() and query\_input(), but before your main() functions you need to make another function that calls both of those other first 2 functions.
 



```
// Function called every screen refresh
void vbl_func()
{
query_input();
drawPix(curX,curY, curColor);
}

```


 Pretty simple isn't it? It really is. Most of the work is already being done in the other 2 functions that we made, so there isn't much more work to do in here. The only other thing that we need to do is to call this functions every 1/60th of a second. This can be done by putting in main() after the variable initialization the following code statement
 



```
//Starts running the vbl_func every screen refresh
ham_StartIntHandler(INT_TYPE_VBL,(void*)&vbl_func);

```


 Now that it is checking the joypad every 1/60th of a second, and drawing your pen to the screen, your Etch-A-Sketch is done! Save the file, build it and run it! There still might be other enhancements that you could add to it (such as stopping the pen from falling off the side of the screen, or adding on screen instructions that explain how to use the game). You have an interactive, and I might add pretty fun, program that runs on a Gameboy Advance system.
 



 Once you've got the basic program running correctly, save it off and back it up, then try making other changes to the program on your own and see if you can make the program a little more unique and personal. Maybe you could make the pen bigger or a different shape than just a single dot, or maybe make the pen spin around in a circle when you press the start button, or any one of a hundred different things.
 






 End notes & Resources
 


 [
 
[edit](/w/index.php?title=GBA_Development/HAM_IDE&veaction=edit&section=T-10 "Edit section: End notes & Resources") 

 |
 
[edit source](/w/index.php?title=GBA_Development/HAM_IDE&action=edit&section=T-10 "Edit section: End notes & Resources") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 .mw-parser-output .reflist{font-size:90%;margin-bottom:0.5em;list-style-type:decimal}.mw-parser-output .reflist .references{font-size:100%;margin-bottom:0;list-style-type:inherit}.mw-parser-output .reflist-columns-2{column-width:30em}.mw-parser-output .reflist-columns-3{column-width:25em}.mw-parser-output .reflist-columns{margin-top:0.3em}.mw-parser-output .reflist-columns ol{margin-top:0}.mw-parser-output .reflist-columns li{page-break-inside:avoid;break-inside:avoid-column}.mw-parser-output .reflist-upper-alpha{list-style-type:upper-alpha}.mw-parser-output .reflist-upper-roman{list-style-type:upper-roman}.mw-parser-output .reflist-lower-alpha{list-style-type:lower-alpha}.mw-parser-output .reflist-lower-greek{list-style-type:lower-greek}.mw-parser-output .reflist-lower-roman{list-style-type:lower-roman}
 


* [HAM Gameboy Advance Development Web Site](http://www.ngine.de/)
* [VisualHAM Web Site](http://visualham.console-dev.de/)
* [HAM Basic Tutorial](http://www.aaronrogers.com/ham/index.php)
* ["Programming the Nintendo Game Boy Advance: The Unofficial Guide"](http://jharbour.com/wordpress/portfolio/programming-the-nintendo-game-boy-advance-the-unofficial-guide/) 
 .
* [Programming the Nintendo Gameboy Advance the Unoffical Guide (online book in PDF format)](http://www.aaronrogers.com/ham/Books/PTGBA/)
* [Complete Source code to this project](/wiki/GBA_Development/Source "GBA Development/Source")
* [Compiled Binary ROM for this project](http://www.myplanet.net/banazir/sketch.gba)
* Peter Schraut.
 ["HEL Library"](http://console-dev.de/?page_id=16) 
 . depends on the HAM SDK.



  










 Source
=========




|  |  |
| --- | --- |
| 
[GNU head](/wiki/File:Heckert_GNU_white.svg "GNU head")
 | 
 This work is
 [free software](https://en.wikipedia.org/wiki/free_software "w:free software") 
 ; you can redistribute it and/or modify it under the terms of the
 **[GNU General Public License](https://en.wikipedia.org/wiki/GNU_General_Public_License "w:GNU General Public License")**
 as published by the
 [Free Software Foundation](https://en.wikipedia.org/wiki/Free_Software_Foundation "w:Free Software Foundation") 
 ; either version 2 of the License, or (at your option) any later version. This work is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 [GNU General Public License](http://www.gnu.org/copyleft/gpl.html) 
 for more details.
  |



```
#include <mygba.h>

// Global variables
int curX, curY, curColor;
u8 cR, cG, cB;

//Function that draws a single pixel to the screen
void drawPix(int xPos, int yPos, int color)
{
   unsigned short* videoBuffer = (unsigned short*)0x6000000;
   videoBuffer[(yPos*240) + xPos] = color;
}

//Gets input from the joypad
void query_input()
{
      if (F_CTRLINPUT_UP_PRESSED)
         curY--;
      if (F_CTRLINPUT_DOWN_PRESSED)
         curY++;
      if (F_CTRLINPUT_LEFT_PRESSED)
         curX--;
      if (F_CTRLINPUT_RIGHT_PRESSED)
         curX++;
      if (F_CTRLINPUT_B_PRESSED)
         curColor = RGB(++cR, cG, cB);
      if (F_CTRLINPUT_A_PRESSED)
         curColor = RGB(cR, ++cG, cB);
      if (F_CTRLINPUT_L_PRESSED)
         curColor = RGB(cR, cG, ++cB);
      if (F_CTRLINPUT_R_PRESSED)
      {
         cR = 0xFF;
         cG = 0xFF;
         cB = 0xFF;
         curColor = RGB(cR, cG, cB);
      }

}

// Function called every screen refresh
void vbl_func()
{
      query_input();
      drawPix(curX,curY, curColor);
}

//Program entrance
int main(void)
{

   // Initializing HAM and background mode
   ham_Init();
   ham_SetBgMode(3);

   // Initializing global variables
   curX = 0;
   curY = 0;
   cR = 0xFF;
   cG = 0xFF;
   cB = 0xFF;
   curColor = 0xFFFF;

   //Starts running the vbl_func every screen refresh
   ham_StartIntHandler(INT_TYPE_VBL,(void*)&vbl_func);

   while(true)
   {
   }
   return 0;
}

```


  










 Nintendo e-Reader
====================




 Nintendo e-Reader
 


 [
 
[edit](/w/index.php?title=GBA_Development/Nintendo_e-Reader&veaction=edit&section=T-1 "Edit section: Nintendo e-Reader") 

 |
 
[edit source](/w/index.php?title=GBA_Development/Nintendo_e-Reader&action=edit&section=T-1 "Edit section: Nintendo e-Reader") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------




|  |  |
| --- | --- |
| 



 | 
[Wikipedia](https://en.wikipedia.org/wiki/ "w:") 
 has related information at
 [***Nintendo e-Reader***](https://en.wikipedia.org/wiki/Nintendo_e-Reader)
 |



 Once you have written your own new custom GBA program, you could potentially distribute it to other people—if they have a e-Reader—in the form of "e-Cards".
 [[1]](#cite_note-1)
[[2]](#cite_note-2)




 The e-Reader scans special cards printed with a "Dot Code".
Cards may be swiped in either direction (left or right).
When a program comes on two or more cards,
the cards do not need to be swiped in any particular order.
 [[3]](#cite_note-3)
[[4]](#cite_note-4)
[[5]](#cite_note-5)




 Tim Schuerewegen was successful in cracking the "dot code" code and was able to turn some homebrew programs into cards, playable on the e-Reader device. Using a special program, one is able to convert program data into a card stripe, and print it onto a piece of paper that can then be scanned and interpreted by the e-Reader.
 [[6]](#cite_note-6)
[[7]](#cite_note-7)





|  |  |
| --- | --- |
| 



 | 
[Wikipedia](https://en.wikipedia.org/wiki/ "w:") 
 has related information at
 [***List of Game & Watch games***](https://en.wikipedia.org/wiki/List_of_Game_%26_Watch_games)
 |



 For example, a homebrew NES game by Snobro,
 *BombSweeper* 
 (a Game & Watch title clone), as well as numerous tech demos ("hello world," "Mario sprite," etc.) were made into executable files that could be converted into dot code.
 



 Each card can hold up to two code strips.
A long code holds 2.2 kilobytes of information.
 [[8]](#cite_note-8)




 A byproduct of the homebrew effort was that a method of "dumping" the data encased in the dot code of e-Cards was discovered. This led to a modified version of the e-Reader ROM image being created that can accept these "dumps" and interpret them for use in an emulator.
 



 Homebrew cards can be created from any NES, Z80, or ARM game by first compressing it with nvpktool.exe and then converting into BMP images with nedcmake.exe.
 




 Further reading
 


 [
 
[edit](/w/index.php?title=GBA_Development/Nintendo_e-Reader&veaction=edit&section=T-2 "Edit section: Further reading") 

 |
 
[edit source](/w/index.php?title=GBA_Development/Nintendo_e-Reader&action=edit&section=T-2 "Edit section: Further reading") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------





1. [↑](#cite_ref-1) 


 Nintendo.
 ["What are the Dot Codes on the edges of some of the cards?"](http://www.nintendo.com/consumer/systems/cards/cards_index.jsp) 
 .
2. [↑](#cite_ref-2) 


 simoniker.
 ["Nintendo e-Reader Gets Homebrew Dot-Code Games"](http://games.slashdot.org/story/04/04/19/1745253/nintendo-e-reader-gets-homebrew-dot-code-games) 
 .
Slashdot.
2004.
3. [↑](#cite_ref-3) 


 Nintendo.
 ["What are the Dot Codes on the edges of some of the cards?"](http://www.nintendo.com/consumer/systems/cards/cards_index.jsp) 
 .
4. [↑](#cite_ref-4) 


 Nintendo.
 ["e-Reader instruction booklet"](https://www.nintendo.com/consumer/downloads/ereader_english.pdf) 
 .
5. [↑](#cite_ref-5) 


 Nintendo.
 ["e-Reader - Scanning a Card"](http://www.nintendo.com/consumer/systems/gameboyadvance/ereader_scanning.jsp) 
 .
6. [↑](#cite_ref-6) 


 "
 [Homebrew tools and instructions](http://users.skynet.be/firefly/gba/e-reader/) 
 ". July 18, 2009.
7. [↑](#cite_ref-7) 


 Nintendo World Report Forums.
 ["Homebrew e-Reader Games hit the Scene"](http://www.nintendoworldreport.com/forums/index.php?topic=8802.0) 
 .
2004.
8. [↑](#cite_ref-8) 


["Game Boy E-Reader"](https://web.archive.org/web/20080917112617/http://www.vidgame.net/NINTENDO/e_reader.htm) 
 .





  










 Resources
============




|  |  |
| --- | --- |
| 



 | 
[Wikipedia](https://en.wikipedia.org/wiki/ "w:") 
 has related information at
 [***homebrew (video games)***](https://en.wikipedia.org/wiki/Homebrew_(video_games))
 |




|  |  |
| --- | --- |
| 



 | 
[Wikipedia](https://en.wikipedia.org/wiki/ "w:") 
 has related information at
 [***VisualBoyAdvance***](https://en.wikipedia.org/wiki/VisualBoyAdvance)
 |


* [Tonc, a tutorial on GBA programming](http://www.coranac.com/tonc/) 
 by Jasper Vijn
* Damian Yerrick.
 [Pin Eight: "Game Boy Advance Software Development"](http://www.pineight.com/gba/) 
 .



 Other Wikibooks on console platform development:
 


* [PSP Programming](/wiki/PSP_Programming "PSP Programming")
* [Nintendo Wii Programming](/w/index.php?title=Nintendo_Wii_Programming&action=edit&redlink=1 "Nintendo Wii Programming (does not exist)") 
 (coming someday)
* [N64 Programming](/wiki/N64_Programming "N64 Programming")
* [Xbox 360](/wiki/Xbox_360 "Xbox 360")
* [Game Creation with XNA](/wiki/Game_Creation_with_XNA "Game Creation with XNA") 
 for the Xbox 360



 Other Wikibooks:
 


* [Emulation](/wiki/Emulation "Emulation") 
 has a list of emulators for the Game Boy and Game Boy Advanced --
 [Game Boy emulators that run on Linux](/wiki/Emulation/On_PC_-_Linux#Gameboy_and_Gameboy_Color "Emulation/On PC - Linux") 
 , Game Boy emulators and Game Boy Advance emulators that run on OSX, etc.



 Other Wiki resources:
 


* ["the Gameboy Development Wiki"](http://gbdev.gg8.se/wiki/) 
 .
* ["GameBoy Advance Barebones"](http://wiki.osdev.org/GameBoy_Advance_Barebones) 
 on the OS Dev wiki.
* ["Pascal on the Game Boy Advance"](http://wiki.freepascal.org/GameBoy_Advance) 
 on the Free Pascal wiki.



 Other resources:
 


* ["Gameboy Development on Mac OS X"](https://38leinad.wordpress.com/2012/03/03/gameboy-development-on-mac-os-x/) 
 .
* Amit Singh.
 ["UNIX on the Game Boy Advance"](http://www.kernelthread.com/publications/gbaunix/) 
 .
* Loirak.
 ["Gameboy Programming and Gameboy Advance Development"](http://www.loirak.com/gameboy/)
* ["GameBoy Developers Kit"](https://gbdk.sourceforge.net/) 
 (GBDK)
* [Stack Overflow questions tagged 'gameboy'](http://stackoverflow.com/questions/tagged/gameboy)
* ["Duo's GameBoy ASMSchool"](http://gameboy.mongenel.com/asmschool.html)
* ["Making Gameboy games: installing the GBDK compiler in Ubuntu Linux"](http://mariusgames.com/post/53850419194/making-gameboy-games-installing-the-gbdk-compiler) 
 .
* Chris Antonellis.
 ["Gameboy Programming Resources"](http://www.chrisantonellis.com/gameboy/) 
 .
* Howard Wen.
 ["GBA Programming with DevKit Advance"](http://www.linuxdevcenter.com/pub/a/linux/2003/11/06/devkit_advance.html) 
 .
* ["CowBite Virtual Hardware Specifications"](http://www.cs.rit.edu/~tjh8300/CowBite/CowBiteSpecFrame.htm) 
 describes low-level details of the hardware emulated by one GBA emulator, which in theory should work the same as the actual physical hardware of the GBA.
* ["GameBoy Dev'rs"](http://devrs.com/gb/) 
 .
* Patrick Meade.
 ["Homebrew Engineer's Notebook: Game Boy Advance Development"](http://pages.cs.wisc.edu/~meade/gbadev/hengbad.html) 
 .
* ["GBAGuy's Lair"](https://patater.com/gbaguy/) 
 includes some GBA ASM Tutorials.
* Doug Lanford.
 ["Game Boy Development"](http://www.opusgames.com/games/GBDev/GBDev.html) 
 .
* ["Gambatte"](https://github.com/libretro/gambatte-libretro) 
 . "an accuracy-focused, open-source, cross-platform Game Boy Color emulator".
* ["DMGBoy (Dot Matrix Game Boy)"](https://code.google.com/p/dmgboy/) 
 . a Game Boy / Game Boy Color emulator.
* ["GBA dev"](https://davidgf.net/section/12/gba-dev) 
 .
* ["Gameboy Advance Development in Linux"](http://gba.atlantes.org/)
* ["Porting Nut/OS for the GameBoy Advance"](http://www.ethernut.de/en/portarm/gbaxport2.html)
* ["Towers of Hanoi implemented for Nintendo's Gameboy Advance hand-held system."](http://www.kernelthread.com/projects/hanoi/html/gfx-gba.html)



  










![](//en.wikibooks.org/wiki/Special:CentralAutoLogin/start?type=1x1)


 Retrieved from "
 <https://en.wikibooks.org/w/index.php?title=GBA_Development/Printable_version&oldid=4001692>
 "
 



[Categories](/wiki/Special:Categories "Special:Categories") 
 :
 * [Print Versions](/wiki/Category:Print_Versions "Category:Print Versions")
* [Book:GBA Development](/wiki/Category:Book:GBA_Development "Category:Book:GBA Development")








 Navigation menu
-----------------




### 

 Personal tools



* Not logged in
* [Discussion for this IP address](/wiki/Special:MyTalk "Discussion about edits from this IP address [n]")
* [Contributions](/wiki/Special:MyContributions "A list of edits made from this IP address [y]")
* [Create account](/w/index.php?title=Special:CreateAccount&returnto=GBA+Development%2FPrintable+version "You are encouraged to create an account and log in; however, it is not mandatory")
* [Log in](/w/index.php?title=Special:UserLogin&returnto=GBA+Development%2FPrintable+version "You are encouraged to log in; however, it is not mandatory [o]")






### 

 Namespaces



* [Book](/wiki/GBA_Development/Printable_version "View the content page [c]")
* [Discussion](/w/index.php?title=Talk:GBA_Development/Printable_version&action=edit&redlink=1 "Discussion about the content page (does not exist) [t]")








 English
 









### 

 Views



* [Read](/wiki/GBA_Development/Printable_version)
* [Edit](/w/index.php?title=GBA_Development/Printable_version&veaction=edit "Edit this page [v]")
* [Edit source](/w/index.php?title=GBA_Development/Printable_version&action=edit "Edit this page [e]")
* [View history](/w/index.php?title=GBA_Development/Printable_version&action=history "Past revisions of this page [h]")








 More
 







### 
 Search


















### 

 Navigation



* [Main Page](/wiki/Main_Page "Visit the main page [z]")
* [Help](/wiki/Help:Contents "Find help on how to use and edit Wikibooks")
* [Browse](/wiki/Wikibooks:Card_Catalog_Office "Check out what Wikibooks has to offer")
* [Cookbook](/wiki/Cookbook:Table_of_Contents "Learn recipes from around the world")
* [Wikijunior](/wiki/Wikijunior "Books for children")
* [Featured books](/wiki/Wikibooks:Featured_books "The best of Wikibooks")
* [Recent changes](/wiki/Special:RecentChanges "A list of recent changes in the wiki [r]")
* [Donations](//donate.wikimedia.org/wiki/Special:FundraiserRedirector?utm_source=donate&utm_medium=sidebar&utm_campaign=C13_en.wikibooks.org&uselang=en "Support Wikibooks")
* [Random book](/wiki/Special:RandomInCategory/Book:Wikibooks_Stacks/Books)
* [Using Wikibooks](/wiki/Using_Wikibooks)





### 

 community



* [Reading room forum](/wiki/Wikibooks:Reading_room)
* [Community portal](/wiki/Wikibooks:Community_Portal "Find your way around the Wikibooks community")
* [Bulletin Board](/wiki/Wikibooks:Reading_room/Bulletin_Board "Important community news")
* [Help out!](/wiki/Wikibooks:Maintenance "Frequent tasks that you can help with")
* [Policies and guidelines](/wiki/Wikibooks:Policies_and_guidelines "Pages detailing important rules and procedures")
* [Contact us](/wiki/Wikibooks:Contact_us "Alternative methods of communication")





### 

 Tools



* [What links here](/wiki/Special:WhatLinksHere/GBA_Development/Printable_version "A list of all wiki pages that link here [j]")
* [Related changes](/wiki/Special:RecentChangesLinked/GBA_Development/Printable_version "Recent changes in pages linked from this page [k]")
* [Upload file](//commons.wikimedia.org/wiki/Special:UploadWizard?uselang=en "Upload files [u]")
* [Special pages](/wiki/Special:SpecialPages "A list of all special pages [q]")
* [Permanent link](/w/index.php?title=GBA_Development/Printable_version&oldid=4001692 "Permanent link to this revision of this page")
* [Page information](/w/index.php?title=GBA_Development/Printable_version&action=info "More information about this page")
* [Cite this page](/w/index.php?title=Special:CiteThisPage&page=GBA_Development%2FPrintable_version&id=4001692&wpFormIdentifier=titleform "Information on how to cite this page")





### 

 sister projects



* [Wikipedia](https://en.wikipedia.org/wiki/Main_Page)
* [Wikiversity](https://en.wikiversity.org/wiki/Wikiversity:Main_Page)
* [Wiktionary](https://en.wiktionary.org/wiki/Wiktionary:Main_Page)
* [Wikiquote](https://en.wikiquote.org/wiki/Main_Page)
* [Wikisource](https://en.wikisource.org/wiki/Main_Page)
* [Wikinews](https://en.wikinews.org/wiki/Main_Page)
* [Wikivoyage](https://en.wikivoyage.org/wiki/Main_Page)
* [Commons](https://commons.wikimedia.org/wiki/Main_Page)
* [Wikidata](https://www.wikidata.org/wiki/Wikidata:Main_Page)
* [MediaWiki](https://www.mediawiki.org/wiki/Main_Page)
* [Meta-Wiki](https://meta.wikimedia.org/wiki/Main_Page)





### 

 Print/export



* [Create a collection](/w/index.php?title=Special:Book&bookcmd=book_creator&referer=GBA+Development%2FPrintable+version)
* [Download as PDF](/w/index.php?title=Special:DownloadAsPdf&page=GBA_Development%2FPrintable_version&action=show-download-screen)
* [Printable version](/w/index.php?title=GBA_Development/Printable_version&printable=yes "Printable version of this page [p]")





### 

 In other languages









[Add links](https://www.wikidata.org/wiki/Special:NewItem?site=enwikibooks&page=GBA+Development%2FPrintable+version "Add interlanguage links") 







* This page was last edited on 6 November 2021, at 23:00.
* Text is available under the
 [Creative Commons Attribution-ShareAlike License](//creativecommons.org/licenses/by-sa/4.0/) 
 ; additional terms may apply. By using this site, you agree to the
 [Terms of Use](//foundation.wikimedia.org/wiki/Terms_of_Use) 
 and
 [Privacy Policy.](//foundation.wikimedia.org/wiki/Privacy_policy)


* [Privacy policy](https://foundation.wikimedia.org/wiki/Special:MyLanguage/Policy:Privacy_policy)
* [About Wikibooks](/wiki/Wikibooks:Welcome)
* [Disclaimers](/wiki/Wikibooks:General_disclaimer)
* [Code of Conduct](https://foundation.wikimedia.org/wiki/Special:MyLanguage/Universal_Code_of_Conduct)
* [Mobile view](//en.m.wikibooks.org/w/index.php?title=GBA_Development/Printable_version&mobileaction=toggle_view_mobile)
* [Developers](https://developer.wikimedia.org)
* [Statistics](https://stats.wikimedia.org/#/en.wikibooks.org)
* [Cookie statement](https://foundation.wikimedia.org/wiki/Special:MyLanguage/Policy:Cookie_statement)


* [![Wikimedia Foundation](/static/images/footer/wikimedia-button.png)](https://wikimediafoundation.org/)
* [![Powered by MediaWiki](/static/images/footer/poweredby_mediawiki_88x31.png)](https://www.mediawiki.org/)




