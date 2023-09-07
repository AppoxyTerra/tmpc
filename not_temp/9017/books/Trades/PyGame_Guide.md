




 PyGame Guide/Printable version - Wikibooks, open books for an open world
 








































 PyGame Guide/Printable version
=================================




 From Wikibooks, open books for an open world
 



 <
 [PyGame Guide](/wiki/PyGame_Guide "PyGame Guide") 







[Jump to navigation](#mw-head) 
[Jump to search](#searchInput) 



[![Book logo](//upload.wikimedia.org/wikipedia/commons/thumb/c/c4/Rachel%27s_PyGame_Guide.png/300px-Rachel%27s_PyGame_Guide.png)](/wiki/File:Rachel%27s_PyGame_Guide.png "Book logo")

 Book logo
 



|  |  |
| --- | --- |
| 



 | **This is the
 [print version](/wiki/Help:Print_versions "Help:Print versions") 
 of
 [PyGame Guide](/wiki/PyGame_Guide "PyGame Guide")**

 You won't see this message or any elements not part of the book's content when you print or
 [preview](https://en.wikibooks.org/w/index.php?title=PyGame_Guide/Printable_version&printable=yes) 
 this page.
  |




  





 PyGame Guide
 



 The current, editable version of this book is available in Wikibooks, the open-content textbooks collection, at
   


<https://en.wikibooks.org/wiki/PyGame_Guide>





 Permission is granted to copy, distribute, and/or modify this document under the terms of the
 [Creative Commons Attribution-ShareAlike 3.0 License](/wiki/Wikibooks:Creative_Commons_Attribution-ShareAlike_3.0_Unported_License "Wikibooks:Creative Commons Attribution-ShareAlike 3.0 Unported License") 
 .
 





 Contents
----------







* [1
 

 Introduction](#Introduction)
	+ [1.1
	 
	
	 Contact](#Contact)
	+ [1.2
	 
	
	 License](#License)
	+ [1.3
	 
	
	 About the author](#About_the_author)
* [2
 

 Getting Ready](#Getting_Ready)
	+ [2.1
	 
	
	 About this guide](#About_this_guide)
	+ [2.2
	 
	
	 Prerequisites](#Prerequisites)
	+ [2.3
	 
	
	 What is Python and PyGame?](#What_is_Python_and_PyGame?)
	+ [2.4
	 
	
	 Setting up Python and PyGame](#Setting_up_Python_and_PyGame)
		- [2.4.1
		 
		
		 Downloading PyGame](#Downloading_PyGame)
			* [2.4.1.1
			 
			
			 Windows](#Windows)
			* [2.4.1.2
			 
			
			 Linux](#Linux)
			* [2.4.1.3
			 
			
			 Mac](#Mac)
		- [2.4.2
		 
		
		 Downloading a text editor](#Downloading_a_text_editor)
			* [2.4.2.1
			 
			
			 Geany](#Geany)
	+ [2.5
	 
	
	 Testing it out](#Testing_it_out)
		- [2.5.1
		 
		
		 Making sure Python works](#Making_sure_Python_works)
			* [2.5.1.1
			 
			
			 Example output](#Example_output)
		- [2.5.2
		 
		
		 Making sure PyGame works](#Making_sure_PyGame_works)
* [3
 

 Python Crash Course](#Python_Crash_Course)
* [4
 

 2D Game Development Concepts](#2D_Game_Development_Concepts)
	+ [4.1
	 
	
	 Birds-eye-view: How game programs work](#Birds-eye-view:_How_game_programs_work)
		- [4.1.1
		 
		
		 The coordinate plane](#The_coordinate_plane)
		- [4.1.2
		 
		
		 Variables](#Variables)
		- [4.1.3
		 
		
		 Functions](#Functions)
		- [4.1.4
		 
		
		 Classes](#Classes)
* [5
 

 PyGame Crash Course](#PyGame_Crash_Course)
	+ [5.1
	 
	
	 The bare-minimum PyGame program](#The_bare-minimum_PyGame_program)
		- [5.1.1
		 
		
		 Your project folder and files](#Your_project_folder_and_files)
		- [5.1.2
		 
		
		 Making a basic PyGame program](#Making_a_basic_PyGame_program)
			* [5.1.2.1
			 
			
			 Importing libraries](#Importing_libraries)
			* [5.1.2.2
			 
			
			 Initializing PyGame](#Initializing_PyGame)
			* [5.1.2.3
			 
			
			 The basic game loop](#The_basic_game_loop)
			* [5.1.2.4
			 
			
			 Detecting a quit event](#Detecting_a_quit_event)
			* [5.1.2.5
			 
			
			 Updating the screen](#Updating_the_screen)
			* [5.1.2.6
			 
			
			 First test](#First_test)
			* [5.1.2.7
			 
			
			 Cleaning it up a little](#Cleaning_it_up_a_little)
				+ [5.1.2.7.1
				 
				
				 Top of the program](#Top_of_the_program)
				+ [5.1.2.7.2
				 
				
				 Creating color](#Creating_color)
				+ [5.1.2.7.3
				 
				
				 Loading images](#Loading_images)
			* [5.1.2.8
			 
			
			 Second test](#Second_test)
			* [5.1.2.9
			 
			
			 Documentation links](#Documentation_links)
	+ [5.2
	 
	
	 Images](#Images)
		- [5.2.1
		 
		
		 Load an image](#Load_an_image)
		- [5.2.2
		 
		
		 Draw an image](#Draw_an_image)
		- [5.2.3
		 
		
		 Draw part of an image](#Draw_part_of_an_image)
		- [5.2.4
		 
		
		 Documentation links](#Documentation_links_2)
	+ [5.3
	 
	
	 Audio](#Audio)
		- [5.3.1
		 
		
		 Load a music file](#Load_a_music_file)
		- [5.3.2
		 
		
		 Play the music](#Play_the_music)
		- [5.3.3
		 
		
		 Pause the music](#Pause_the_music)
		- [5.3.4
		 
		
		 Un-pause the music](#Un-pause_the_music)
		- [5.3.5
		 
		
		 Set the music volume](#Set_the_music_volume)
		- [5.3.6
		 
		
		 Get the music volume](#Get_the_music_volume)
		- [5.3.7
		 
		
		 Create a sound file](#Create_a_sound_file)
		- [5.3.8
		 
		
		 Play a sound file](#Play_a_sound_file)
		- [5.3.9
		 
		
		 Set the sound volume](#Set_the_sound_volume)
		- [5.3.10
		 
		
		 Get the sound volume](#Get_the_sound_volume)
		- [5.3.11
		 
		
		 Documentation links](#Documentation_links_3)
	+ [5.4
	 
	
	 Fonts and text](#Fonts_and_text)
		- [5.4.1
		 
		
		 Loading a font](#Loading_a_font)
		- [5.4.2
		 
		
		 Creating a text Surface](#Creating_a_text_Surface)
		- [5.4.3
		 
		
		 Drawing a text Surface](#Drawing_a_text_Surface)
		- [5.4.4
		 
		
		 Documentation links](#Documentation_links_4)
	+ [5.5
	 
	
	 Keyboard and mouse input](#Keyboard_and_mouse_input)
		- [5.5.1
		 
		
		 Event types](#Event_types)
		- [5.5.2
		 
		
		 Mouse events](#Mouse_events)
		- [5.5.3
		 
		
		 Keyboard events](#Keyboard_events)
		- [5.5.4
		 
		
		 Smooth keyboard input](#Smooth_keyboard_input)
			* [5.5.4.1
			 
			
			 Key codes](#Key_codes)
		- [5.5.5
		 
		
		 Documentation links](#Documentation_links_5)









 Introduction
===============



[![Rachel making the peace sign](//upload.wikimedia.org/wikipedia/commons/f/f4/Rachel_making_the_peace_sign.png)](/wiki/File:Rachel_making_the_peace_sign.png "Rachel making the peace sign")

 Rachel making the peace sign
 


**Hey there!** 




 Hi! My name is Rachel. I'm a game developer and a teacher,
 and I'm here to teach you a bit about making 2D video games
 with Python and PyGame!
 



  

**What is Python and PyGame?** 




 Well, Python is a
 
 programming language
 
 and PyGame is a
 
 game development library.
 




  

**Wait... what's a library??** 




 Woah, one step at a time! We will go over game development terminology as well as basic concepts that you'll need to know for how a 2D game works -- How you place an image at a particular spot on the screen, how to know when two objects are touching, how to tell when a button is clicked, etc.
 



 But, for now, let's just start off with introductions! This is only the first page of the tutorial and I've gotta get a few things out of the way!
 



  

**OK, what's up?** 




 Well, I should probably tell you who I am, how to contact me if you find an error in this document, the document's license, and... you konw, maybe my website in case you want to check out some games I've made.
 



  






 Contact
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/Introduction&veaction=edit&section=T-1 "Edit section: Contact") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/Introduction&action=edit&section=T-1 "Edit section: Contact") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 IF you have questions, comments, or fixes for this document, please feel free to email me at Rachel@Moosader.com !
 



  






 License
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/Introduction&veaction=edit&section=T-2 "Edit section: License") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/Introduction&action=edit&section=T-2 "Edit section: License") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



[![CC BY SA icon](//upload.wikimedia.org/wikipedia/commons/thumb/1/1c/Cc_by-sa_%281%29.svg/60px-Cc_by-sa_%281%29.svg.png)](/wiki/File:Cc_by-sa_(1).svg "CC BY SA icon")

 CC BY SA icon
 


 This book is licensed under the CC-BY-SA 3.0 License license
 



 This means that you can share the book with anyone, for any reason. Just make sure my name (and any other future contributors) show up in the text (that is, that we are attributed!)
 




 About the author
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/Introduction&veaction=edit&section=T-3 "Edit section: About the author") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/Introduction&action=edit&section=T-3 "Edit section: About the author") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Rachel Wil Sha Singh is a programmer/teacher/game developer from the Kansas City area. Rachel grew up in the Raytown, MO area and spent their tween and teen years learning to make video games - first with Visual Basic 5, then with C++, and learning lots of other things from there! Rachel's most popular tutorial is the YouTube-based series, "Beginner's Guide to Game Programming", made in 2008.
 



 Rachel has worked as a web- and software-developer since 2010 after receiving their B.S. in Computer Science from UMKC. Rachel also runs a small startup called Moosader LLC.
 



  










 Getting Ready
================




 About this guide
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/Getting_Ready&veaction=edit&section=T-1 "Edit section: About this guide") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/Getting_Ready&action=edit&section=T-1 "Edit section: About this guide") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



[![Example game screenshot](//upload.wikimedia.org/wikipedia/commons/e/ed/Example_game_screenshot.png)](/wiki/File:Example_game_screenshot.png "Example game screenshot")

 Example game screenshot
 


**What does this guide cover?** 




 First, this guide covers the basic syntax and usage of the Python language in case you are coming from another language. If you've already spent time programming in Python, you can skip the "
 [Python Crash Course](/w/index.php?title=PyGame_Guide/Printable_version/Python_Crash_Course&action=edit&redlink=1 "PyGame Guide/Printable version/Python Crash Course (does not exist)") 
 " section.
 



 Second, this guide also covers the PyGame basics that you will need in order to build a functioning 2D game. The "
 [PyGame Crash Course](/w/index.php?title=PyGame_Guide/Printable_version/PyGame_Crash_Course&action=edit&redlink=1 "PyGame Guide/Printable version/PyGame Crash Course (does not exist)") 
 " runs through all the basic functionality pretty quickly, complete with example code.
 



 After we get the basics of Python and PyGame down, we will dive into building a few simple 2D games in "
 [The PyGame Cook Book](/w/index.php?title=PyGame_Guide/Printable_version/The_PyGame_Cook_Book&action=edit&redlink=1 "PyGame Guide/Printable version/The PyGame Cook Book (does not exist)") 
 ".
 



 Finally, there is a "Quick Reference" guide for both
 [Python](/w/index.php?title=PyGame_Guide/Printable_version/Python_Quick_Reference&action=edit&redlink=1 "PyGame Guide/Printable version/Python Quick Reference (does not exist)") 
 and
 [PyGame](/w/index.php?title=PyGame_Guide/Printable_version/PyGame_Quick_Reference&action=edit&redlink=1 "PyGame Guide/Printable version/PyGame Quick Reference (does not exist)") 
 , followed by a
 [Glossary](/w/index.php?title=PyGame_Guide/Printable_version/Glossary&action=edit&redlink=1 "PyGame Guide/Printable version/Glossary (does not exist)") 
 in case you need a refresher on any terms used in this book.
 




 Prerequisites
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/Getting_Ready&veaction=edit&section=T-2 "Edit section: Prerequisites") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/Getting_Ready&action=edit&section=T-2 "Edit section: Prerequisites") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



**What prior experience do I need?** 
 This guide works best if you have already had some prior programming experience in an object oriented language, such as C++, C#, and/or Java. In
the "
 [Python Crash Course](/w/index.php?title=PyGame_Guide/Printable_version/Python_Crash_Course&action=edit&redlink=1 "PyGame Guide/Printable version/Python Crash Course (does not exist)") 
 " chapter, I go over some of the basics of Python
so that you can be familiar with its syntax, but it is not an introductory
programming course and it doesn't cover theory and the basics you would
have had in a previous course.
 



**What if I haven't programmed before?** 




 You might be able to get started with 2D programming using just this guide
if you haven't had any programming classes before, but you will hit a wall
on the difficulty of problems that you can solve -- but don't worry, there are
plenty of free guides online that you can use to study up!
 






 What is Python and PyGame?
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/Getting_Ready&veaction=edit&section=T-3 "Edit section: What is Python and PyGame?") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/Getting_Ready&action=edit&section=T-3 "Edit section: What is Python and PyGame?") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



[![Python Logo](//upload.wikimedia.org/wikipedia/commons/thumb/c/c3/Python-logo-notext.svg/100px-Python-logo-notext.svg.png)](/wiki/File:Python-logo-notext.svg "Python Logo")

 Python Logo
 


**Python** 
 is an interpreted high-level programming language. In this case, "high
level" means further from machine code.
"High level" doesn't mean it is harder -
actually, high-level languages are generally
easier to use than low-level languages like
C. As a language, Python can be written in
an Object-Oriented Style (which should be
familiar if you're from the C++/C#/Java
side of things), but it also supports other programming paradigms - or other
ways of structuring and writing code. I prefer writing games using Object
Oriented techniques.
 



**PyGame** 
 is a library that can be used with Python. A library is pre-written code that can be reused in multiple programs. This usually includes
functions and classes that provide new functionality.
 



 PyGame handles features like:
 


* Loading and drawing graphics
* Loading and playing sounds
* Loading fonts and drawing text
* Detecting keyboard and mouse input



 Additionally, PyGame is built to be cross-platform, so you can write a
game on your machine, and your friends can run the game on Linux, Mac,
Windows, or even mobile devices!
 




 Setting up Python and PyGame
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/Getting_Ready&veaction=edit&section=T-4 "Edit section: Setting up Python and PyGame") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/Getting_Ready&action=edit&section=T-4 "Edit section: Setting up Python and PyGame") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



[![The PyGame Logo.](//upload.wikimedia.org/wikipedia/commons/thumb/b/be/Pygame_logo.svg/200px-Pygame_logo.svg.png)](/wiki/File:Pygame_logo.svg "The PyGame Logo.")

 The PyGame Logo.
 

### 

 Downloading PyGame
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/Getting_Ready&veaction=edit&section=T-5 "Edit section: Downloading PyGame") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/Getting_Ready&action=edit&section=T-5 "Edit section: Downloading PyGame") 

 ]



 The PyGame website has the downloads for PyGame, as well as a tutorial on
getting started, documentation for PyGame, and even a directory of games
made with PyGame. Once you create a game, you can put your game on the
directory, too! The PyGame website is at
 [pygame.org](http://www.pygame.org) 



#### 

 Windows
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/Getting_Ready&veaction=edit&section=T-6 "Edit section: Windows") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/Getting_Ready&action=edit&section=T-6 "Edit section: Windows") 

 ]



 For Windows, you will download a version of PyGame from here:
 <http://pygame.org/download.shtml>




 Look for the "Windows" header and download the version of PyGame
that contains "py2.7" in the title. At the time of writing, the latest version
is
 **pygame-1.9.1.win32-py2.7.msi** 
 .
 




|  |
| --- |
| **Python Versions** 

 Version 2 and Version 3 of Python have a lot of differences and are not always compatible between each other. This version of PyGame uses Python 2.7.
  |



 (Windows instructions work in progress)
 



  




#### 

 Linux
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/Getting_Ready&veaction=edit&section=T-7 "Edit section: Linux") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/Getting_Ready&action=edit&section=T-7 "Edit section: Linux") 

 ]



 (Linux instructions work in progress)
 



[![](//upload.wikimedia.org/wikipedia/commons/thumb/2/2d/Linux_screenshot_-_PyGame_install_in_the_package_manager.png/300px-Linux_screenshot_-_PyGame_install_in_the_package_manager.png)](/wiki/File:Linux_screenshot_-_PyGame_install_in_the_package_manager.png)




 If you're using Ubuntu, Linux Mint, or Debian, you should be able to install Python
via the Synaptic Package Manager, or even
the Software Manager.
 



 Search for "pygame", and you should
download the
 **python-pygame** 
 package. It
should also install the Python dependencies
at the same time.
 



  




#### 

 Mac
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/Getting_Ready&veaction=edit&section=T-8 "Edit section: Mac") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/Getting_Ready&action=edit&section=T-8 "Edit section: Mac") 

 ]



 (Mac instructions work in progress)
 



 For Mac, you will download a version of PyGame from here:
 <http://pygame.org/download.shtml>




 Look for the "Macintosh" header and download the version for py2.7.
 



  




### 

 Downloading a text editor
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/Getting_Ready&veaction=edit&section=T-9 "Edit section: Downloading a text editor") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/Getting_Ready&action=edit&section=T-9 "Edit section: Downloading a text editor") 

 ]



 Source code is all text, so you will need a decent text editor to write with.
The Windows default Notepad is a terrible program, so you should download
something else.
 


#### 

 Geany
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/Getting_Ready&veaction=edit&section=T-10 "Edit section: Geany") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/Getting_Ready&action=edit&section=T-10 "Edit section: Geany") 

 ]



 Geany is a free, cross-platform editor. You can also install additional plugins into Geany to customize it. Download it at:
 **<http://www.geany.org/Download/Releases>**




  

 (Text editor instructions work in progress)
 




 Testing it out
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/Getting_Ready&veaction=edit&section=T-11 "Edit section: Testing it out") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/Getting_Ready&action=edit&section=T-11 "Edit section: Testing it out") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Let's make sure that Python and PyGame are working correctly with some
small example programs. You can re-type the code given in this document,
or you can download the files from the guide repository at
 [bitbucket.org/moosaderllc/rachels-pygame-guide](https://bitbucket.org/moosaderllc/rachels-pygame-guide/) 



### 

 Making sure Python works
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/Getting_Ready&veaction=edit&section=T-12 "Edit section: Making sure Python works") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/Getting_Ready&action=edit&section=T-12 "Edit section: Making sure Python works") 

 ]



 First, create a directory on your computer for your Python projects, and
create a folder for this project (\Testing Python" or something). First we
will build just a Python program, and then we will build a PyGame program.
 



 In Geany, create a new file, and save it to your project directory as
simple
 **python.py** 
 . Make sure it has the
 **.py** 
 extension - all Python source
files must end with this.
 




|  |
| --- |
| **Windows note!** 

 If you're in Windows, your folder options might be set so that file extensions are
hidden by default. You might want to set all extensions to be visible so that you don't
get confused!
  |



 Add the following code into your source file:
 




```
print( "Hello, world!" )
for i in range( 1, 10 ):
  print( i )

```



 If you're using Geany, you can run the Python program by hitting
 **F5** 
 .
 



  




#### 

 Example output
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/Getting_Ready&veaction=edit&section=T-13 "Edit section: Example output") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/Getting_Ready&action=edit&section=T-13 "Edit section: Example output") 

 ]



 Once it has run, the Python program output should look like this:
 



```
Hello, world!
1
2
3
4
5
6
7
8
9

```


  




### 

 Making sure PyGame works
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/Getting_Ready&veaction=edit&section=T-14 "Edit section: Making sure PyGame works") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/Getting_Ready&action=edit&section=T-14 "Edit section: Making sure PyGame works") 

 ]



 Next we will create a simple PyGame test to make sure we can get a window
open. Create another source file named simple
 **pygame.py** 
 . Paste in the
following code. Don't worry if you don't understand the code yet - this is just to make sure everything was set up properly!
 




```
import pygame, sys
from pygame.locals import \*

pygame.init()
timer = pygame.time.Clock()
window = pygame.display.set\_mode( ( 300, 300 ) )
pygame.display.set\_caption( "Testing out PyGame!" )

# Game loop
while True:
  window.fill( pygame.Color( 50, 200, 255 ) )
  
  # Check input
  for event in pygame.event.get():
    if ( event.type == QUIT ):
      pygame.quit()
      sys.exit()
    
  # Update screen
  pygame.display.update()
  timer.tick( 30 )

```



 Once you run it, you should get a small window with a light blue background.
 



[![A small window with a light blue background](//upload.wikimedia.org/wikipedia/commons/thumb/3/39/A_small_window_with_a_light_blue_background.png/300px-A_small_window_with_a_light_blue_background.png)](/wiki/File:A_small_window_with_a_light_blue_background.png "A small window with a light blue background")

 A small window with a light blue background
 


 You can close the window once you're done.
 



**What if it's not working?!** 




 Sometimes this happens! If you're having trouble running the program, there are a few things you can do to debug it...
 


* Double-check all text and symbols for typos - these kinds of errors are easy to make! Also make sure your capitalization is regular, PyThOn Is CaSe SeNsItIvE!
* Download the files from
 [repository](https://bitbucket.org/moosaderllc/rachels-pygame-guide/%7Cthe) 
 and try running that instead. Compare my code and your code to see what differs.
* Do a search for the error message that you're getting - chances are that somebody else has had that same problem!



  

**How do I download the files from the repository?** 




 You can find the repository at this link:
 <https://bitbucket.org/moosaderllc/rachels-pygame-guide/>
 . Once there, you can use the
 **Clone** 
 button if you're familiar with Git, or you can click on
 **Downloads** 
 to find a link to download all the files to your computer.
 



  

**What's next?** 




 Good work! Next we will run through some of the features of Python so you can become familiar with its syntax!
 



  










 Python Crash Course
======================



 A simple Hello World program:
 



  





 print("Hello World")
 



  










 2D Game Development Concepts
===============================




 Birds-eye-view: How game programs work
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/2D_Game_Development_Concepts&veaction=edit&section=T-1 "Edit section: Birds-eye-view: How game programs work") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/2D_Game_Development_Concepts&action=edit&section=T-1 "Edit section: Birds-eye-view: How game programs work") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 If you’ve taken a programming class before, you might already understand
that a program runs
 **from the top → down** 
 , line-by-line, until it hits the
end of the source code file.
While it’s stepping through code, it will pause when waiting for the user’s
 **input** 
 , then resume once it has it.
Once the end of the file is hit, the program automatically quits, unless
you’ve added some kind of
 **loop** 
 in there to keep it running.
 



 If we don’t want a program to quit automatically, we will usually put a
 **program loop** 
 somewhere within, where the same kinds of tasks are done
every cycle...
This could be displaying a menu, having the user select where to go, and
doing some operation, and then returning back to the menu.
Similarly, a game isn’t very
 *playable* 
 if it exits immediately once you
launch it. A game also has a
 **game loop** 
 where some common events are
done every
 **cycle** 
 of the game.
 



  





[![](//upload.wikimedia.org/wikipedia/commons/e/ee/Example_running_program.png)](/wiki/File:Example_running_program.png)

 A program loop; The menu has three options: (1) Add, (2) Subtract, and (3) Exit. If the user selects (1), it goes to the Add function, then returns to the menu. If the user selects (2), it goes to the Subtract function, then returns to the menu. If the user selects (3), it leaves the loop and exits the program.
 


  

 During a game, the set of code it does first - before the game loop begins
- is
 **setup or initialization** 
 code. This is where variables are
 **initialized** 
 ,
assets are loaded into memory, and things get prepared for the game.
Once it enters the game loop, the game will always
 **check for player** 
 input
 **(Did the player press the “right” arrow key? Did the player click a** 
 button?),
 **update the game objects** 
 (Move all enemies towards the player
by 5 pixels), and
 **draw to the screen** 
 (Draw the background, the world,
the player, and the enemies). We will write code for each of these types of
events, but PyGame will help us out.
 



 Of course, we can also write
 **functions** 
 to handle specific tasks, but
once a function is done executing, program flow continues at the line after
the function call was made.
 



  




### 

 The coordinate plane
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/2D_Game_Development_Concepts&veaction=edit&section=T-2 "Edit section: The coordinate plane") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/2D_Game_Development_Concepts&action=edit&section=T-2 "Edit section: The coordinate plane") 

 ]



 In computer graphics,
 *(x, y)* 
 coordinates are used to place images and text
on the screen. You might remember coordinate planes from algebra. While
the same idea applies here, the coordinate plane is laid out a bit differently.
 



 In computer graphics, the origin of the coordinate plane is commonly found
at (0, 0). As you move to the
 **right** 
 , the x value increases, and as you move
 **down** 
 , the y coordinate increases.
 



  





[![](//upload.wikimedia.org/wikipedia/commons/b/b5/A_look_at_a_game_program%27s_structure.png)](/wiki/File:A_look_at_a_game_program%27s_structure.png)

 A program loop for a game; First, there is the SETUP section. After SETUP, we enter the game loop, which contains: “handle player input”, “update game objects”, and “draw to the screen”. If the user quits, then we will leave the loop, clean up the game, and exit the program.
 


  




### 

 Variables
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/2D_Game_Development_Concepts&veaction=edit&section=T-3 "Edit section: Variables") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/2D_Game_Development_Concepts&action=edit&section=T-3 "Edit section: Variables") 

 ]



[![](//upload.wikimedia.org/wikipedia/commons/7/7a/An_illustration_of_sprite_placement_on_a_computer_screen.png)](/wiki/File:An_illustration_of_sprite_placement_on_a_computer_screen.png)

 An illustration of sprite placement on a computer screen. The origin (0, 0) is at the top-left corner.
 


 Variables are
 **locations** 
 in memory where we can store
 **data** 
 . This
data can be as simple as numbers, or a string of text, or it can be more
complicated, such as a
 *coin-object* 
 or a
 *non-player-character-object* 
 .
As an example, each of our game characters will have an
 *(x, y)* 
 coordinate
so that the game knows where to draw the character to on the screen. A
character might also have a score variable, or a
 *name* 
 variable, or many
other things.
 



 It is better to use variables rather than hard-coding values throughout
your entire program. It is easier to go back and make fixes or changes if the
data is stored in variables - What if your character’s starting position in the
level was wrong and you had to go back and update those coordinates in
 *every level of the game?* 
 There are also rules you have to follow when naming your variables. You
cannot have spaces in a variable name, you cannot start a variable name with
a number (though it may
 *contain* 
 numbers), and it cannot be a keyword (like
 *if* 
 ).
 



  




### 

 Functions
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/2D_Game_Development_Concepts&veaction=edit&section=T-4 "Edit section: Functions") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/2D_Game_Development_Concepts&action=edit&section=T-4 "Edit section: Functions") 

 ]



 Functions are collections of instructions that can be run.
A function has a name (like “AddToScore”), which can be used over and over. This way, you don’t have to write the same code every time you want
to do the task: you just call the function!
 



 Functions can have
 **inputs** 
 and
 **outputs** 
 . Inputs are usually called
 **parameters** 
 and outputs are called the
 **return values** 
 .
 



 For example, if we had an
 `AddToScore` 
 function, its input might be
 *“How much do we add to the score?”* 
 and its output could be
 *“What is the* 
 score after we add this amount?”
 




 In code form, it would look something like this in Python:
 




```
def AddToScore( score, amount ):  # score and amount are the inputs
  score = score + amount          # adding onto the score variable
  return score                    # return the result of the math

```



 Functions don’t
 *always* 
 need to have inputs or outputs, it depends on
what the function’s task is.
 



  




### 

 Classes
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/2D_Game_Development_Concepts&veaction=edit&section=T-5 "Edit section: Classes") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/2D_Game_Development_Concepts&action=edit&section=T-5 "Edit section: Classes") 

 ]



 Classes are a way that we, the programmers, can create our own variable
 **data-types** 
 . By default, we can use variables like
 **integers** 
 (whole numbers)
and
 **strings** 
 (text in double-quotes), but if we want to make a game character
that has multiple attributes, such as
 *name, coordinates, level,* 
 etc., we can
write a
 **class** 
 to do this.
 



 A class can contain
 **member functions** 
 and variables, so that we can
have functionality and attributes associated with our object.
 



  






|  |
| --- |
| 
**Bunny object** 


[Cool bunny sprite](/wiki/File:Cool_bunny_sprite.png "Cool bunny sprite")

 Cool bunny sprite
 


**Variables:** 
* `score` 
 (integer)
* `xCoordinate` 
 (integer)
* `yCoordinate` 
 (integer)
* `name` 
 (string)


**Functions:** 
* `Move( direction )`
* `AddToScore( amount )`
* `DrawToScreen( window )`
 |



  

 The great thing about
 **classes** 
 is that, once you’ve defined one class, you
can create as many variables of that class type as you want.
In other words, once you implement a
 **Player** 
 class, you could reuse the
same code to make your
 *player1, player2, player3, and player4* 
 !
 



  










 PyGame Crash Course
======================




 The bare-minimum PyGame program
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-1 "Edit section: The bare-minimum PyGame program") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-1 "Edit section: The bare-minimum PyGame program") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


### 

 Your project folder and files
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-2 "Edit section: Your project folder and files") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-2 "Edit section: Your project folder and files") 

 ]



 For the time being, we will store all of our source code in one
 **.py** 
 file. Once your projects get larger, it is good to break out code into separate files, such as everything related to a given class in its own
 **.py** 
 file.
 



 When creating a new project in PyGame, all you need is one source file, but it is good to create a folder to contain the source code and all your images, fonts, and audio files in.
 



 Usually, I'll create a folder named content or assets to store these multimedia files in, and keep the source code at the base level of my project folder. For example:
 


* GAME FOLDER/
	+ mygame.py
	+ content/
		- graphics/
			* girl.png
			* gem.png
		- sounds/
			* hit.ogg
			* music.ogg



 To access items within these paths, we use
 **relative pathing** 
 . Anything in the base folder ("GAME FOLDER") is at the current directory, where your source file is. If you want to load an image, as part of the path you'd include the two folders within your "GAME FOLDER" base path.
 




```
pygame.image.load( "content/graphics/girl.png" );

```


### 

 Making a basic PyGame program
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-3 "Edit section: Making a basic PyGame program") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-3 "Edit section: Making a basic PyGame program") 

 ]



 For a very basic PyGame program, we will at least need to do the following:
 


1. Import the PyGame files
2. Initialize the window
3. Initialize the timer
4. Create a game loop
5. Check for input
6. Update the game
7. Draw to the screen
8. Use the timer to regulate the framerate



 We will cover loading files more in-depth later on, but for now let's look at the parts of my basic PyGame template. You can download the source code from
 [repository](https://bitbucket.org/moosaderllc/rachels-pygame-guide/%7Cthe) 
 , or follow along coding each little piece as I explain it.
 


#### 

 Importing libraries
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-4 "Edit section: Importing libraries") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-4 "Edit section: Importing libraries") 

 ]



 A
 **library** 
 is code that has already been written ahead of time, and is packaged up so that it can be used in multiple programs. There are a lot of libraries for Python, and you can use multiple libraries at a time, but for now we just want the PyGame library.
 




```
import pygame
from pygame.locals import \*

```



 To pull in another library in Python, we use the
 `import` 
 command.
PyGame has a bunch of functions we can use to load in graphics, handle
program speed, detect input, and more. The
 `pygame.locals` 
 part contains shortcut named constants that are used as labels for event types, keyboard keys, and more. For now, you can take it for granted.
 



  




#### 

 Initializing PyGame
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-5 "Edit section: Initializing PyGame") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-5 "Edit section: Initializing PyGame") 

 ]



 To initialize PyGame, we need to use the following functions:
 




```
pygame.init()
timer = pygame.time.Clock()
window = pygame.display.set\_mode( ( 320, 320 ) )
pygame.display.set\_caption( "Testing out PyGame!" )

```



 Here,
 `timer` 
 and
 `window` 
 are
 **variables** 
 . Variables are locations in memory where we can store data, and in this case the timer variable is an object that is responsible for making sure we have a constant frame-rate, and the window variable is where we will draw our text and graphics to. In Python, we don't need to declare variables before we use them (like we would in C++, Java, or C#). To create a variable, we just start using it. When we assign a value to the variable, it will figure out what the data type is on its own.
 



`pygame.init()` 
 ,
 `pygame.display.set mode( ... )` 
 , and
 `pygame.display.set_caption( ... )` 
 are all function calls. These are functions that are part of PyGame. Functions perform actions for us, though we don't need to know exactly how it works behind-the-scenes.
 



 Within the parentheses of the functions we pass in
 **arguments** 
 , which are essentially the inputs of the function. For example, in the set mode function, it takes in a
 `width` 
 and
 `height` 
 value, and it will set the screen to these dimensions. In this case, I've hard-coded it to 320 x 320 pixels.
 



 The set caption function takes in a string, or a string of text. A
string literal must be contained within double-quotes. This function sets the window's title bar text.
 



 If you ran just the initialization code, a window would pop up and immediately close - that's because the program will read from top-to-bottom, and once it hits the bottom of the source file it will quit. This is where a game loop comes in.
 



  




#### 

 The basic game loop
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-6 "Edit section: The basic game loop") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-6 "Edit section: The basic game loop") 

 ]



 We want to make sure that the program keeps running until the user decides
to quit. In order to do this, we can use a
 **while loop** 
 .
 




```
done = False
while done == False:
  # Contents of the game loop

```



  

**Contents of a code block are indented** 




 In Python, the contents of a function, if statement, or loop must be indented
by one level. In C++, you might be used to these internal code-blocks being
contained in curly braces {}, but this rule is different for Python.
 



 As another example to illustrate t his:
 




```
print( "Before the if statement" )

if ( a == b ):
  print( "Inside the if statement" )

print( "After the if statement" )

```



 Within the if statement, the print( “Inside the if statement” ) is indented
forward by one level. Once the if statement is done, we indent backward
once. This is required, as part of Python’s syntax.
 



  




#### 

 Detecting a quit event
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-7 "Edit section: Detecting a quit event") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-7 "Edit section: Detecting a quit event") 

 ]



 Since we are sitting inside of a while loop, each cycle something might happen.
You might update your character to move forward by a few pixels, or a timer
might go down, or the user might hit one or more keys.
 



 In order to detect user input, we iterate through all of the events, which
are captured by PyGame. If we detect a
 `QUIT` 
 event, we know the user
wants to quit – they’ve hit the “X” button in the corner.
 




```
while done == False:
    # Check events...
    for event in pygame.event.get():
        if event.type == QUIT:
            done = True

```



  




#### 

 Updating the screen
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-8 "Edit section: Updating the screen") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-8 "Edit section: Updating the screen") 

 ]



 At the end of the game loop cycle, we will want to update the screen so it
will actually re-draw everything to the screen. We also want to regulate the
framerate so that we stick to 30 or 60 frames per second, and the speed of
the game doesn’t change from computer-to-computer.
 




```
while done == False:
    # Check events...
    # [...]
    
    # Update screen
    pygame.display.update()
    timer.tick( 30 )

```



  




#### 

 First test
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-9 "Edit section: First test") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-9 "Edit section: First test") 

 ]



 The code so far should look like this. Right now if you run it, the game
window will just be a small black screen.
 




```
import pygame
from pygame.locals import \*

# Initialization
pygame.init()
timer = pygame.time.Clock()
window = pygame.display.set\_mode( ( 300 , 300 ) )
pygame.display.set\_caption( "Testing out PyGame!" )

# Game loop
done = False
    while done == False:
    
    # Check input
    for event in pygame.event.get():
        if ( event.type == QUIT ):
            done = True
    
    # Update screen
    pygame.display.update()
    timer.tick( 30 )

```



  

 Once it runs, it will look like this:
 



[![](//upload.wikimedia.org/wikipedia/commons/2/24/An_empty_PyGame_window.png)](/wiki/File:An_empty_PyGame_window.png)

 An empty PyGame window with a black background
 


  




#### 

 Cleaning it up a little
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-10 "Edit section: Cleaning it up a little") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-10 "Edit section: Cleaning it up a little") 

 ]



 It is good to organize your code, and periodically go back and
 **refactor** 
 it to clean it up. If you never clean up your code, it will get messier and messier and messier, and be difficult to maintain or to keep adding on to it.
 



 Additionally, it is better to use variables for data instead of hard-coding it in your function calls. This means you only have to update the data in one location (the variable assignment), and you won't have to go update a bunch of areas if you decide to change the data later on.
 






|  |
| --- |
| 
 To
 **refactor** 
 means to spend time cleaning up your code
 *without* 
 modifying the core functionality - not adding any new features, simply cleaning up what you already have.
  |



 So, let's clean up the code above and add some variables to store information about the program.
 



  




##### 

 Top of the program
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-11 "Edit section: Top of the program") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-11 "Edit section: Top of the program") 

 ]




```
import pygame
from pygame.locals import \*

# Global variables
screenWidth = 300
screenHeight = 300
timer = None
window = None
fps = 30

```



 Now if we need to know the dimensions of our game window, we simply
need to use the
 `screenWidth` 
 and
 `screenHeight` 
 variables, instead of
hard-coding 300 at every location.
 



 Now we can change the initialization code to use these variables:
 




```
pygame.init()
timer = pygame.time.Clock()
window = pygame.display.set\_mode( ( screenWidth , screenHeight ) )
pygame.display.set\_caption( "Testing out PyGame!" )

```



 And at the end of the game loop, make sure to update the
 `timer.tick` 
 function:
 




```
# (Inside the game loop...)
timer.tick( fps )

```



  




##### 

 Creating color
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-12 "Edit section: Creating color") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-12 "Edit section: Creating color") 

 ]



 Next, create a color so we aren’t just staring at a black empty window
anymore. To create a color, we use the
 `pygame.Color` 
 class. The variable
we store the data in then becomes an
 **object-variable** 
 .
 




```
# Create a color to use (text, drawing shapes)
bgColor = pygame.Color( 50, 200, 255 ) # Red (0-255), Green (0-255), Blue (0-255)

```



  

 Within the parentheses, we’re passing in values for
 **red, green, and blue** 
 . 
The color above will be a light blue. If you want to re-use the same
color many times (for example, when drawing text), it is good to store the
color in a variable so you can adjust the color in one place without updating
it over and over everywhere in the code.
 



 Within the game loop (right after
 `while done == False:` 
 while done is False:), add the following:
 




```
# (Inside the game loop...)
window.fill( bgColor )

```



 When you run the program, the game screen should be blue now.
 



[![](//upload.wikimedia.org/wikipedia/commons/3/39/A_small_window_with_a_light_blue_background.png)](/wiki/File:A_small_window_with_a_light_blue_background.png)

 An empty game screen, but it is blue this time.
 


  




##### 

 Loading images
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-13 "Edit section: Loading images") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-13 "Edit section: Loading images") 

 ]



 We can also load images and store these images in variables. Save the following two graphics to your Python project. Ideally, create a
 **content** 
 folder and a
 **graphics** 
 folder within it.
 



[![Simple cool bunny sprite](//upload.wikimedia.org/wikipedia/commons/9/91/Simple_cool_bunny_sprite.png)](/wiki/File:Simple_cool_bunny_sprite.png "Simple cool bunny sprite")

 Simple cool bunny sprite
 


[![Pixel art grass image](//upload.wikimedia.org/wikipedia/commons/thumb/7/77/Pixel_art_grass_image.png/220px-Pixel_art_grass_image.png)](/wiki/File:Pixel_art_grass_image.png "Pixel art grass image")

 Pixel art grass image
 


 When you’re loading images, it should be outside of the game loop. Think of all of the
code before the
 `while done == False:` 
 as initialization code.
 



 Load images:
 




```
# Load graphics
imgGrass = pygame.image.load( "content/graphics/grass.png" )
imgBunny = pygame.image.load( "content/graphics/bunny.png" )

```



  

 And then draw them to the screen
 *within* 
 the game loop with:
 




```
while done == False:
    # (Get input) [...]
    
    # Draw images
    window.blit( imgGrass, imgGrass.get\_rect() )
    window.blit( imgBunny, imgBunny.get\_rect() )
    
    # Update screen
    pygame.display.update()
    # [...]

```



  




#### 

 Second test
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-14 "Edit section: Second test") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-14 "Edit section: Second test") 

 ]



 Here is the full code, though I have created a function called
 `InitPygame` 
 and put my init code within it.
 




```
import pygame, sys
from pygame.locals import \*

screenWidth = 300
screenHeight = 300
timer = None
window = None
fps = 30

# Blank color
bgColor = pygame.Color( 50, 200, 255 )

# Load graphics
imgGrass = pygame.image.load( "content/graphics/grass.png" )
imgBunny = pygame.image.load( "content/graphics/bunny.png" )

# Initialization function
def InitPygame( screenWidth, screenHeight ):
    global window
    global timer
    
    pygame.init()
    timer = pygame.time.Clock()
    window = pygame.display.set\_mode( ( screenWidth, screenHeight ) )
    pygame.display.set\_caption( "Testing out PyGame!" )

# Call the initialization function
InitPygame( screenWidth, screenHeight )

# Game loop
done = False
while done == False:
    
    # Check input
    for event in pygame.event.get():
        if ( event.type == QUIT ):
            done = True
        
    # Draw graphics
    window.fill( bgColor )
    
    window.blit( imgGrass, ( 0, 0 ) ) # draw at (0,0)
    window.blit( imgBunny, ( 0, 0 ) ) # draw at (0,0)
    
    # Update screen
    pygame.display.update()
    timer.tick( fps )

```



  





[![](//upload.wikimedia.org/wikipedia/commons/9/94/Example_PyGame_window_with_graphics.png)](/wiki/File:Example_PyGame_window_with_graphics.png)

 Example PyGame window with graphics
 


  




#### 

 Documentation links
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-15 "Edit section: Documentation links") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-15 "Edit section: Documentation links") 

 ]


* [**pygame.time.Clock**](https://www.pygame.org/docs/ref/time.html#pygame.time.Clock)
* [**pygame.time.Clock.tick**](https://www.pygame.org/docs/ref/time.html#pygame.time.Clock.tick)
* [**pygame.display.set\_mode**](https://www.pygame.org/docs/ref/display.html#pygame.display.set_mode)
* [**pygame.display.set\_caption**](https://www.pygame.org/docs/ref/display.html#pygame.display.set_caption)
* [**pygame.display.update**](https://www.pygame.org/docs/ref/display.html#pygame.display.update)




 Images
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-16 "Edit section: Images") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-16 "Edit section: Images") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 In the last example we loaded some images, but let’s look closer at these
functions, and some other image-related functions that PyGame provides for
us. To load an image into the program, you will use the pygame.image.load
function.
 


### 

 Load an image
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-17 "Edit section: Load an image") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-17 "Edit section: Load an image") 

 ]



**pygame.image.load** 



* **Inputs:** 
 filename (string)
* **Outputs:** 
 image surface object (store it in a variable)



 When making a
 **function call** 
 , any
 **inputs** 
 go within the parentheses ( )
of the function. Since the input here is a string, the path to your image file
should be contained within double-quotes like
 



 "content/graphics/blorp.png"
 



 And any
 **outputs** 
 should be stored in a variable using an
 **assignment statement** 
 .
 



`returnStorage = FunctionCall( inputs )` 




 The call to
 `pygame.image.load` 
 will look like this:
 




```
imgGrass = pygame.image.load( "content/graphics/grass.png" )

```



**Notes:** 



* **The file path is relative** 
 - this means that it’s in relation to the



 current path of the source code file you’re working in. For me,
 **content** 
 is a folder at the same level as my
 **.py** 
 file. Use forward-slashes, /, to
differentiate between folders; the
 **graphics** 
 folder is inside the content
folder, and the grass.png image is within the graphics folder.
 


* **Store the result of the function in a variable** 
 - otherwise, it will



 load the image but you won’t be able to access it! Here, we are storing
it in the variable imgGrass using the assignment operator, =.
 


* **String-literals belong in double-quotes** 
 - when you’re hard-



 coding the path of an image to load, you need to make sure to write the
path within double quotes. If text is
 *not* 
 within double-quotes, Python
will think that it is some sort of command or name, and it will give
you errors.
 


### 

 Draw an image
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-18 "Edit section: Draw an image") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-18 "Edit section: Draw an image") 

 ]



**pygame.Surface.blit** 



* **Inputs:** 
 source surface (pygame.image), destination rectangle (pygame.Rect)
* **Outputs:** 
 image surface object (store it in a variable)



 Remember that we create a variable named
 `window` 
 :
 




```
window = pygame.display.set\_mode( ( screenWidth, screenHeight ) )

```



 The window variable is technically a
 `pygame.Surface` 
 object. To draw
our image to the screen, we use the
 `window.blit` 
 function, passing in the
image variable and a rectangle, which contains the (x, y) coordinates, as well
as width and height.
 




```
window.blit( imgGrass, ( 320, 240 ) )

```



 In this example, it hard-codes the position of the image to (320, 240). For movable characters, you will usually want to store their position and dimensions in a
 `pygame.Rect` 
 variable so it can change during the game's run.
 



 We can change the position at which an image is drawn by changing the
rectangle input. If you want to be able to modify the position of your image
while the program is running, it makes more sense to store this information
in a variable.
 



 During the game initialization, you could set up a rectangle like this:
 




```
# Near beginning of the program. 
# pygame.Rect( x, y, width, height )
bunnyRect = pygame.Rect( 200, 100, 64, 64 )

```



 And then update your
 `window.blit` 
 to use this rectangle variable:
 




```
window.blit( imgBunny, bunnyRect )

```



 Eventually, we will create a class for our characters, where their coordinates
are stored as a variable, and we will use this for the draw function.
 


### 

 Draw part of an image
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-19 "Edit section: Draw part of an image") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-19 "Edit section: Draw part of an image") 

 ]



[![Orange haired girl sprite](//upload.wikimedia.org/wikipedia/commons/8/84/Orange_haired_girl_sprite.png)](/wiki/File:Orange_haired_girl_sprite.png "Orange haired girl sprite")

 Orange haired girl sprite
 


 Sometimes you might want to draw only a portion of an
image to the screen. Often, when working with animated
sprites, all the sprites’ frames of animation are stored in one
image file like this one.
 



 To draw just a portion of the image at a time, we have
to call the blit function with an extra argument:
 `window.blit( IMAGE, ( X, Y ), SUB IMAGE RECT )` 




 Where in the SUB IMAGE RECT, you will specify the
(x, y) of the pixel to begin at in the image, as well as the
width and height of the region you want to draw.
 



 So with this sprite sheet, if we wanted to draw the girl
in row 3 and column 2, we would draw it like...
 




```
frameWidth = 32
frameHeight = 48

# pygame Rect arguments: ( x, y, width, height )

# Position on the screen itself
position = pygame.Rect( 100, 200, frameWidth, frameHeight )

# Rectangle region from sprite sheet to draw
frame = pygame.Rect( 1 \* frameWidth, 2 \* frameHeight, frameWidth, frameHeight )

window.blit( image, position, frame )

```



 This will draw just the image on the spritesheet at the coordinate (1\*frameWidth, 2\*frameHeight), width the dimensions frameWidth x frameHeight.
 



[![Orange haired girl sprite - drawing a subsprite](//upload.wikimedia.org/wikipedia/commons/4/49/Orange_haired_girl_sprite_-_drawing_a_subsprite.png)](/wiki/File:Orange_haired_girl_sprite_-_drawing_a_subsprite.png "Orange haired girl sprite - drawing a subsprite")

 Orange haired girl sprite - drawing a subsprite
 

### 

 Documentation links
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-20 "Edit section: Documentation links") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-20 "Edit section: Documentation links") 

 ]


* **pygame.Surface:** 
<https://www.pygame.org/docs/ref/surface.html>
* **pygame.image:** 
<http://www.pygame.org/docs/ref/image.html>
* **pygame.Rect:** 
<https://www.pygame.org/docs/ref/rect.html>



  






 Audio
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-21 "Edit section: Audio") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-21 "Edit section: Audio") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 In PyGame, we will treat sound effects and music a bit differently. Usually,
you only have one background song playing at a time, while there might be
multiple sound effects playing at once. For music you load in one music file at
a time, while with sound files you store the sounds in variables to be played
at any time.
 


### 

 Load a music file
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-22 "Edit section: Load a music file") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-22 "Edit section: Load a music file") 

 ]



