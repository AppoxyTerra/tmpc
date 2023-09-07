




 Deving The XGameStation/Printable version - Wikibooks, open books for an open world
 








































 Deving The XGameStation/Printable version
============================================




 From Wikibooks, open books for an open world
 



 <
 [Deving The XGameStation](/wiki/Deving_The_XGameStation "Deving The XGameStation") 







[Jump to navigation](#mw-head) 
[Jump to search](#searchInput) 




|  |  |
| --- | --- |
| 



 | **This is the
 [print version](/wiki/Help:Print_versions "Help:Print versions") 
 of
 [Deving The XGameStation](/wiki/Deving_The_XGameStation "Deving The XGameStation")**

 You won't see this message or any elements not part of the book's content when you print or
 [preview](https://en.wikibooks.org/w/index.php?title=Deving_The_XGameStation/Printable_version&printable=yes) 
 this page.
  |




  





 Deving The XGameStation
 



 The current, editable version of this book is available in Wikibooks, the open-content textbooks collection, at
   


<https://en.wikibooks.org/wiki/Deving_The_XGameStation>





 Permission is granted to copy, distribute, and/or modify this document under the terms of the
 [Creative Commons Attribution-ShareAlike 3.0 License](/wiki/Wikibooks:Creative_Commons_Attribution-ShareAlike_3.0_Unported_License "Wikibooks:Creative Commons Attribution-ShareAlike 3.0 Unported License") 
 .
 





 Contents
----------







* [1
 

 LCD Interfacing](#LCD_Interfacing)
	+ [1.1
	 
	
	 Character-Based Displays](#Character-Based_Displays)
* [2
 

 Your First Program](#Your_First_Program)
* [3
 

 Edit Guide](#Edit_Guide)
	+ [3.1
	 
	
	 How to Edit this book](#How_to_Edit_this_book)
		- [3.1.1
		 
		
		 Links](#Links)
		- [3.1.2
		 
		
		 Inserting Code](#Inserting_Code)
		- [3.1.3
		 
		
		 Signatures](#Signatures)
	+ [3.2
	 
	
	 Major Contributions](#Major_Contributions)
	+ [3.3
	 
	
	 Editing Rules](#Editing_Rules)
* [4
 

 Contributors](#Contributors)
	+ [4.1
	 
	
	 Page/Information Contributions](#Page/Information_Contributions)
	+ [4.2
	 
	
	 Grammar/Spelling Contributions](#Grammar/Spelling_Contributions)
	+ [4.3
	 
	
	 Other Contributions](#Other_Contributions)









 LCD Interfacing
==================




 Character-Based Displays
 


 [
 
[edit](/w/index.php?title=Deving_The_XGameStation/LCD_Interfacing&veaction=edit&section=T-1 "Edit section: Character-Based Displays") 

 |
 
[edit source](/w/index.php?title=Deving_The_XGameStation/LCD_Interfacing&action=edit&section=T-1 "Edit section: Character-Based Displays") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



[![](//upload.wikimedia.org/wikipedia/commons/thumb/1/12/16x2_Character_LCD_Display.jpg/220px-16x2_Character_LCD_Display.jpg)](/wiki/File:16x2_Character_LCD_Display.jpg)

 A 16x2 character LCD display.
 


  










 Your First Program
=====================



 Welcome to the first software development chapter of the book! To start this exercise you must have at least the following equipment:
 


* An XGameStation
* A Home PC
* The XGameStation Development Toolchain



 The Development Toolchain can be found at
 <http://www.xgamestation.com/>
 under the downloads section. The XGameStation itself costs $199, and you're on your own as to a Home PC. I myself have no experience with the Linux version created by a user -
 **(Someone enter information on it here)** 
 .
 



 First of all, plug your XGS unit up to the power adaptor and into the wall. Then use the parallel cable provided with it and connect it to LPT1 of your computer. Finally, start the XGS IDE.
 



 In this exercise we will create the most simple program possible that will give immediate feedback. First,
 [Wire an LED up](/w/index.php?title=Deving_The_XGameStation/Wiring_LEDs&action=edit&redlink=1 "Deving The XGameStation/Wiring LEDs (does not exist)") 
 . It should be connected between rb.0 and ground. Be sure to check the datasheet for your LED so that you have it properly biased, as putting it in backwards won't work! Also, make sure to put a 330ohm resistor in series with it to limit current. Not doing that will result in a burned out LED or even damaging a battery in some cases! Let's start by entering this simple program into the IDE:
 




```
 DEVICE SX52       ;The XGS uses the SX52
 RESET Start       ;Start at 'Start' when processor is reset
 FREQ 80_000_000   ;Set for debug purposes, the SX-Key will use this as operating frequency (80 Mhz)
 
 DEVICE OSCHS3, IFBD, XTLBUFD
 IRC_CAL IRC_FAST              ;This prevents assembler warning
 
 org $0  ;Start program here
 
 Start:     ;Where program begins
  mov   !RB, #%00000000   ;Make RB output
  mov    RB, #%11111111   ;Turn on all bits in the port. The LED will light up!

```



 Now, hit the 'Assemble and Run' button on the Toolbar. If everything is connected correctly and you typed the program in correctly, it should say 'Programming Successful'. Now turn on your XGS and switch the SYSMODE switch to 'RUN'. Hit the Reset button. You LED should light up!
 




---




|  |  |
| --- | --- |
| 

Clipboard



 | 
**To do:** 

 More LED's, maybe some animation with them, or something else.
  |



  










 Edit Guide
=============




|  |
| --- |
|  |



 This editing guide is to help guide those wishing to add to the book "Deving The XGameStation".
 




 How to Edit this book
 


 [
 
[edit](/w/index.php?title=Deving_The_XGameStation/Edit_Guide&veaction=edit&section=T-1 "Edit section: How to Edit this book") 

 |
 
[edit source](/w/index.php?title=Deving_The_XGameStation/Edit_Guide&action=edit&section=T-1 "Edit section: How to Edit this book") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


### 

 Links
 


 [
 
[edit](/w/index.php?title=Deving_The_XGameStation/Edit_Guide&veaction=edit&section=T-2 "Edit section: Links") 

 |
 
[edit source](/w/index.php?title=Deving_The_XGameStation/Edit_Guide&action=edit&section=T-2 "Edit section: Links") 

 ]



 First of all, the links used in this book are in the form of:
 



 [[Deving\_The\_XGameStation/Your\_Page\_Here|Link Text]]
 



 Which appears as:
 



[Link Text](/w/index.php?title=Deving_The_XGameStation/Your_Page_Here&action=edit&redlink=1 "Deving The XGameStation/Your Page Here (does not exist)") 




**Important** 
 : Do not create that page or click on that link!
   

 Notice that we use the book name as the main directory and that we replace spaces with underscores ("\_").
 


### 

 Inserting Code
 


 [
 
[edit](/w/index.php?title=Deving_The_XGameStation/Edit_Guide&veaction=edit&section=T-3 "Edit section: Inserting Code") 

 |
 
[edit source](/w/index.php?title=Deving_The_XGameStation/Edit_Guide&action=edit&section=T-3 "Edit section: Inserting Code") 

 ]



 To insert code in book text, enclose it in <code></code> and make sure that every line starts with a space. Doing so correctly will result in something that looks like this:
 




```
 PRINT "I can count to 100!"
 FOR i = 1 TO 100
 PRINT i
 NEXT i

```


### 

 Signatures
 


 [
 
[edit](/w/index.php?title=Deving_The_XGameStation/Edit_Guide&veaction=edit&section=T-4 "Edit section: Signatures") 

 |
 
[edit source](/w/index.php?title=Deving_The_XGameStation/Edit_Guide&action=edit&section=T-4 "Edit section: Signatures") 

 ]



 Signatures are used to tell people who wrote what, or to mark something as their text. They should
 **not** 
 , however, be found in the general text. This is a community effort, and there is no need to clutter text with signatures. You should only use your signature for opinionated areas, pages you created (use it once, to show yourself as 'controller' of that page, as most of the knowleadge should have come from you).
 



 To place a signature, you must first be logged in.
 **Although you can create and edit pages without an account, it is highly recommend you create one** 
 . Without an account you cannot place signatures.
 



 Simply insert --~~~~ where you want your signature or click on the signature button above the textarea, 2nd button from the right. A signature looks like this:
 



 --
 [Cjmovie](/w/index.php?title=User:Cjmovie&action=edit&redlink=1 "User:Cjmovie (does not exist)") 
 22:10, 12 August 2005 (UTC)
 




 Major Contributions
 


 [
 
[edit](/w/index.php?title=Deving_The_XGameStation/Edit_Guide&veaction=edit&section=T-5 "Edit section: Major Contributions") 

 |
 
[edit source](/w/index.php?title=Deving_The_XGameStation/Edit_Guide&action=edit&section=T-5 "Edit section: Major Contributions") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 If you do a
 **Major** 
 Contribution to this book, such as adding a complete section, please add your 'signature' to the list of
 [Major Contributors](/wiki/Deving_The_XGameStation/Contributors "Deving The XGameStation/Contributors") 
 as linked to on the main page.
 




 Editing Rules
 


 [
 
[edit](/w/index.php?title=Deving_The_XGameStation/Edit_Guide&veaction=edit&section=T-6 "Edit section: Editing Rules") 

 |
 
[edit source](/w/index.php?title=Deving_The_XGameStation/Edit_Guide&action=edit&section=T-6 "Edit section: Editing Rules") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 There are a few rules that must be followed to make this book work. Without rules, there would be chaos. Being the starter of the book I have assumed responsibility for it's upkeep and therefore will organize it and set it's guidelines. Not to say that someone else couldn't help me! These are the rules for editing this book:
 


* Creating A Page
	+ Don't create a page you're not going to fill it in
	 **yourself**
	+ Never expect someone else to check behind you.
	 **Check your work!**
	+ Pages you create are
	 **not** 
	 your page. It may be edited, changed, even completely removed if needed
	+ A page should really be a 'Chapter', meaning it should be organized and sectioned
* Other Rules
	+ Anything with opinion to it should be marked with your signature.
	 **Please login and use an account while editing this book**



 --
 [Cjmovie](/w/index.php?title=User:Cjmovie&action=edit&redlink=1 "User:Cjmovie (does not exist)") 
 21:46, 12 August 2005 (UTC)
 



  










 Contributors
===============






 Page/Information Contributions
 


 [
 
[edit](/w/index.php?title=Deving_The_XGameStation/Contributors&veaction=edit&section=T-1 "Edit section: Page/Information Contributions") 

 |
 
[edit source](/w/index.php?title=Deving_The_XGameStation/Contributors&action=edit&section=T-1 "Edit section: Page/Information Contributions") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 --
 [Cjmovie](/w/index.php?title=User:Cjmovie&action=edit&redlink=1 "User:Cjmovie (does not exist)") 
 11:29, 12 August 2005 (UTC)
 


* Book Creation
* 'Creating Your First Program' Section 1
* 'How to Edit' Original Sections
* Misc. Fixes, Organization, etc.



 --
 [Ashmantle](/w/index.php?title=User:Ashmantle&action=edit&redlink=1 "User:Ashmantle (does not exist)") 
 01:09, 13 August 2005 (UTC)
 


* (Insert Contributions Here)






 Grammar/Spelling Contributions
 


 [
 
[edit](/w/index.php?title=Deving_The_XGameStation/Contributors&veaction=edit&section=T-2 "Edit section: Grammar/Spelling Contributions") 

 |
 
[edit source](/w/index.php?title=Deving_The_XGameStation/Contributors&action=edit&section=T-2 "Edit section: Grammar/Spelling Contributions") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------




 Other Contributions
 


 [
 
[edit](/w/index.php?title=Deving_The_XGameStation/Contributors&veaction=edit&section=T-3 "Edit section: Other Contributions") 

 |
 
[edit source](/w/index.php?title=Deving_The_XGameStation/Contributors&action=edit&section=T-3 "Edit section: Other Contributions") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



  










![](//en.wikibooks.org/wiki/Special:CentralAutoLogin/start?type=1x1)


 Retrieved from "
 <https://en.wikibooks.org/w/index.php?title=Deving_The_XGameStation/Printable_version&oldid=4001697>
 "
 



[Categories](/wiki/Special:Categories "Special:Categories") 
 :
 * [Print Versions](/wiki/Category:Print_Versions "Category:Print Versions")
* [Book:Deving The XGameStation](/wiki/Category:Book:Deving_The_XGameStation "Category:Book:Deving The XGameStation")




 Hidden category:
 * [Wikibooks pages with to-do lists](/wiki/Category:Wikibooks_pages_with_to-do_lists "Category:Wikibooks pages with to-do lists")








 Navigation menu
-----------------




### 

 Personal tools



* Not logged in
* [Discussion for this IP address](/wiki/Special:MyTalk "Discussion about edits from this IP address [n]")
* [Contributions](/wiki/Special:MyContributions "A list of edits made from this IP address [y]")
* [Create account](/w/index.php?title=Special:CreateAccount&returnto=Deving+The+XGameStation%2FPrintable+version "You are encouraged to create an account and log in; however, it is not mandatory")
* [Log in](/w/index.php?title=Special:UserLogin&returnto=Deving+The+XGameStation%2FPrintable+version "You are encouraged to log in; however, it is not mandatory [o]")






### 

 Namespaces



* [Book](/wiki/Deving_The_XGameStation/Printable_version "View the content page [c]")
* [Discussion](/w/index.php?title=Talk:Deving_The_XGameStation/Printable_version&action=edit&redlink=1 "Discussion about the content page (does not exist) [t]")








 English
 









### 

 Views



* [Read](/wiki/Deving_The_XGameStation/Printable_version)
* [Edit](/w/index.php?title=Deving_The_XGameStation/Printable_version&veaction=edit "Edit this page [v]")
* [Edit source](/w/index.php?title=Deving_The_XGameStation/Printable_version&action=edit "Edit this page [e]")
* [View history](/w/index.php?title=Deving_The_XGameStation/Printable_version&action=history "Past revisions of this page [h]")








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



* [What links here](/wiki/Special:WhatLinksHere/Deving_The_XGameStation/Printable_version "A list of all wiki pages that link here [j]")
* [Related changes](/wiki/Special:RecentChangesLinked/Deving_The_XGameStation/Printable_version "Recent changes in pages linked from this page [k]")
* [Upload file](//commons.wikimedia.org/wiki/Special:UploadWizard?uselang=en "Upload files [u]")
* [Special pages](/wiki/Special:SpecialPages "A list of all special pages [q]")
* [Permanent link](/w/index.php?title=Deving_The_XGameStation/Printable_version&oldid=4001697 "Permanent link to this revision of this page")
* [Page information](/w/index.php?title=Deving_The_XGameStation/Printable_version&action=info "More information about this page")
* [Cite this page](/w/index.php?title=Special:CiteThisPage&page=Deving_The_XGameStation%2FPrintable_version&id=4001697&wpFormIdentifier=titleform "Information on how to cite this page")





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



* [Create a collection](/w/index.php?title=Special:Book&bookcmd=book_creator&referer=Deving+The+XGameStation%2FPrintable+version)
* [Download as PDF](/w/index.php?title=Special:DownloadAsPdf&page=Deving_The_XGameStation%2FPrintable_version&action=show-download-screen)
* [Printable version](/w/index.php?title=Deving_The_XGameStation/Printable_version&printable=yes "Printable version of this page [p]")





### 

 In other languages









[Add links](https://www.wikidata.org/wiki/Special:NewItem?site=enwikibooks&page=Deving+The+XGameStation%2FPrintable+version "Add interlanguage links") 







* This page was last edited on 6 November 2021, at 23:03.
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
* [Mobile view](//en.m.wikibooks.org/w/index.php?title=Deving_The_XGameStation/Printable_version&mobileaction=toggle_view_mobile)
* [Developers](https://developer.wikimedia.org)
* [Statistics](https://stats.wikimedia.org/#/en.wikibooks.org)
* [Cookie statement](https://foundation.wikimedia.org/wiki/Special:MyLanguage/Policy:Cookie_statement)


* [![Wikimedia Foundation](/static/images/footer/wikimedia-button.png)](https://wikimediafoundation.org/)
* [![Powered by MediaWiki](/static/images/footer/poweredby_mediawiki_88x31.png)](https://www.mediawiki.org/)




