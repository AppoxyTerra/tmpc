




 Genesis Programming/Printable version - Wikibooks, open books for an open world
 








































 Genesis Programming/Printable version
========================================




 From Wikibooks, open books for an open world
 



 <
 [Genesis Programming](/wiki/Genesis_Programming "Genesis Programming") 







[Jump to navigation](#mw-head) 
[Jump to search](#searchInput) 




|  |  |
| --- | --- |
| 



 | **This is the
 [print version](/wiki/Help:Print_versions "Help:Print versions") 
 of
 [Genesis Programming](/wiki/Genesis_Programming "Genesis Programming")**

 You won't see this message or any elements not part of the book's content when you print or
 [preview](https://en.wikibooks.org/w/index.php?title=Genesis_Programming/Printable_version&printable=yes) 
 this page.
  |




  





 Genesis Programming
 



 The current, editable version of this book is available in Wikibooks, the open-content textbooks collection, at
   


<https://en.wikibooks.org/wiki/Genesis_Programming>





 Permission is granted to copy, distribute, and/or modify this document under the terms of the
 [Creative Commons Attribution-ShareAlike 3.0 License](/wiki/Wikibooks:Creative_Commons_Attribution-ShareAlike_3.0_Unported_License "Wikibooks:Creative Commons Attribution-ShareAlike 3.0 Unported License") 
 .
 





 Contents
----------







* [1
 

 68000 programming considerations](#68000_programming_considerations)
	+ [1.1
	 
	
	 68000 programming considerations](#68000_programming_considerations_2)
		- [1.1.1
		 
		
		 ROM header](#ROM_header)
		- [1.1.2
		 
		
		 TMSS](#TMSS)
		- [1.1.3
		 
		
		 Checksum](#Checksum)
* [2
 

 Z80 programming considerations](#Z80_programming_considerations)
	+ [2.1
	 
	
	 Memory map](#Memory_map)
	+ [2.2
	 
	
	 Z80 Architecture](#Z80_Architecture)
	+ [2.3
	 
	
	 Read more](#Read_more)









 68000 programming considerations
===================================




 68000 programming considerations
 


 [
 
[edit](/w/index.php?title=Genesis_Programming/68000_programming_considerations&veaction=edit&section=T-1 "Edit section: 68000 programming considerations") 

 |
 
[edit source](/w/index.php?title=Genesis_Programming/68000_programming_considerations&action=edit&section=T-1 "Edit section: 68000 programming considerations") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


### 

 ROM header
 


 [
 
[edit](/w/index.php?title=Genesis_Programming/68000_programming_considerations&veaction=edit&section=T-2 "Edit section: ROM header") 

 |
 
[edit source](/w/index.php?title=Genesis_Programming/68000_programming_considerations&action=edit&section=T-2 "Edit section: ROM header") 

 ]



 The ROM header starts at
 `$000100` 
 and contains information about the cartridge. The following assembly code shows how to declare the header:
 


1. dc.b "SEGA GENESIS"
2. dc.b "(C)SEGA 1992.SEP"
3. dc.b "YOUR GAME HERE"
4. dc.b "YOUR GAME HERE"
5. dc.b "GM XXXXXXXX-XX"
6. dc.w $D951
7. dc.b "J"
8. dc.l 0
9. dc.l ROM\_End
10. dc.l $FF0000
11. 
12. dc.l $FFFFFF
13. dc.b (Blank)
14. dc.b (Blank)
15. dc.b (Blank)
16. dc.b (Blank)
17. dc.b (Blank)
18. dc.b "JUE"



 Explanations for each field:
 


1. The name of the console. Should be either "SEGA GENESIS" or "SEGA MEGA DRIVE" (depending on the region you are planning to program your game for). Must be 16 characters long.
2. Firm name and build date. Must be 16 characters long, firm name is four characters long.
3. Domestic name. Must be 48 characters long.
4. International name. Must be 48 characters long.
5. Program type and serial number. First two characters are either "GM" (game) or "AL" (educational). After the space, a series of eight digits gives the serial number. The final two digits give the version number.
6. [Checksum](#Checksum) 
 .
7. I/O device support (unused)
8. Start of the ROM. This should always be 0.
9. End of the ROM. It's best to use a label at the end of your source file to determine this.
10. Start of RAM. Just about every game starts at $FF0000, but RAM is mirrored at several other places, and you can use those if you want.
11. End of RAM. Should be $FFFF after the starting point.
12. Backup RAM ID. Fill this with spaces if there is none, otherwise, use this formula:
   


 dc.b "RA",%1x1yy000,%0010000
 
  

 where x is true when the RAM is for backup and false if not. (I've no idea what the difference is.) yy is 11 if addressing is odd bytes only, 10 if even only, and 00 if both.
13. Start address of backup RAM. Fill with spaces if there is no backup RAM.
14. End address of backup RAM.
15. Modem support. Fill with spaces if there is no modem, otherwise follow this formula:
   


 "MOxxxxyy.zzz"
 
  

 where xxxx is the firm name, yy is the modem number, and zzz is the version number. (This is also unused)
16. Notes. Put whatever you want here, and fill the empty spaces with zeroes.
17. Country codes. J is for Japan, U is for the United States, and E is for Europe. You need to fill in the rest of this field with spaces. So, JU for the country code would tell the Sega that the game is for Japan and the US, JUE would tell it that it is for Japan, the US, and Europe


### 

 TMSS
 


 [
 
[edit](/w/index.php?title=Genesis_Programming/68000_programming_considerations&veaction=edit&section=T-3 "Edit section: TMSS") 

 |
 
[edit source](/w/index.php?title=Genesis_Programming/68000_programming_considerations&action=edit&section=T-3 "Edit section: TMSS") 

 ]



 Back in 1990, Accolade released a few unlicensed games for the Genesis. Sega was not pleased about this, so they invented TMSS and put it on all new consoles they manufactured. TMSS forces the game to write the ASCII string "SEGA" to $A14000 within a short period of time, or the VDP will be deactivated. On version 0 of the console, this location is reserved, and writing here may cause a crash, so the game has to first make sure that it's running on a console that has TMSS. Sega uses the following routine for that:
 



```
         move.b  $A10001,d0
         andi.b  #$0F,d0
         beq.b   version_0
         move.l  #'SEGA',$A14000
version_0:

```

### 

 Checksum
 


 [
 
[edit](/w/index.php?title=Genesis_Programming/68000_programming_considerations&veaction=edit&section=T-4 "Edit section: Checksum") 

 |
 
[edit source](/w/index.php?title=Genesis_Programming/68000_programming_considerations&action=edit&section=T-4 "Edit section: Checksum") 

 ]



 The checksum is a 16-bit number (word) located in the header which is present in all licensed games.It was used to check the integrity of the data by storing a pre-calculated number (the checksum) using the original data and comparing it with the checksum of the existing data in the cart, probably to prevent code changes without authorization (in-house).
 



 The checksum is, basically, the sum of the whole cart, all its bytes, starting at address $200. As you can guess, if only a byte is changed the checksum changes too. Somewhat like the CRC/CRC32 algorithms, though those are much more accurate than this method.
 



 You don't need to implement the checksum if you program your own homebrew rom, because the checksum is exclusively checked by software. But, anyway, this is how a typical checksum routine from a licensed game would look.
 



```
		movea.l	#$200,a0
		movea.l	#ROM_End,a1 
		move.l	(a1),d0
		moveq	#0,d1
loop:
		add.w	(a0)+,d1
		cmp.l	a0,d0
		bcc.s	loop
		movea.l	#$18E,a1	; Checksum
		cmp.w	(a1),d1
		bne.w	WrongChecksum

```


 To disable it, comment out that last branch. If you prefer to fix the checksum, grab the Fix Checksum utility from
 [Hacking CulT's](http://www.hacking-cult.org) 
 download section.
 



  










 Z80 programming considerations
=================================




 Memory map
 


 [
 
[edit](/w/index.php?title=Genesis_Programming/Z80_programming_considerations&veaction=edit&section=T-1 "Edit section: Memory map") 

 |
 
[edit source](/w/index.php?title=Genesis_Programming/Z80_programming_considerations&action=edit&section=T-1 "Edit section: Memory map") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------




| 
 Start
  | 
 End
  | 
 Description
  |
| --- | --- | --- |
| 
 0000h
  | 
 1FFFh
  | 
 Z80 RAM
  |
| 
 2000h
  | 
 3FFFh
  | 
 Reserved
  |
| 
 4000h
  | 
 YM2612 A0
  |
| 
 4001h
  | 
 YM2612 D0
  |
| 
 4002h
  | 
 YM2612 A1
  |
| 
 4003h
  | 
 YM2612 D1
  |
| 
 4004h
  | 
 5FFFh
  | 
 Reserved
  |
| 
 6000h
  | 
 Bank register
  |
| 
 6001h
  | 
 7F10h
  | 
 Reserved
  |
| 
 7F11h
  | 
 PSG
  |
| 
 7F12h
  | 
 7FFFh
  | 
 Reserved
  |
| 
 8000h
  | 
 FFFFh
  | 
 68000 memory bank
  |




 Z80 Architecture
 


 [
 
[edit](/w/index.php?title=Genesis_Programming/Z80_programming_considerations&veaction=edit&section=T-2 "Edit section: Z80 Architecture") 

 |
 
[edit source](/w/index.php?title=Genesis_Programming/Z80_programming_considerations&action=edit&section=T-2 "Edit section: Z80 Architecture") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



[![](//upload.wikimedia.org/wikipedia/commons/thumb/d/db/Z80_arch.svg/800px-Z80_arch.svg.png)](/wiki/File:Z80_arch.svg)

 Block diagram of the Z80 architecture.
 



 Read more
 


 [
 
[edit](/w/index.php?title=Genesis_Programming/Z80_programming_considerations&veaction=edit&section=T-3 "Edit section: Read more") 

 |
 
[edit source](/w/index.php?title=Genesis_Programming/Z80_programming_considerations&action=edit&section=T-3 "Edit section: Read more") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 There is a separate Wikibook on
 [Z80 Assembly](/wiki/Z80_Assembly "Z80 Assembly") 
 .
 



  










![](//en.wikibooks.org/wiki/Special:CentralAutoLogin/start?type=1x1)


 Retrieved from "
 <https://en.wikibooks.org/w/index.php?title=Genesis_Programming/Printable_version&oldid=4001681>
 "
 



[Categories](/wiki/Special:Categories "Special:Categories") 
 :
 * [Print Versions](/wiki/Category:Print_Versions "Category:Print Versions")
* [Book:Genesis Programming](/wiki/Category:Book:Genesis_Programming "Category:Book:Genesis Programming")








 Navigation menu
-----------------




### 

 Personal tools



* Not logged in
* [Discussion for this IP address](/wiki/Special:MyTalk "Discussion about edits from this IP address [n]")
* [Contributions](/wiki/Special:MyContributions "A list of edits made from this IP address [y]")
* [Create account](/w/index.php?title=Special:CreateAccount&returnto=Genesis+Programming%2FPrintable+version "You are encouraged to create an account and log in; however, it is not mandatory")
* [Log in](/w/index.php?title=Special:UserLogin&returnto=Genesis+Programming%2FPrintable+version "You are encouraged to log in; however, it is not mandatory [o]")






### 

 Namespaces



* [Book](/wiki/Genesis_Programming/Printable_version "View the content page [c]")
* [Discussion](/w/index.php?title=Talk:Genesis_Programming/Printable_version&action=edit&redlink=1 "Discussion about the content page (does not exist) [t]")








 English
 









### 

 Views



* [Read](/wiki/Genesis_Programming/Printable_version)
* [Edit](/w/index.php?title=Genesis_Programming/Printable_version&veaction=edit "Edit this page [v]")
* [Edit source](/w/index.php?title=Genesis_Programming/Printable_version&action=edit "Edit this page [e]")
* [View history](/w/index.php?title=Genesis_Programming/Printable_version&action=history "Past revisions of this page [h]")








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



* [What links here](/wiki/Special:WhatLinksHere/Genesis_Programming/Printable_version "A list of all wiki pages that link here [j]")
* [Related changes](/wiki/Special:RecentChangesLinked/Genesis_Programming/Printable_version "Recent changes in pages linked from this page [k]")
* [Upload file](//commons.wikimedia.org/wiki/Special:UploadWizard?uselang=en "Upload files [u]")
* [Special pages](/wiki/Special:SpecialPages "A list of all special pages [q]")
* [Permanent link](/w/index.php?title=Genesis_Programming/Printable_version&oldid=4001681 "Permanent link to this revision of this page")
* [Page information](/w/index.php?title=Genesis_Programming/Printable_version&action=info "More information about this page")
* [Cite this page](/w/index.php?title=Special:CiteThisPage&page=Genesis_Programming%2FPrintable_version&id=4001681&wpFormIdentifier=titleform "Information on how to cite this page")





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



* [Create a collection](/w/index.php?title=Special:Book&bookcmd=book_creator&referer=Genesis+Programming%2FPrintable+version)
* [Download as PDF](/w/index.php?title=Special:DownloadAsPdf&page=Genesis_Programming%2FPrintable_version&action=show-download-screen)
* [Printable version](/w/index.php?title=Genesis_Programming/Printable_version&printable=yes "Printable version of this page [p]")





### 

 In other languages









[Add links](https://www.wikidata.org/wiki/Special:NewItem?site=enwikibooks&page=Genesis+Programming%2FPrintable+version "Add interlanguage links") 







* This page was last edited on 6 November 2021, at 22:47.
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
* [Mobile view](//en.m.wikibooks.org/w/index.php?title=Genesis_Programming/Printable_version&mobileaction=toggle_view_mobile)
* [Developers](https://developer.wikimedia.org)
* [Statistics](https://stats.wikimedia.org/#/en.wikibooks.org)
* [Cookie statement](https://foundation.wikimedia.org/wiki/Special:MyLanguage/Policy:Cookie_statement)


* [![Wikimedia Foundation](/static/images/footer/wikimedia-button.png)](https://wikimediafoundation.org/)
* [![Powered by MediaWiki](/static/images/footer/poweredby_mediawiki_88x31.png)](https://www.mediawiki.org/)