**pygame.mixer.music.load** 



* **Inputs:** 
 filename (string)
* **Outputs:** 
 none



 Similarly to images, we can load in music files by passing in the path to your sound file. The path should be contained within double-quotes.
 




```
pygame.mixer.music.load( "content/audio/song.mp3" )

```


### 

 Play the music
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-23 "Edit section: Play the music") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-23 "Edit section: Play the music") 

 ]



**pygame.mixer.music.play** 



* **Inputs:** 
 none
* **Outputs:** 
 none



 Once a song has been loaded, we can then play it with this function.
 




```
pygame.mixer.music.play()

```


### 

 Pause the music
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-24 "Edit section: Pause the music") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-24 "Edit section: Pause the music") 

 ]



**pygame.mixer.music.pause** 



* **Inputs:** 
 none
* **Outputs:** 
 none



 This will pause whatever music is currently playing on the channel.
 




```
pygame.mixer.music.pause()

```


### 

 Un-pause the music
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-25 "Edit section: Un-pause the music") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-25 "Edit section: Un-pause the music") 

 ]



**pygame.mixer.music.unpause** 



* **Inputs:** 
 none
* **Outputs:** 
 none



 Resume the music that is currently paused on the channel.
 




```
pygame.mixer.music.unpause()

```


### 

 Set the music volume
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-26 "Edit section: Set the music volume") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-26 "Edit section: Set the music volume") 

 ]



