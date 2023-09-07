




 The Pyrogenesis Engine/Printable version - Wikibooks, open books for an open world
 








































 The Pyrogenesis Engine/Printable version
===========================================




 From Wikibooks, open books for an open world
 



 <
 [The Pyrogenesis Engine](/wiki/The_Pyrogenesis_Engine "The Pyrogenesis Engine") 







[Jump to navigation](#mw-head) 
[Jump to search](#searchInput) 




|  |  |
| --- | --- |
| 



 | **This is the
 [print version](/wiki/Help:Print_versions "Help:Print versions") 
 of
 [The Pyrogenesis Engine](/wiki/The_Pyrogenesis_Engine "The Pyrogenesis Engine")**

 You won't see this message or any elements not part of the book's content when you print or
 [preview](https://en.wikibooks.org/w/index.php?title=The_Pyrogenesis_Engine/Printable_version&printable=yes) 
 this page.
  |




  





 The Pyrogenesis Engine
 



 The current, editable version of this book is available in Wikibooks, the open-content textbooks collection, at
   


<https://en.wikibooks.org/wiki/The_Pyrogenesis_Engine>





 Permission is granted to copy, distribute, and/or modify this document under the terms of the
 [Creative Commons Attribution-ShareAlike 3.0 License](/wiki/Wikibooks:Creative_Commons_Attribution-ShareAlike_3.0_Unported_License "Wikibooks:Creative Commons Attribution-ShareAlike 3.0 Unported License") 
 .
 





 Contents
----------







* [1
 

 Introduction](#Introduction)
	+ [1.1
	 
	
	 Features](#Features)
		- [1.1.1
		 
		
		 Core](#Core)
		- [1.1.2
		 
		
		 Graphics](#Graphics)
		- [1.1.3
		 
		
		 Audio](#Audio)
		- [1.1.4
		 
		
		 User Interface](#User_Interface)
	+ [1.2
	 
	
	 Platforms](#Platforms)
		- [1.2.1
		 
		
		 Supported languages](#Supported_languages)
		- [1.2.2
		 
		
		 Supported operating systems](#Supported_operating_systems)
	+ [1.3
	 
	
	 License](#License)
	+ [1.4
	 
	
	 Comparison and particularities](#Comparison_and_particularities)
	+ [1.5
	 
	
	 Where to get it?](#Where_to_get_it?)
* [2
 

 Overview](#Overview)
* [3
 

 Concepts](#Concepts)
	+ [3.1
	 
	
	 Components](#Components)
	+ [3.2
	 
	
	 Entities](#Entities)
* [4
 

 View from main](#View_from_main)
* [5
 

 Match setup](#Match_setup)
* [6
 

 Simulation](#Simulation)
* [7
 

 Maps](#Maps)
* [8
 

 Actors](#Actors)
* [9
 

 GUI engine](#GUI_engine)
* [10
 

 Build system](#Build_system)
* [11
 

 0 A.D.](#0_A.D.)









 Introduction
===============



*Pyrogenesis* 
 is an
 [open source](https://en.wikipedia.org/wiki/open_source "w:open source") 
 game engine developed for the real-time strategy game
 [0 A.D.](https://en.wikipedia.org/wiki/0_A.D._(video_game) "w:0 A.D. (video game)") 
 by
 [Wildfire Games](https://en.wikipedia.org/wiki/Wildfire_Games "w:Wildfire Games") 
 . Wildfire Games originated as a mod developer, releasing the mod
 *Rome at War* 
 for
 [Age of Empires II: The Age of Kings](https://en.wikipedia.org/wiki/Age_of_Empires_II:_The_Age_of_Kings "w:Age of Empires II: The Age of Kings") 
 in 2001. The same year, development commenced on their next title, 0 A.D. Originally envisioned as a comprehensive total conversion mod of Age of Empires II: The Age of Kings, the team eventually decided to instead develop their own engine for the project - the Pyrogenesis engine. True to its roots, the engine was designed from the ground up to be easily moddable and in 2008 the team finally decided to release the whole project, including the Pyrogenesis engine, as open source.
 


### 

 Features
 


 [
 
[edit](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&veaction=edit&section=T-1 "Edit section: Features") 

 |
 
[edit source](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&action=edit&section=T-1 "Edit section: Features") 

 ]


#### 

 Core
 


 [
 
[edit](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&veaction=edit&section=T-2 "Edit section: Core") 

 |
 
[edit source](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&action=edit&section=T-2 "Edit section: Core") 

 ]


* Pathfinder.
* Support for saving and loading games.



[![](//upload.wikimedia.org/wikipedia/commons/thumb/3/38/0_A.D._Vale_of_Tempe.jpeg/400px-0_A.D._Vale_of_Tempe.jpeg)](/wiki/File:0_A.D._Vale_of_Tempe.jpeg)

*Vale of Tempe* 
 . Screenshot from
 [0 A.D.](https://en.wikipedia.org/wiki/0_A.D._(video_game) "w:0 A.D. (video game)") 


#### 

 Graphics
 


 [
 
[edit](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&veaction=edit&section=T-3 "Edit section: Graphics") 

 |
 
[edit source](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&action=edit&section=T-3 "Edit section: Graphics") 

 ]


* [OpenGL](https://en.wikipedia.org/wiki/OpenGL "w:OpenGL") 
 -based rendering engine with support for both ARB and GLSL shaders.
* Realistic shadows with shadow mapping and shadow filtering (PCF).
* Materials system for both models and terrain.
* Normal, parallax, specular and emissive mapping.
* Ambient occlusion.
* HDR rendering and bloom.
* Animated water plane with refraction and reflection.
* Hierarchal skeletal animation and deformation system based on
 [COLLADA](https://en.wikipedia.org/wiki/COLLADA "w:COLLADA") 
 .
* Particle effects.
* Triplanar texture mapping.
* Environmental lighting effects (time of day, sunset).
* Flexible terrain renderer using alpha maps to seamlessly blend terrain.


#### 

 Audio
 


 [
 
[edit](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&veaction=edit&section=T-4 "Edit section: Audio") 

 |
 
[edit source](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&action=edit&section=T-4 "Edit section: Audio") 

 ]


* [OpenAL](https://en.wikipedia.org/wiki/OpenAL "w:OpenAL") 
 -based sound manager.


#### 

 User Interface
 


 [
 
[edit](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&veaction=edit&section=T-5 "Edit section: User Interface") 

 |
 
[edit source](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&action=edit&section=T-5 "Edit section: User Interface") 

 ]


### 

 Platforms
 


 [
 
[edit](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&veaction=edit&section=T-6 "Edit section: Platforms") 

 |
 
[edit source](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&action=edit&section=T-6 "Edit section: Platforms") 

 ]


#### 

 Supported languages
 


 [
 
[edit](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&veaction=edit&section=T-7 "Edit section: Supported languages") 

 |
 
[edit source](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&action=edit&section=T-7 "Edit section: Supported languages") 

 ]



 C++ and JavaScript.
 


#### 

 Supported operating systems
 


 [
 
[edit](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&veaction=edit&section=T-8 "Edit section: Supported operating systems") 

 |
 
[edit source](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&action=edit&section=T-8 "Edit section: Supported operating systems") 

 ]



 Windows, OS X and Linux.
 


### 

 License
 


 [
 
[edit](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&veaction=edit&section=T-9 "Edit section: License") 

 |
 
[edit source](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&action=edit&section=T-9 "Edit section: License") 

 ]



 GPL.
 


### 

 Comparison and particularities
 


 [
 
[edit](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&veaction=edit&section=T-10 "Edit section: Comparison and particularities") 

 |
 
[edit source](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&action=edit&section=T-10 "Edit section: Comparison and particularities") 

 ]


### 



 Where to get it?
 


 [
 
[edit](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&veaction=edit&section=T-11 "Edit section: Where to get it?") 

 |
 
[edit source](/w/index.php?title=The_Pyrogenesis_Engine/Introduction&action=edit&section=T-11 "Edit section: Where to get it?") 

 ]



 The Pyrogenesis engine is not yet packaged separately, but all the source code for 0 A.D. can be downloaded from:
svn.wildfiregames.com or github.com/0ad.
 



  






|  |  |
| --- | --- |
| 

Clipboard



 | 
**To do:** 

 Expand on all of the sections above.
  |



  










 Overview
===========



 Pyrogenesis has two faces: one, the core engine itself, is written in C++. Ideally, only the most low-level functionality, which requires access to system interfaces or crucially needs to be very fast, is implemented here.
 



 The other face of Pyrogenesis is a Javascript interface, which is accessed by specialized scripts through a number of
 *runtimes* 
 .
 



 Each runtime can be thought of as an instance of the SpiderMonkey Javascript interpreter used by the Pyrogenesis engine - it is a
 *scripting environment* 
 or
 *sandbox* 
 in which Javascript scripts are executed. Every runtime runs in isolation and can not immediately interact with the state of the other runtimes.
 



 About scripting: engine creates multiple JS runtimes, one for simulation, one for AI, one for GUI and one for RMS. (Others?)
 



  










 Concepts
===========



 This section will introduce some of the high-level concepts used in the engine's design.
 




 Components
 


 [
 
[edit](/w/index.php?title=The_Pyrogenesis_Engine/Concepts&veaction=edit&section=T-1 "Edit section: Components") 

 |
 
[edit source](/w/index.php?title=The_Pyrogenesis_Engine/Concepts&action=edit&section=T-1 "Edit section: Components") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------




 Entities
 


 [
 
[edit](/w/index.php?title=The_Pyrogenesis_Engine/Concepts&veaction=edit&section=T-2 "Edit section: Entities") 

 |
 
[edit source](/w/index.php?title=The_Pyrogenesis_Engine/Concepts&action=edit&section=T-2 "Edit section: Entities") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



  










 View from main
=================




|  |  |
| --- | --- |
| 

Clipboard



 | 
**To do:** 

 This chapter will describe step-by-step what happens when the
 *pyrogenesis* 
 binary is executed. It will not describe programmatic concepts in detail, but instead defer to later chapters with wikilinks. That way, the reader attains a crucial coupling between the prescriptive and descriptive levels of the subject.
  |



  










 Match setup
==============



 Loading is handled by loading.js. Engine invokes init(), I think, and then at some point reallyStartGame().
 



  










 Simulation
=============



 The most important aspect of any game is its gameplay. In Pyrogenesis, the
 *simulation* 
 can be thought of as the place where gameplay is executed. The simulation is the part of the engine that takes commands from the players (including the AI) and turns them into actions in the game world.
 



 The simulation subsystem is defined in
 `simulation2/Simulation2.cpp` 
 . Its central class, CSimulation2Impl is instantiated by ???, constructed from a
 *unit manager* 
 (CUnitManager) and a
 *terrain* 
 (CTerrain). From this alone, we can deduce that the simulation deals with how
 *units* 
 interact with each other and with the
 *terrain* 
 of a map.
 



 When CSimulation2Impl is instantiated, it also initializes a
 *component manager* 
 (CComponentManager?). Components are one of the most crucial concepts to grasp in order to understand how the simulation works. Programatically, components are merely subsystems accessed via the component manager. For instance, there is a pathfinder component for deriving the shortest path across a terrain, a sound manager component for outputting music and sound effects, and a projectile manager component for driving ballistic calculations of things like arrows and spears.
 



 However, though each of these subsystems (components) are instantiated only once by the component manager (I think), they can be associated with any entity in the game world (I think) and will only ever be used in relation to one such entity at a time (I think). Thus, as a user of the simulation, it may be easier to think of the simulation as consisting of a set of entities, each "having" (being associated with) one or more components. For instance, a soldier unit may have a Pathfinder component, so it can find its way over the map, and an Attack component, so it can fight any enemies it comes across, and an Armour component, so it can handle damage dealt by other units.
 



  






|  |  |
| --- | --- |
| 

Clipboard



 | 
**To do:** 

 Everything else.
  |



  





 Regarding how to load a single instance of a component for one whole session: For a single component you need to attach it to the system entity which unfortunately requires a C++ change. The location is: source/simulation2/Simulation2.cpp:128
 



  










 Maps
=======



 source/graphics/MapReader.cpp is the tool loading maps.
 



  










 Actors
=========




|  |  |
| --- | --- |
| 

Clipboard



 | 
**To do:** 

 Make the following comprehensible (add introduction, clear up all the lose ends, rewrite it in less terse way, finish it etc.) It's not done, yet a necessary starting point.
  |



  





 "Actors" is a concept that is used when dealing with all the visual aspects of entities, such as which models and textures to use for rendering it etc. (TODO: give more examples).
 



 The logic governing actors is mainly found in the VisualActor component (TODO: wikilinkify "component").
 



**CCmpVisualActor.Init()** 




 This function takes a "paramNode" as argument. I'm not quite sure what that is, but it's probably some kind of XML-derived data structure.
 



 If the paramNode has a "Foundation" or "FoundationActor" child, that will be used as the "actor name". If it doesn't, it will use the "Actor" child of the paramNode as "actor name".
 



 The function then creates a new "unit" from the "actor name", GetActorSeed() and null selections. (TODO: explain)
 



**CUnitManager.CreateUnit()** 




 This function tries instantiating a new CUnit with the actor name, seed and selection given in its arguments and some private object manager. (TODO: explain)
 



 If it succeeds in doing so, the new unit is added to the unit manager and returned to the call site.
 



**CUnit::Create()** 




 This is a factory function.
 



 First it finds the base object with the given actor name in the object manager. If a base object with that name is not found, it returns null.
 



 It then calculates random variations from the seed.
 



 It then finds the object that matches them. If object not found, return null.
 



 It then returns a new CUnit with that object, object manager and selections.
 



**CUnit::CUnit()** 




 This just initializes a bunch of variables.
 



  










 GUI engine
=============



 While not the most prominent part of the engine, the GUI component is one of the first ones invoked by the game. When pyrogenesis is started, only GUI runtime is active.
 




|  |  |
| --- | --- |
| 

Clipboard



 | 
**To do:** 

 Describe how GUI pages and XML etc. works.
  |



  










 Build system
===============



 The build system compiles all files in the source tree.
 



  










 0 A.D.
=========


1. GUI
	1. [Session](/w/index.php?title=The_Pyrogenesis_Engine/Printable_version/GuiSession&action=edit&redlink=1 "The Pyrogenesis Engine/Printable version/GuiSession (does not exist)")



  










![](//en.wikibooks.org/wiki/Special:CentralAutoLogin/start?type=1x1)


 Retrieved from "
 <https://en.wikibooks.org/w/index.php?title=The_Pyrogenesis_Engine/Printable_version&oldid=3987803>
 "
 



[Categories](/wiki/Special:Categories "Special:Categories") 
 :
 * [Print Versions](/wiki/Category:Print_Versions "Category:Print Versions")
* [Book:The Pyrogenesis Engine](/wiki/Category:Book:The_Pyrogenesis_Engine "Category:Book:The Pyrogenesis Engine")




 Hidden category:
 * [Wikibooks pages with to-do lists](/wiki/Category:Wikibooks_pages_with_to-do_lists "Category:Wikibooks pages with to-do lists")








 Navigation menu
-----------------




### 

 Personal tools



* Not logged in
* [Discussion for this IP address](/wiki/Special:MyTalk "Discussion about edits from this IP address [n]")
* [Contributions](/wiki/Special:MyContributions "A list of edits made from this IP address [y]")
* [Create account](/w/index.php?title=Special:CreateAccount&returnto=The+Pyrogenesis+Engine%2FPrintable+version "You are encouraged to create an account and log in; however, it is not mandatory")
* [Log in](/w/index.php?title=Special:UserLogin&returnto=The+Pyrogenesis+Engine%2FPrintable+version "You are encouraged to log in; however, it is not mandatory [o]")






### 

 Namespaces



* [Book](/wiki/The_Pyrogenesis_Engine/Printable_version "View the content page [c]")
* [Discussion](/w/index.php?title=Talk:The_Pyrogenesis_Engine/Printable_version&action=edit&redlink=1 "Discussion about the content page (does not exist) [t]")








 English
 









### 

 Views



* [Read](/wiki/The_Pyrogenesis_Engine/Printable_version)
* [Edit](/w/index.php?title=The_Pyrogenesis_Engine/Printable_version&veaction=edit "Edit this page [v]")
* [Edit source](/w/index.php?title=The_Pyrogenesis_Engine/Printable_version&action=edit "Edit this page [e]")
* [View history](/w/index.php?title=The_Pyrogenesis_Engine/Printable_version&action=history "Past revisions of this page [h]")








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



* [What links here](/wiki/Special:WhatLinksHere/The_Pyrogenesis_Engine/Printable_version "A list of all wiki pages that link here [j]")
* [Related changes](/wiki/Special:RecentChangesLinked/The_Pyrogenesis_Engine/Printable_version "Recent changes in pages linked from this page [k]")
* [Upload file](//commons.wikimedia.org/wiki/Special:UploadWizard?uselang=en "Upload files [u]")
* [Special pages](/wiki/Special:SpecialPages "A list of all special pages [q]")
* [Permanent link](/w/index.php?title=The_Pyrogenesis_Engine/Printable_version&oldid=3987803 "Permanent link to this revision of this page")
* [Page information](/w/index.php?title=The_Pyrogenesis_Engine/Printable_version&action=info "More information about this page")
* [Cite this page](/w/index.php?title=Special:CiteThisPage&page=The_Pyrogenesis_Engine%2FPrintable_version&id=3987803&wpFormIdentifier=titleform "Information on how to cite this page")





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



* [Create a collection](/w/index.php?title=Special:Book&bookcmd=book_creator&referer=The+Pyrogenesis+Engine%2FPrintable+version)
* [Download as PDF](/w/index.php?title=Special:DownloadAsPdf&page=The_Pyrogenesis_Engine%2FPrintable_version&action=show-download-screen)
* [Printable version](/w/index.php?title=The_Pyrogenesis_Engine/Printable_version&printable=yes "Printable version of this page [p]")





### 

 In other languages









[Add links](https://www.wikidata.org/wiki/Special:NewItem?site=enwikibooks&page=The+Pyrogenesis+Engine%2FPrintable+version "Add interlanguage links") 







* This page was last edited on 17 September 2021, at 05:05.
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
* [Mobile view](//en.m.wikibooks.org/w/index.php?title=The_Pyrogenesis_Engine/Printable_version&mobileaction=toggle_view_mobile)
* [Developers](https://developer.wikimedia.org)
* [Statistics](https://stats.wikimedia.org/#/en.wikibooks.org)
* [Cookie statement](https://foundation.wikimedia.org/wiki/Special:MyLanguage/Policy:Cookie_statement)


* [![Wikimedia Foundation](/static/images/footer/wikimedia-button.png)](https://wikimediafoundation.org/)
* [![Powered by MediaWiki](/static/images/footer/poweredby_mediawiki_88x31.png)](https://www.mediawiki.org/)




