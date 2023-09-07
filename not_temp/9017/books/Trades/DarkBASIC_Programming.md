




 DarkBASIC Programming/Printable version - Wikibooks, open books for an open world
 








































 DarkBASIC Programming/Printable version
==========================================




 From Wikibooks, open books for an open world
 



 <
 [DarkBASIC Programming](/wiki/DarkBASIC_Programming "DarkBASIC Programming") 







[Jump to navigation](#mw-head) 
[Jump to search](#searchInput) 




|  |  |
| --- | --- |
| 



 | **This is the
 [print version](/wiki/Help:Print_versions "Help:Print versions") 
 of
 [DarkBASIC Programming](/wiki/DarkBASIC_Programming "DarkBASIC Programming")**

 You won't see this message or any elements not part of the book's content when you print or
 [preview](https://en.wikibooks.org/w/index.php?title=DarkBASIC_Programming/Printable_version&printable=yes) 
 this page.
  |




  





 DarkBASIC Programming
 



 The current, editable version of this book is available in Wikibooks, the open-content textbooks collection, at
   


<https://en.wikibooks.org/wiki/DarkBASIC_Programming>





 Permission is granted to copy, distribute, and/or modify this document under the terms of the
 [Creative Commons Attribution-ShareAlike 3.0 License](/wiki/Wikibooks:Creative_Commons_Attribution-ShareAlike_3.0_Unported_License "Wikibooks:Creative Commons Attribution-ShareAlike 3.0 Unported License") 
 .
 





 Contents
----------







* [1
 

 Introduction to Programming](#Introduction_to_Programming)
	+ [1.1
	 
	
	 So what is programming?](#So_what_is_programming?)
* [2
 

 The Hello World Tradition](#The_Hello_World_Tradition)
	+ [2.1
	 
	
	 Assignment:](#Assignment:)
* [3
 

 Fundamentals of DarkBASIC](#Fundamentals_of_DarkBASIC)
* [4
 

 Number Crunching](#Number_Crunching)
	+ [4.1
	 
	
	 Day 9 Cont'd](#Day_9_Cont'd)
* [5
 

 Loops](#Loops)
	+ [5.1
	 
	
	 Day 10](#Day_10)
	+ [5.2
	 
	
	 Day 11](#Day_11)
* [6
 

 File Control & Data](#File_Control_&_Data)
	+ [6.1
	 
	
	 Day 12](#Day_12)
	+ [6.2
	 
	
	 Day 13](#Day_13)
	+ [6.3
	 
	
	 Day 14](#Day_14)
* [7
 

 2D Game Programming Pt 1](#2D_Game_Programming_Pt_1)
	+ [7.1
	 
	
	 Day 15](#Day_15)
	+ [7.2
	 
	
	 Day 16](#Day_16)
	+ [7.3
	 
	
	 Day 17](#Day_17)
	+ [7.4
	 
	
	 Day 18](#Day_18)
	+ [7.5
	 
	
	**Quiz**](#Quiz)
* [8
 

 2D Game Programming Pt 2](#2D_Game_Programming_Pt_2)
	+ [8.1
	 
	
	 Day 19](#Day_19)
	+ [8.2
	 
	
	 Day 20](#Day_20)
* [9
 

 Original single-page version](#Original_single-page_version)
	+ [9.1
	 
	
	 Table of contents](#Table_of_contents)
	+ [9.2
	 
	
	 Foreword](#Foreword)
	+ [9.3
	 
	
	 Lesson 1 - Introduction to Programming](#Lesson_1_-_Introduction_to_Programming)
	+ [9.4
	 
	
	 So what is programming?](#So_what_is_programming?_2)
	+ [9.5
	 
	
	 Lesson 2 - The Hello World Tradition](#Lesson_2_-_The_Hello_World_Tradition)
		- [9.5.1
		 
		
		 Assignment](#Assignment)
	+ [9.6
	 
	
	 Lesson 3 - Fundamentals of DarkBASIC](#Lesson_3_-_Fundamentals_of_DarkBASIC)
	+ [9.7
	 
	
	 Lesson 4 - Number Crunching](#Lesson_4_-_Number_Crunching)
		- [9.7.1
		 
		
		 Day 9 Cont'd](#Day_9_Cont'd_2)
	+ [9.8
	 
	
	 Lesson 5 - Loops](#Lesson_5_-_Loops)
		- [9.8.1
		 
		
		 Day 10](#Day_10_2)
		- [9.8.2
		 
		
		 Day 11](#Day_11_2)
	+ [9.9
	 
	
	 Lesson 6 - File Control & Data](#Lesson_6_-_File_Control_&_Data)
		- [9.9.1
		 
		
		 Day 12](#Day_12_2)
		- [9.9.2
		 
		
		 Day 13](#Day_13_2)
		- [9.9.3
		 
		
		 Day 14](#Day_14_2)
	+ [9.10
	 
	
	 Lesson 7 - 2D Game Programming Pt 1](#Lesson_7_-_2D_Game_Programming_Pt_1)
		- [9.10.1
		 
		
		 Day 15](#Day_15_2)
		- [9.10.2
		 
		
		 Day 16](#Day_16_2)
		- [9.10.3
		 
		
		 Day 17](#Day_17_2)
		- [9.10.4
		 
		
		 Day 18](#Day_18_2)
	+ [9.11
	 
	
	 Quiz](#Quiz_2)
	+ [9.12
	 
	
	 End of Lesson](#End_of_Lesson)
	+ [9.13
	 
	
	 Lesson 8 - 2d Game Programming Pt 2](#Lesson_8_-_2d_Game_Programming_Pt_2)
		- [9.13.1
		 
		
		 Day 19](#Day_19_2)
		- [9.13.2
		 
		
		 Day 20](#Day_20_2)









 Introduction to Programming
==============================



 First of all, thanks for checking out this book on DarkBASIC. It's the first WikiBook on the subject of DarkBASIC Programming. Not everyone can program, but in the information age I believe that it's necessary for everyone to gain the skills to use different types of technology. Especially, computers and programming. Today and for the next 30 days you'll learn a lot about DarkBASIC Programming and a lot about what you can accomplish using a computer. DarkBASIC is all about making DirectX do your evil bidding and your domination of the world of computer game programming. I hope you read and contribute to this book, as well as rant because then I can fix stuff others will insult. I hope you enjoy!
 



 In this tutorial I'm going to assume you have no prior programming experience, or else you wouldn't be reading this book. You would pick up the manual, compare it to C++, and program in DarkBASIC easily. First of all not to scare you but game programming is not easy and secondly you are not going to make a <insert copycat blockbuster game here> killer or clone or whatever in DarkBASIC for a long time. I'm also going to assume you have v1.0 of the "classic" or non-pro edition of DarkBASIC or else with another version you'll have some problems running this code unfortunately. Programming is not a new concept, and there are many hundreds of languages such as DarkBASIC out there, one such programming language comparable to DarkBASIC is BlitzBASIC, and you may have heard of Visual Basic.
 






 So what is programming?
 


 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Introduction_to_Programming&veaction=edit&section=T-1 "Edit section: So what is programming?") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Introduction_to_Programming&action=edit&section=T-1 "Edit section: So what is programming?") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 This isn't a stupid question. Programming is not just making applications for Windows, or talking a language your computer understands. Programming is input, process, and output. If you take computer sciences, chances are you'll be doing program outlines, but right now you're a hobbyist programmer so let's keep it simple. Not all of us know VC++ or Pascal. DarkBASIC is game oriented. You can make applications in it, but it's harder. There are no message boxes in the version we'll be using. But DarkBASIC is easy and fun, especially for beginner's and junior programmers. Instead of having to write 1000+ lines of code to put a 2d character on screen you'll write one, instead of writing a massive program to make a cube spin you'll write a simple and human readable one in 20 or less lines. If you have no patience, take it slow and easy and don't move on until you understand it all or else you'll be bald by the time you finish this wikibook. I will say this: this book is a work in progress. I'll be finished as soon as possible so, bare with me please. Programming is simply entering lines of code that once compiled, or is run, tells the computer to follow out a task until it's done. What's involved is input, or you programming; processing or computing; and finally output, what you get to see.
 
[![](//upload.wikimedia.org/wikipedia/commons/7/7f/Input-process-output.JPG)](/wiki/File:Input-process-output.JPG)





**Figure 1.1** 
 (This is the Model of Input, Process and Output.)
 **So you know:** 
 A coder is another word for a programmer.
 



 All programs follow the above method, since every program is (1) certainly programmed, (2) is certainly compiled, and (3) certainly displays results. Now, just what is code then? Code is the recipe for your program. Computers won't do a task wrong. You'll do the task 
wrong. To keep your program from doing things that could harm computers, the compiler(or program that checks to see if the program works) runs the program and generates syntax errors (if there's something wrong). These syntax errors, tell you that you made a mistake and you must fix it before you can see your program(in most cases). So, computers don't make mistakes.
 



 There are many sorts of errors also! The most common is called
 **a syntax error** 
 . A syntax error are mistakes in your program's code. A programming language like a written language is incorrect if it contains things that are gibberish. Like in English, asdfjdj is not a word, it's gibberish. Just like in DarkBASIC, print is a command, where as printf is not. Another kind of error is called a run-time error, this is when your program compiles but you don't get the results you want. Such as if your writing is sloppy, the word "hello" may look like jello and the person will get the wrong information from it. Run-time errors are things that aren't suppose to happen, like when in your favorite video game, when a character can sometimes walk through a wall, or the program crashing when this happens.
 



 The process of fixing your mistakes is called debugging. You'll get familiar with this; half your time or more will be spent doing debugging. So as much as possible, save, compile, debug, and run. It'll save you lots of anger, and stress. Finally remember this: with computers, the language goes through assembly or getting put into binary, and sent back to your programming language. If the binary pattern is correct, then you have no syntax errors. Remember, 0s are off or false, and 1s are on or true. Remember when I said assembly above?
 



 Well, here's how it works. First off, you compile or check syntax, then the code you entered passes through what's called machine language or assembly (its name changes depending on what its doing when it's compiling its assembler). Then it becomes pure binary (which is not human readable but meant for computers; they cannot understand anything other than 0s and 1s). Then it is sent back to the compiler where if the binary matches what's correct, it gets executed. If it doesn't, you get a syntax error and must debug. Now, don't quote me on that but that's basically what happens. So now you're ready to begin programming in DarkBASIC and will know what I talk about.
 



 One more thing: DarkBASIC is not case sensitive. If you don't know what this means, it means that DarkBASIC does not distinguish between upper-case letters and lower-case ones.
 



  










 The Hello World Tradition
============================



 Alrighty, you came back. Good, let's hope you have played around with the DarkBASIC editor. Before you find out what the hello world tradition is (older programmers don't spoil it for them!), I think I should tell you something. The DarkBASIC editor is not very windows friendly, so make sure you download an IDE you like and then link it to the DarkBASIC.
 



**So you know:** 
 an IDE is an integrated development environment. It allows programming to be easier for professionals and beginners alike. For now, don't worry what an IDE is too much, you're only beginning after all.
 



 Okay, now then time to get to the tradition.
 



  

*Code* 




```

Print "Hello World!"
Print "This is Dbtutor's wikibook on DarkBASIC Programming!!"


```


*End of Code* 




 Copy and paste this source code into the IDE or editor (whichever) and run it. What you get is the easiest program you'll ever write in DarkBASIC. The hello world example is proud tradition of beginning programmers, so let's carry it on. Hello World Program puts the text hello world on the screen. But what are the quotation marks for? The quotation marks are used to show what you want to put on the screen. Otherwise, it would look like one big command.
 



**Your Assignment:** 




 Replace Hello World with any text you want
   





  





 First of all, I hope you completed the assignment above. In case you haven't, or had problems with this program I'll show you how. Okay, let's say you want to print a couple of things and you need it spaced for readability. Remember I said that print, prints the things inside the quotes? Well they're called strings, now strings are characters that you can change and manipulate. With no string to technically print, you'll just get a blank space. Now for all on one line you use a semi-colon(;). Experiment with these two methods above until you understand them. In DarkBASIC, your program already ends on its own doesn't it?
 



  





 But, it's good practice if you use the command "end" where your program needs to quit. So after the print commands in hello world, insert the command "end". Now, go to file and build EXE, save the EXE in whatever folder you want and run it. Technically it should just be a flash so quick you cannot see it. That's where you need some sort of waiting system, or input just to let you see the results. So delete the exe and open up DarkBASIC again, in our hello world before the end command insert a wait key. What a wait key does is allow the famous press of any key for the program to end, so rebuild the exe of this program and now run it. The program isn't very windows friendly is it? At the top of the program put in these commands:
 



*Code* 




```

Set window on
Set window layout 1,1,1
Set Window title "Hello World - A Friendly Greeting From DarkBASIC"
Set window position 100,200
Set window size 640,480


```


*End of Code* 




 Now run the hello world program, see what happens? We now have a nice little window friendly environment. But hey, if you're on a different computer with different settings you'll miss some of the text, and what on earth are all those numbers for anyways? Okay the numbers are the X coordinates and the Y coordinates in case you didn't do math in school X is horizontal and Y is vertical. In case, you don't know what those words are X runs left and right or across, and Y runs up and down. So X & Y are 2 axes so we have 2 dimensions, when we get to 3d expect to get dimensional for a paragraph or two. Now then for our last part of the day, let's find out how to change the position of where our text goes.
 



*Code* 




```

Set cursor 1,50


```


*End of Code* 





---



  

 Insert this piece of code above, right above the first Print statement. Our program is long now and we may also forget what some of the things above do. Welcome to comments, the Rem command lets you make notes, anything after Rem is ignored. You should always comment your code, so that others can understand it, and so you can know what you where thinking when you coded it and why you coded it the way you did. Remember, comment heavily!!
 



**So you know:** 
 Rem is short for Remark, and if I haven't told you yet BASIC stands for Beginner's All Purpose Symbolic Instruction Code.
 



 Here's what your program should look like in the end, roughly:
 



  

**Hello World Program Results** 




```

Rem Setup the window
Set window on 
Set window layout 1,1,1
Set window title "Hello World Program"
Set window position 100,200
Set window size 640,480

Rem put the first line of text 50 pixels down
Set cursor 1,50
Print "Hello World!"
Print "A friendly greeting from DarkBASIC!"

Rem wait for the press of any key
Wait key
Rem then end
End


```


**End of the Program** 




  

 Before we go here's a quiz:
 



  






**In DarkBASIC Strings Start With a:** 


 A)#
 

 B)\*
 

 C)'
 

 D)"
 



**And they end with a:** 


 A)%
 

 B)^
 

 C)&
 

 D)"
 



**BASIC stands for:** 


 A)Beginner's All Purpose Symbolic Instruction Code
 

 B)Bears Are Purposely Stealing International Cookies
 

 C)Beginner's Alphanumeric String Informed Code
 

 D)Beginning All Inserted Symbolic Intel Coding
 



**In 2d there are 2 axis which are they:** 


 A)U & V
 

 B)X & Y
 

 C)U & V(in textures), X & Y also
 

 D)Z & U
 



**Rem can make comments for how many lines:** 


 A)1 or More
 

 B)1 or less
 

 C)Single Line
 

 D)Double Line
 


  





**Okay Here Are the Answers, no cheating!** 





 1 & 2 is obviously D.
 

 3 is A.
 

 4 If you said anything but Z & U you should be on the right track but C is the best answer while
 

 B can be considered the most correct one.
 

 5 is C.
 

#### 

 Assignment:
 


 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/The_Hello_World_Tradition&veaction=edit&section=T-1 "Edit section: Assignment:") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/The_Hello_World_Tradition&action=edit&section=T-1 "Edit section: Assignment:") 

 ]



 Experiment with the IDE and the DarkBASIC window commands.
Comment the hello world program when done.
Make a program that contains only comments.
Look up IDE on wikipedia.
Look around the DarkBASIC website(
 <http://www.thegamecreators.com>
 ).
 



  










 Fundamentals of DarkBASIC
============================



 Well, we're almost at the end of your first week 
experiencing DarkBASIC programming or at least this book! Okay, 
the fundamentals are all about logic, developing programs, design, 
setting outlooks and the building blocks. This is not application 
oriented, it's more game oriented as DarkBASIC is for game programming. 
You'll find out about conditions, variables, logic and more. Remember, 
awhile ago when I brought up 0s and 1s, well a better way of looking at 
them is TRUE and FALSE. DarkBASIC is simple, so there are no boolean operators 
or are there? Let's say you declare a variable called, oh, let's say A. For 
now A = 0 until we say A = 1, there's another value called B and it's equal 
to 1. If we had C = 1 when A or B is true or if C = 1 when A and B equal true, 
but what if neither of these values are true? Then we'd have to use 
another value and our program quickly looks like this:
 



  






 if A or B = 1
 

 C = 1
 

 else
 

 D = 1
 

 endif
 


  





 That's logic, that's conditions, that's the if/endif command. Now I 
didn't indent above which I should have so anytime you use if/endif I 
want you to indent for the statements used okay? If you copied / pasted 
the above snippet in DarkBASIC and compiled it, you'd get no errors but 
if you'd ran this program you'd just get nothing. Why? They're just values 
and there is really no output to the screen involved, so let's change 
this program a bit.
 



  

**Simple Conditional Statements Program** 




```

Rem we can also use a ` to comment quickly I will do that
Rem from now on!

`Declare some variables
a = 1
b = 0

`The conditional statement
if a or b = 1
   c = 1
else
   d = 1
endif

if c = 1 then Print "Condition C is Met"
if d = 1 then Print "Condition D is Met"
wait key
end


```


 As you saw I used variables above, in case you didn't know variables 
are a way of storing data which can change. As you saw above if I changed 
the OR operator to a AND b = 1 then we'd have a whole new ball game on our 
hands. But let's sidetrack a little, if you wanted to remove the text on the 
screen you have to use this command "cls" which means clear screen. You can also change the
transparency value of cls by simply putting a value ranging from 
0 to 255 after the cls command. And I'll show you in a few lessons on how you can change the 
screen color to whatever you wish! You may be wondering about variables 
in DarkBASIC there are roughly three data types
 



```
Rem Clear the Screen
cls
Rem String Data
"Wikibooks rock!"
"My name is John Smith"
"Look I'm a string!"
Rem the number below is a real number or a floating point decimal
35.5555
Rem the number below that is an integer number
12345
wait key
end

```


 There you are! For, good practice at the start of all your programs 
put cls, in other languages until you clear the screen you have text on 
the screen. For example, in pascal unless you clear the screen you get the
same text leftover from your last modification. Indenting is also important 
but we'll get to that later. So why comment or indent? In team efforts or 
open source projects it makes your program more human readable, also it's 
easier to read and locate, plus you'll need to remember what's happening 
when you come back to your project later on and you might forget. Back to variables, 
you can name variables whatever you want but make sure they're not 
to long and they briefly describe what it does or used for.
 



 Here are some variable examples
 



```
string$ = "Hey I'm a string and I love it!"
float# = 333.445
integer = -11111

```


 So why are there symbols in front of the variables? This shows what 
kind of variable we're dealing with, a $ is a string? A real or float 
is a #, in some languages there is no symbol in front of the values which 
can be a bit confusing. So again this makes it more human readable. So when designing software make sure it's source code is human readable! Get into good habits in programming like indenting - it'll save you and others time. 
For now, clear your mind and come back again tomorrow.
 



  





 Alright it's time for some input other than press any key. Wouldn't you like 
to make your own game like Mad Libs? I'm trying to make one now in Visual C++, well in DarkBASIC you have to use the Input command. The input command needs a prompt(optional) and then a variable to store the input taken in. 
So what would this look like?
 



```

Remstart
Input Example
By Dbtutor
Yes you can have groups of comments
Remend

Input "Insert Name Here ",name$
Print name$;" is your name"

```


 Remember semi-colons? Well they can also separate your string 
from a variable(even if it is another string strange eh?). You can also 
have input as just a variable input so it would look like this.
 



```
Input a$

```


 Oh yes you can use floats and integers also using input! Above where 
I use a comma you can also use a semi-colon if you prefer. Remstart means everything after it is a comment so beware, it will make everything 
a comment until you use the Remend command. What if you're database 
programming in DarkBasic(not a good practice use Visual Basic instead I advise!) and you have a hundred clients that need to be stored in variables? 
You can use the Dim command!
 



```
Dim arrayname(arrayvalue,arrayvalue2(optional),arrayvalue3(optional)
arrayname(arrayvalue) = value

```


 Let me show a more indepth example, and you can still use 
strings, integers and floats as long as you follow the 
rules(remember which symbol if any goes in front!).
 



 A good dim statement
 



```
dim list$(10)
list$(0) = "Milk"
list$(1) = "Bread"
list$(2) = "Whatever"
Etc...

```


 A bad dim statement
 



```
dim list$(10)
list$(1) = "Whatever"
list$(11) = "This is a no no - you can't exceed the array declared value!"

```


 Hopefully you've been using these methods now, if not go 
review everything and put them into practice.
 



**Your Assignment** 




 Write a Mad Libs game
 



 Quiz is coming up! For now write that Mad Libs game and 
take it easy for awhile.
 



  





 Before we start here's a quiz! Told ya!
 



```
                                *Quiz #2*

```


**Which of these strings of text is a correct string?** 





 A)"Me"
 

 B)#noIam#
 

 C)"I am
 

 D)123456
 


  

**The Input Command Does What?** 





 A)Accepts user input and stores it into a variable for later retrieving.
 

 B)Lets the user type in a string to be used later.
 

 C)Prints out text on the screen.
 

 D)None of the above.
 


**It is good programming practice to?** 





 A)Not indent but comment heavily.
 

 B)Comment heavily.
 

 C)Comment when notes are needed, indent when needed, and use the cls command.
 

 D)Indent heavily.
 


**DarkBASIC is oriented to what?** 





 A)Database Programming.
 

 B)Application programming.
 

 C)Game Programming.
 

 D)Web programming.
 


**Why is it a good habit to make your program human readable?** 





 A)So that others can understand your program and you yourself can too.
 

 B)It's not.
 

 C)For open source projects.
 

 D)A + B.
 


**In the case of A = 1 And B = 0, what will C equal if A or B is true?** 





 A)2
 

 B)0
 

 C)1
 

 D)N/A
 



---



**#6 Corrected by: Cody C Oebel** 




 Note: if A = 1, and B = 0,Without knowing the expression for what
C will equal if A =1, and B = 0 tell's nothing of what C should equal . 
I Corrected answer for # 6 which should be D, or N/A.
 




---



**Quiz Answers Cheating Won't Help You Be a Better Programmer** 




  





 1 is A
 



 2 is A
 



 3 is C
 



 4 is C
 



 5 is A
 



 6 is C note: Correct answer is D, or N/A
 



 Edited by: Cody C Oebel
Correct answer for 6 is N/A , or D
 



  





  





  

 Okay, nice job if you didn't cheat and got a good mark or else try 
again until you do so. Let's take some time now to learn about game design 
a tad. Okay, let's take Donkey Kong Country it's a great graphical game and 
it's very fun. But some say that it has bad game design, in a sense it does 
you collect things that have no real value, does nothing special for the player. Let's look at Super Mario Bros.
 



  

 You collect coins to give the player an extra life and a higher score, 
you collect green mushrooms to also get a quick extra life, your main attack 
is jumping and you must avoid falling off the platforms, there is lots for 
the player to discover on their own, you finally collect big mushrooms to be stronger and if your lucky a flower to get a sort of hippy firepower. 
That's a good outlook when designing a platform game, it's alright to 
loosely base design on other successful games but don't outright 
copycat it.
 



  

 Now let's look at some Apogee games, Biomenace for example is like 
mario only more matured you have a gun but the basis for a good platformer 
is there. The game is based around the new advantage for the player as your 
gun is your survival. In space invaders, you do not collect things but 
it's a classic survival game, the arcade basis is survive as long as 
possible, get the highest score, with limited resources and powerups 
to temporarily allow prolonged survival through the hard parts. Let's look 
at an RPG, for example Final Fantasy is about your character 
growing and learning, it also has focus on the story.
 



  

 There are no real levels as you build your character until he's the ultimate 
in the universe and then defeat the main baddy, so really it's you the man. 
Focus on the main area of your game and build around it, I have done this for awhile and generally my games are liked. Do not make the game too hard, and if you find it fun after millions of test phases it's good. If you the 
designer feel any lukewarmness around any part of the game, change it until 
you feel happy. try to imagine what a total stranger will feel! Design is as important 
as making it work, without design how will you create a game? You have nothing 
to go on except making it up as you go. Remember, before all else is gameplay, then multimedia, then story and finally test your game and put it all together. Play games to see what makes them fun!
 



  

 Now, let's look at some operators. These are things that help us use math and logic in
Dark Basic, they should be straightforward.
 



**Operators** 




```
> is Greater Than
< is Less Than
>= is Greater than or equal to
<= is Less than or equal to

```


 Now let's apply the above to condition statements.
 



```
`10 = 9 is not 1 it's 0 
`So no text will be printed
if 10 = 9 then print "That'll never happen"
`But 10 is greater then or equal to itself
if 10 >= 10 then Print "This will always happen"
`10 is greater then 8 
if 10 > 8 then Print "10 is bigger then 8 no doubt"  
Etc.

```


 In number crunching we'll see square roots and all the math commands in DarkBASIC but for now we'll just deal with the rnd command.
 



 Here's the Syntax:
 



```
variable = rnd(value)

```


 Unfortunately rnd runs from 0 to the set range value, I do not know 
how to change it I'm afraid but if you need help consider asking a 
question on the DarkBASIC forums: [
 <http://www.thegamecreators.com>
 The Game Creators]. This link takes you to the homepage of DarkBASIC I 
have no username on the forum but did before, but since everyone was too 
eager to cut each other's throats I stopped visiting. Follow the rules to 
a tee or they'll bury you, and make sure you know what you're posting 
and expect the worst. Sorry, for scaring you but sometimes it's the truth 
I've had lots of feelings hurt and been angered at the sheer cruelness of 
the users before. Now then let's make a guessing game!!
 



  





  






---



 Note from a reader: You can get around this problem by simply using "value"
as one less than the highest number you want to get to, and then adding 1,
for example, if I want to generate a random number from 1 to 6 (like a
standard 6-sided dice):
 



 variable = rnd(5) + 1
 



 We use the value of 5 because that is one less than 6 (the number that we want).
This will generate a number from 0 to 5, and then add one, creating a number
from 1 to 6. Hope this helps, and I would have asked before adding this, but I
didn't see your contact info anywhere.
 




---



  





  





```
`Guessing Game Example
`By Dbtutor

cls

`Ask the users for their name
Input "Enter your name before you play! ";name$
wait key
cls

`Create a random number let's change the range a bit
value = rnd(9)
if value = 0 then value = 1
if value = 1 then value = 2
if value = 2 then value = 3
if value = 3 then value = 4
if value = 4 then value = 5
if value = 5 then value = 6
if value = 6 then value = 7
if value = 7 then value = 8
if value = 8 then value = 9
if value = 9 then value = 10

gosub guess

`Take a guess!
guess:
Input "Take a guess ";name$;"! ";guess
gosub checkguess

`Check the guess
checkguess:
if guess > value
  wrong = wrong+1
  Print "Sorry too high!"
  wait key
  cls
  gosub guess
endif

if guess < value
  wrong=wrong+1
  Print "Too low!"
  wait key
  cls
  gosub guess
endif

if guess = value then gosub win

`You won!
win:
cls
Print "You rock you've won the game!"
Print "You were wrong ";wrong;" times"
Print "Your guess was ";guess
Print "Press Any Key"
wait key
cls
end

```


 Wowzers! You started off programming hello world and now you've made 
a guessing game! Keep up the good work, if you're brave enough to show off 
your program at the newcomer's corner at the DarkBASIC forums. Now what 
does gosub do? Gosub stands for Go Subroutine, it's just a shorter geekier 
way of saying it. You need to have a label to jump too, and the label must be declared like so.
 




---



 Note from another reader: I have noticed that if you write the following line
 



```
value = rnd(9)
if value = 0 then value = 1
if value = 1 then value = 2
if value = 2 then value = 3
if value = 3 then value = 4
if value = 4 then value = 5
if value = 5 then value = 6
if value = 6 then value = 7
if value = 7 then value = 8
if value = 8 then value = 9
if value = 9 then value = 10

```


 The game will choose a number, and then increase it until it reaches 10. All you have to do is to press 10 when you're asked for the number and you won. To correct the problem, write the program as this:
 



```
`Guessing Game Example
`By Dbtutor
`modified by Huruba Dumitru Alin

cls

`Ask the users for their name
Input "Enter your name before you play! ";name$
wait key
cls

`Create a random number let's change the range a bit
value = rnd(9)
if value = 0 then value = 1

gosub guess

`Take a guess!
guess:
Input "Take a guess ";name$;"! ";guess
gosub checkguess

`Check the guess
checkguess:
if guess > value
  wrong = wrong+1
  Print "Sorry too high!"
  wait key
  cls
  gosub guess
endif

if guess < value
  wrong=wrong+1
  Print "Too low!"
  wait key
  cls
  gosub guess
endif

if guess = value then gosub win

`You won!
win:
cls
Print "You rock you've won the game!"
Print "You were wrong ";wrong;" times"
Print "Your guess was ";guess
Print "Press Any Key"
wait key
cls
end

```


 Now the game will only choose a number from 1 to 9, all you have to do next is to quess it.
 




---



 Note from another reader: I found that there is an easier way to do the correction above.
Dbtutor wanted a number one through ten and your correction only brought the number through 1 to 9.
Also because of the way you wrote this, the probability of getting a 1 is higher 
now than getting any other number. An easier way to fix this is like this...
 



```

<pre>
`Guessing Game Example
`By Dbtutor
`modified by Huruba Dumitru Alin


cls

`Ask the users for their name
Input "Enter your name before you play! ";name$
wait key
cls

`To solve the 0 being a value problem just add 1 instead 
value = rnd(9)+1
`the value down here is now no longer needed making the program less sloppier
`executes the command better now.

gosub guess

`Take a guess!
guess:
Input "Take a guess ";name$;"! ";guess
gosub checkguess

`Check the guess
checkguess:
if guess > value
  wrong = wrong+1
  Print "Sorry too high!"
  wait key
  cls
  gosub guess
endif

if guess < value
  wrong=wrong+1
  Print "Too low!"
  wait key
  cls
  gosub guess
endif

if guess = value then gosub win

`You won!
win:
cls
Print "You rock you've won the game!"
Print "You were wrong ";wrong;" times"
Print "Your guess was ";guess
Print "Press Any Key"
wait key
cls
end

```


 This is a much easier way to take 0 out of the options of random numbers
while not affecting your probability at all. In the future, if you need a 
random number then use
 



```
value = rnd(x)+1 
'with x being one less than you want to go to, I hope that helped.

```


  





  





  





```
gosub mylabel

mylabel:

```


 There you are, experiment a bit with labels to see what they can do. 
You can return to the last label you leaped to by using the return 
command.
 



**Assignment** 




 Show off your work at the forums(optional)!
 



 Make the hints more precise.
 



 Give a limited number of lives.
 



 Okay that's a day, go take a nap or something lol! :D
 



  





 I think I said the lesson would end with Day 7, I was wrong. Now let's 
learn about functions. Functions are used to make your own commands that 
are absent from DarkBASIC. They are also used to perform functions isn't 
it obvious. DarkBASIC has no object oriented programming or OOP so you can 
use functions to substitute if you are a very decent programmer. 
So how do you use a function?
 




---



 Note from reader: DarkBASIC Professional supports OOP with user defined
types and with pointers.
 




---



 Here's a Simple Function:
 



```
hello_world(1)
wait key
end

function hello_world(1)
  Print "Hello World"
endfunction

```


 Note from a reader: The above code includes a parameter to the function that is technically illegal in the BASIC language! The (1) following the function name should produce an error because the '1' would be considered to be the parameter's variable name and variable names can not start with a numeral. For DarkBASIC to allow such errors through promotes sloppy programming and would confuse new programmers if they were to 'upgrade' to more professional BASIC programming languages such as Microsoft's Visual BASIC (Ok, semi-professional!)
Also, given the nature of the function, no parameters are needed so the correct code should be as follows:
 



```
hello_world()
wait key
end

function hello_world()
   Print "Hello World"
endfunction

```


 Functions go at the end of your program and if your program runs into a function 
declaration beware! You can use exitfunction to exit a function easily. 
The brackets that follow a function's name can contain a list of parameters required by the function.
The list should be made up of the variable names to be used for each parameter.
Let's say we would like to place the "Hello World" message anywhere on the screen. We could provide
the x & y coordinates as parameters to the hello\_world() function as follows:
 



```
hello_world(20,10)
wait key
end

function hello_world(x,y)
   set cursor x,y
   print "Hello World"
endfunction

```


 In this example you can see when we called the hello\_world function at the start we provided
2 numbers. When the function is called, these numbers are placed into x and y so that x = 20 and y = 10.
These parameter variables are local only to the function which means they will not change any other variables
of the same name that are outside the function (unless those variables are made global which starts to make
this introduction to functions get more complicated so we will leave that until later).
The best way to use functions is by creating a library with your own commands/procedures.
For example, you can make your own output command by modifying our hello\_world function:
 



```
function output(x,y,msg$)
   set cursor x,y
   print msg$
endfunction

```


 Using this you can in a sense use Object Oriented Programming, if your a more advanced user.
 



 Example of a Library in DarkBASIC
 



```
`Basic Function Example

#include "myfunctionlib.dba"
x = 100
y = 10
hello_world(x,y)

`Now we have our own command!

Rem #####################################################################################

`Note the example below was not included in the above program it was in a different file named my
`functionlib.dba
`A little function library

function hello_world(x,y)
set cursor x,y
Print "Hello World"
endfunction

```


 The #include command in VC++ works like so:
 



```
#include <iostream.h>
using namespace std;
Etc.

```


 In DarkBASIC a library works similarly but not exactly like the 
C++ example. Now you've learned what a function is and does!
 



 Assignment:
 



 Use functions and libraries to make a Mad Libs game.
Make your own command, like one for adding and so on.
 



  





 This will probably be the last day in the life of lesson 3. We have 
been doing most of the time application and software programming. But 
soon enough we will write a game per day starting with Pong going to 
BreakOut and more. Unfortunately we won't write a Role Playing Game, for 
development of a role playing game takes months and roughly 5,000 or so
lines of code including tools we need to create.
 



  

 The Design Process of Software Is Like So
 



```
The Software I want to Develop Is
It's Main Purpose Is
Problems That Need to be Solved
Etc.

```


  

 In fact there's a method that involves a series of pictures 
that I cannot recall and another method similar to the one above. 
I hope you learned something about DarkBASIC programming during the 
course of Lesson 3. Day 9 will continue in the next lesson...
 



  










 Number Crunching
===================


### 




 Day 9 Cont'd
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Number_Crunching&veaction=edit&section=T-1 "Edit section: Day 9 Cont'd") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Number_Crunching&action=edit&section=T-1 "Edit section: Day 9 Cont'd") 

 ]



 This lesson is all but one day long. When it's done, we'll move on 
to 2d don't expect mario or pong yet first thing we'll be doing is 
learning string manipulation, in about a day or so then we'll move on 
to images and whatnot. Who likes math? Not me, that's why we'll be 
getting DarkBASIC to do math for us. It'll be easier then using 
a calculator you won't even have to think about it.
 



 Typical Math Operators
 



```
+ is Increment of a value
= is equal to
- is decrement of a value
÷ is the division symbol. (ALT + 246 to create the ASCII symbol for division)

X multipying

```


 Okay, first of all by increment I mean increasing a value by 
whatever and vice versia with decrement as you decrease values.
 



 Typical Programming Operators
 



```
+ still addition
= is equal to
- is subtraction
/ is division
* is Multiplication
< is less than
> is greater than
<> is not equal to
<= is less than or equal to
>= is greater than or equal to
:= is assigned the value of...

```


 Remember the above like you remember Christmas or you'll have 
problems doing math in programming! I can go on with more operators 
but it's not needed in a simple language like DarkBASIC as most of 
the math is taken care of by easier commands like wrapvalue.
 



 This example may be easy but here it is
 



```
`Math Example
`By Dbtutor

a = 1+2
b = 3-7
c = 9/3
d = 10*2

Print a
Print b
Print c
Print d
wait key
end

```


 Most people have already known what was going to happen 
and what was going on.
 



 Here's some easy stuff!
 



```
`Few math examples

a = 67

hexofa$ = hex$(a) ` hex$ returns value of 'a' as a hexdecimal string.
binaryofa$ = bin$(a) ` bin$ returns value of 'a' as a binary string.

b = 3

c = sqr(b)

inc d
dec e

Print a
Print hexofa$
Print binaryofa$
Print b
Print c
Print d
Print e
wait key
end

```


 Why you'd need these above commands is beyond me, you only 
need them in rare situations, for more examples of math in 
DarkBASIC consult the DarkBASIC editor's command reference under math.
For now it's over with...
 



  










 Loops
========


### 

 Day 10
 


 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Loops&veaction=edit&section=T-1 "Edit section: Day 10") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Loops&action=edit&section=T-1 "Edit section: Day 10") 

 ]



 Trust me loops are useful, they do tedious tasks and they're easy to work with.
 



 Take for example a lottery program
 



```
Dim lottery(100)
lottery(1) = 1
lottery(2) = 2
lottery(3) = 3
lottery(4) = 4
etc...
Print Lottery(1)
Print lottery(2)
Print Lottery(3)
etc...

```


 The above way is for squares, and people without loop knowledge.
 



 Done with a loop
 



```
`Let's image the dim command above is down here
for a = 1 to 100
     Print lottery(a)
next a

```



---



 Note from reader: You can't print "lottery(a)" as it does not exist, instead write this:
 



 dim lottery(100)
for a = 1 to 100
print a
next a
wait key
 




---



 Using loops remember to indent it makes the program more 
human readable for others. With loops we can finally have more 
advanced input, input without variables, well some variables. Let's 
look at some loops then.
 



 Repeat/Until
 



```
Repeat
   `what the loop does here
until conditionmet

```


 While/Endwhile
 



```
While conditionmet
   `What the loop does
endwhile

```


 Do/Loop
 



```
do
    `task here
loop

```


 Remember the only way to exit a loop is by quitting which is a no|no, 
the exit command which is the best way, or a gosub command. In some loops, 
the loop ends once a condition is met, and in others after a task is done 
it exits. If you paid attention you should know what I'm talking about. 
Day's over go eat, sleep, take a walk, whatever come back tomorrow!
 


### 

 Day 11
 


 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Loops&veaction=edit&section=T-2 "Edit section: Day 11") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Loops&action=edit&section=T-2 "Edit section: Day 11") 

 ]



 This is the advanced input section, if we want a system key we 
can easily use commands like spacekey(), etc. Go have a look at them, 
they are the easiest to understand, find out how to disable them from being 
able to be pressed in DarkBASIC also while you are there. For other keys 
there's two ways basically scancode(value) which is different per country's keyboard, a Spanish keyboard is different then a British one, and you have to find a value! Or you can use ASCII values, which has a humorous pronunciation(it's pronounced ass key :P). Find out what ASCII stands for at Wikipedia, just type it in the search box and there you go. You can find Wikipedia at
 [CLICK HERE TO GO TO WIKIPEDIA](https://www.wikipedia.org) 
 in case your just curious because I forget I believe it's American Standard Code for Information Interchange. We will be using the ASCII because it's the same for every computer 
and no need to use numeric values.
 



 Example:
 



```
`Loops are needed for input BTW
do
   if inkey$() = "charhere" then exit
loop

```


 Here's a key example
 



```
do
  if inkey$() = "a" then print "Lowercase A"
  if inkey$() = "A" then Print "Uppercase A"
loop

```


 Remember A is different from a when using inkey$(). Now the lesson's 
over with, for an assignment find out what ASCII stands for and experiment
with the inkey$().
 



  












 File Control & Data
========================


### 

 Day 12
 


 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/File_Control_%26_Data&veaction=edit&section=T-1 "Edit section: Day 12") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/File_Control_%26_Data&action=edit&section=T-1 "Edit section: Day 12") 

 ]



 Day 12 already, you're progressing towards a great career in programming 
DarkBASIC and programming in general! Lots of people have trouble writing 
files in DarkBASIC, and some have problems with Data types and more. This 
lesson will take a lot of time to cover, I'm going to say 5 days for you and 
about 2 weeks for me to write them. Hopefully, I'll get them done before but 
if not well you just have to wait for me or another to contribute. Today, 
we'll learn how to save a file.
 



 Take for example this scenario
 



```
text$ = "Hey guess what open me up in notepad and see what happens!"
set dir "C:/"
if file exist("openmeupfast.txt") = 1  
   delete file "openmeupfast.txt"
endif
open to write 1,"openmeupfast.txt"
write string 1,text$
close file 1
open to read 1,"openmeupfast.txt"
read string 1,newtext$
Print newtext$
close file 1
wait key
end

```


 What a mouth full! In machine language it takes several thousand lines 
to do this same exact thing crazy or what! As you found out, the code 
above creates a string variable, moves the directory we'll be working in 
to c drive, if the file exist deletes it(or else we cannot overwrite it as 
it already exists), writes the file, closes it, opens it to read the contents, uses a new string to contain the line of text, then Prints it and finally you have to press any key before it ends. Now that's great! But remember 
the extension? You can change it to create your own files. You can also write 
various things such as: bytes, characters, and so on. To see more of what 
you can write view the command reference under the DarkBASIC help file. We'll just be using string for now and later byte.
 



 This example will generate a syntax error and I'll tell you why now
 



```
a = 1
delete file "wrong.txt"
open to write 1,"wrong.txt"
write string 1,a

```


 Remember numbers are not strings, to make a number a string we can do the following:
 



```
a = 1
a$ = str$(a)
b = val(a$)

```


 The command str$ changes a number into a value, and the command val 
changes a string into a value. There are many other odd things you can 
do with strings as well which you can see under the DarkBASIC help file 
command reference of strings. See some examples and change them around a bit.
 



 Here's a useless kinda piece of software for strings
 



```
`Crazy Strings
`By Dbtutor

cls
message$ = "Hello World!"
Print "ASC() returns the ASCII number of the first letter in the str"
Print asc(message$)
Print "Len counts how many characters in a string"
Print len(message$)
Print "Mid gets the middle write characters of a string"
midval = 3
Print mid$(message$,midval)
Print "Here's the binary of the number 678"
Print bin$(678)
Print "Here's the hex of that number"
Print hex$(678)
Print "There are many more ways of destroying strings"
Print "Much are useless, but take a gander at them"
wait key
end

```


 As you saw above manuiplating strings is easy but pretty much useless. 
In some situations they are useful like a file manager tool which 
we'll be making very soon along with some other file stuff. In the 2d 
tutorial's final part we'll use files to make a very simple tool 
very much like ZZT or MegaZeux. There's lots to cover so bear with me! 
On day 13 we'll be learning more ways of writing files, remember byte? 
Well you can use it to write a value to a file. I used txt has my 
extension, try using .dat, .ini, etc. You can even make one up! Using write, 
you can also write word or an integer value, a long or long integer value, 
and even a float. Why I don't know.
 



 Good Example of Writing A File:
 



```
a = 1
b$ = str$(a)
if file exist("a") = 1 then delete file "a"
open to write "a",1
write string 1,b$
close file 1
if file exist("a") = 1 then readit = 1
if readit = 1
   open to read 1,"a"
   read string 1,c$
   d = val(c$)
   Print d
   Print "Same thing! Use val and str! Their better!"
   wait key
   end
endif

```


**Note: from Cody Oebel** 




 the above code fails to work properly, and will not compile and run.
 



 I found the If file exist("a") = 1 ... the = 1 is ambiguous, and is not needed.
 



 below is my version of this code snippet
 



```
`Edit by Cody C Oebel:
 
 g = 11
 set dir "c:/"
 b$ = str$(g)
 if file exist("a.txt") then delete file "a.txt"
 open to write 1, "a.txt"
 write string 1, b$
 close file 1
 if file exist ("a.txt")
 open to read 1, "a.txt"
 read string 1, z$
 d = val(z$)
 print d
 print "This should work now, and is smaller amount of code"
 wait key
 endif
 end

```


 Now, see what I mean? Later we'll be using current directories and 
file branching statements to make a simple file browser. Very simple! 
Write byte is sometimes used for example in tilemappers and so on but the 
standard is write string because it's simple. Remember keep it 
simple stupid!
 



 Let's write an array
 



```
dim a$(10)
a$(1) = "jsdakjlakljldsaf"
a$(2) = "ashjajasjhsjks"

save array a$(10),"array.ini"

load array a$(10),"array.ini"

for a = 1 to 10
  Print a$(a)
next a

wait key
end

```


**NOTE: Again this code above did not work: By Cody Oebel** 




 Here is my working version for other readers to see the minor mistakes.
 



 Also note at the bottom of the compiler it shows you the format
 



 for save array, and load array e.g. Filename, array.
 



 I also added the variable stringname filename$ to contain "array.ini"
 



```
dim a$(10)
filename$ = "array.ini"
a$(1) = "jsdakjlakljldsaf"
a$(2) = "ashjajasjhsjks"
set dir "c:/"
save array filename$, a$(10)

load array filename$, a$(10)

for a = 1 to 10
  Print a$(a)
next a

wait key
end

```


 Now we can save big ole arrays, database programming anyone? 
Remember our guessing game? Go back and fix it up a bit so that you 
can include this newly learned code in it. You've learned a lot about 
files so far. Perpare for directories on Day 13!
 


### 

 Day 13
 


 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/File_Control_%26_Data&veaction=edit&section=T-2 "Edit section: Day 13") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/File_Control_%26_Data&action=edit&section=T-2 "Edit section: Day 13") 

 ]



 Day 13 arrived and we're only two days away from the half way point. 
That's great news, as soon as you can be a master programmer in 
DarkBASIC the better! Well, really DarkBASIC takes awhile to master, not 
to scare you but I'm not a master programmer either. If you know somebody with 
a good game it's usually not that they're the best programmer but 
just a great game maker. Some DarkBASIC users have gone on to make 
commercial games such as: Dumbo & Cool, Star Wraith, etc. DarkBASIC 
is great for games and team efforts. Not so for applications as you'll 
find out today.
 



 Here's a simple file manager
 



```
Input "Set directory to: ";direct$
set dir direct$

```


 You don't get to see files do you? We can easily view files and 
whatever using some simple commands. Remember some are tedious, but 
when in use with loops! Now this is a file manager, you change dirs, 
view files, and whatnot, it's not a professional tool, it's showing you 
the ropes. But before we do it's time to have a look at a better 
file manager.
 



```
`Simple File Manager
`By Dbtutor

`Get the directory to use
setdirect$ = get dir$()

`Set the directory to the current directory
set dir setdirect$

`Current amount of items
items = 10

find first
Print get file name$(1)

for a = 2 to items
  find next
  Print get file name$(a)
next a

Wait key
end

```


 Wow, that's cool and all but there's no user input and no file 
manipulation dus this program is file system viewer. Just like 
windows explorer! Really nowadays writing a file manager is pretty 
much useless especially if it's ugly. But file managers in your program 
in DarkBASIC allows better productivity then in typing in the file 
name or directory and whatnot. We're not going back to the DOS days 
God forbid type in a command and hope it works! Remember I said tedious? 
Well there is a much better way to write the following program above. Don't 
worry we'll be writing a file manager later! Before I show you a more 
productive way.
 



 Follow these instructions:
 



```
Go to http://www.computechtenerife.com/
Register as a user.
Click on Dark Basic Support and then Downloads
Scroll down and find the function libraries
Click on the Db file selector
Download and extract the files for usage later

```


 Okay now that's done we can see a better way of doing things in 
the file system viewer world. We're only a few blocks away from 
the file manager.
 



```
`Simple File Viewer
`By Dbtutor

set dir "C:\"

Perform checklist for files
for a = 1 to checklist quantity()
  Print checklist string$(a)
next a

Wait key
end

```


 See how many lines less we have? There is other perform checklist for 
things such as directories and devices. Go have a look and change 
perform checklist for files command with a few of them.
 



  

 Now remember that file manager library you downloaded, if you 
haven't guessed we'll be modding some of the code inside the include 
file(not the function library) to make our own modded file manager. Remember 
the library is copyright to a DarkBASIC user known as TDK\_MAN one of the 
best DarkBASIC programmers out there besides you(just flattering) I'm sure 
you could beat him at his game after 30 years. Just kidding if your reading 
this TDK no offense. He's made lots of DarkBASIC programs including MatEdit 
which we'll be using later on in the 3d chapters along with a 3d moddler and whatnot.
 



 Here's the Source Code
 



```
`Thanks TDK For the Library Off your Site!
Rem Fileselector Function Demo - Copyright TDK_Man May 2003
Rem Modded Version By Dbtutor
gosub filemanager
filemanager:
#Include "FileSelect.dba"

Set Display Mode 800,600,16
Cls
Sync On

Rem Required DIM Statements At The Beginning Of Your Program
Dim Files$(1000,2): Dim Drv$(26): Dim Temp$(1000,2): Dim GotDrives(1)
Dim Path$(1): Dim Filename$(1): Dim SliderHeight(1): Dim FileOffset(1)

Title$="Load File": Rem Text to appear at top of fileselector
Filter$="*.*": Rem 3 char filter extension (Eg: 'TXT') or *.* for all files
CurDir$="C:\Program Files\Dark Basic Software": Rem Starting Directory

Rem Function Call
Selected=Fileselect(CurDir$,Title$,Filter$)
Rem On return Selected=1 if OK clicked and 0 if Cancel clicked

CLS
If Selected=1: Rem OK Was Clicked
  Print "Selected Filename: ";Filename$(0)
  Print "Selected Path: ";Path$(0)
  `Modded Code here
  Print "Press Any Key to Manage File"
  wait key
  myfile$ = filename$(0)
  mydir$ = path$(0)
  gosub managefile
Else: Rem Cancel Was Clicked
  Print "Cancel Button Chosen"
Endif

`All Original Code Below
`By Dbtutor
managefile:
set dir mydir$
getext$ = left$(myfile$,4)
if getext$ = ".bmp" or ".jpg" then gosub view_bmp
if getext$ = ".mid" or ".wav" then gosub view_audio

view_bmp:
Load image myfile$,1
paste image 1,1,1
set cursor 1,400
wait key
cls
gosub filemanager

view_audio:
load music myfile$,1
play music 1
wait key
cls
gosub filemanager

```


 There you are a easy file manager thanks to other peoples function 
libraries! You can find lots on TDK's site(
 <http://www.matedit.com/db.htm>
 ). 
Along with tutorials for functions and more. That's all for Day 13, there 
was no quiz for awhile so expect a lot of quizzes later on. I couldn't 
find anything worth quizzing you on. There will be lotsa data going on 
in Day 14.
 


### 


 Day 14
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/File_Control_%26_Data&veaction=edit&section=T-3 "Edit section: Day 14") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/File_Control_%26_Data&action=edit&section=T-3 "Edit section: Day 14") 

 ]



 We already know what variables are, but you haven't used data 
statements yet. Data statements work very easily, you just put 
data, space and then put all the types of data.
 



 Examples of Data
 



```
data "strings",12,5.6,"and integers and floats tooooooooooooooooo!!!!!!!"
data 12
data "string me"
data 5.50

```


 You can have lots of data types in one statement as long as you 
separate them with commas. That's useful but how can we read the data? 
Well we can use read.
 



```
`Read Example
data 4
read var1
Print var1

```


 You can use restore to reset the data pointer you'll see what I'm 
talking about later. It's good practice to use different labels to 
store different data.
 



```
`Big Data Example
gosub datastored

datastored:
data 1234
data 12
data 1
data 4
data 56 
gosub readdata

readdata:
read var1
read var2
read var3
read var4
read var5

print var1
Print var2
Print var3
print var4
Print var5

```


 First it stores data then reads it, you can do this backwards 
if you want. Whichever way you read and store data it works. Now we're
into games, no explaining(well some) just pure games programming. 
We'll program a game a day woohoo let's go now!
 



  










 2D Game Programming Pt 1
===========================


### 

 Day 15
 


 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/2D_Game_Programming_Pt_1&veaction=edit&section=T-1 "Edit section: Day 15") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/2D_Game_Programming_Pt_1&action=edit&section=T-1 "Edit section: Day 15") 

 ]



 The half way point, finally after all that coding and reading and days. 
This chapter we'll be making a text adventure using more text commands 
you'll now learn. Plus you'll learn how to clear the screen in various 
colors, and oh boy you're gonna enjoy this lesson.
 



 You probably thought, my God does the text always have to be white!
 



```
`NOPE
ink rgb(0,255,0),1
Print "OMG FINALLY COLOR!"

```


 There you are! I'm a Canadian but I still spell color as color instead 
of colour. What's the RGB for? It stands for Red, Green, Blue, look 
at your monitor with a lens you'll see lots of those pixels in those 
colors. The rgb must be separated by brackets and then a comma for the transparency value. The transparentcy ranges from 0 to 255. RGB values 
range from 0 to 255 also.
 



 Here's Some Colors to Remember
 



```
255,0,0 - red
0,255,0 - green
255,255,0 - yellow
0,0,255 - blue
0,255,255 - cyan
255,255,255 - white
0,0,0 - black
255,0,255 - pink
192,192,192 - light grey

```


 To see more have a look in paint, view the rgbs values and fool 
around that's the way I found out, so you should find out too. Using 
these above values you should be able to make nice colors. The lower the 
value the darker, the higher the lighter.
 



 Now after that you want a better way to Print right?
 



```
text x,y,string$

```


 When using text, you need to use + instead of a semi-colon to 
separate variables. All values must be a string, remember to convert a
value to a string use the str$ command as seen in Lesson 6.
 



 The Right Way
 



```
a = 1
text 1,100,"This is no syntax error "+str$(a)

```


 The Wrong Way
 



```
a = 1
text 1,100,"This is a syntax error you won't see this text until you fix "+a

```


 We can change the font easily
 



```
set text font fontnameasstring$

```


 We can make our text opaque easily too or allow us to write over
other text values
 



```
set text opaque

```


 Here's style changes
 



```
set text bold
set text italic
set text bolditalic

```


 Here's how to change the size
 



```
set text size integernumber

```


 Okay here's all those in a program
 



```
set text font "Times New Roman"
set text size 30
set text bold
text 1,100,"Hey"

```


 You assignment is to fool around with text values and 
colors, come back tomorrow
 


### 


 Day 16
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/2D_Game_Programming_Pt_1&veaction=edit&section=T-2 "Edit section: Day 16") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/2D_Game_Programming_Pt_1&action=edit&section=T-2 "Edit section: Day 16") 

 ]



 Okay, now we've learned lots about changing text values it's 
time to write your own text adventure. We'll call it 
"Dungeons of Doom", it'll have the player to escape the 
dank dungeons of a castle using numerous data commands 
and whatnot.
 



 First let's do an outline:
 




[![](//upload.wikimedia.org/wikipedia/commons/a/ac/Outline6ql.th.jpg)](/wiki/File:Outline6ql.th.jpg)





 Now we have an outline let's write a simple story:
 



 Evil Elves have captured you in their prison, now you must escape 
the Dungeon of Doom. Beware some turns lead to doom, others lead 
to a way out.
 



 There is only two ways to die in our game, since it's more like 
a maze anyways.
 



 Now Let's Do Some Data For It:
 



```
`Dungeons of Doom
`By Dbtutor

`Room
dim room1$(10)
dim room2$(10)
dim room3$(10)
dim room4$(10)
dim room5$(10)
dim room6$(10)
dim room7$(10)
dim room8$(10)
dim room9$(10)
dim room10$(10)
dim room11$(10)
dim room12$(10)



rem -----------------
gosub startgame

startgame:
cls
gosub start
for a = 1 to 10
   Print room1$(a)
next a

do
   if inkey$() = "l" then gosub room1_b
   if inkey$() = "r" then gosub room2_b
   if inkey$() = "u" then gosub room3_b
loop

room1_b:
cls
gosub room1
for a = 1 to 10
   Print room2$(a)
next a
wait key
end

room2_b:
cls
gosub room2
for a = 1 to 10
   Print room3$(a)
next a
wait key
end

room3_b:
cls
gosub room3
for a = 1 to 10
   Print room4$(a)
next a

do
   if inkey$() = "l" then gosub room4_b
   if inkey$() = "r" then gosub room5_b
   if inkey$() = "d" then gosub startgame
   if inkey$() = "u" then gosub room6_b
loop

room4_b:
cls
gosub room4
for a = 1 to 10
   Print room5$(a)
next a
wait key
end

room5_b:
cls
gosub room5
for a = 1 to 10
   Print room6$(a)
next a

do
   if inkey$() = "b" then gosub room3_b
loop

room6_b:
cls
gosub room6
for a = 1 to 10
   Print room7$(a)
next a

do
   if inkey$() = "l" then gosub room7_b
   if inkey$() = "r" then gosub room8_b
   if inkey$() = "d" then gosub room3_b
   if inkey$() = "u" then gosub wingame
loop

room7_b:
cls
gosub room7
for a = 1 to 10
   print room8$(a)
next a
do
   if inkey$() = "b" then gosub room6_b
loop

room8_b:
cls
gosub room8
for a = 1 to 10
   print room9$(a)
next a

do
   if inkey$() = "b" then gosub room6_b
loop

wingame:
cls
gosub win
for a = 1 to 10
   print room10$(a)
next a
wait key
end

`Data Statements
start:
data "Dungeons of Doom - Starting Area"
data "The cell door swings open, the guard lies dead in a pool of blood"
data "A large gash does through his neck, clutching your dagger you"
data "Have a decision to make."
Data "You can Go - L>eft, R>ight, or U>p"

for a = 1 to 5
   read room1$(a)
next a

return

room1:
data "Dungeons of Doom - Room 1"
data "You look around the corner and leap out at a guard"
data "Sticking a sharp spear in the air your gored by it"
data "Through the heart you die instantly and never escape"
data "The Dungeons of Doom....."
data "Press Any Key"

for a = 1 to 6
   read room2$(a)
next a

return

room2:
`Right of start
data "Dungeons of Doom - Room 2"
data "As you reach the room, you notice the walls close in!"
data "You are squished between the walls"
data "The End - Press Any Key"
for a = 1 to 4
   read room3$(a)
next a

return


room3:
`North of the start point
data "Dungeons of Doom - Room 3"
data "This room is a room that leads all ways..."
data "U>p, L>eft, R>ight or D>own"
for a = 1 to 3
   read room4$(a)
next a

return

room4:
`Left of Up one from start point
data "Dungeons of Doom - Room 4"
data "You run into a monstrous troll, who proceeds to bash you"
data "Over the head with a club, waking up inside a pie"
data "You are instantly eaten by a horde of trolls"
data "The End - Press Any Key"

for a = 1 to 5
   read room5$(a)
next a

return

room5:
`Right of the room4
data "Dungeons of Doom - Room 5"
data "You run into a dead end, you must go out the way you came"
data "B>ack"

for a = 1 to 3
   read room6$(a)
next a

return

room6:
`North of Room
data "Dungeons of Doom - Room 6"
data "This room is a dank one, to the north you feel cold air a way out?"
data "U>p, L>eft, R>ight, or D>own"

for a = 1 to 3
   read room7$(a)
next a

return

room7:
`Left of the room 6
data "Dungeons of Doom - Room 7"
data "Dead End Go Back"
data "B>ack"

for a = 1 to 3
   read room8$(a)
next a

return

room8:
`Right of Room 6
Data "Dungeons of Doom - Room 8"
data "Dead End Go Back"
data "B>ack"
for a = 1 to 3
   read room9$(a)
next a

return

win:
Data "You Won"
Data "Escaping to the Forest, now you need to find a town!"
data "Press Any Key"

for a = 1 to 3
   read room10$(a)
next a

return


```


 This game is complete, all things should work if not feel 
free to email me at: thenerd2468@hotmail.com
 



 Now then your assignment to show you know what's going on is to go 
back and add in comments describing what's happening in each. The final 
part in your assignment is to edit all the code and data statements to 
make a sequel, add rooms, and more. No this game is not a text role 
playing game, we'll make a text role playing game in the next lesson. I 
think tomorrow your gonna have a break-out of game programming.
 


### 


 Day 17
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/2D_Game_Programming_Pt_1&veaction=edit&section=T-3 "Edit section: Day 17") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/2D_Game_Programming_Pt_1&action=edit&section=T-3 "Edit section: Day 17") 

 ]



 Oh boy, oh boy, oh boy! We're going to make a Pong game today, a BreakOut 
game today, and your going to learn about images, sprites and more! Okay, 
so how can we load multimedia in DarkBASIC? Remember in the file manager 
program we had some confusing formats of files in there. One thing I 
didn't add was animations unfortunately.
 



 Multimedia Example:
 



```
`Image
`Supports bmps and jpgs only
id = 1
string$ = "myimage.bmp"
load image string$,id
x = 1
y = 1
paste image id,x,y

`Music
`Sound works the same way, only instead the word music is replaced with the word `sound
`Supports are: wav, mp3, and midi
musid = 1
musstring$ = "mymusic.mid"
load music musstring$,musid
play music musid
stop music musid
loop music musid

`Animation
`Supports gif, avi, may support other formats
animid = 1
animstring$ = "myanimation.gif"
load animation animstring$,animid
play animation animid

`Bitmap
`Works same as image only supports bitmaps, you can load only 32
bmpid = 1
bmp$ = "mybmp.bmp"
load bitmap bmp$
`This pastes the bitmap, but the id can be used to create bitmaps at certain `locations 
`see bmps under the command reference for those details

end

```


 Go look at some more examples of multimedia in DarkBASIC, some more 
are 3dsound, and you can play music off your cd too. We'll be using 
some more examples of multimedia in DarkBASIC in later chapters for 
now we'll be focusing on the said above in the example.
 



 Your main question may be what is a sprite? A sprite is a 
2d character that is used in games. Basically a sprite is a 
image that does more, in DarkBASIC sprites are the lifeblood 
of the system.
 



 Sprite Works Like
 



```
sprite spriteid,x,y,imageid

```


 You cannot use load bitmap and use that as an image for your sprite, 
you can only use images loaded by the load image command.
 



  

 Before you did not manipulate the x,y cords of a image in DarkBASIC 
well that's about to change. Before we start, if we leave the computer 
to take care of our game's framerate then our game will run slow and 
differently on different paced computers. Use sync on, to turn the 
framerate over too you and away from the computer. Every time the 
sync command is used the screen is updated constantly. Use 
the sync rate command, to set the rate the frame refreshes, 
mostly 30 is good for 3d games in DarkBASIC, and 40 for 2d games 
is also good too, but use 30 to make sure. There are a 
few commands in darkbasic that draws crude graphics, the commands 
we'll use are: line(line startingx,toendingx,startingy,toendingy), 
circle(x,y,radius), and dot(dot x,y). They draw these graphics in 
the default ink, if the ink is not set it'll use cyan as a default. 
There are more commands that draw different basic 2d shapes, but 
we won't be using them. If your curious go check them out 
under BASIC2d under the DarkBASIC command reference.
 



  

 Here's an example of you being able to move a circle
 



```
`Moving Circle
`By Dbtutor

`Hide the mouse
hide mouse

`Setup sync rate
sync on
sync rate 30

`Make the screen grey
cls rgb(192,192,192) 

`Select an ink color for us, make it all transparent
ink rgb(0,155,0),0

`Draw the circle at coordinates provided
xpos = 100
ypos = 200
circle xpos,ypos,10

`Start the main loop
do
   `Clean up mess left over, and re-draw circle
   cls rgb(192,192,192)
   circle xpos,ypos,10

   `User control
   if upkey() = 1 then ypos = ypos - 7
   if downkey() = 1 then ypos = ypos + 7
   if rightkey() = 1 then xpos = xpos + 7
   if leftkey() = 1 then xpos = xpos - 7
   `Allow no leaving the screen
   if xpos > 600 then xpos = xpos - 7
   if xpos < 1 then xpos = xpos + 7
   if ypos > 400 then ypos = ypos - 7
   if ypos < 1 then ypos = ypos + 7
   `Refresh the screen
   sync
loop
   

```


 Wow that worked out great eh? Let's get some sleep for now.
 


### 


 Day 18
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/2D_Game_Programming_Pt_1&veaction=edit&section=T-4 "Edit section: Day 18") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/2D_Game_Programming_Pt_1&action=edit&section=T-4 "Edit section: Day 18") 

 ]



 Before we start I'd just like to thank everybody for visiting 
this wikibook, taking time to read it and for knowing when I google 
"DarkBASIC Programming" I see my book on the first page. That's a great 
feeling! I hope you learn something, I'll try and get this book done very 
soon but I've been very busy with learning new things and my schoolwork. 
I've been learning Assembly, C++, Pascal, & Visual Basic I'm also 
considering buying a console building kit "The XGameStation" by 
Mr Lamothe or as you may know him Andre' Lamothe or Lord Necron. 
He's one my biggest inspirations for programming besides 
Lee Bamber(the visionary behind DarkBASIC). Okay let's start with the 
pong game, I must say it's been a challenge writing this pong game, 
I've had lots of bugs with it. You must use your own images, 
only the source code is included.
 



**Understanding the Material** 
 Before I go ahead with the Pong game there is some things that I 
must, nay, need to explain to you. First, of all you need to 
understand what a "sprite" is, yes I know I mentioned it but not has 
in depth as I need to now, again that was just a basic example. Basically, 
put a sprite is nothing but an active image that allows more manipulation
then standard bitmaps. In our terms, speaking a sprite is in most cases 
nothing but a 2d character. We can do more with sprites in DarkBASIC 
then we can simply using just plain images.
 



 You already know how to setup a sprite. But you do not know how to 
delete sprites, how to detect collision with sprites, and have not used 
them very much yet. The syntax of deleting a sprite is simple: delete 
sprite spriteid. The sprite obviously must exist if not you'll get a 
runtime error stating that the "bob" or sprite does not exist. The same 
works for collisions with sprites: the precise and best way is by using 
this command sprite collision(spriteid1,spriteid2). Again they must exist 
has I stated, and you must have two, again I'm stating the obvious but 
there are pretty dumb people out there.
 



 The other way works the same thing except it's not has precise and 
goes like this: sprite hit(spriteid1,spriteid2). Easy! What may not be 
so easy after reading the code below is what the random numbers are for. 
These random numbers simply put are so that the computer generates a 
number from 0 to 1 in which direction the ball should go. They are for 
both X axis and Y axis and you should know what those are already.
 



 The Pong Game -
 



 if you don't understand 
the material review 
previous lessons
or consult the DarkBASIC help files.
 



```
`Pong example code
`By Dbtutor
`You must use your own multimedia!

sync on
sync rate 40
hide mouse

`Load the images
load image "paddle1.bmp",1
load image "paddle2.bmp",2
load image "ball.bmp",3

` Load the music
load music "Dodge This.mid",1

` Load the sound
load sound "thump.wav",1

` Play the music 
play music 1

` Start the main game loop
` Setup some variables first
oneypos = 1
onexpos = 1
twoypos = 1
twoxpos = 620
bally = 150
ballx = 150
movey = rnd(1)
movex = rnd(1)
onegoal = 0
twogoal = 0

do

 `Display Scores & Whatnot
 set text opaque
 text 1,1,"Goals: "+str$(onegoal)
 text 585,1,"Goals: "+str$(twogoal)

 `Player Control for 1
 if upkey() = 1 then oneypos = oneypos - 7
 if downkey() = 1 then oneypos = oneypos + 7
 if oneypos < 1 then oneypos = oneypos + 7
 if oneypos > 432 then oneypos = oneypos - 7

 `The paddle sprite
 sprite 1,onexpos,oneypos,1

 `Player 2 Paddle
 if inkey$() = "w" then twoypos = twoypos - 7
 if inkey$() = "s" then twoypos = twoypos + 7
 sprite 2,twoxpos,twoypos,2
 if twoypos < 1 then twoypos = twoypos + 7
 if twoypos > 432 then twoypos = twoypos - 7

 `The Ball
 if movey = 1 then bally = bally + 5
 if movey = 0 then bally = bally - 5
 if movex = 1 then ballx = ballx + 5
 if movex = 0 then ballx = ballx - 5
 sprite 3,ballx,bally,3

 `Collision Detection
 if sprite hit(1,3) = 1 then movex = 1:play sound 1
 if sprite hit(2,3) = 1 then movex = 0:play sound 1
 if ballx < 1 then movex = 1:twogoal = twogoal + 1:play sound 1
 if ballx > 620 then movex = 0:onegoal = onegoal + 1:play sound 1
 if bally < 1 then movey = 1:play sound 1
 if bally > 432 then movey = 0:play sound 1

 `Wins
 if onegoal = 10
 text 100,150,"Player 1 Has Won!"
 wait 300
 end
 endif

 if twogoal = 10
 text 100,150,"Player 2 Has Won!"
 wait 300
 end
 endif

 `Refresh the screen
 sync

loop

```


 Okay there you are Pong in all it's glory. Now it's time for a prolonged Quiz.
 




**Quiz** 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/2D_Game_Programming_Pt_1&veaction=edit&section=T-5 "Edit section: Quiz") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/2D_Game_Programming_Pt_1&action=edit&section=T-5 "Edit section: Quiz") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



**1** 
 In Game Design What Is A 2d Character Called?
 




 A) Mario
 

 B) Chara
 

 C) Clip Art
 

 D) Sprite
 


**2** 
 True or False: 30 is a good sync rate for games on any computer
 




 T)rue
 

 F)alse
 


**3** 
 Which is the best way to manually setup framerate in a computer game
 




 A)Set the sync on, set it to an average rate such as 30, & use sync to refresh when need
 

 B)Let the computer handle it all
 

 C)Set the sync rate to 0
 

 D)Simply turn on sync
 


**4** 
 You can declare data statements how?
 




 A)Data datatype
 

 B)dat datatype
 

 C)godarkbasic data datatype
 

 D)data.db datatype
 


**5** 
 What kinds of data does data statements hold?
 




 A)Strings Only
 

 B)Arrays
 

 C)Strings, Integers, & Reals(floating point decimals or floats)
 

 D)Integers
 


**6** 
 In our text adventure you had to escape:
 




 A)Castles
 

 B)Prison
 

 C)Forest
 

 D)A Dungeon
 


 Okay now, for the answers, if you cheat your on your own after
you have this book completed so don't be a wimp and take the
coward's way out.
 



 Answers:
 


1. D
2. True
3. A
4. A
5. C
6. D



 Finally we need to end this long hard-coding day, for another awaits with many new coding properties.
 



  










 2D Game Programming Pt 2
===========================


### 

 Day 19
 


 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/2D_Game_Programming_Pt_2&veaction=edit&section=T-1 "Edit section: Day 19") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/2D_Game_Programming_Pt_2&action=edit&section=T-1 "Edit section: Day 19") 

 ]



 Okay, so we've made Pong the next step is to make a Break-Out game. Just giving you,
the source code of the game would prove you didn't code the pong game by yourself.
So what I'm going to do is let you program your own break-out game, and I will give some
guided examples. After this quick break-out game exercise I will be discussing multimedia!
 



 Collisions
 



*if sprite collision(paddle,ball) = 1 then bouncball = 1* 




 Possible Solutions to Make the Ball Bounce :S
 



 -Setup a variable called ballmovex, set it's value to random 1 or 0.
-if the ball strikes 0 make it move left, and in the case of 1 right
-do the same thing with a variable called ballmovey, except in this
-case moving up or down.
 



 Possible Solutions of Setting Up Blocks
 



 -Setup an array which holds the x positions of your bricks, and the 
y positions of your bricks. Then one for if the brick has been struck,
so if the brick has been struck it will equal 1 or true and then have
conditional statements(if and thens) for the action to break the brick.
 



*if if sprite collision(paddle,brickhit(bricknum)) = 1 then destroybrick = 1* 




  





 if destroybrick = 1
 



```
 brickx(bricknum) = -1
 bricky(bricknum) = -1

```


 endif
 



  





 Something to Remember:
 



```
  Remember you need a do loop to accept advanced input such as inkey$(), returnkey(), etc.

```


  





 I've given lots of suggestions as to how to complete the Break-Out game, hopefully this 
will go down nice and easy without heartburn. If you have a case of "what thes" then 
I suggest you visit the codebase on the official DarkBASIC home page:
 <http://www.thegamecreators.com>
 , it has everything a DarkBASIC coder shall need.
 



```
**Multimedia In DarkBASIC - Audio**

```


 Not many people can say that they hate music, in fact most people love hearing ambient
music in games, I know I do! Above, I used some strange commands, play sound, play music,
load music, play music. Well, DarkBASIC has three audio supports, MP3, Wave, and Midi.
Loading music is very simple, and sound works the same way. So I'm going to give you a
code example, you bring the sounds, I'll bring the code!
 



  





  

**Code Example for Audio:** 




```
Rem Audio Example
`Load audio
load sound "mysound.wav",1
load music "mymusic.mid",1
`Play audio once
play sound 1
`Loop music
loop music 1
`wait key
wait key
stop music 1
loop sound 1

```


  

 So what are the numbers at the end? Remember in images, well this number is a numeric ID 
given. Remember the location of your audio, and extension!
 



```
**Multimedia in DarkBASIC - Animations**

```


 This will probably be the last multimedia entry, unless someone does one on dlls, 
I won't be, since I have an older version of DarkBASIC.
 



 Animations at this point in time do not include those such as mario walking, however
they do include those such as animated GIFs(Graphic Interchange Format), and
AVIs(Audio Video Interleave). So far I believe there are two formats for
animation .gif, and .avi please tell me so if otherwise. Animations can
be useful for game over screens and maybe even some Mortal Kombat style
finishers!!
 



  





  





  





**Code Sample** 




```
load animation "animation1.avi",1
play animation 1
wait key
stop animation 1
load animation "animation2.gif",2
play animation 2
loop animation 2

```


  

**-PLEASE HELP FINISH THIS BOOK, CONTRIBUTE IN ANY WAY POSSIBLE PLEASE!-** 




 \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_
 



 This is about 2D Games. This Wiki helped me become the programmer I am today. No, I am not DBTutor, but I will contribute. I am IRON 
PROGRAMMER!! Talk to me on the DarkBASIC Forums if you have a question.
 



 I challenge YOU to create a 2D Melee Game. These are simple. Here is an example:
 



```
''cls rgb(150,150,150)

load image "Sumostein.bmp", 1
sprite 1, sprite1xpos, sprite1ypos, 1

sprite1xpos = 300
sprite1ypos = 300

load image "Sumocula.bmp", 2
sprite 2, sprite2xpos, sprite2ypos, 2

load image "Sumocula Punch.bmp", 3
sprite 3, sprite2xpos, sprite2ypos, 3
hide sprite 3

load image "Sumostein Punch.bmp", 4
sprite 4, sprite1xpos, sprite1ypos, 4
hide sprite 4

sprite2xpos = 300
sprite2ypos = 300

playeronelives = 3
playertwolives = 3

mainloop:
do
  cls rgb(150,150,150)
  sprite 1, sprite1xpos, sprite1ypos, 1
  sprite 2, sprite2xpos, sprite2ypos, 2
  sprite 3, sprite2xpos, sprite2ypos, 3
  sprite 4, sprite1xpos, sprite1ypos, 4
  hide sprite 3 
  if upkey() = 1 then sprite1ypos = sprite1ypos -5
  if downkey() = 1 then sprite1ypos = sprite1ypos +5
  if leftkey() = 1 then sprite1xpos = sprite1xpos -5
  if rightkey() = 1 then sprite1xpos = sprite1xpos +5
  if controlkey() = 1 then gosub sumosteinpunch
  if inkey$() = "w" then sprite2ypos = sprite2ypos -5
  if inkey$() = "s" then sprite2ypos = sprite2ypos +5
  if inkey$() = "a" then sprite2xpos = sprite2xpos -5
  if inkey$() = "d" then sprite2xpos = sprite2xpos +5
  if inkey$() = "x" then gosub sumoculapunch
  if spacekey() = 1 then end
  if sprite1xpos =<0 then sprite1xpos = sprite1xpos +5
  if sprite1xpos =>550 then sprite1xpos = sprite1xpos -5
  if sprite1ypos =<0 then sprite1ypos = sprite1ypos +5
  if sprite1ypos =>350 then sprite1ypos = sprite1ypos -5
  if sprite2xpos =<0 then sprite2xpos = sprite2xpos +5
  if sprite2xpos =>550 then sprite2xpos = sprite2xpos -5
  if sprite2ypos =<0 then sprite2ypos = sprite2ypos +5
  if sprite2ypos =>350 then sprite2ypos = sprite2ypos -5
loop

sumoculapunch:
hide sprite 2
show sprite 3
wait 250
if sprite collision(3, 1) = 1
  playeronelives = playeronelives -1
  if playeronelives = 0
  delete sprite 1
  end
endif
endif
hide sprite 3
show sprite 2
gosub mainloop

sumosteinpunch:
hide sprite 1
show sprite 4
wait 250
if sprite collision(4, 2) = 1
  playertwolives = playertwolives -1
  if playertwolives = 0
  delete sprite 2 
  end
endif
endif
hide sprite 4
show sprite 1
gosub mainloop''

```


 That is a simple format for a multiplayer melee game in 2D. Notice
I have cleverly not supplied the media! Hahahahahaaaa! Now get programming!
 


### 


 Day 20
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/2D_Game_Programming_Pt_2&veaction=edit&section=T-2 "Edit section: Day 20") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/2D_Game_Programming_Pt_2&action=edit&section=T-2 "Edit section: Day 20") 

 ]



 ->>3d Programming<<-
Tadadada! (I'm not DBtutor, nor IRONPROGRAMMER, i'm gluon, you can find me on the DexOS forums)
   

 First Example
   

 A controlable cube:
 



```
SYNC RATE 60

MAKE OBJECT CUBE 1,1
DO
    if leftkey()=1 then YROTATE OBJECT 1,OBJECT ANGLE Y(1)-2
    if rightkey()=1 then YROTATE OBJECT 1,OBJECT ANGLE Y(1)+2
    if upkey()=1 then XROTATE OBJECT 1,OBJECT ANGLE X(1)-2
    if downkey()=1 then XROTATE OBJECT 1,OBJECT ANGLE X(1)+2
    SYNC
LOOP
END

```


 Instead of MAKE OBJECT CUBE we can say SPHERE,etc.
   

 A textured object:
 



```
sync on
hide mouse
make object cube 1,20
load image "car.jpg",1
texture object 1,1,1
do
sync
loop

```


 Moving an object
 



```
Sync on
sync rate 40
hide mouse  
make object cube 1,10  
do
   if rightkey()=1 then y=wrapvalue(y+1)
   if leftkey()=1 then y=wrapvalue(y-1)
   if upkey()=1 then move object 1,1
   if downkey()=1 then move object 1,-1
   yrotate object 1,y
   sync
loop

```


  










 Original single-page version
===============================




 Table of contents
 


 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-1 "Edit section: Table of contents") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-1 "Edit section: Table of contents") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Some lessons may be incomplete or not done at all. If you feel you're up to it contribute!!
 












* [Foreword](#Foreword)
* [Lesson 1 - Introduction to Programming](#Lesson_1_-_Introduction_to_Programming)
* [Lesson 2 - The Hello World Tradition](#Lesson_2_-_The_Hello_World_Tradition)
* [Lesson 3 - Fundamentals of DarkBASIC](#Lesson_3_-_Fundamentals_of_DarkBASIC)
* [Lesson 4 - Number Crunching](#Lesson_4_-_Number_Crunching)
* [Lesson 5 - Loops](#Lesson_5_-_Loops)
* [Lesson 6 - File Control & Data](#Lesson_6_-_File_Control_&_Data)
* [Lesson 7 - 2D Game Programming Pt 1](#Lesson_7_-_2D_Game_Programming_Pt_1)
* [Lesson 8 - 2d Game Programming Pt 2](#Lesson_8_-_2D_Game_Programming_Pt_2)
* [Final Words By Dbtutor](#Final_Words_By_Dbtutor)
* [Reference A - Good Programming Habits](#Reference_A_-_Good_Programming_Habits)
* [Reference B - Game Design Books & Sites](#Reference_B_-_Game_Design_Books_&_Sites)






















* [Original single-page version (for reference during rearrangements)](/w/index.php?title=DarkBASIC_Programming/Printable_version/Original_single-page_version&action=edit&redlink=1 "DarkBASIC Programming/Printable version/Original single-page version (does not exist)")














---





 Foreword
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-2 "Edit section: Foreword") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-2 "Edit section: Foreword") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 First of all, thanks for checking out this book on DarkBASIC. It's the first WikiBook on the subject of DarkBASIC Programming. Not everyone can program, 
but in the information age I believe that it's necessary for everyone to 
gain the skills to use different types of technology. Especially, 
computers and programming. Today and for the next 30 days you'll learn 
a lot about DarkBASIC Programming and a lot about what you can accomplish 
using a computer. DarkBASIC is all about making DirectX do your 
evil bidding and your domination of the world of computer game programming. 
I hope you read and contribute to this book, as well as rant 
because then I can fix stuff others will insult. I hope you enjoy!
 




---





 Lesson 1 - Introduction to Programming
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-3 "Edit section: Lesson 1 - Introduction to Programming") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-3 "Edit section: Lesson 1 - Introduction to Programming") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 In this tutorial I'm going to assume you have no prior programming experience, 
or else you wouldn't be reading this book. You would pick up the manual, 
compare it to C++, and program in DarkBASIC easily. First of all not to 
scare you but game programming is not easy and secondly you are not going to 
make a <insert copycat blockbuster game here> killer or clone or whatever 
in DarkBASIC for a long time. I'm also going to assume you have v1.0 of the "classic" or non-pro edition of DarkBASIC or else with another version you'll have 
some problems running this code unfortunately. Programming is not a 
new concept, and there are many hundreds of languages 
such as DarkBASIC out there, one such programming language comparable 
to DarkBASIC is BlitzBASIC, and you may have heard of Visual Basic.
 






 So what is programming?
 


 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-4 "Edit section: So what is programming?") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-4 "Edit section: So what is programming?") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 This isn't a stupid question. Programming is not just making applications for Windows, or talking a language your computer understands. Programming is input, process, and output. If you take computer sciences, chances are you'll be doing program outlines, but right now you're a hobbyist programmer so let's keep it simple. Not all of us know VC++ or Pascal. DarkBASIC is game oriented. You can make applications in it, but it's harder. There are no message boxes in the version we'll be using. But DarkBASIC is easy and fun, especially for beginner's and junior programmers. Instead of having to write 1000+ lines of code to put a 2d character on screen you'll write one, instead of writing a massive program to make a cube spin you'll write a simple and human readable one in 20 or less lines. If you have no patience, take it slow and easy and don't move on until you understand it all or else you'll be bald by the time you finish this wikibook. I will say this: this book is a work in progress. I'll be finished as soon as possible so, bare with me please. Programming is simply entering lines of code that once compiled, or is run, tells the computer to follow out a task until it's done. What's involved is input, or you programming; processing or computing; and finally output, what you get to see.
 
[![](//upload.wikimedia.org/wikipedia/commons/7/7f/Input-process-output.JPG)](/wiki/File:Input-process-output.JPG)





**Figure 1.1** 
 (This is the Model of Input, Process and Output.)
 **So you know:** 
 A coder is another word for a programmer.
 



 All programs follow the above method, since every program is (1) certainly programmed, (2) is certainly compiled, and (3) certainly displays results. Now, just what is code then? Code is the recipe for your program. Computers won't do a task wrong. You'll do the task 
wrong. To keep your program from doing things that could harm computers, the compiler(or program that checks to see if the program works) runs the program and generates syntax errors (if there's something wrong). These syntax errors, tell you that you made a mistake and you must fix it before you can see your program(in most cases). So, computers don't make mistakes.
 



 There are many sorts of errors also! The most common is called
 **a syntax error** 
 . A syntax error are mistakes in your program's code. A programming language like a written language is incorrect if it contains things that are gibberish. Like in English, asdfjdj is not a word, it's gibberish. Just like in DarkBASIC, print is a command, where as printf is not. Another kind of error is called a run-time error, this is when your program compiles but you don't get the results you want. Such as if your writing is sloppy, the word "hello" may look like jello and the person will get the wrong information from it. Run-time errors are things that aren't suppose to happen, like when in your favorite video game, when a character can sometimes walk through a wall, or the program crashing when this happens.
 



 The process of fixing your mistakes is called debugging. You'll get familiar with this; half your time or more will be spent doing debugging. So as much as possible, save, compile, debug, and run. It'll save you lots of anger, and stress. Finally remember this: with computers, the language goes through assembly or getting put into binary, and sent back to your programming language. If the binary pattern is correct, then you have no syntax errors. Remember, 0s are off or false, and 1s are on or true. Remember when I said assembly above?
 



 Well, here's how it works. First off, you compile or check syntax, then the code you entered passes through what's called machine language or assembly (its name changes depending on what its doing when it's compiling its assembler). Then it becomes pure binary (which is not human readable but meant for computers; they cannot understand anything other than 0s and 1s). Then it is sent back to the compiler where if the binary matches what's correct, it gets executed. If it doesn't, you get a syntax error and must debug. Now, don't quote me on that but that's basically what happens. So now you're ready to begin programming in DarkBASIC and will know what I talk about.
 



 One more thing: DarkBASIC is not case sensitive. If you don't know what this means, it means that DarkBASIC does not distinguish between upper-case letters and lower-case ones.
 




---





 Lesson 2 - The Hello World Tradition
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-5 "Edit section: Lesson 2 - The Hello World Tradition") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-5 "Edit section: Lesson 2 - The Hello World Tradition") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Alrighty, you came back. Good, let's hope you have played around with the DarkBASIC editor. Before you find out what the hello world tradition is (older programmers don't spoil it for them!), I think I should tell you something. The DarkBASIC editor is not very windows friendly, so make sure you download an IDE you like and then link it to the DarkBASIC.
 



**So you know:** 
 an IDE is an integrated development environment. It allows programming to be easier for professionals and beginners alike. For now, don't worry what an IDE is too much, you're only beginning after all.
 



 Okay, now then time to get to the tradition.
 



*Code* 




```

Print "Hello World!"
Print "This is Dbtutor's wikibook on DarkBASIC Programming!!"


```


*End of Code* 




 Copy and paste this source code into the IDE or editor (whichever) and run it. What you get is the easiest program you'll ever write in DarkBASIC. The hello world example is proud tradition of beginning programmers, so let's carry it on. Hello World Program puts the text hello world on the screen. But what are the quotation marks for? The quotation marks are used to show what you want to put on the screen. Otherwise, it would look like one big command.
 



**Your Assignment:** 




 Replace Hello World with any text you want
 



 First of all, I hope you completed the assignment above. In case you haven't, or had problems with this program I'll show you how. Okay, let's say you want to print a couple of things and you need it spaced for readability. Remember I said that print, prints the things inside the quotes? Well they're called strings, now strings are characters that you can change and manipulate. With no string to technically print, you'll just get a blank space. Now for all on one line you use a semi-colon(;). Experiment with these two methods above until you understand them. In DarkBASIC, your program already ends on its own doesn't it?
 



 But, it's good practice if you use the command "end" where your program needs to quit. So after the print commands in hello world, insert the command "end". Now, go to file and build EXE, save the EXE in whatever folder you want and run it. Technically it should just be a flash so quick you cannot see it. That's where you need some sort of waiting system, or input just to let you see the results. So delete the exe and open up DarkBASIC again, in our hello world before the end command insert a wait key. What a wait key does is allow the famous press of any key for the program to end, so rebuild the exe of this program and now run it. The program isn't very windows friendly is it? At the top of the program put in these commands:
 



*Code* 




```

Set window on
Set window layout 1,1,1
Set Window title "Hello World - A Friendly Greeting From DarkBASIC"
Set window position 100,200
Set window size 640,480


```


*End of Code* 




 Now run the hello world program, see what happens? We now have a nice little window friendly environment. But hey, if you're on a different computer with different settings you'll miss some of the text, and what on earth are all those numbers for anyways? Okay the numbers are the X coordinates and the Y coordinates in case you didn't do math in school X is horizontal and Y is vertical. In case, you don't know what those words are X runs left and right or across, and Y runs up and down. So X & Y are 2 axes so we have 2 dimensions, when we get to 3d expect to get dimensional for a paragraph or two. Now then for our last part of the day, let's find out how to change the position of where our text goes.
 



*Code* 




```

Set cursor 1,50


```


*End of Code* 





---



 Insert this piece of code above, right above the first Print statement. Our program is long now and we may also forget what some of the things above do. Welcome to comments, the Rem command lets you make notes, anything after Rem is ignored. You should always comment your code, so that others can understand it, and so you can know what you where thinking when you coded it and why you coded it the way you did. Remember, comment heavily!!
 



**So you know:** 
 Rem is short for Remark, and if I haven't told you yet BASIC stands for Beginner's All Purpose Symbolic Instruction Code.
 



 Here's what your program should look like in the end, roughly:
 



**Hello World Program Results** 




```

Rem Setup the window
Set window on 
Set window layout 1,1,1
Set window title "Hello World Program"
Set window position 100,200
Set window size 640,480

Rem put the first line of text 50 pixels down
Set cursor 1,50
Print "Hello World!"
Print "A friendly greeting from DarkBASIC!"

Rem wait for the press of any key
Wait key
Rem then end
End


```


**End of the Program** 





---



 Before we go here's a quiz:
 




---




**In DarkBASIC Strings Start With a:** 


 A)#
 

 B)\*
 

 C)'
 

 D)"
 



**And they end with a:** 


 A)%
 

 B)^
 

 C)&
 

 D)"
 



**BASIC stands for:** 


 A)Beginner's All Purpose Symbolic Instruction Code
 

 B)Bears Are Purposely Stealing International Cookies
 

 C)Beginner's Alphanumeric String Informed Code
 

 D)Beginning All Inserted Symbolic Intel Coding
 



**In 2d there are 2 axis which are they:** 


 A)U & V
 

 B)X & Y
 

 C)U & V(in textures), X & Y also
 

 D)Z & U
 



**Rem can make comments for how many lines:** 


 A)1 or More
 

 B)1 or less
 

 C)Single Line
 

 D)Double Line
 


**Okay Here Are the Answers, no cheating!** 





 1 & 2 is obviously D.
 

 3 is A.
 

 4 If you said anything but Z & U you should be on the right track but C is the best answer while
 

 B can be considered the most correct one.
 

 5 is C.
 

#### 

 Assignment
 


 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-6 "Edit section: Assignment") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-6 "Edit section: Assignment") 

 ]



 Experiment with the IDE and the DarkBASIC window commands.
Comment the hello world program when done.
Make a program that contains only comments.
Look up IDE on wikipedia.
Look around the DarkBASIC website(
 <http://www.thegamecreators.com>
 ).
 



```
                               == End of Lesson ==

```



---





 Lesson 3 - Fundamentals of DarkBASIC
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-7 "Edit section: Lesson 3 - Fundamentals of DarkBASIC") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-7 "Edit section: Lesson 3 - Fundamentals of DarkBASIC") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Well, we're almost at the end of your first week 
experiencing DarkBASIC programming or at least this book! Okay, 
the fundamentals are all about logic, developing programs, design, 
setting outlooks and the building blocks. This is not application 
oriented, it's more game oriented as DarkBASIC is for game programming. 
You'll find out about conditions, variables, logic and more. Remember, 
awhile ago when I brought up 0s and 1s, well a better way of looking at 
them is TRUE and FALSE. DarkBASIC is simple, so there are no boolean operators 
or are there? Let's say you declare a variable called, oh, let's say A. For 
now A = 0 until we say A = 1, there's another value called B and it's equal 
to 1. If we had C = 1 when A or B is true or if C = 1 when A and B equal true, 
but what if neither of these values are true? Then we'd have to use 
another value and our program quickly looks like this:
 




 if A or B = 1
 

 C = 1
 

 else
 

 D = 1
 

 endif
 


 That's logic, that's conditions, that's the if/endif command. Now I 
didn't indent above which I should have so anytime you use if/endif I 
want you to indent for the statements used okay? If you copied / pasted 
the above snippet in DarkBASIC and compiled it, you'd get no errors but 
if you'd ran this program you'd just get nothing. Why? They're just values 
and there is really no output to the screen involved, so let's change 
this program a bit.
 



**Simple Conditional Statements Program** 




```

Rem we can also use a ` to comment quickly I will do that
Rem from now on!

`Declare some variables
a = 1
b = 0

`The conditional statement
if a or b = 1
   c = 1
else
   d = 1
endif

if c = 1 then Print "Condition C is Met"
if d = 1 then Print "Condition D is Met"
wait key
end


```


 As you saw I used variables above, in case you didn't know variables 
are a way of storing data which can change. As you saw above if I changed 
the OR operator to a AND b = 1 then we'd have a whole new ball game on our 
hands. But let's sidetrack a little, if you wanted to remove the text on the 
screen you have to use this command "cls" which means clear screen. You can also change the
transparency value of cls by simply putting a value ranging from 
0 to 255 after the cls command. And I'll show you in a few lessons on how you can change the 
screen color to whatever you wish! You may be wondering about variables 
in DarkBASIC there are roughly three data types
 



```
Rem Clear the Screen
cls
Rem String Data
"Wikibooks rock!"
"My name is John Smith"
"Look I'm a string!"
Rem the number below is a real number or a floating point decimal
35.5555
Rem the number below that is an integer number
12345
wait key
end

```


 There you are! For, good practice at the start of all your programs 
put cls, in other languages until you clear the screen you have text on 
the screen. For example, in pascal unless you clear the screen you get the
same text leftover from your last modification. Indenting is also important 
but we'll get to that later. So why comment or indent? In team efforts or 
open source projects it makes your program more human readable, also it's 
easier to read and locate, plus you'll need to remember what's happening 
when you come back to your project later on and you might forget. Back to variables, 
you can name variables whatever you want but make sure they're not 
to long and they briefly describe what it does or used for.
 



 Here are some variable examples
 



```
string$ = "Hey I'm a string and I love it!"
float# = 333.445
integer = -11111

```


 So why are there symbols in front of the variables? This shows what 
kind of variable we're dealing with, a $ is a string? A real or float 
is a #, in some languages there is no symbol in front of the values which 
can be a bit confusing. So again this makes it more human readable. So when designing software make sure it's source code is human readable! Get into good habits in programming like indenting - it'll save you and others time. 
For now, clear your mind and come back again tomorrow.
 



 Alright it's time for some input other than press any key. Wouldn't you like 
to make your own game like Mad Libs? I'm trying to make one now in Visual C++, well in DarkBASIC you have to use the Input command. The input command needs a prompt(optional) and then a variable to store the input taken in. 
So what would this look like?
 



```

Remstart
Input Example
By Dbtutor
Yes you can have groups of comments
Remend

Input "Insert Name Here ",name$
Print name$;" is your name"

```


 Remember semi-colons? Well they can also separate your string 
from a variable(even if it is another string strange eh?). You can also 
have input as just a variable input so it would look like this.
 



```
Input a$

```


 Oh yes you can use floats and integers also using input! Above where 
I use a comma you can also use a semi-colon if you prefer. Remstart means everything after it is a comment so beware, it will make everything 
a comment until you use the Remend command. What if you're database 
programming in DarkBasic(not a good practice use Visual Basic instead I advise!) and you have a hundred clients that need to be stored in variables? 
You can use the Dim command!
 



```
Dim arrayname(arrayvalue,arrayvalue2(optional),arrayvalue3(optional)
arrayname(arrayvalue) = value

```


 Let me show a more indepth example, and you can still use 
strings, integers and floats as long as you follow the 
rules(remember which symbol if any goes in front!).
 



 A good dim statement
 



```
dim list$(10)
list$(0) = "Milk"
list$(1) = "Bread"
list$(2) = "Whatever"
Etc...

```


 A bad dim statement
 



```
dim list$(10)
list$(1) = "Whatever"
list$(11) = "This is a no no - you can't exceed the array declared value!"

```


 Hopefully you've been using these methods now, if not go 
review everything and put them into practice.
 



**Your Assignment** 




 Write a Mad Libs game
 



 Quiz is coming up! For now write that Mad Libs game and 
take it easy for awhile.
 



 Before we start here's a quiz! Told ya!
 



```
                                *Quiz #2*

```


**Which of these strings of text is a correct string?** 





 A)"Me"
 

 B)#noIam#
 

 C)"I am
 

 D)123456
 


**The Input Command Does What?** 





 A)Accepts user input and stores it into a variable for later retrieving.
 

 B)Lets the user type in a string to be used later.
 

 C)Prints out text on the screen.
 

 D)None of the above.
 


**It is good programming practice to?** 





 A)Not indent but comment heavily.
 

 B)Comment heavily.
 

 C)Comment when notes are needed, indent when needed, and use the cls command.
 

 D)Indent heavily.
 


**DarkBASIC is oriented to what?** 





 A)Database Programming.
 

 B)Application programming.
 

 C)Game Programming.
 

 D)Web programming.
 


**Why is it a good habit to make your program human readable?** 





 A)So that others can understand your program and you yourself can too.
 

 B)It's not.
 

 C)For open source projects.
 

 D)A + B.
 