**pygame.mixer.music.set\_volume** 



* **Inputs:** 
 volume (0.0 = none, 1.0 = full)
* **Outputs:** 
 none



 This sets the volume that the music will play at. 0.5 is half-volume, 1.0 is full volume, and 0.0 is no volume.
 




```
pygame.mixer.music.set\_volume( 0.5 )

```


### 

 Get the music volume
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-27 "Edit section: Get the music volume") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-27 "Edit section: Get the music volume") 

 ]



**pygame.mixer.music.get\_volume** 



* **Inputs:** 
 none
* **Outputs:** 
 volume (0.0 = none, 1.0 = full)



 This will return the current volume the music channel is at
 




```
currentVolume = pygame.mixer.music.get\_volume()

```


### 

 Create a sound file
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-28 "Edit section: Create a sound file") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-28 "Edit section: Create a sound file") 

 ]



**pygame.mixer.Sound** 



* **Inputs:** 
 filename (string)
* **Outputs:** 
 Sound-object (store it in a variable)



 We may have multiple sound effects we want to load into our game at any one time, so we will store each sound effect in a variable.
 




```
sfx = pygame.mixer.Sound( "content/audio/collect.wav" )

```


### 

 Play a sound file
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-29 "Edit section: Play a sound file") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-29 "Edit section: Play a sound file") 

 ]



**pygame.mixer.Sound.play** 



* **Inputs:** 
 none
* **Outputs:** 
 none



 This function must be called as part of a variable that stores a Sound object. When calling a function from the object, use the . operator.
 




```
sfx.play()

```


### 

 Set the sound volume
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-30 "Edit section: Set the sound volume") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-30 "Edit section: Set the sound volume") 

 ]



**pygame.mixer.Sound.set\_volume** 



* **Inputs:** 
 volume (0.0 = none, 1.0 = full)
* **Outputs:** 
 none



 This sets the volume that the music will play at. 0.5 is half-volume, 1.0 is full volume, and 0.0 is no volume.
 




```
sfx.set\_volume( 0.5 )

```


### 

 Get the sound volume
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-31 "Edit section: Get the sound volume") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-31 "Edit section: Get the sound volume") 

 ]



**pygame.mixer.Sound.get\_volume** 



* **Inputs:** 
 none
* **Outputs:** 
 volume (0.0 = none, 1.0 = full)



 This will return the volume that the one specific sound is set to.
 




```
currentVolume = sfx.get\_volume()

```



  




### 

 Documentation links
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-32 "Edit section: Documentation links") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-32 "Edit section: Documentation links") 

 ]


* pygame.mixer:
 <https://www.pygame.org/docs/ref/mixer.html>