**In the case of A = 1 And B = 0, what will C equal if A or B is true?** 





 A)2
 

 B)0
 

 C)1
 

 D)N/A
 



---



**#6 Corrected by: Cody C Oebel** 




 Note: if A = 1, and B = 0,Without knowing the expression for what
C will equal if A =1, and B = 0 tell's nothing of what C should equal . 
I Corrected answer for # 6 which should be D, or N/A.
 




---



**Quiz Answers Cheating Won't Help You Be a Better Programmer** 




 1 is A
 



 2 is A
 



 3 is C
 



 4 is C
 



 5 is A
 



 6 is C note: Correct answer is D, or N/A
 



 Edited by: Cody C Oebel
Correct answer for 6 is N/A , or D
 



 Okay, nice job if you didn't cheat and got a good mark or else try 
again until you do so. Let's take some time now to learn about game design 
a tad. Okay, let's take Donkey Kong Country it's a great graphical game and 
it's very fun. But some say that it has bad game design, in a sense it does 
you collect things that have no real value, does nothing special for the player. Let's look at Super Mario Bros.
 



 You collect coins to give the player an extra life and a higher score, 
you collect green mushrooms to also get a quick extra life, your main attack 
is jumping and you must avoid falling off the platforms, there is lots for 
the player to discover on their own, you finally collect big mushrooms to be stronger and if your lucky a flower to get a sort of hippy firepower. 
That's a good outlook when designing a platform game, it's alright to 
loosely base design on other successful games but don't outright 
copycat it.
 



 Now let's look at some Apogee games, Biomenace for example is like 