* pygame.mixer.music:
 <https://www.pygame.org/docs/ref/music.html>
* pygame.mixer.Sound:
 <http://www.pygame.org/docs/ref/mixer.html#pygame.mixer.Sound>



  






 Fonts and text
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-33 "Edit section: Fonts and text") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-33 "Edit section: Fonts and text") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 To draw text to the screen in PyGame, we must load in the font files that
we are going to use. Then, using our font object, we can render text to an
image Surface and draw it to the screen.
 


### 

 Loading a font
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-34 "Edit section: Loading a font") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-34 "Edit section: Loading a font") 

 ]



**pygame.font.Font** 



* **Inputs:** 
 font path (string), font size (integer)
* **Outputs:** 
 none



 Like with sound effects and images, to use fonts we want to create a Font
object and store it in a variable. When creating the font, you need to pass
in the font path, as well as the font size as input values.
 




```
mainFont = pygame.font.Font( "content/fonts/text.ttf", 20 )

```


### 

 Creating a text Surface
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-35 "Edit section: Creating a text Surface") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-35 "Edit section: Creating a text Surface") 

 ]



**pygame.font.Font.render** 



* **Inputs:** 
 text (string), antialias (boolean), color (pygame.Color)
* **Outputs:** 
 text surface (store it in a variable)



 When we want to turn the text into an
 *image* 
 of text, we use the font object to
 **render** 
 it to a surface.
 