mario only more matured you have a gun but the basis for a good platformer 
is there. The game is based around the new advantage for the player as your 
gun is your survival. In space invaders, you do not collect things but 
it's a classic survival game, the arcade basis is survive as long as 
possible, get the highest score, with limited resources and powerups 
to temporarily allow prolonged survival through the hard parts. Let's look 
at an RPG, for example Final Fantasy is about your character 
growing and learning, it also has focus on the story.
 



 There are no real levels as you build your character until he's the ultimate 
in the universe and then defeat the main baddy, so really it's you the man. 
Focus on the main area of your game and build around it, I have done this for awhile and generally my games are liked. Do not make the game too hard, and if you find it fun after millions of test phases it's good. If you the 
designer feel any lukewarmness around any part of the game, change it until 
you feel happy. try to imagine what a total stranger will feel! Design is as important 
as making it work, without design how will you create a game? You have nothing 
to go on except making it up as you go. Remember, before all else is gameplay, then multimedia, then story and finally test your game and put it all together. Play games to see what makes them fun!
 



 Now, let's look at some operators. These are things that help us use math and logic in
Dark Basic, they should be straightforward.
 



**Operators** 




```
> is Greater Than
< is Less Than
>= is Greater than or equal to
<= is Less than or equal to

```


 Now let's apply the above to condition statements.
 



```
`10 = 9 is not 1 it's 0 
`So no text will be printed
if 10 = 9 then print "That'll never happen"
`But 10 is greater then or equal to itself
if 10 >= 10 then Print "This will always happen"
`10 is greater then 8 
if 10 > 8 then Print "10 is bigger then 8 no doubt"  
Etc.

```


 In number crunching we'll see square roots and all the math commands in DarkBASIC but for now we'll just deal with the rnd command.
 



 Here's the Syntax:
 



```
variable = rnd(value)

```


 Unfortunately rnd runs from 0 to the set range value, I do not know 
how to change it I'm afraid but if you need help consider asking a 
question on the DarkBASIC forums:
 [The Game Creators](http://www.thegamecreators.com) 
 . This link takes you to the homepage of DarkBASIC I 
have no username on the forum but did before, but since everyone was too 
eager to cut each other's throats I stopped visiting. Follow the rules to 
a tee or they'll bury you, and make sure you know what you're posting 
and expect the worst. Sorry, for scaring you but sometimes it's the truth 
I've had lots of feelings hurt and been angered at the sheer cruelness of 
the users before. Now then let's make a guessing game!!
 




---



 Note from a reader: You can get around this problem by simply using "value"
as one less than the highest number you want to get to, and then adding 1,
for example, if I want to generate a random number from 1 to 6 (like a
standard 6-sided dice):
 



 variable = rnd(5) + 1
 



 We use the value of 5 because that is one less than 6 (the number that we want).
This will generate a number from 0 to 5, and then add one, creating a number
from 1 to 6. Hope this helps, and I would have asked before adding this, but I
didn't see your contact info anywhere.
 




---



```
`Guessing Game Example
`By Dbtutor

cls

`Ask the users for their name
Input "Enter your name before you play! ";name$
wait key
cls

`Create a random number let's change the range a bit
value = rnd(9)
if value = 0 then value = 1
if value = 1 then value = 2
if value = 2 then value = 3
if value = 3 then value = 4
if value = 4 then value = 5
if value = 5 then value = 6
if value = 6 then value = 7
if value = 7 then value = 8
if value = 8 then value = 9
if value = 9 then value = 10

gosub guess

`Take a guess!
guess:
Input "Take a guess ";name$;"! ";guess
gosub checkguess

`Check the guess
checkguess:
if guess > value
  wrong = wrong+1
  Print "Sorry too high!"
  wait key
  cls
  gosub guess
endif

if guess < value
  wrong=wrong+1
  Print "Too low!"
  wait key
  cls
  gosub guess
endif

if guess = value then gosub win

`You won!
win:
cls
Print "You rock you've won the game!"
Print "You were wrong ";wrong;" times"
Print "Your guess was ";guess
Print "Press Any Key"
wait key
cls
end

```


 Wowzers! You started off programming hello world and now you've made 
a guessing game! Keep up the good work, if you're brave enough to show off 
your program at the newcomer's corner at the DarkBASIC forums. Now what 
does gosub do? Gosub stands for Go Subroutine, it's just a shorter geekier 
way of saying it. You need to have a label to jump too, and the label must be declared like so.
 




---



 Note from another reader: I have noticed that if you write the following line
 



```
value = rnd(9)
if value = 0 then value = 1
if value = 1 then value = 2
if value = 2 then value = 3
if value = 3 then value = 4
if value = 4 then value = 5
if value = 5 then value = 6
if value = 6 then value = 7
if value = 7 then value = 8
if value = 8 then value = 9
if value = 9 then value = 10

```


 The game will choose a number, and then increase it until it reaches 10. All you have to do is to press 10 when you're asked for the number and you won. To correct the problem, write the program as this:
 



```
`Guessing Game Example
`By Dbtutor
`modified by Huruba Dumitru Alin

cls

`Ask the users for their name
Input "Enter your name before you play! ";name$
wait key
cls

`Create a random number let's change the range a bit
value = rnd(9)
if value = 0 then value = 1

gosub guess

`Take a guess!
guess:
Input "Take a guess ";name$;"! ";guess
gosub checkguess

`Check the guess
checkguess:
if guess > value
  wrong = wrong+1
  Print "Sorry too high!"
  wait key
  cls
  gosub guess
endif

if guess < value
  wrong=wrong+1
  Print "Too low!"
  wait key
  cls
  gosub guess
endif

if guess = value then gosub win

`You won!
win:
cls
Print "You rock you've won the game!"
Print "You were wrong ";wrong;" times"
Print "Your guess was ";guess
Print "Press Any Key"
wait key
cls
end

```


 Now the game will only choose a number from 1 to 9, all you have to do next is to quess it.
 




---



 Note from another reader: I found that there is an easier way to do the correction above.
Dbtutor wanted a number one through ten and your correction only brought the number through 1 to 9.
Also because of the way you wrote this, the probability of getting a 1 is higher 
now than getting any other number. An easier way to fix this is like this...
 



```

<pre>
`Guessing Game Example
`By Dbtutor
`modified by Huruba Dumitru Alin

cls

`Ask the users for their name
Input "Enter your name before you play! ";name$
wait key
cls

`To solve the 0 being a value problem just add 1 instead 
value = rnd(9)+1
`the value down here is now no longer needed making the program less sloppier
`executes the command better now.

gosub guess

`Take a guess!
guess:
Input "Take a guess ";name$;"! ";guess
gosub checkguess

`Check the guess
checkguess:
if guess > value
  wrong = wrong+1
  Print "Sorry too high!"
  wait key
  cls
  gosub guess
endif

if guess < value
  wrong=wrong+1
  Print "Too low!"
  wait key
  cls
  gosub guess
endif

if guess = value then gosub win

`You won!
win:
cls
Print "You rock you've won the game!"
Print "You were wrong ";wrong;" times"
Print "Your guess was ";guess
Print "Press Any Key"
wait key
cls
end

```


 This is a much easier way to take 0 out of the options of random numbers
while not affecting your probability at all. In the future, if you need a 
random number then use
 



```
value = rnd(x)+1 
'with x being one less than you want to go to, I hope that helped.

```


```
gosub mylabel

mylabel:

```


 There you are, experiment a bit with labels to see what they can do. 
You can return to the last label you leaped to by using the return 
command.
 



**Assignment** 




 Show off your work at the forums(optional)!
 



 Make the hints more precise.
 



 Give a limited number of lives.
 



 Okay that's a day, go take a nap or something lol! :D
 



 I think I said the lesson would end with Day 7, I was wrong. Now let's 
learn about functions. Functions are used to make your own commands that 
are absent from DarkBASIC. They are also used to perform functions isn't 
it obvious. DarkBASIC has no object oriented programming or OOP so you can 
use functions to substitute if you are a very decent programmer. 
So how do you use a function?
 




---



 Note from reader: DarkBASIC Professional supports OOP with user defined
types and with pointers.
 




---



 Here's a Simple Function:
 



```
hello_world(1)
wait key
end

function hello_world(1)
  Print "Hello World"
endfunction

```


 First of all the brackets denote the parameter list, functions go at 
the end of your program and if your program runs into a function 
declaration beware! You can use exitfunction to exit a function easily. 
The best way to use functions is by creating a library with your own commands/procedures.
The above function, as the line number as a parameter. You can make your own, output
command using functions too.
 



 function output(x,y,msg$)
 



```
  set cursor x,y
  print msg$

```


 endfunction
 



 Using this you can in a sense use Object Oriented Programming, if your a more advanced user.
 



 Example of a Library in DarkBASIC
 



```
`Basic Function Example

#include "myfunctionlib.dba"
x = 100
y = 10
hello_world(x,y)

`Now we have our own command!

Rem #####################################################################################

`Note the example below was not included in the above program it was in a different file named my
`functionlib.dba
`A little function library

function hello_world(x,y)
set cursor x,y
Print "Hello World"
endfunction

```


 The #include command in VC++ works like so:
 



```
#include <iostream.h>
using namespace std;
Etc.

```


 In DarkBASIC a library works similarly but not exactly like the 
C++ example. Now you've learned what a function is and does!
 



 Assignment:
 



 Use functions and libraries to make a Mad Libs game.
Make your own command, like one for adding and so on.
 



 This will probably be the last day in the life of lesson 3. We have 
been doing most of the time application and software programming. But 
soon enough we will write a game per day starting with Pong going to 
BreakOut and more. Unfortunately we won't write a Role Playing Game, for 
development of a role playing game takes months and roughly 5,000 or so
lines of code including tools we need to create.
 



 The Design Process of Software Is Like So
 



```
The Software I want to Develop Is
It's Main Purpose Is
Problems That Need to be Solved
Etc.

```


 In fact there's a method that envolves a series of pictures 
that I cannot recall and another method similar to the one above. 
I hope you learned something about DarkBASIC programming during the 
course of Lesson 3. Day 9 will continue in the next lesson...
 



```
                             == End of Lesson ==

```



---





 Lesson 4 - Number Crunching
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-8 "Edit section: Lesson 4 - Number Crunching") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-8 "Edit section: Lesson 4 - Number Crunching") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