```
textSurface = mainFont.render( "Hello, world!", False, pygame.Color( 255, 255, 255 ) )

```


### 

 Drawing a text Surface
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-36 "Edit section: Drawing a text Surface") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-36 "Edit section: Drawing a text Surface") 

 ]



**pygame.Surface.blit** 



* **Inputs:** 
 source surface (pygame.image object), destination rectangle (pygame.Rect object)
* **Outputs:** 
 none



 The draw functionality is part of the Surface object, but using the font we turned a text string into an image. You will need a window item created (See
 [The bare-minimum PyGame program](#The_bare-minimum_PyGame_program) 
 ) to have something to draw the text to.
 




```
window.blit( textSurface, ( 100, 200 ) )

```



  




### 

 Documentation links
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-37 "Edit section: Documentation links") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-37 "Edit section: Documentation links") 

 ]


* **pygame.font:** 
<https://www.pygame.org/docs/ref/font.html>
* **pygame.font.Font:** 
<https://www.pygame.org/docs/ref/font.html#pygame.font.Font>



  






 Keyboard and mouse input
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-38 "Edit section: Keyboard and mouse input") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-38 "Edit section: Keyboard and mouse input") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 As events occur in your game, Python will detect them and they will be stored and accessed via
 `pygame.event.get()` 
 , which you can then iterate through and check what