### 




 Day 9 Cont'd
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-9 "Edit section: Day 9 Cont'd") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-9 "Edit section: Day 9 Cont'd") 

 ]



 This lesson is all but one day long. When it's done, we'll move on 
to 2d don't expect mario or pong yet first thing we'll be doing is 
learning string manipulation, in about a day or so then we'll move on 
to images and whatnot. Who likes math? Not me, that's why we'll be 
getting DarkBASIC to do math for us. It'll be easier then using 
a calculator you won't even have to think about it.
 



 Typical Math Operators
 



```
+ is Increment of a value
= is equal to
- is decrement of a value
÷ is the division symbol. (ALT + 246 to create the ASCII symbol for division)

X multipying

```


 Okay, first of all by increment I mean increasing a value by 
whatever and vice versia with decrement as you decrease values.
 



 Typical Programming Operators
 



```
+ still addition
= is equal to
- is subtraction
/ is division
* is Multiplication

```


 Remember the above like you remember Christmas or you'll have 
problems doing math in programming! I can go on with more operators 
but it's not needed in a simple language like DarkBASIC as most of 
the math is taken care of by easier commands like wrapvalue.
 



 This example may be easy but here it is
 



```
`Math Example
`By Dbtutor

a = 1+2
b = 3-7
c = 9/3
d = 10*2

Print a
Print b
Print c
Print d
wait key
end

```


 Most people have already known what was going to happen 
and what was going on.
 



 Here's some easy stuff!
 



```
`Few math examples

a = 67

hexofa$ = hex$(a) ` hex$ returns value of 'a' as a hexdecimal string.
binaryofa$ = bin$(a) ` bin$ returns value of 'a' as a binary string.

b = 3

c = sqr(b)

inc d
dec e

Print a
Print hexofa$
Print binaryofa$
Print b
Print c
Print d
Print e
wait key
end

```


 Why you'd need these above commands is beyond me, you only 
need them in rare situations, for more examples of math in 
DarkBASIC consult the DarkBASIC editor's command reference under math.
For now it's over with...
 



```
                            ==End of Lesson==

```



---





 Lesson 5 - Loops
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-10 "Edit section: Lesson 5 - Loops") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-10 "Edit section: Lesson 5 - Loops") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


### 


 Day 10
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-11 "Edit section: Day 10") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-11 "Edit section: Day 10") 

 ]



 Trust me loops are useful, they do tedious tasks and they're easy to work with.
 



 Take for example a lottery program
 



```
Dim lottery(100)
lottery(1) = 1
lottery(2) = 2
lottery(3) = 3
lottery(4) = 4
etc...
Print Lottery(1)
Print lottery(2)
Print Lottery(3)
etc...

```


 The above way is for squares, and people without loop knowledge.
 



 Done with a loop
 



```
`Let's image the dim command above is down here
for a = 1 to 100
     Print lottery(a)
next a

```



---



 Note from reader: You can't print "lottery(a)" as it does not exist, instead write this:
 



 dim lottery(100)
for a = 1 to 100
print a
next a
wait key
 




---



 Using loops remember to indent it makes the program more 
human readable for others. With loops we can finally have more 
advanced input, input without variables, well some variables. Let's 
look at some loops then.
 



 Repeat/Until
 



```
Repeat
   `what the loop does here
until conditionmet

```


 While/Endwhile
 



```
While conditionmet
   `What the loop does
endwhile

```


 Do/Loop
 



```
do
    `task here
loop

```


 Remember the only way to exit a loop is by quitting which is a no|no, 
the exit command which is the best way, or a gosub command. In some loops, 
the loop ends once a condition is met, and in others after a task is done 
it exits. If you paid attention you should know what I'm talking about. 
Day's over go eat, sleep, take a walk, whatever come back tomorrow!
 


### 


 Day 11
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-12 "Edit section: Day 11") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-12 "Edit section: Day 11") 

 ]



 This is the advanced input section, if we want a system key we 
can easily use commands like spacekey(), etc. Go have a look at them, 
they are the easiest to understand, find out how to disable them from being 
able to be pressed in DarkBASIC also while you are there. For other keys 
there's two ways basically scancode(value) which is different per country's keyboard, a Spanish keyboard is different then a British one, and you have to find a value! Or you can use ASCII values, which has a humorous pronunciation(it's pronounced ass key :P). Find out what ASCII stands for at Wikipedia, just type it in the search box and there you go. You can find Wikipedia at
 [CLICK HERE TO GO TO WIKIPEDIA](https://www.wikipedia.org) 
 in case your just curious because I forget I believe it's American Standard Character 
Something Something. We will be using the ASCII because it's the same for every computer 
and no need to use numeric values.
 



 Example:
 



```
`Loops are needed for input BTW
do
   if inkey$() = "charhere" then exit
loop

```


 Here's a key example
 



```
do
  if inkey$() = "a" then print "Lowercase A"
  if inkey$() = "A" then Print "Uppercase A"
loop

```


 Remember A is different from a when using inkey$(). Now the lesson's 
over with, for an assignment find out what ASCII stands for and experiment
with the inkey$().
 



```
                             == End of Lesson ==

```



---







 Lesson 6 - File Control & Data
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-13 "Edit section: Lesson 6 - File Control & Data") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-13 "Edit section: Lesson 6 - File Control & Data") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


### 


 Day 12
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-14 "Edit section: Day 12") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-14 "Edit section: Day 12") 

 ]



 Day 12 already, you're progressing towards a great career in programming 
DarkBASIC and programming in general! Lots of people have trouble writing 
files in DarkBASIC, and some have problems with Data types and more. This 
lesson will take a lot of time to cover, I'm going to say 5 days for you and 
about 2 weeks for me to write them. Hopefully, I'll get them done before but 
if not well you just have to wait for me or another to contribute. Today, 
we'll learn how to save a file.
 



 Take for example this scenario
 



```
text$ = "Hey guess what open me up in notepad and see what happens!"
set dir "C:/"
if file exist("openmeupfast.txt") = 1  
   delete file "openmeupfast.txt"
endif
open to write 1,"openmeupfast.txt"
write string 1,text$
close file 1
open to read 1,"openmeupfast.txt"
read string 1,newtext$
Print newtext$
close file 1
wait key
end

```


 What a mouth full! In machine language it takes several thousand lines 
to do this same exact thing crazy or what! As you found out, the code 
above creates a string variable, moves the directory we'll be working in 
to c drive, if the file exist deletes it(or else we cannot overwrite it as 
it already exists), writes the file, closes it, opens it to read the contents, uses a new string to contain the line of text, then Prints it and finally you have to press any key before it ends. Now that's great! But remember 
the extension? You can change it to create your own files. You can also write 
various things such as: bytes, characters, and so on. To see more of what 
you can write view the command reference under the DarkBASIC help file. We'll just be using string for now and later byte.
 



 This example will generate a syntax error and I'll tell you why now
 



```
a = 1
delete file "wrong.txt"
open to write 1,"wrong.txt"
write string 1,a

```


 Remember numbers are not strings, to make a number a string we can do the following:
 



```
a = 1
a$ = str$(a)
b = val(a$)

```


 The command str$ changes a number into a value, and the command val 
changes a string into a value. There are many other odd things you can 
do with strings as well which you can see under the DarkBASIC help file 
command reference of strings. See some examples and change them around a bit.
 



 Here's a useless kinda piece of software for strings
 



```
`Crazy Strings
`By Dbtutor

cls
message$ = "Hello World!"
Print "ASC() returns the ASCII number of the first letter in the str"
Print asc(message$)
Print "Len counts how many characters in a string"
Print len(message$)
Print "Mid gets the middle write characters of a string"
midval = 3
Print mid$(message$,midval)
Print "Here's the binary of the number 678"
Print bin$(678)
Print "Here's the hex of that number"
Print hex$(678)
Print "There are many more ways of destroying strings"
Print "Much are useless, but take a gander at them"
wait key
end

```


 As you saw above manuiplating strings is easy but pretty much useless. 
In some situations they are useful like a file manager tool which 
we'll be making very soon along with some other file stuff. In the 2d 
tutorial's final part we'll use files to make a very simple tool 
very much like ZZT or MegaZeux. There's lots to cover so bear with me! 
On day 13 we'll be learning more ways of writing files, remember byte? 
Well you can use it to write a value to a file. I used txt has my 
extension, try using .dat, .ini, etc. You can even make one up! Using write, 
you can also write word or an integer value, a long or long integer value, 
and even a float. Why I don't know.
 



 Good Example of Writing A File:
 



```
a = 1
b$ = str$(a)
if file exist("a") = 1 then delete file "a"
open to write "a",1
write string 1,b$
close file 1
if file exist("a") = 1 then readit = 1
if readit = 1
   open to read 1,"a"
   read string 1,c$
   d = val(c$)
   Print d
   Print "Same thing! Use val and str! Their better!"
   wait key
   end
endif

```


**Note: from Cody Oebel** 




 the above code fails to work properly, and will not compile and run.
 



 I found the If file exist("a") = 1 ... the = 1 is ambiguous, and is not needed.
 



 below is my version of this code snippet
 