type of event it is. An event might be clicking the mouse button, or pressing
down on a key on the keyboard, or even exiting the game. When the mouse
is clicked, we can also get its (x, y) coordinates so that we can figure out what
was being clicked - a button? A location to move to? And so on. You can
also check for joystick/gamepad events, but we will just stick to keyboard
and mouse for now.
 


### 

 Event types
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-39 "Edit section: Event types") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-39 "Edit section: Event types") 

 ]




| 
 Event type
  | 
 Name
  |
| --- | --- |
| 
 Quit program
  | `QUIT`  |
| 
 Key press down
  | `KEYDOWN`  |
| 
 Key release
  | `KEYUP`  |
| 
 Mouse move
  | `MOUSEMOTION`  |
| 
 Mouse button down
  | `MOUSEBUTTONDOWN`  |
| 
 Mouse button release
  | `MOUSEBUTTONUP`  |



 Notice that with the events, there is a different for when you’re clicking
 *down* 
 on the mouse button or on a keyboard key, and releasing it (or
 *key-up* 
 ).
There might be multiple reasons for wanting to check for one or the other.
 



 Once you’ve detected what
 *kind* 
 of event is occurring, you can then get
more information about what happened, such as which mouse button was
clicked, or which key was pressed.
 



 You can also use events like this to detect keyboard input, but this isn’t
how you’ll want to get input for smooth character movement in your game.
This would be more for small key presses. I’ll have more on how to get
smooth keyboard movement later in this section.
 



 Within the game loop, you will first need to check for events like this:
 




```
# Game loop
while done == False:
    # Check input
    for event in pygame.event.get():
        if ( event.type == MOUSEBUTTONDOWN ):
            print( "You clicked!" )

```



 And then within the loop, you will use if statements to figure out (1)
what kind of event happened, and (2) which button was pressed.
 


### 

 Mouse events
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-40 "Edit section: Mouse events") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-40 "Edit section: Mouse events") 

 ]



 For mouse events, you have will start with the following.
 




```
# Game loop
while done == False:
    # Check input
    for event in pygame.event.get():
        if event.type == MOUSEBUTTONDOWN:
            print( "A" )
        elif event.type == MOUSEBUTTONUP:
            print( "B" )
        elif event.type == MOUSEMOTION:
            print( "C" )

```



 Within the if statements is where you will look at which button was pressed
and the mouse position.
 



`event.pos` 
 gives you the mouse coordinates (x and y), and event.button
gives you a number that represents which button was clicked.
 




```
# Game loop
while done == False:
    # Check input
    for event in pygame.event.get():
        if event.type == MOUSEBUTTONDOWN:
            mouseX, mouseY = event.pos
            
            print( "Mouse X: " + str( mouseX ) )
            print( "Mouse Y: " + str( mouseY ) )

```



 With this code, the
 `print` 
 statements will just write out text to the console, not the game itself, but you can use this for some light debugging or to
experiment with at first.
 



 The (x, y) coordinates also obey the rules of computer graphics, where
the origin (0, 0) is at the top-left corner and increases right-ward and down-ward from there.
 



 You can also check
 *which* 
 button was pressed in the following way:
 




```
# Game loop
while done == False:
    # Check input
    for event in pygame.event.get():
        if event.type == MOUSEBUTTONUP:
            mouseX, mouseY = event.pos
            
            # Which button?
            if event.button == 1:
                print( "Left click at " + str( mouseX ) + "," + str( mouseY ) )
                
            elif event.button == 2:
                print( "Middle click at " + str( mouseX ) + "," + str( mouseY ) )
                
            elif event.button == 3:
                print( "Right click at " + str( mouseX ) + "," + str( mouseY ) )
                
            elif event.button == 4:
                print( "Scroll up at " + str( mouseX ) + "," + str( mouseY ) )
                
            elif event.button == 5:
                print( "Scroll down at " + str( mouseX ) + "," + str( mouseY ) )

```




| 
 Mouse button
  | 
 Number
  | 
 Events
  |
| --- | --- | --- |
| 
 Left click
  | `1`  | `MOUSEBUTTONDOWN` 
 ,
 `MOUSEBUTTONUP`  |
| 
 Middle click
  | `2`  | `MOUSEBUTTONDOWN` 
 ,
 `MOUSEBUTTONUP`  |