```
`Edit by Cody C Oebel:
 
 g = 11
 set dir "c:/"
 b$ = str$(g)
 if file exist("a.txt") then delete file "a.txt"
 open to write 1, "a.txt"
 write string 1, b$
 close file 1
 if file exist ("a.txt")
 open to read 1, "a.txt"
 read string 1, z$
 d = val(z$)
 print d
 print "This should work now, and is smaller amount of code"
 wait key
 endif
 end

```


 Now, see what I mean? Later we'll be using current directories and 
file branching statements to make a simple file browser. Very simple! 
Write byte is sometimes used for example in tilemappers and so on but the 
standard is write string because it's simple. Remember keep it 
simple stupid!
 



 Let's write an array
 



```
dim a$(10)
a$(1) = "jsdakjlakljldsaf"
a$(2) = "ashjajasjhsjks"

save array a$(10),"array.ini"

load array a$(10),"array.ini"

for a = 1 to 10
  Print a$(a)
next a

wait key
end

```


**NOTE: Again this code above did not work: By Cody Oebel** 




 Here is my working version for other readers to see the minor mistakes.
 



 Also note at the bottom of the compiler it shows you the format
 



 for save array, and load array e.g. Filename, array.
 



 I also added the variable stringname filename$ to contain "array.ini"
 



```
dim a$(10)
filename$ = "array.ini"
a$(1) = "jsdakjlakljldsaf"
a$(2) = "ashjajasjhsjks"
set dir "c:/"
save array filename$, a$(10)

load array filename$, a$(10)

for a = 1 to 10
  Print a$(a)
next a

wait key
end

```


 Now we can save big ole arrays, database programming anyone? 
Remember our guessing game? Go back and fix it up a bit so that you 
can include this newly learned code in it. You've learned a lot about 
files so far. Perpare for directories on Day 13!
 


### 


 Day 13
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-15 "Edit section: Day 13") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-15 "Edit section: Day 13") 

 ]



 Day 13 arrived and we're only two days away from the half way point. 
That's great news, as soon as you can be a master programmer in 
DarkBASIC the better! Well, really DarkBASIC takes awhile to master, not 
to scare you but I'm not a master programmer either. If you know somebody with 
a good game it's usually not that they're the best programmer but 
just a great game maker. Some DarkBASIC users have gone on to make 
commercial games such as: Dumbo & Cool, Star Wraith, etc. DarkBASIC 
is great for games and team efforts. Not so for applications as you'll 
find out today.
 



 Here's a simple file manager
 



```
Input "Set directory to: ";direct$
set dir direct$

```


 You don't get to see files do you? We can easily view files and 
whatever using some simple commands. Remember some are tedious, but 
when in use with loops! Now this is a file manager, you change dirs, 
view files, and whatnot, it's not a professional tool, it's showing you 
the ropes. But before we do it's time to have a look at a better 
file manager.
 



```
`Simple File Manager
`By Dbtutor

`Get the directory to use
setdirect$ = get dir$()

`Set the directory to the current directory
set dir setdirect$

`Current amount of items
items = 10

find first
Print get file name$(1)

for a = 2 to items
  find next
  Print get file name$(a)
next a

Wait key
end

```


 Wow, that's cool and all but there's no user input and no file 
manipulation dus this program is file system viewer. Just like 
windows explorer! Really nowadays writing a file manager is pretty 
much useless especially if it's ugly. But file managers in your program 
in DarkBASIC allows better productivity then in typing in the file 
name or directory and whatnot. We're not going back to the DOS days 
God forbid type in a command and hope it works! Remember I said tedious? 
Well there is a much better way to write the following program above. Don't 
worry we'll be writing a file manager later! Before I show you a more 
productive way.
 



 Follow these instructions:
 



```
Go to http://www.computechtenerife.com/
Register as a user.
Click on Dark Basic Support and then Downloads
Scroll down and find the function libraries
Click on the Db file selector
Download and extract the files for usage later

```


 Okay now that's done we can see a better way of doing things in 
the file system viewer world. We're only a few blocks away from 
the file manager.
 



```
`Simple File Viewer
`By Dbtutor

set dir "C:\"

Perform checklist for files
for a = 1 to checklist quantity()
  Print checklist string$(a)
next a

Wait key
end

```


 See how many lines less we have? There is other perform checklist for 
things such as directories and devices. Go have a look and change 
perform checklist for files command with a few of them.
 



 Now remember that file manager library you downloaded, if you 
haven't guessed we'll be modding some of the code inside the include 
file(not the function library) to make our own modded file manager. Remember 
the library is copyright to a DarkBASIC user known as TDK\_MAN one of the 
best DarkBASIC programmers out there besides you(just flattering) I'm sure 
you could beat him at his game after 30 years. Just kidding if your reading 
this TDK no offense. He's made lots of DarkBASIC programs including MatEdit 
which we'll be using later on in the 3d chapters along with a 3d modeller and whatnot.
 



 Here's the Source Code
 



```
`Thanks TDK For the Library Off your Site!
Rem Fileselector Function Demo - Copyright TDK_Man May 2003
Rem Modded Version By Dbtutor
gosub filemanager
filemanager:
#Include "FileSelect.dba"

Set Display Mode 800,600,16
Cls
Sync On

Rem Required DIM Statements At The Beginning Of Your Program
Dim Files$(1000,2): Dim Drv$(26): Dim Temp$(1000,2): Dim GotDrives(1)
Dim Path$(1): Dim Filename$(1): Dim SliderHeight(1): Dim FileOffset(1)

Title$="Load File": Rem Text to appear at top of fileselector
Filter$="*.*": Rem 3 char filter extension (Eg: 'TXT') or *.* for all files
CurDir$="C:\Program Files\Dark Basic Software": Rem Starting Directory

Rem Function Call
Selected=Fileselect(CurDir$,Title$,Filter$)
Rem On return Selected=1 if OK clicked and 0 if Cancel clicked

CLS
If Selected=1: Rem OK Was Clicked
  Print "Selected Filename: ";Filename$(0)
  Print "Selected Path: ";Path$(0)
  `Modded Code here
  Print "Press Any Key to Manage File"
  wait key
  myfile$ = filename$(0)
  mydir$ = path$(0)
  gosub managefile
Else: Rem Cancel Was Clicked
  Print "Cancel Button Chosen"
Endif

`All Original Code Below
`By Dbtutor
managefile:
set dir mydir$
getext$ = left$(myfile$,4)
if getext$ = ".bmp" or ".jpg" then gosub view_bmp
if getext$ = ".mid" or ".wav" then gosub view_audio

view_bmp:
Load image myfile$,1
paste image 1,1,1
set cursor 1,400
wait key
cls
gosub filemanager

view_audio:
load music myfile$,1
play music 1
wait key
cls
gosub filemanager

```


 There you are a easy file manager thanks to other peoples function 
libraries! You can find lots on TDK's site(
 <http://www.matedit.com/db.htm>
 ). 
Along with tutorials for functions and more. That's all for Day 13, there 
was no quiz for awhile so expect a lot of quizzes later on. I couldn't 
find anything worth quizzing you on. There will be lotsa data going on 
in Day 14.
 


### 


 Day 14
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-16 "Edit section: Day 14") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-16 "Edit section: Day 14") 

 ]



 We already know what variables are, but you haven't used data 
statements yet. Data statements work very easily, you just put 
data, space and then put all the types of data.
 



 Examples of Data
 



```
data "strings",12,5.6,"and integers and floats tooooooooooooooooo!!!!!!!"
data 12
data "string me"
data 5.50

```


 You can have lots of data types in one statement as long as you 
separate them with commas. That's useful but how can we read the data? 
Well we can use read.
 



```
`Read Example
data 4
read var1
Print var1

```


 You can use restore to reset the data pointer you'll see what I'm 
talking about later. It's good practice to use different labels to 
store different data.
 



```
`Big Data Example
gosub datastored

datastored:
data 1234
data 12
data 1
data 4
data 56 
gosub readdata

readdata:
read var1
read var2
read var3
read var4
read var5

print var1
Print var2
Print var3
print var4
Print var5

```


 First it stores data then reads it, you can do this backwards 
if you want. Whichever way you read and store data it works. Now we're
into games, no explaining(well some) just pure games programming. 
We'll program a game a day woohoo let's go now!
 



```
                     ==End of Lesson==

```



---





 Lesson 7 - 2D Game Programming Pt 1
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-17 "Edit section: Lesson 7 - 2D Game Programming Pt 1") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-17 "Edit section: Lesson 7 - 2D Game Programming Pt 1") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


### 


 Day 15
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-18 "Edit section: Day 15") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-18 "Edit section: Day 15") 

 ]



 The half way point, finally after all that coding and reading and days. 
This chapter we'll be making a text adventure using more text commands 
you'll now learn. Plus you'll learn how to clear the screen in various 
colors, and oh boy you're gonna enjoy this lesson.
 



 You probably thought, my God does the text always have to be white!
 



```
`NOPE
ink rgb(0,255,0),1
Print "OMG FINALLY COLOR!"

```


 There you are! I'm a Canadian but I still spell color as color instead 
of colour. What's the RGB for? It stands for Red, Green, Blue, look 
at your monitor with a lens you'll see lots of those pixels in those 
colors. The rgb must be separated by brackets and then a comma for the transparentcy value. The transparentcy ranges from 0 to 255. RGB values 
range from 0 to 255 also.
 



 Here's Some Colors to Remember
 



```
255,0,0 - red
0,255,0 - green
255,255,0 - yellow
0,0,255 - blue
0,255,255 - cyan
255,255,255 - white
0,0,0 - black
255,0,255 - pink
192,192,192 - light grey

```


 To see more have a look in paint, view the rgbs values and fool 
around that's the way I found out, so you should find out too. Using 
these above values you should be able to make nice colors. The lower the 
value the darker, the higher the lighter.
 



 Now after that you want a better way to Print right?
 



```
text x,y,string$

```


 When using text, you need to use + instead of a semi-colon to 
separate variables. All values must be a string, remember to convert a
value to a string use the str$ command as seen in Lesson 6.
 



 The Right Way
 



```
a = 1
text 1,100,"This is no syntax error "+str$(a)

```


 The Wrong Way
 



```
a = 1
text 1,100,"This is a syntax error you won't see this text until you fix "+a

```


 We can change the font easily
 



```
set text font fontnameasstring$

```


 We can make our text opaque easily too or allow us to write over
other text values
 



```
set text opaque

```


 Here's style changes
 



```
set text bold
set text italic
set text bolditalic

```


 Here's how to change the size
 



```
set text size integernumber

```


 Okay here's all those in a program
 



```
set text font "Times New Roman"
set text size 30
set text bold
text 1,100,"Hey"

```


 You assignment is to fool around with text values and 
colors, come back tomorrow
 


### 


 Day 16
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-19 "Edit section: Day 16") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-19 "Edit section: Day 16") 

 ]



 Okay, now we've learned lots about changing text values it's 
time to write your own text adventure. We'll call it 
"Dungeons of Doom", it'll have the player to escape the 
dank dungeons of a castle using numerous data commands 
and whatnot.
 



 First let's do an outline:
 




[![](//upload.wikimedia.org/wikipedia/commons/a/ac/Outline6ql.th.jpg)](/wiki/File:Outline6ql.th.jpg)





 Now we have an outline let's write a simple story:
 



 Evil Elves have captured you in their prison, now you must escape 
the Dungeon of Doom. Beware some turns lead to doom, others lead 
to a way out.
 



 There is only two ways to die in our game, since it's more like 
a maze anyways.
 



 Now Let's Do Some Data For It:
 



```
`Dungeons of Doom
`By Dbtutor

`Room
dim room1$(10)
dim room2$(10)
dim room3$(10)
dim room4$(10)
dim room5$(10)
dim room6$(10)
dim room7$(10)
dim room8$(10)
dim room9$(10)
dim room10$(10)
dim room11$(10)
dim room12$(10)

rem -----------------
gosub startgame

startgame:
cls
gosub start
for a = 1 to 10
   Print room1$(a)
next a

do
   if inkey$() = "l" then gosub room1_b
   if inkey$() = "r" then gosub room2_b
   if inkey$() = "u" then gosub room3_b
loop

room1_b:
cls
gosub room1
for a = 1 to 10
   Print room2$(a)
next a
wait key
end

room2_b:
cls
gosub room2
for a = 1 to 10
   Print room3$(a)
next a
wait key
end

room3_b:
cls
gosub room3
for a = 1 to 10
   Print room4$(a)
next a

do
   if inkey$() = "l" then gosub room4_b
   if inkey$() = "r" then gosub room5_b
   if inkey$() = "d" then gosub startgame
   if inkey$() = "u" then gosub room6_b
loop

room4_b:
cls
gosub room4
for a = 1 to 10
   Print room5$(a)
next a
wait key
end

room5_b:
cls
gosub room5
for a = 1 to 10
   Print room6$(a)
next a

do
   if inkey$() = "b" then gosub room3_b
loop

room6_b:
cls
gosub room6
for a = 1 to 10
   Print room7$(a)
next a

do
   if inkey$() = "l" then gosub room7_b
   if inkey$() = "r" then gosub room8_b
   if inkey$() = "d" then gosub room3_b
   if inkey$() = "u" then gosub wingame
loop

room7_b:
cls
gosub room7
for a = 1 to 10
   print room8$(a)
next a
do
   if inkey$() = "b" then gosub room6_b
loop

room8_b:
cls
gosub room8
for a = 1 to 10
   print room9$(a)
next a

do
   if inkey$() = "b" then gosub room6_b
loop

wingame:
cls
gosub win
for a = 1 to 10
   print room10$(a)
next a
wait key
end

`Data Statements
start:
data "Dungeons of Doom - Starting Area"
data "The cell door swings open, the guard lies dead in a pool of blood"
data "A large gash does through his neck, clutching your dagger you"
data "Have a decision to make."
Data "You can Go - L>eft, R>ight, or U>p"

for a = 1 to 5
   read room1$(a)
next a

return

room1:
data "Dungeons of Doom - Room 1"
data "You look around the corner and leap out at a guard"
data "Sticking a sharp spear in the air your gored by it"
data "Through the heart you die instantly and never escape"
data "The Dungeons of Doom....."
data "Press Any Key"

for a = 1 to 6
   read room2$(a)
next a

return

room2:
`Right of start
data "Dungeons of Doom - Room 2"
data "As you reach the room, you notice the walls close in!"
data "You are squished between the walls"
data "The End - Press Any Key"
for a = 1 to 4
   read room3$(a)
next a

return

room3:
`North of the start point
data "Dungeons of Doom - Room 3"
data "This room is a room that leads all ways..."
data "U>p, L>eft, R>ight or D>own"
for a = 1 to 3
   read room4$(a)
next a

return

room4:
`Left of Up one from start point
data "Dungeons of Doom - Room 4"
data "You run into a monstrous troll, who proceeds to bash you"
data "Over the head with a club, waking up inside a pie"
data "You are instantly eaten by a horde of trolls"
data "The End - Press Any Key"

for a = 1 to 5
   read room5$(a)
next a

return

room5:
`Right of the room4
data "Dungeons of Doom - Room 5"
data "You run into a dead end, you must go out the way you came"
data "B>ack"

for a = 1 to 3
   read room6$(a)
next a

return

room6:
`North of Room
data "Dungeons of Doom - Room 6"
data "This room is a dank one, to the north you feel cold air a way out?"
data "U>p, L>eft, R>ight, or D>own"

for a = 1 to 3
   read room7$(a)
next a

return

room7:
`Left of the room 6
data "Dungeons of Doom - Room 7"
data "Dead End Go Back"
data "B>ack"

for a = 1 to 3
   read room8$(a)
next a

return

room8:
`Right of Room 6
Data "Dungeons of Doom - Room 8"
data "Dead End Go Back"
data "B>ack"
for a = 1 to 3
   read room9$(a)
next a

return

win:
Data "You Won"
Data "Escaping to the Forest, now you need to find a town!"
data "Press Any Key"

for a = 1 to 3
   read room10$(a)
next a

return


```


 This game is complete, all things should work if not feel 
free to email me at: thenerd2468@hotmail.com
 



 Now then your assignment to show you know what's going on is to go 
back and add in comments describing what's happening in each. The final 
part in your assignment is to edit all the code and data statements to 
make a sequel, add rooms, and more. No this game is not a text role 
playing game, we'll make a text role playing game in the next lesson. I 
think tomorrow your gonna have a break-out of game programming.
 


### 


 Day 17
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-20 "Edit section: Day 17") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-20 "Edit section: Day 17") 

 ]



 Oh boy, oh boy, oh boy! We're going to make a Pong game today, a BreakOut 
game today, and your going to learn about images, sprites and more! Okay, 
so how can we load multimedia in DarkBASIC? Remember in the file manager 
program we had some confusing formats of files in there. One thing I 
didn't add was animations unfortunately.
 



 Multimedia Example:
 



```
`Image
`Supports bmps and jpgs only
id = 1
string$ = "myimage.bmp"
load image string$,id
x = 1
y = 1
paste image id,x,y

`Music
`Sound works the same way, only instead the word music is replaced with the word `sound
`Supports are: wav, mp3, and midi
musid = 1
musstring$ = "mymusic.mid"
load music musstring$,musid
play music musid
stop music musid
loop music musid

`Animation
`Supports gif, avi, may support other formats
animid = 1
animstring$ = "myanimation.gif"
load animation animstring$,animid
play animation animid

`Bitmap
`Works same as image only supports bitmaps, you can load only 32
bmpid = 1
bmp$ = "mybmp.bmp"
load bitmap bmp$
`This pastes the bitmap, but the id can be used to create bitmaps at certain `locations 
`see bmps under the command reference for those details

end

```


 Go look at some more examples of multimedia in DarkBASIC, some more 
are 3dsound, and you can play music off your cd too. We'll be using 
some more examples of multimedia in DarkBASIC in later chapters for 
now we'll be focusing on the said above in the example.
 



 Your main question may be what is a sprite? A sprite is a 
2d character that is used in games. Basically a sprite is a 
image that does more, in DarkBASIC sprites are the lifeblood 
of the system.
 



 Sprite Works Like
 



```
sprite spriteid,x,y,imageid

```


 You cannot use load bitmap and use that as an image for your sprite, 
you can only use images loaded by the load image command.
 



 Before you did not manipulate the x,y cords of a image in DarkBASIC 
well that's about to change. Before we start, if we leave the computer 
to take care of our game's framerate then our game will run slow and 
differently on different paced computers. Use sync on, to turn the 
framerate over too you and away from the computer. Every time the 
sync command is used the screen is updated constantly. Use 
the sync rate command, to set the rate the frame refreshes, 
mostly 30 is good for 3d games in DarkBASIC, and 40 for 2d games 
is also good too, but use 30 to make sure. There are a 
few commands in darkbasic that draws crude graphics, the commands 
we'll use are: line(line startingx,toendingx,startingly,toendingy), 
circle(x,y,radius), and dot(dot x,y). They draw these graphics in 
the default ink, if the ink is not set it'll use cyan as a default. 
There are more commands that draw different basic 2d shapes, but 
we won't be using them. If your curious go check them out 
under BASIC2d under the DarkBASIC command reference.
 



 Here's an example of you being able to move a circle
 



```
`Moving Circle
`By Dbtutor

`Hide the mouse
hide mouse

`Setup sync rate
sync on
sync rate 30

`Make the screen grey
cls rgb(192,192,192)

`Select an ink color for us, make it all transparent
ink rgb(0,155,0),0