| 
 Right click
  | `3`  | `MOUSEBUTTONDOWN` 
 ,
 `MOUSEBUTTONUP`  |
| 
 Mouse wheel up
  | `4`  | `MOUSEBUTTONUP`  |
| 
 Mouse wheel down
  | `5`  | `MOUSEBUTTONUP`  |


### 

 Keyboard events
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-41 "Edit section: Keyboard events") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-41 "Edit section: Keyboard events") 

 ]



 You can detect keyboard input similarly to how you detect mouse input, but
this isn’t the ideal way to get game input for smooth character movement.
That part will be under the
 **[Smooth keyboard input](#Smooth_keyboard_input)**
 section.
 



 Detecting keyboard events in this way is fine for small keyboard features,
maybe like typing in your name or hitting a keyboard shortcut, but if you’re
going to have your character move around by holding down arrow keys, this
is
 *not* 
 the way to do it.
 



 Once again, we start by iterating through the events, detecting whether
we have a
 `KEYDOWN` 
 or
 `KEYUP` 
 event.
 




```
# Game loop
while done == False:
    # Check input
    for event in pygame.event.get():
        if event.type == KEYDOWN:
            print( "Key press" )

```



 Then, if we have detected one of these events, we can then ask which key
was pressed:
 




```
# Game loop
while done == False:
    # Check input
    for event in pygame.event.get():
        if event.type == KEYDOWN:
            if event.key == K\_q:
                done = True
            elif event.key == K\_p:
                pause = True

```


### 

 Smooth keyboard input
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-42 "Edit section: Smooth keyboard input") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-42 "Edit section: Smooth keyboard input") 

 ]



 If your character is going to move by holding down a key on the keyboard,
such as the arrow keys or WASD, you will want to use this technique instead.
Instead of dealing with key presses as
 *events* 
 , we use
 `pygame.key.get` 
 pressed to see which keys are currently down.
 




```
# Game loop
while done == False:
    # Smooth keyboard movement
    keys = pygame.key.get\_pressed()

```



 Then, using the keycodes above, we can detect which keys are currently being held down. This will also work to check more than one key at once (like holding Run + Move).
 




```
# Game loop
while done == False:
    # Smooth keyboard movement
    keys = pygame.key.get\_pressed()
    
    if keys[ K\_UP ]:
        bunnyPos.y -= 5

    elif keys[ K\_DOWN ]:
        bunnyPos.y += 5

    elif keys[ K\_LEFT ]:
        bunnyPos.x -= 5

    elif keys[ K\_RIGHT ]:
        bunnyPos.x += 5

```


#### 

 Key codes
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-43 "Edit section: Key codes") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-43 "Edit section: Key codes") 

 ]




|  |  |  |  |  |  |  |  |
| --- | --- | --- | --- | --- | --- | --- | --- |
| **Key**  | **Name**  |  | **Key**  | **Name**  |  | **Key**  | **Name**  |
| 
 Escape key
  | `K_ESCAPE`  |  | 
 Space bar
  | `K_SPACE`  |  | 
 Return (enter)
  | `K_RETURN`  |
| 
 "A" key
  | `K_a`  |  | 
 "B" key
  | `K_b`  |  | 
 "C" key
  | `K_c`  |
| 
 "F1" key
  | `K_F1`  |  | 
 "F2" key
  | `K_F2`  |  | 
 "F3" key
  | `K_F3`  |
|  |
|  |
| 
 Up arrow
  | `K_UP`  |  | 
 Down arrow
  | `K_DOWN`  |  |  |
| 
 Left arrow
  | `K_LEFT`  |  | 
 Right arrow
  | `K_RIGHT`  |  |  |
|  |
|  |
| 
 Left shift
  | `K_LSHIFT`  |  | 
 Right shift
  | `K_RSHIFT`  |  |  |
| 
 Left ctrl
  | `K_LCTRL`  |  | 
 Right ctrl
  | `K_RCTRL`  |  |  |
| 
 Left alt
  | `K_LALT`  |  | 
 Right ctrl
  | `K_RALT`  |  |  |



 You can get a list of all the keycodes at
 <https://www.pygame.org/docs/ref/key.html>



### 

 Documentation links
 


 [
 
[edit](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&veaction=edit&section=T-44 "Edit section: Documentation links") 

 |
 
[edit source](/w/index.php?title=PyGame_Guide/PyGame_Crash_Course&action=edit&section=T-44 "Edit section: Documentation links") 

 ]


* **pygame.event:** 
<http://www.pygame.org/docs/ref/event.html>
* **pygame.key:** 
<https://www.pygame.org/docs/ref/key.html>
* **pygame.mouse:** 
<https://www.pygame.org/docs/ref/mouse.html>



  










![](//en.wikibooks.org/wiki/Special:CentralAutoLogin/start?type=1x1)


 Retrieved from "
 <https://en.wikibooks.org/w/index.php?title=PyGame_Guide/Printable_version&oldid=4005939>
 "
 



[Categories](/wiki/Special:Categories "Special:Categories") 
 :
 * [Print Versions](/wiki/Category:Print_Versions "Category:Print Versions")
* [Book:PyGame Guide](/wiki/Category:Book:PyGame_Guide "Category:Book:PyGame Guide")








 Navigation menu
-----------------




### 

 Personal tools



* Not logged in
* [Discussion for this IP address](/wiki/Special:MyTalk "Discussion about edits from this IP address [n]")
* [Contributions](/wiki/Special:MyContributions "A list of edits made from this IP address [y]")
* [Create account](/w/index.php?title=Special:CreateAccount&returnto=PyGame+Guide%2FPrintable+version "You are encouraged to create an account and log in; however, it is not mandatory")
* [Log in](/w/index.php?title=Special:UserLogin&returnto=PyGame+Guide%2FPrintable+version "You are encouraged to log in; however, it is not mandatory [o]")






### 

 Namespaces



* [Book](/wiki/PyGame_Guide/Printable_version "View the content page [c]")
* [Discussion](/w/index.php?title=Talk:PyGame_Guide/Printable_version&action=edit&redlink=1 "Discussion about the content page (does not exist) [t]")








 English
 









### 

 Views



* [Read](/wiki/PyGame_Guide/Printable_version)
* [Edit](/w/index.php?title=PyGame_Guide/Printable_version&veaction=edit "Edit this page [v]")
* [Edit source](/w/index.php?title=PyGame_Guide/Printable_version&action=edit "Edit this page [e]")
* [View history](/w/index.php?title=PyGame_Guide/Printable_version&action=history "Past revisions of this page [h]")








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



* [What links here](/wiki/Special:WhatLinksHere/PyGame_Guide/Printable_version "A list of all wiki pages that link here [j]")
* [Related changes](/wiki/Special:RecentChangesLinked/PyGame_Guide/Printable_version "Recent changes in pages linked from this page [k]")
* [Upload file](//commons.wikimedia.org/wiki/Special:UploadWizard?uselang=en "Upload files [u]")
* [Special pages](/wiki/Special:SpecialPages "A list of all special pages [q]")
* [Permanent link](/w/index.php?title=PyGame_Guide/Printable_version&oldid=4005939 "Permanent link to this revision of this page")
* [Page information](/w/index.php?title=PyGame_Guide/Printable_version&action=info "More information about this page")
* [Cite this page](/w/index.php?title=Special:CiteThisPage&page=PyGame_Guide%2FPrintable_version&id=4005939&wpFormIdentifier=titleform "Information on how to cite this page")





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



* [Create a collection](/w/index.php?title=Special:Book&bookcmd=book_creator&referer=PyGame+Guide%2FPrintable+version)
* [Download as PDF](/w/index.php?title=Special:DownloadAsPdf&page=PyGame_Guide%2FPrintable_version&action=show-download-screen)
* [Printable version](/w/index.php?title=PyGame_Guide/Printable_version&printable=yes "Printable version of this page [p]")





### 

 In other languages









[Add links](https://www.wikidata.org/wiki/Special:NewItem?site=enwikibooks&page=PyGame+Guide%2FPrintable+version "Add interlanguage links") 







* This page was last edited on 18 November 2021, at 07:54.
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
* [Mobile view](//en.m.wikibooks.org/w/index.php?title=PyGame_Guide/Printable_version&mobileaction=toggle_view_mobile)
* [Developers](https://developer.wikimedia.org)
* [Statistics](https://stats.wikimedia.org/#/en.wikibooks.org)
* [Cookie statement](https://foundation.wikimedia.org/wiki/Special:MyLanguage/Policy:Cookie_statement)


* [![Wikimedia Foundation](/static/images/footer/wikimedia-button.png)](https://wikimediafoundation.org/)
* [![Powered by MediaWiki](/static/images/footer/poweredby_mediawiki_88x31.png)](https://www.mediawiki.org/)