`Draw the circle at cordinates provided
xpos = 100
ypos = 200
circle xpos,ypos,10

`Start the main loop
do
   `Clean up mess left over, and re-draw circle
   cls rgb(192,192,192)
   circle xpos,ypos,10

   `User control
   if upkey() = 1 then ypos = ypos - 7
   if downkey() = 1 then ypos = ypos + 7
   if rightkey() = 1 then xpos = xpos + 7
   if leftkey() = 1 then xpos = xpos - 7
   `Allow no leaving the screen
   if xpos > 600 then xpos = xpos - 7
   if xpos < 1 then xpos = xpos + 7
   if ypos > 400 then ypos = ypos - 7
   if ypos < 1 then ypos = ypos + 7
   `Refresh the screen
   sync
loop
   

```


 Wow that worked out great eh? Let's get some sleep for now.
 


### 


 Day 18
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-21 "Edit section: Day 18") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-21 "Edit section: Day 18") 

 ]



 Before we start I'd just like to thank everybody for visiting 
this wikibook, taking time to read it and for knowing when I google 
"DarkBASIC Programming" I see my book on the first page. That's a great 
feeling! I hope you learn something, I'll try and get this book done very 
soon but I've been very busy with learning new things and my schoolwork. 
I've been learning Assembly, C++, Pascal, & Visual Basic I'm also 
considering buying a console building kit "The XGameStation" by 
Mr Lamothe or as you may know him Andre' Lamothe or Lord Necron. 
He's one my biggest inspirations for programming besides 
Lee Bamber(the visionary behind DarkBASIC). Okay let's start with the 
pong game, I must say it's been a challenge writing this pong game, 
I've had lots of bugs with it. You must use your own images, 
only the source code is included.
 



**Understanding the Material** 
 Before I go ahead with the Pong game there is some things that I 
must, nay, need to explain to you. First, of all you need to 
understand what a "sprite" is, yes I know I mentioned it but not has 
in depth as I need to now, again that was just a basic example. Basically, 
put a sprite is nothing but an active image that allows more manipulation
then standard bitmaps. In our terms, speaking a sprite is in most cases 
nothing but a 2d character. We can do more with sprites in DarkBASIC 
then we can simply using just plain images.
 



 You already know how to setup a sprite. But you do not know how to 
delete sprites, how to detect collision with sprites, and have not used 
them very much yet. The syntax of deleting a sprite is simple: delete 
sprite spriteid. The sprite obviously must exist if not you'll get a 
runtime error stating that the "bob" or sprite does not exist. The same 
works for collisions with sprites: the precise and best way is by using 
this command sprite collision(spriteid1,spriteid2). Again they must exist 
has I stated, and you must have two, again I'm stating the obvious but 
there are pretty dumb people out there.
 



 The other way works the same thing except it's not has precise and 
goes like this: sprite hit(spriteid1,spriteid2). Easy! What may not be 
so easy after reading the code below is what the random numbers are for. 
These random numbers simply put are so that the computer generates a 
number from 0 to 1 in which direction the ball should go. They are for 
both X axis and Y axis and you should know what those are already.
 



 The Pong Game -
 



 if you don't understand 
the material review 
previous lessons
or consult the DarkBASIC help files.
 



```
`Pong example code
`By Dbtutor
`You must use your own multimedia!

sync on
sync rate 40
hide mouse

`Load the images
load image "paddle1.bmp",1
load image "paddle2.bmp",2
load image "ball.bmp",3

` Load the music
load music "Dodge This.mid",1

` Load the sound
load sound "thump.wav",1

` Play the music 
play music 1

` Start the main game loop
` Setup some variables first
oneypos = 1
onexpos = 1
twoypos = 1
twoxpos = 620
bally = 150
ballx = 150
movey = rnd(1)
movex = rnd(1)
onegoal = 0
twogoal = 0

do

 `Display Scores & Whatnot
 set text opaque
 text 1,1,"Goals: "+str$(onegoal)
 text 585,1,"Goals: "+str$(twogoal)

 `Player Control for 1
 if upkey() = 1 then oneypos = oneypos - 7
 if downkey() = 1 then oneypos = oneypos + 7
 if oneypos < 1 then oneypos = oneypos + 7
 if oneypos > 432 then oneypos = oneypos - 7

 `The paddle sprite
 sprite 1,onexpos,oneypos,1

 `Player 2 Paddle
 if inkey$() = "w" then twoypos = twoypos - 7
 if inkey$() = "s" then twoypos = twoypos + 7
 sprite 2,twoxpos,twoypos,2
 if twoypos < 1 then twoypos = twoypos + 7
 if twoypos > 432 then twoypos = twoypos - 7

 `The Ball
 if movey = 1 then bally = bally + 5
 if movey = 0 then bally = bally - 5
 if movex = 1 then ballx = ballx + 5
 if movex = 0 then ballx = ballx - 5
 sprite 3,ballx,bally,3

 `Collision Detection
 if sprite hit(1,3) = 1 then movex = 1:play sound 1
 if sprite hit(2,3) = 1 then movex = 0:play sound 1
 if ballx < 1 then movex = 1:twogoal = twogoal + 1:play sound 1
 if ballx > 620 then movex = 0:onegoal = onegoal + 1:play sound 1
 if bally < 1 then movey = 1:play sound 1
 if bally > 432 then movey = 0:play sound 1

 `Wins
 if onegoal = 10
 text 100,150,"Player 1 Has Won!"
 wait 300
 end
 endif

 if twogoal = 10
 text 100,150,"Player 2 Has Won!"
 wait 300
 end
 endif

 `Refresh the screen
 sync

loop

```


 Okay there you are Pong in all it's glory. Now it's time for a prolonged Quiz.
 




 Quiz
 


 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-22 "Edit section: Quiz") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-22 "Edit section: Quiz") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



**1** 
 In Game Design What Is A 2d Character Called?
 




 A) Mario
 

 B) Chara
 

 C) Clip Art
 

 D) Sprite
 


**2** 
 True or False: 30 is a good sync rate for games on any computer
 




 T)rue
 

 F)alse
 


**3** 
 Which is the best way to manually setup framerate in a computer game
 




 A)Set the sync on, set it to an average rate such as 30, & use sync to refresh when need
 

 B)Let the computer handle it all
 

 C)Set the sync rate to 0
 

 D)Simply turn on sync
 


**4** 
 You can declare data statements how?
 




 A)Data datatype
 

 B)dat datatype
 

 C)godarkbasic data datatype
 

 D)data.db datatype
 


**5** 
 What kinds of data does data statements hold?
 




 A)Strings Only
 

 B)Arrays
 

 C)Strings, Integers, & Reals(floating point decimals or floats)
 

 D)Integers
 


**6** 
 In our text adventure you had to escape:
 




 A)Castles
 

 B)Prison
 

 C)Forest
 

 D)A Dungeon
 


 Okay now, for the answers, if you cheat your on your own after
you have this book completed so don't be a wimp and take the
coward's way out.
 



 Answers:
 


1. 1 - Sprite
2. 2 - True
3. 3 - A
4. 4 - A
5. 5 - C
6. 6 - D



 Finally we need to end this long hard-coding day, for another awaits with many new coding prosperties.
 





 End of Lesson
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-23 "Edit section: End of Lesson") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-23 "Edit section: End of Lesson") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------





 Lesson 8 - 2d Game Programming Pt 2
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-24 "Edit section: Lesson 8 - 2d Game Programming Pt 2") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-24 "Edit section: Lesson 8 - 2d Game Programming Pt 2") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


### 


 Day 19
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-25 "Edit section: Day 19") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-25 "Edit section: Day 19") 

 ]



```
Okay, so we've made Pong the next step is to make a Break-Out game. Just giving you,

```


 the source code of the game would prove you didn't code the pong game by yourself.
So what I'm going to do is let you program your own break-out game, and I will give some
guided examples. After this quick break-out game exercise I will be discussing multimedia!
 



 Collisions
 



*if sprite collision(paddle,ball) = 1 then bouncball = 1* 




 Possible Solutions to Make the Ball Bounce :S
 



 -Setup a variable called ballmovex, set it's value to random 1 or 0.
-if the ball strikes 0 make it move left, and in the case of 1 right
-do the same thing with a variable called ballmovey, except in this
-case moving up or down.
 



 Possible Solutions of Setting Up Blocks
 



 -Setup an array which holds the x positions of your bricks, and the 
y positions of your bricks. Then one for if the brick has been struck,
so if the brick has been struck it will equal 1 or true and then have
conditional statements(if and thens) for the action to break the brick.
 



*if if sprite collision(paddle,brickhit(bricknum)) = 1 then destroybrick = 1* 




 if destroybrick = 1
 



```
 brickx(bricknum) = -1
 bricky(bricknum) = -1

```


 endif
 



 Something to Remember:
 



```
  Remember you need a do loop to accept advanced input such as inkey$(), returnkey(), etc.

```


 I've given lots of suggestions as to how to complete the Break-Out game, hopefully this 
will go down nice and easy without heartburn. If you have a case of "what thes" then 
I suggest you visit the codebase on the official DarkBASIC home page:
 <http://www.thegamecreators.com>
 , it has everything a DarkBASIC coder shall need.
 



```
**Multimedia In DarkBASIC - Audio**

```


 Not many people can say that they hate music, in fact most people love hearing ambient
music in games, I know I do! Above, I used some strange commands, play sound, play music,
load music, play music. Well, DarkBASIC has three audio supports, MP3, Wave, and Midi.
Loading music is very simple, and sound works the same way. So I'm going to give you a
code example, you bring the sounds, I'll bring the code!
 



**Code Example for Audio:** 




```
Rem Audio Example
`Load audio
load sound "mysound.wav",1
load music "mymusic.mid",1
`Play audio once
play sound 1
`Loop music
loop music 1
`wait key
wait key
stop music 1
loop sound 1

```


 So what are the numbers at the end? Remember in images, well this number is a numeric ID 
given. Remember the location of your audio, and extension!
 



```
**Multimedia in DarkBASIC - Animations**

```


 This will probably be the last multimedia entry, unless someone does one on dlls, 
I won't be, since I have an older version of DarkBASIC.
 



 Animations at this point in time do not include those such as mario walking, however
they do include those such as animated GIFs(Graphic Interchange Format), and
AVIs(Audio Video Interleave). So far I believe there are two formats for
animation .gif, and .avi please tell me so if otherwise. Animations can
be useful for game over screens and maybe even some Mortal Kombat style
finishers!!
 



**Code Sample** 




```
load animation "animation1.avi",1
play animation 1
wait key
stop animation 1
load animation "animation2.gif",2
play animation 2
loop animation 2

```


**-PLEASE HELP FINISH THIS BOOK, CONTRIBUTE IN ANY WAY POSSIBLE PLEASE!-** 




 \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_
 



 This is about 2D Games. This Wiki helped me become the programmer I am today. No, I am not DBTutor, but I will contribute. I am IRON 
PROGRAMMER!! Talk to me on the DarkBASIC Forums if you have a question.
 



 I challenge YOU to create a 2D Melee Game. These are simple. Here is an example:
 



```
''cls rgb(150,150,150)

load image "Sumostein.bmp", 1
sprite 1, sprite1xpos, sprite1ypos, 1

sprite1xpos = 300
sprite1ypos = 300

load image "Sumocula.bmp", 2
sprite 2, sprite2xpos, sprite2ypos, 2

load image "Sumocula Punch.bmp", 3
sprite 3, sprite2xpos, sprite2ypos, 3
hide sprite 3

load image "Sumostein Punch.bmp", 4
sprite 4, sprite1xpos, sprite1ypos, 4
hide sprite 4

sprite2xpos = 300
sprite2ypos = 300

playeronelives = 3
playertwolives = 3

mainloop:
do
  cls rgb(150,150,150)
  sprite 1, sprite1xpos, sprite1ypos, 1
  sprite 2, sprite2xpos, sprite2ypos, 2
  sprite 3, sprite2xpos, sprite2ypos, 3
  sprite 4, sprite1xpos, sprite1ypos, 4
  hide sprite 3 
  if upkey() = 1 then sprite1ypos = sprite1ypos -5
  if downkey() = 1 then sprite1ypos = sprite1ypos +5
  if leftkey() = 1 then sprite1xpos = sprite1xpos -5
  if rightkey() = 1 then sprite1xpos = sprite1xpos +5
  if controlkey() = 1 then gosub sumosteinpunch
  if inkey$() = "w" then sprite2ypos = sprite2ypos -5
  if inkey$() = "s" then sprite2ypos = sprite2ypos +5
  if inkey$() = "a" then sprite2xpos = sprite2xpos -5
  if inkey$() = "d" then sprite2xpos = sprite2xpos +5
  if inkey$() = "x" then gosub sumoculapunch
  if spacekey() = 1 then end
  if sprite1xpos =<0 then sprite1xpos = sprite1xpos +5
  if sprite1xpos =>550 then sprite1xpos = sprite1xpos -5
  if sprite1ypos =<0 then sprite1ypos = sprite1ypos +5
  if sprite1ypos =>350 then sprite1ypos = sprite1ypos -5
  if sprite2xpos =<0 then sprite2xpos = sprite2xpos +5
  if sprite2xpos =>550 then sprite2xpos = sprite2xpos -5
  if sprite2ypos =<0 then sprite2ypos = sprite2ypos +5
  if sprite2ypos =>350 then sprite2ypos = sprite2ypos -5
loop

sumoculapunch:
hide sprite 2
show sprite 3
wait 250
if sprite collision(3, 1) = 1
  playeronelives = playeronelives -1
  if playeronelives = 0
  delete sprite 1
  end
endif
endif
hide sprite 3
show sprite 2
gosub mainloop

sumosteinpunch:
hide sprite 1
show sprite 4
wait 250
if sprite collision(4, 2) = 1
  playertwolives = playertwolives -1
  if playertwolives = 0
  delete sprite 2 
  end
endif
endif
hide sprite 4
show sprite 1
gosub mainloop''

```


 That is a simple format for a multiplayer melee game in 2D. Notice
I have cleverly not supplied the media! Hahahahahaaaa! Now get programming!
 



  

  


**Please add
 `{{
 [alphabetical](/wiki/Template:Alphabetical "Template:Alphabetical") 
 }}` 
 only to book title pages.** 




### 


 Day 20
 



 [
 
[edit](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&veaction=edit&section=T-26 "Edit section: Day 20") 

 |
 
[edit source](/w/index.php?title=DarkBASIC_Programming/Original_single-page_version&action=edit&section=T-26 "Edit section: Day 20") 

 ]



 ->>3d Programming<<-
Tadadada! (I'm not DBtutor, nor IRONPROGRAMMER, i'm gluon, you can find me on the DexOS forums)
   

 First Example
   

 A controlable cube:
 



```
SYNC RATE 60

MAKE OBJECT CUBE 1,1
DO
    if leftkey()=1 then YROTATE OBJECT 1,OBJECT ANGLE Y(1)-2
    if rightkey()=1 then YROTATE OBJECT 1,OBJECT ANGLE Y(1)+2
    if upkey()=1 then XROTATE OBJECT 1,OBJECT ANGLE X(1)-2
    if downkey()=1 then XROTATE OBJECT 1,OBJECT ANGLE X(1)+2
    SYNC
LOOP
END

```


 Instead of MAKE OBJECT CUBE we can say SPHERE,etc.
   

 A textured object:
 



```
sync on
hide mouse
make object cube 1,20
load image "car.jpg",1
texture object 1,1,1
do
sync
loop

```


 Moving an object
 



```
Sync on
sync rate 40
hide mouse  
make object cube 1,10  
do
   if rightkey()=1 then y=wrapvalue(y+1)
   if leftkey()=1 then y=wrapvalue(y-1)
   if upkey()=1 then move object 1,1
   if downkey()=1 then move object 1,-1
   yrotate object 1,y
   sync
loop

```


  










![](//en.wikibooks.org/wiki/Special:CentralAutoLogin/start?type=1x1)


 Retrieved from "
 <https://en.wikibooks.org/w/index.php?title=DarkBASIC_Programming/Printable_version&oldid=4195265>
 "
 



[Categories](/wiki/Special:Categories "Special:Categories") 
 :
 * [Print Versions](/wiki/Category:Print_Versions "Category:Print Versions")
* [Book:DarkBASIC Programming](/wiki/Category:Book:DarkBASIC_Programming "Category:Book:DarkBASIC Programming")








 Navigation menu
-----------------




### 

 Personal tools



* Not logged in
* [Discussion for this IP address](/wiki/Special:MyTalk "Discussion about edits from this IP address [n]")
* [Contributions](/wiki/Special:MyContributions "A list of edits made from this IP address [y]")
* [Create account](/w/index.php?title=Special:CreateAccount&returnto=DarkBASIC+Programming%2FPrintable+version "You are encouraged to create an account and log in; however, it is not mandatory")
* [Log in](/w/index.php?title=Special:UserLogin&returnto=DarkBASIC+Programming%2FPrintable+version "You are encouraged to log in; however, it is not mandatory [o]")






### 

 Namespaces



* [Book](/wiki/DarkBASIC_Programming/Printable_version "View the content page [c]")
* [Discussion](/w/index.php?title=Talk:DarkBASIC_Programming/Printable_version&action=edit&redlink=1 "Discussion about the content page (does not exist) [t]")








 English
 









### 

 Views



* [Read](/wiki/DarkBASIC_Programming/Printable_version)
* [Edit](/w/index.php?title=DarkBASIC_Programming/Printable_version&veaction=edit "Edit this page [v]")
* [Edit source](/w/index.php?title=DarkBASIC_Programming/Printable_version&action=edit "Edit this page [e]")
* [View history](/w/index.php?title=DarkBASIC_Programming/Printable_version&action=history "Past revisions of this page [h]")








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



* [What links here](/wiki/Special:WhatLinksHere/DarkBASIC_Programming/Printable_version "A list of all wiki pages that link here [j]")
* [Related changes](/wiki/Special:RecentChangesLinked/DarkBASIC_Programming/Printable_version "Recent changes in pages linked from this page [k]")
* [Upload file](//commons.wikimedia.org/wiki/Special:UploadWizard?uselang=en "Upload files [u]")
* [Special pages](/wiki/Special:SpecialPages "A list of all special pages [q]")
* [Permanent link](/w/index.php?title=DarkBASIC_Programming/Printable_version&oldid=4195265 "Permanent link to this revision of this page")
* [Page information](/w/index.php?title=DarkBASIC_Programming/Printable_version&action=info "More information about this page")
* [Cite this page](/w/index.php?title=Special:CiteThisPage&page=DarkBASIC_Programming%2FPrintable_version&id=4195265&wpFormIdentifier=titleform "Information on how to cite this page")





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



* [Create a collection](/w/index.php?title=Special:Book&bookcmd=book_creator&referer=DarkBASIC+Programming%2FPrintable+version)
* [Download as PDF](/w/index.php?title=Special:DownloadAsPdf&page=DarkBASIC_Programming%2FPrintable_version&action=show-download-screen)
* [Printable version](/w/index.php?title=DarkBASIC_Programming/Printable_version&printable=yes "Printable version of this page [p]")





### 

 In other languages



* [Català](https://ca.wikibooks.org/wiki/DarkBASIC_Professional "DarkBASIC Professional – Catalan")




[Add links](https://www.wikidata.org/wiki/Special:NewItem?site=enwikibooks&page=DarkBASIC+Programming%2FPrintable+version "Add interlanguage links") 







* This page was last edited on 18 October 2022, at 20:57.
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
* [Mobile view](//en.m.wikibooks.org/w/index.php?title=DarkBASIC_Programming/Printable_version&mobileaction=toggle_view_mobile)
* [Developers](https://developer.wikimedia.org)
* [Statistics](https://stats.wikimedia.org/#/en.wikibooks.org)
* [Cookie statement](https://foundation.wikimedia.org/wiki/Special:MyLanguage/Policy:Cookie_statement)


* [![Wikimedia Foundation](/static/images/footer/wikimedia-button.png)](https://wikimediafoundation.org/)
* [![Powered by MediaWiki](/static/images/footer/poweredby_mediawiki_88x31.png)](https://www.mediawiki.org/)




