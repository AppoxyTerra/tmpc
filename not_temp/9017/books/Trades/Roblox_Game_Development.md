




 Roblox Game Development/Printable version - Wikibooks, open books for an open world
 








































 Roblox Game Development/Printable version
============================================




 From Wikibooks, open books for an open world
 



 <
 [Roblox Game Development](/wiki/Roblox_Game_Development "Roblox Game Development") 







[Jump to navigation](#mw-head) 
[Jump to search](#searchInput) 




|  |  |
| --- | --- |
| 



 | **This is the
 [print version](/wiki/Help:Print_versions "Help:Print versions") 
 of
 [Roblox Game Development](/wiki/Roblox_Game_Development "Roblox Game Development")**

 You won't see this message or any elements not part of the book's content when you print or
 [preview](https://en.wikibooks.org/w/index.php?title=Roblox_Game_Development/Printable_version&printable=yes) 
 this page.
  |




  





 Roblox Game Development
 



 The current, editable version of this book is available in Wikibooks, the open-content textbooks collection, at
   


<https://en.wikibooks.org/wiki/Roblox_Game_Development>





 Permission is granted to copy, distribute, and/or modify this document under the terms of the
 [Creative Commons Attribution-ShareAlike 3.0 License](/wiki/Wikibooks:Creative_Commons_Attribution-ShareAlike_3.0_Unported_License "Wikibooks:Creative Commons Attribution-ShareAlike 3.0 Unported License") 
 .
 





 Contents
----------







* [1
 

 Single page version](#Single_page_version)
* [2
 

 Introduction](#Introduction)
	+ [2.1
	 
	
	 Creating an account](#Creating_an_account)
	+ [2.2
	 
	
	 History](#History)
	+ [2.3
	 
	
	 The website](#The_website)
	+ [2.4
	 
	
	 ROBLOX Studio](#ROBLOX_Studio)
		- [2.4.1
		 
		
		 Clipboard](#Clipboard)
		- [2.4.2
		 
		
		 Camera manipulation](#Camera_manipulation)
		- [2.4.3
		 
		
		 Game hierarchy](#Game_hierarchy)
		- [2.4.4
		 
		
		 Simulation](#Simulation)
		- [2.4.5
		 
		
		 Saving games](#Saving_games)
	+ [2.5
	 
	
	 Physical objects](#Physical_objects)
		- [2.5.1
		 
		
		 Parts](#Parts)
			* [2.5.1.1
			 
			
			 Materials](#Materials)
			* [2.5.1.2
			 
			
			 Form factors](#Form_factors)
			* [2.5.1.3
			 
			
			 Surface types](#Surface_types)
			* [2.5.1.4
			 
			
			 Decals and textures](#Decals_and_textures)
			* [2.5.1.5
			 
			
			 Meshes](#Meshes)
			* [2.5.1.6
			 
			
			 Particles](#Particles)
				+ [2.5.1.6.1
				 
				
				 Sparkles](#Sparkles)
				+ [2.5.1.6.2
				 
				
				 Fire](#Fire)
				+ [2.5.1.6.3
				 
				
				 Smoke](#Smoke)
		- [2.5.2
		 
		
		 Trusses](#Trusses)
		- [2.5.3
		 
		
		 Spawn locations](#Spawn_locations)
		- [2.5.4
		 
		
		 Terrain](#Terrain)
		- [2.5.5
		 
		
		 Seats](#Seats)
	+ [2.6
	 
	
	 Building](#Building)
		- [2.6.1
		 
		
		 Models](#Models)
		- [2.6.2
		 
		
		 Manipulation](#Manipulation)
		- [2.6.3
		 
		
		 Customization](#Customization)
		- [2.6.4
		 
		
		 Other tools](#Other_tools)
	+ [2.7
	 
	
	 Help sources](#Help_sources)
	+ [2.8
	 
	
	 Quiz](#Quiz)
* [3
 

 Game design](#Game_design)
	+ [3.1
	 
	
	 Finding an idea](#Finding_an_idea)
	+ [3.2
	 
	
	 Recording your idea](#Recording_your_idea)
	+ [3.3
	 
	
	 Leveraging support](#Leveraging_support)
	+ [3.4
	 
	
	 Time management](#Time_management)
	+ [3.5
	 
	
	 Game constituents](#Game_constituents)
* [4
 

 Game engine](#Game_engine)
	+ [4.1
	 
	
	 Client–server model](#Client–server_model)
	+ [4.2
	 
	
	 Quiz](#Quiz_2)
* [5
 

 Game code](#Game_code)









 Single page version
======================




 Introduction
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Single_page_version&veaction=edit&section=T-1 "Edit section: Introduction") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Single_page_version&action=edit&section=T-1 "Edit section: Introduction") 

 ]
=====================================================================================================================================================================================================================================================================================================



[![A normal 4 x 1.2 x 2 ROBLOX brick](//upload.wikimedia.org/wikibooks/en/thumb/1/1f/ROBLOX_brick.png/220px-ROBLOX_brick.png)](/wiki/File:ROBLOX_brick.png)

 A normal 4 x 1.2 x 2 ROBLOX brick
 


 ROBLOX is a user-generated gaming site. This means that users can make games that other users can play. ROBLOX allows you to use its game engine and
 [scripting interface](https://en.wikipedia.org/wiki/Application_programming_interface "wikipedia:Application programming interface") 
 to create games of all kinds that other people can play. The games are in 3D and use building blocks that could be accurately compared to
 [Lego](https://en.wikipedia.org/wiki/Lego "wikipedia:Lego") 
 blocks. These blocks can be customized, resized, positioned and manipulated using the studio. Games can also contain various other objects, including particles (smoke, fire, etc.) and graphical objects (text labels, buttons, etc.), and users can write scripts to add more functionality to their games.
 



 Most users on ROBLOX both create games and play games, but many only frequently do either of these. While most users do have one or many games they improve regularly and work on, most are not seasoned game developers and they see ROBLOX as a toy rather than as a game development platform.
 




 Creating an account
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-1 "Edit section: Creating an account") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-1 "Edit section: Creating an account") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 You will need an account to create games and use the website. If you don't have one yet, you can create one easily. You need to navigate to the following URL with your web browser:
 <https://www.ROBLOX.com/Login/Signup.aspx>
 . There, you need to indicate your birth date and gender and to choose a username and a password. You will get a character: there are many ways to customize that character and use the social aspect of ROBLOX, but this book will focus solely on the game development aspect, although some of it overlaps with the social aspect. If you have never used the site before, you should explore around it enough to be able to find your way on it when you'll need to. You should also play some places (games on ROBLOX are frequently called "places") to see some examples of what can be done on ROBLOX.
 



 You will need the ROBLOX client to play games (it can be downloaded on the site by clicking on any place's play button), and you will need the ROBLOX studio (which comes with the client) to create and modify games. Note that the ROBLOX software only works on Windows and Mac OS X. There are workarounds to make it work on Linux with
 [Wine](https://en.wikipedia.org/wiki/Wine_(software) "wikipedia:Wine (software)") 
 using a [
 [patch](https://github.com/roblox-linux-wrapper/roblox-linux-wrapper%7Cuser-made) 
 ]. Do note that this wrapper currently does not, and that you will need to run a
 [Virtual Machine](https://en.wikipedia.org/wiki/Virtual_machine "wikipedia:Virtual machine") 
 with Windows or Mac OSX on it in order to play ROBLOX on Linux.
 




 History
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-2 "Edit section: History") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-2 "Edit section: History") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 David Baszucki had founded Knowledge Revolution, a company which concentrated on educational physics and mechanical simulation software. He had been joined by Erik Cassel, who worked with Baszucki on the software. Keith Lucas, the current ROBLOX vice president of engineering and operations, had later joined the company in 1997. Afterwards, Knowledge Revolution had been acquired by
 [MSC Software Corporation](https://en.wikipedia.org/wiki/MSC_Software "wikipedia:MSC Software") 
 , and they both left some years after to create ROBLOX, in 2004.
 



 ROBLOX was launched in 2005. The name is a combination of the words "robot" and "blocks". It started with only some hundreds of users and, today, it has many millions of users, and it is still growing. This book will cover many features that were added to the game engine and scripting API over the years since ROBLOX's creation; however, it will be impossible to cover them all due to the vast amount of features embedded into ROBLOX and the rapid rate of changes and additions that occur routinely, almost every other week.
 




 The website
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-3 "Edit section: The website") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-3 "Edit section: The website") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 This book will not describe the entirety of the ROBLOX website or even most of it, but instead offer guidance on many core aspects of developing a game. You are encouraged to explore the rest of the website yourself. You can navigate through the site using the menu bar at the top of the page.
 



 You can see your places on your profile, which you can find by clicking on the profile link in the menu. Unless you upgrade your account to a premium membership, you can only have one place (you don't need more than one place or any of the premium features to complete this book). You can also find your places on the places page or on the build page.
 




 ROBLOX Studio
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-4 "Edit section: ROBLOX Studio") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-4 "Edit section: ROBLOX Studio") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



[![The explorer panel](//upload.wikimedia.org/wikibooks/en/thumb/4/47/ROBLOX_explorer.png/220px-ROBLOX_explorer.png)](/wiki/File:ROBLOX_explorer.png)

 The explorer panel
 


[![The property panel when the workspace is selected](//upload.wikimedia.org/wikibooks/en/thumb/f/ff/Property_panel.png/220px-Property_panel.png)](/wiki/File:Property_panel.png)

 The property panel when the workspace is selected
 


[![The advanced objects panel](//upload.wikimedia.org/wikibooks/en/thumb/6/61/Basic_objects_panel.png/220px-Basic_objects_panel.png)](/wiki/File:Basic_objects_panel.png)

 The advanced objects panel
 


 ROBLOX Studio, which should have been downloaded on your computer when you installed the ROBLOX client, is a tool that can be used to create and develop ROBLOX models, scripts, and, when you put the two together, places. Once opened, it should display a page on the ROBLOX website. You should log in from that page (it is not necessary to log in to use the studio, but some features require it). Once logged in your account, you can open a new place by opening the File menu and choosing New. You can also edit one of your current games by browsing to the game's page on the website and clicking on the game's edit button.
 



 If you can't find a panel, open the View menu and click on the corresponding button to make it visible.
 



 The game view displays the current game environment. When you open a new place, it should look like an empty sky and be in the middle. It will display your game in the same way as the players would see it when playing. You can move the camera by using the arrow keys.
 



 The explorer panel, commonly called the explorer, is a panel that displays all the objects currently in the game in a hierarchy. Clicking on an object in the hierarchy will select it. An object that is included in another is called a child of that object (the terrain object is a child of the workspace) while an object that includes another object is called the parent of that object (the workspace is the parent of the terrain object). An object can have many children, but can only have one parent.
 



 You can perform many actions on an object by clicking on the corresponding button in the object's context menu (which is shown when right-clicking on the object). You can also move objects by dragging them into another object (some objects cannot be moved).
 



 The property panel is a panel displaying the properties of the object that is currently selected. Properties are values that you can modify to change the behavior of the object.
 



 There are many object types. These are called classes. Not all classes have the same properties, however, all have certain properties in common. The ClassName property is common to all objects, and its value is the name of the class of the object. For example, the class of a part would be "Part". The Name property is also common to all objects, and its value is the name of the object. Each object needs to have a name. The Parent property is yet another property common to all objects, and its value is the object the current object is included in.
 



 The toolbox is a panel allowing you to insert models fabricated by other users. These models, also called "public domain models" or "free models" can be searched for with the toolbox. There are also models featured by ROBLOX. Your own models (you can publish your own models for other people to use) are also shown in the toolbox.
 



 The advanced objects panel is a panel allowing you to insert objects into the game hierarchy by double-clicking on the item's name. The object will be inserted in the object that is currently selected. The panel will display the available items in columns. If the checkbox is checked, it will select the object automatically after it is inserted. You can also search for a specific object using the search bar at the top of the panel.
 



 The command bar is a toolbar that can be used to run short lines of code. It is frequently used with the output to see the result produced by a certain piece of code. It is also frequently used to automate tasks in your game or to do things that cannot be done with the studio's interface.
 



 The output is a panel that displays output generated by scripts, as well as warnings and other information from the engine. It is an essential tool for finding errors in scripts and correcting them. It can also be used together with the command bar to execute code and see the result.
 



 The script performance panel is a panel that displays information concerning the performance of the scripts running in the game. Scripts labelled as "[Unknown]" are usually either core scripts (internal scripts used by ROBLOX) or removed scripts, so they can be ignored. While the script performance panel isn't frequently used, it can help identifying scripts that are expensive in performance and it can be useful when evaluating the performance of a script.
 



 The diagnostics panel is rarely used, but it is useful to know about it. Most of the information in it is very technical and useless to the average user. It can tell you the number of parts in the game, the number of connections handled by the physics engine, the frames per second (FPS) and some other things, but this information will rarely be needed.
 



 The information available in the diagnostics panel is also mostly available in-game. To see it, press
 ``Ctrl` 
 +
 `F1``
 or
 ``Alt` 
 +
 `F1``
 on
 [Microsoft Windows](https://en.wikipedia.org/wiki/Microsoft_Windows "wikipedia:Microsoft Windows") 
 ,
 ``⌘` 
`F1``
 or
 ``⌥` 
`F1``
 on
 [OS X](https://en.wikipedia.org/wiki/OS_X "wikipedia:OS X") 
 .
 


### 

 Clipboard
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-5 "Edit section: Clipboard") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-5 "Edit section: Clipboard") 

 ]




[![A screenshot of the clipboard toolbar](//upload.wikimedia.org/wikibooks/en/c/c7/Clipboard.png)](/wiki/File:Clipboard.png)





 The clipboard toolbar can be used to copy, cut, duplicate and paste game objects or script code. Additionally, it can be used to undo or redo actions. Keyboard shortcuts are available for all of these actions; they can be viewed by leaving the mouse pointer over the buttons.
 


### 

 Camera manipulation
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-6 "Edit section: Camera manipulation") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-6 "Edit section: Camera manipulation") 

 ]



 The camera may be hard to get used to for a person who has never used it before. It is possible to unzoom with the mouse wheel or the
 `I` 
 and
 `O` 
 keys. The camera can be moved forward and backwards by using the up and down keys or the
 `W` 
 or
 `S` 
 keys. It is possible to rotate the camera by right-clicking and dragging the mouse.
 


### 

 Game hierarchy
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-7 "Edit section: Game hierarchy") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-7 "Edit section: Game hierarchy") 

 ]



 The game hierarchy is the hierarchy of objects in the game. It can be seen and manipulated through the explorer, as explained above. Top-level objects (objects that have no visible parent in the explorer) are called services. Not all services are shown in the explorer (in fact, many classes are hidden by default).
 



 The workspace is the place where all the scripts (the objects that allow you to run code in your game) and the visible parts (parts are also called "bricks" or "blocks") in your games are located.
 



 The Players service is the place where Player objects (objects that represent players) will be located. You don't need to worry about this service right now, as you will only use it when writing scripts.
 



 The Lighting service is the place where skyboxes, which give a different appearance to the sky, are stored. It also carries many properties that can be modified to change the lighting of the place.
 



 The StarterGui service contains
 [GUIs](https://en.wikipedia.org/wiki/Graphical_user_interface "wikipedia:Graphical user interface") 
 , 2D elements that you can put in your game to create menus, buttons, etc. The GUIs contained in this service will be given to players when their character spawns. Without scripts, not much can be done with GUIs, so this book will not talk again about them until later, when we get into scripting.
 



 The StarterPack service contains tools. Tools are used by players to do things. For example, a sword would be used to attack other players, a key would be used to open a door, etc. These tools will be given to players when their character spawns. Again, without scripts, you can't do much with tools.
 


### 

 Simulation
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-8 "Edit section: Simulation") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-8 "Edit section: Simulation") 

 ]




[![A screenshot of the simulation toolbar](//upload.wikimedia.org/wikibooks/en/8/82/Run_toolbar.png)](/wiki/File:Run_toolbar.png)





 The ROBLOX studio offers many ways to test games that are built with it. When a game is edited using the studio, it is initially in an idle state. This means that the physics are not simulated (i.e. parts will not fall, explosions will have no effect) and that scripts are not running. The run button can be used to put the game in the running state. This will enable the physics and make all scripts run. The game can then be put again in idle state with the pause button; alternatively, the reset button can be used to reset the game to its state at the time it started running and put it back in the idle state.
 



 Often, these tools will not be enough, and a character will be necessary to test the game. For this, there are three options. The first is to test the game online. Unfortunately, this requires publishing the game to the website and entering it, which can take some time and does not give you access to all the debugging tools available in the studio.
 [[1]](#cite_note-1)




 The second option is to play the game without a server (in
 *solo* 
 mode). This will create a pseudo game environment with access to the output and to the full studio. It gives the user a character and runs the game. However, there are many differences between this simulation environment and a real game environment, so this option quickly loses in usefulness as the game tested becomes more complex.
 



 The third option is to start a server locally, with one or many players.
 [[2]](#cite_note-2)
 This starts an instance of a server on your computer and also starts a client connected to that server for each player. The server and all the clients are accessible through different windows, each with the full studio. This option provides a more complete and normal game environment than the other options, but it is more expensive in computer resources since many ROBLOX instances are open at the same time. Furthermore, some features like badges or data persistence only work online and can not be used locally at all.
 


### 

 Saving games
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-9 "Edit section: Saving games") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-9 "Edit section: Saving games") 

 ]



 The game currently opened can be saved either by using the standard toolbar or the
 `File` 
 menu. Games are saved with the '.rbxl' extension and use a binary format. They previously used a XML format with the same extension. The legacy XML format is still supported, and games can be saved in XML with the '.rbxlx' extension. They can be opened again by using the open button in the
 `File` 
 menu or the standard toolbar. Files saved on a user's computer or created in the studio can be uploaded to the website with the "Publish to ROBLOX..." option in the
 `File` 
 menu. Games opened directly from the website will prompt the user to save before closing.
 




 Physical objects
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-10 "Edit section: Physical objects") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-10 "Edit section: Physical objects") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 In virtual worlds on ROBLOX, there are different types of objects that appear physically.
 


### 

 Parts
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-11 "Edit section: Parts") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-11 "Edit section: Parts") 

 ]



[![](//upload.wikimedia.org/wikibooks/en/thumb/2/29/ROBLOX_Cylinder.png/140px-ROBLOX_Cylinder.png)](/wiki/File:ROBLOX_Cylinder.png)

 A plastic part that has the appearance of a cylinder but physically behaves like a sphere
 


 The most common physical object on ROBLOX is the part. Parts are also called bricks and blocks. They can have three shapes: the shape of a block, of a sphere, or of a cylinder. The shape of a part has an effect on how it behaves physically. Cylinders behave physically like spheres because simulating a cylinder is too expensive in computer resources and would slow down games that use cylinders extensively.
 


#### 

 Materials
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-12 "Edit section: Materials") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-12 "Edit section: Materials") 

 ]



[![](//upload.wikimedia.org/wikibooks/en/thumb/6/6b/ROBLOX_materials.png/220px-ROBLOX_materials.png)](/wiki/File:ROBLOX_materials.png)

 The materials offered by ROBLOX
 


 The appearance of parts can be customized with materials. The default material for parts is the plastic material, which makes the parts have a homogeneous color with a slight concrete appearance; the smooth plastic material can be used to have a perfectly homogeneous color. The plastic material is fine for some cases, but more customization can be needed to improve the look of buildings. Materials, when applied to a part, change the texture of that part. They also change that part's density, which has an effect when the part is put in water terrain: parts of some materials (like wood) will float in water while parts of other materials (like slate) will not.
 



 The fifth button of the customization toolbar can be used to change the material of a part. It allows you to pick the material you want from a list of available materials and then to click on parts to apply that material to them. There aren't many materials, but they are sufficient for most purposes. Custom textures, which are described some sections below, can be used when more customization is wanted, but are less common.
 


#### 

 Form factors
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-13 "Edit section: Form factors") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-13 "Edit section: Form factors") 

 ]



 All parts have a form factor, which defines what sizes the part can take. The default form factor is the brick form factor, which requires the height of the bricks to be a factor of 1.2. The symmetric form factor requires all the dimensions of the block to be factors of 1, while the plate form factor requires the height to be a factor of 0.4. The custom form factor allows a very low factor for all dimensions.
 


#### 

 Surface types
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-14 "Edit section: Surface types") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-14 "Edit section: Surface types") 

 ]



 Each surface of a part has a type. By default, the top surface has studs on it and the bottom surface has inlets on it. There are 11 surface types. Surfaces can form bonds with other surfaces, which allows parts to stick together and not fall where they normally would due to gravity. They also affect the appearance of the part if the part's material is plastic. Otherwise, the material texture is used instead of the surface texture.
 





 Surface types
 | 
 Image
  | 
 Surface type
  | 
 Description
  |
| --- | --- | --- |
| 
 | 
 Smooth
  | 
 This surface type renders as a completely smooth surface, with a solid color. Surfaces with this surface type do not form bonds with other surfaces.
  |
| 

 | 
 Glue
  | 
 Surfaces with this surface type form loose bonds with other surface.
  |
| 

 | 
 Weld
  | 
 Surfaces with this surface type form strong bonds with other surfaces.
  |
| 

 | 
 Studs
  | 
 Surfaces with this surface type form a weld-like bond with inlets.
  |
| 

 | 
 Inlet
  | 
 Surfaces with this surface type form a weld-like bond with studs.
  |
| 

 | 
 Universal
  | 
 Surfaces with this surface type form a weld-like bond with other universal surfaces, inlets and studs.
  |
| 

 | 
 Hinge
  | 
 Surface with this surface type form a bond with other surfaces. These bonds allow free movement.
  |
| 

 | 
 Motor
  | 
 Surfaces with this surface type form a bond with other surfaces. These bonds do not allow free movement, but instead force a movement on the other part. The movement is defined by the surface input.
  |
| 
 | 
 Unjoinable
  | 
 This surface type is identical to the smooth surface type with the exception that building tools made by ROBLOX and part of the studio will not create joints between surfaces with this surface type and other surfaces.
  |
| 
 | 
 SmoothNoOutline
  | 
 This surface type is identical to the smooth surface type with the exception that outlines will not be rendered around the surface.
  |



 The behavior between the surface types is described in more detail in this table:
 





 Behavior between surface types
 | 
 SurfaceType
  | 
 Weld
  | 
 Universal
  | 
 Studs
  | 
 Inlet
  | 
 Glue
  | 
 Smooth
  | 
 Unjoinable
  | 
 SmoothNoOutline
  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
| 
 Weld
  | 
 Weld
  | 
 Weld
  | 
 Weld
  | 
 Weld
  | 
 Weld
  | 
 Weld
  | 
 Weld
  | 
 Weld
  |
| 
 Universal
  | 
 Weld
  | 
 Snap
  | 
 Snap
  | 
 Snap
  | 
 Glue
  |  |  |  |
| 
 Studs
  | 
 Weld
  | 
 Snap
  |  | 
 Snap
  | 
 Glue
  |  |  |  |
| 
 Inlet
  | 
 Weld
  | 
 Snap
  | 
 Snap
  |  | 
 Glue
  |  |  |  |
| 
 Glue
  | 
 Weld
  | 
 Glue
  | 
 Glue
  | 
 Glue
  | 
 Glue
  | 
 Glue
  | 
 Glue
  | 
 Glue
  |
| 
 Smooth
  | 
 Weld
  |  |  |  | 
 Glue
  |  |  |  |
| 
 Unjoinable
  | 
 Weld
  |  |  |  | 
 Glue
  |  |  |  |
| 
 SmoothNoOutline
  | 
 Weld
  |  |  |  | 
 Glue
  |  |  |  |


#### 

 Decals and textures
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-15 "Edit section: Decals and textures") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-15 "Edit section: Decals and textures") 

 ]



[![A brick wall using textures](//upload.wikimedia.org/wikibooks/en/thumb/b/bf/ROBLOX_brick_wall.png/220px-ROBLOX_brick_wall.png)](/wiki/File:ROBLOX_brick_wall.png)

 A brick wall using textures
 


 Decals are objects which can be put on the surface of a part to display an image on that surface. They are useful for billboards, ensigns, flags and in-game screens. When a image should be displayed for the purpose of changing the appearance of the surface, a texture can be used instead.
 



 Textures are the same thing as decals, but the image is repeated instead of being scaled to fill the entire surface. This gives results that are far better than what can be obtained by using a decal, because the quality of user images on ROBLOX is restricted.
 



 If you want a sign that shows an advertisement, you should use a decal. If you want to put a brick texture on a wall, then you should a texture. Texture objects, like all other objects, including decals, can be found in the advanced objects panel.
 


#### 

 Meshes
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-16 "Edit section: Meshes") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-16 "Edit section: Meshes") 

 ]



 Games sometimes need to contain objects that are more complex than simple blocks, spheres and cylinders. Meshes can be used for this purpose. They are objects that can be put in parts and that, when put in parts, make these parts have a different shape that can be very complex. There are some predefined meshes, and many others that are uploaded on the website. All hats and gear in the catalog, for instance, use meshes for their appearance. Meshes by themselves have no color or texture, and only a shape, but they are generally given a texture. Meshes only have an effect on the appearance of the part they are used with, but the part's physical behavior is still defined by its shape and surface type. Because of this, meshes are best used for small objects, or objects that are out of the reach of the players.
 



 Meshes do not support outlines. They can be scaled and moved away from their physical part (using an offset). Scaling is necessary because their size is not adapted to the size of the physical part. Moving it away from the physical part can be useful to create hologram effects and other similar effects.
 


#### 

 Particles
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-17 "Edit section: Particles") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-17 "Edit section: Particles") 

 ]



 Parts can contain particles of different types. It is possible to create custom particles, but many predefined types are provided and offer some properties that can be customized.
 


##### 

 Sparkles
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-18 "Edit section: Sparkles") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-18 "Edit section: Sparkles") 

 ]



 Sparkle objects can be inserted in parts to make sparkle-like particles appear and move from the inside of the part to the outside of it, and then disappear at some distance. The color of these sparkles can be customized.
 


##### 

 Fire
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-19 "Edit section: Fire") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-19 "Edit section: Fire") 

 ]



 Fire objects can be used to make fire particles appear over a part. Fire does not necessarily need to be orange or red, it can be of any color. Its heat (the longevity of the particles) can be set, and so can the color of the particles when they are close to disappearing.
 


##### 

 Smoke
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-20 "Edit section: Smoke") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-20 "Edit section: Smoke") 

 ]



 Smoke objects can be used to make smoke appear over a part. Smoke will generally go up, but it can also go down: it will go in the direction of the top surface of the part it is located in, so by changing the rotation of the part, it is very possible to make smoke go to the left, or in any direction. The color of smoke can be changed, and so can the velocity at which the smoke rises. The size can also be changed, as well as the opacity.
 


### 

 Trusses
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-21 "Edit section: Trusses") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-21 "Edit section: Trusses") 

 ]



[![](//upload.wikimedia.org/wikipedia/commons/thumb/3/3f/Below_Auckland_Harbour_Bridge_Hossen27.jpg/220px-Below_Auckland_Harbour_Bridge_Hossen27.jpg)](/wiki/File:Below_Auckland_Harbour_Bridge_Hossen27.jpg)

 Support structure under the
 [Auckland Harbour Bridge](https://en.wikipedia.org/wiki/Auckland_Harbour_Bridge "wikipedia:Auckland Harbour Bridge") 
 , a real example of the usage of trusses
 


 Trusses are mostly identical to parts, but have a different appearance, can be climbed by characters, and have size restrictions. They must always have a width and depth of two studs, while their height is unrestricted. They support materials, surfaces, and everything parts support with the exception of decals and textures. They are available in three different styles: without supports, with alternating supports and with bridge-like supports.
 



 When a character is standing next to a truss and starts walking in its direction, he will start climbing the truss in the same way he would climb a ladder (when many parts are stacked with a small gap between each of them, characters will go up when walking in the direction of the stack of parts). This also works when many trusses are stacked in their horizontal position. Sometimes, it will be desirable to put many trusses together to make climbing them easier. However, in many cases, it may be desirable to use a ladder instead of a truss, as trusses are primarily real building materials, rather than tools used to climb structures, which is the purpose of ladders.
 


### 

 Spawn locations
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-22 "Edit section: Spawn locations") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-22 "Edit section: Spawn locations") 

 ]



 Spawn locations are identical to parts and behave in the same way, with the exception that characters can spawn on top of them. Spawn locations can be configured so that only players in a team will have their character spawn on them. They can also be configured to make a force field appear around the character of users who spawn on them for a limited amount of time to prevent characters who have just spawned from dying immediately.
 


### 

 Terrain
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-23 "Edit section: Terrain") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-23 "Edit section: Terrain") 

 ]




[![A screenshot of the terrain toolbar](//upload.wikimedia.org/wikibooks/en/b/b9/Terrain_toolbar.png)](/wiki/File:Terrain_toolbar.png)





[![A screenshot of some randomly generated terrain](//upload.wikimedia.org/wikibooks/en/thumb/c/c0/ROBLOX_terrain.png/220px-ROBLOX_terrain.png)](/wiki/File:ROBLOX_terrain.png)

 A screenshot of some randomly generated terrain
 


 The number of parts that can be used in a game is limited by the computer resources available. Terrain can be used to create beautiful and complex landscapes that it would not be possible to create using parts because of the limit of the computer resources. Terrain is implemented as voxel terrain.
 [Voxels](https://en.wikipedia.org/wiki/voxels "wikipedia:voxels") 
 are atomic volumetric units that can be thought of as the tri-dimensional equivalent of pixels, or simply as cubes. These cubes can be put together and given a different appearance.
 



 Terrain cubes currently have a material, a shape and an orientation. Unlike parts, they are not objects, are not visible in the explorer and can not be grouped into models. However, you can have millions of them on an average computer, while parts on average computers are limited to around one hundred thousands, at which point the game is very slow.
 



 Terrain is usually created using the terrain toolbar, which is shown at the top of this section. The first tool in that toolbar is the landscape generator, which is used to generate landscapes. The two tools that follow are used to create and destroy individual terrain blocks. The next two are used to change the elevation of the terrain by dragging up and down at a certain location. The following tool is used to create craters, and the tool with an intersection of roads as its icon is used to create roads. The one that follows is used to paint large areas of terrain quickly, while the
 [penultimate](https://en.wiktionary.org/wiki/penultimate "wikt:penultimate") 
 tool can be used to insert terrain blocks (and also other objects). Finally, the last tool is used to fill an area of terrain with voxels of a certain material and is generally used to create lakes or rivers. Each of these tools has its own integrated help which is available by selecting the tool and clicking on the button with an interrogation mark on it, so they will not be described here.
 


### 

 Seats
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-24 "Edit section: Seats") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-24 "Edit section: Seats") 

 ]



 Seats work identically to parts, but players can sit on them. There are many types of seats: simple seats, vehicle seats and skateboard platforms. Simple seats are simply parts that users can sit on. Scripts can be used to make these seats have various functionality. Vehicle seats are used to create vehicles that work with a motor and wheels and that can be controlled by the user without any script being needed. Skateboard platforms, finally, are used to control vehicles that are generally smaller (hoverboards, skateboards, surfboards and generally anything that describes a vehicle and ends with "board") and easier to control. Skateboard platforms need scripts to work, but handle the animations that happen in different events, such as when the character on the skateboard platform turns, jumps, accelerates and so on.
 




 Building
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-25 "Edit section: Building") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-25 "Edit section: Building") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Building, on ROBLOX, is the art of putting physical objects together, manipulating them and customizing them. The studio offers many tools to facilitate this process. By being able to change the size, position and appearance of parts and other physical objects and putting them together, it is possible to build almost anything. From small buildings to very detailed rooms and to complex mechanisms, it is possible to create a lot of things.
 


### 

 Models
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-26 "Edit section: Models") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-26 "Edit section: Models") 

 ]



[![A screenshot of a tower made out of parts](//upload.wikimedia.org/wikibooks/en/thumb/a/a2/ROBLOX_tower.png/220px-ROBLOX_tower.png)](/wiki/File:ROBLOX_tower.png)

 A screenshot of a tower
 


 Models are used to group together parts, scripts and other models. They are indispensable for organization. A big game without any organization can quickly become very hard to maintain, so you should always use models to organize objects in your game. When many objects together form something bigger, they should be grouped together (a bed, a house, a car, etc.). Parts can be grouped and ungrouped by using the explorer's context menu or the group and ungroup buttons in the Format menu (as well as the corresponding keyboard shorcuts). You can also use the corresponding button in the Format menu to select all the children of a model, which is very useful in certain cases.
 



 For example, suppose you were building a tower, like the one on the right. Suppose it had a door and stairs to get to the top. You could group the parts that form the stairs together and do the same for the parts that compose the door. You could group the parts that compose the ramparts together and you could group all of the rest into a model called 'Walls'. Then, you could group all of these models together and call that model 'Tower'. The place would then surely be better organized than it would be if you had just kept all these parts scattered around without any organization!
 


### 

 Manipulation
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-27 "Edit section: Manipulation") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-27 "Edit section: Manipulation") 

 ]




[![A screenshot of the part manipulation toolbar](//upload.wikimedia.org/wikibooks/en/e/e7/Manipulation_toolbar.png)](/wiki/File:Manipulation_toolbar.png)





 Manipulating parts consists of moving, resizing and rotating them. In the studio, manipulation of parts is usually done by using the toolbar shown above.
 


* The first tool can be used to select parts by clicking on them and to move them, by dragging the mouse once they are selected. Parts can also be selected and dragged by using any of the other tools.
* The second tool can be used to move parts. It works like the first, but also shows dragging handles, which allow you to move a part on a particular axis.
* The third tool can be used to change the rotation of parts. This one is a bit harder to use, but it should still be easy: just use the handles to change the rotation of the part.
* The fourth tool can be used to change the size of parts by using the handles and dragging them, the same way as you would move the part with the second tool.
* The three buttons following the separator are used to change the grid used and the increment when moving, resizing or rotating the part. The best way to learn to use them is to experiment with them.
* Finally, the last button allows you to choose whether parts should be welded together when moved on other parts. If it is enabled, then parts will stick together. Otherwise, they will not stick together and they may fall when the game runs.



 ROBLOX uses a unit called 'studs' for positioning and calculating distances. A stud is the equivalent of one of the squares with the R logo in them on a part. A meter is equal to 20 studs.
 


### 

 Customization
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-28 "Edit section: Customization") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-28 "Edit section: Customization") 

 ]




[![A screenshot of the part customization toolbar](//upload.wikimedia.org/wikibooks/en/a/ae/Customization_toolbar.png)](/wiki/File:Customization_toolbar.png)





 Customizing parts consists of changing their appearance and behavior. Like manipulation, it is, in the studio, generally done by using a toolbar, the toolbar shown above. Some customization can only be done by changing properties manually from the property panel.
 



 The first button can be used to anchor or unanchor a part. Anchoring a part means setting its position so it will not change due to gravity, collisions or other physical events. Anchored parts can not move in a running game unless their position is modified by game scripts, but they will collide with other parts, meaning characters can walk on them, for example.
 



 The second button can be used to lock or unlock a part. Locking a part makes it unable to be manipulated by building tools, both in the studio and in building games. This can be useful when you don't want players to be able to manipulate certain parts in a building game and it can also be useful to prevent yourself from moving a part by mistake.
 



 The third and fourth buttons are used to change the color of parts. The first allows you to choose the color in a color palette, while the second allows you to pick the color of an existing part by clicking on it.
 



 Finally, the fifth button can be used to change the material of a part, by picking the material you want from a list of available materials.
 



 If you take a look back at the tower presented in the section about models, you notice it uses a lot of parts in its walls. While this isn't exactly bad, in order to make the game faster (by reducing the number of parts), it is usually better to use a texture of repeated bricks.
 


### 

 Other tools
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-29 "Edit section: Other tools") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-29 "Edit section: Other tools") 

 ]



 In addition to all the toolbars, the studio also offers additional tools for building. In addition to some options available in the menu, there is an axis widget that can be used to quickly find the position of the X or of the Z axis, and there is a 3D grid that can be used to quickly find the height of the position zero and to build parts on it. These two tools are rarely used, but they can be useful to identify which axis is the X axis and which is the Z axis. All part customization and manipulation can also be done directly by editing the properties of the parts with the property panel after having selected them.
 




 Help sources
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-30 "Edit section: Help sources") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-30 "Edit section: Help sources") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 ROBLOX has many help sources where users can get help on various subjects. One of these is the forums, where users can ask questions. There are two help forums for game development:
 


* The
 [Development Support](https://devforum.roblox.com/c/development-support) 
 forum, for scripting help
* The
 [Building Helpers](https://www.roblox.com/Forum/ShowForum.aspx?ForumID=19) 
 forum, for building help



 Before posting in the forums, users can check many other online help sources. The first is Builderman's help, which can be found in the website's menu (the Help button). It contains information about the website, the rules and various other things.
 



 The main information source, however, is the ROBLOX wiki. It can be found through some links hidden on the website or by pressing
 `F1` 
 in-game. The wiki, written by editors selected by ROBLOX staff, contains documentation about building and scripting. It is a very useful source of information and documentation for ROBLOX.
 




 Quiz
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Introduction&veaction=edit&section=T-31 "Edit section: Quiz") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Introduction&action=edit&section=T-31 "Edit section: Quiz") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 There are some questions you can answer to verify that you have understood the material in this chapter. Note that finding the answer to some of those questions could require having knowledge that is not presented in this chapter. This is normal: the quizzes are part of the learning experience, and they can introduce information that is not available elsewhere in the book.
 




























 1
 

 What is ROBLOX?
 














|  |  |
| --- | --- |
|  | 
 A website where the content is produced by users (a user-generated website)
  |
|  | 
 A website that gives information on a particular topic (an informational website)
  |
|  | 
 A platform for developing games (a game development platform)
  |
|  | 
 A website for hosting games (a game host)
  |







 2
 

 What is the ROBLOX Studio?
 














|  |  |
| --- | --- |
|  | 
 An
 [integrated development environment](https://en.wikipedia.org/wiki/integrated_development_environment "wikipedia:integrated development environment")  |
|  | 
 A program for creating and editing videos
  |
|  | 
 A program for creating and editing games
  |
|  | 
 A website that gives information about ROBLOX.
  |







 3
 

 What are the three properties all terrain cells have?
 














|  |  |
| --- | --- |
|  | 
 A shape
  |
|  | 
 An orientation
  |
|  | 
 A color
  |
|  | 
 A material
  |
|  | 
 A flow
  |







 4
 

 Associate each surface type to its behavior.
 














| 
 Studs
  | 
 Universal
  | 
 Inlets
  |
| --- | --- | --- |
|  |  |  | 
 Surfaces with this surface type will form bonds with surfaces of all these three types.
  |
|  |  |  | 
 Surfaces with this surface type will form bonds with inlets and universal surfaces.
  |
|  |  |  | 
 Surfaces with this surface type will form bonds with studs and universal surfaces.
  |







 5
 

 How many studs does it take to get a meter?
 






|  |
| --- |
| 






 |




















  






 Game design
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Single_page_version&veaction=edit&section=T-2 "Edit section: Game design") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Single_page_version&action=edit&section=T-2 "Edit section: Game design") 

 ]
==================================================================================================================================================================================================================================================================================================



 Designing your game should be the first step in making your game. Now, oftentimes you will end up designing your game as you go. You'll be constantly reinventing, reevaluating, and remaking your game. If you start using the studio with a game design, make it, and never change a single plan, there is probably something fundamentally wrong with your game. In this chapter, we will go over designing your game, and more specifically, utilizing ROBLOX's cloud-hosted game platform to quickly receive feedback to revise your game. We'll go over what to do, and not to do, in terms of graphics and looks, as well as functionality.
 




 Finding an idea
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Game_design&veaction=edit&section=T-1 "Edit section: Finding an idea") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Game_design&action=edit&section=T-1 "Edit section: Finding an idea") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Finding a game idea can be hard. With many of the ideas you may get, there will be many things wrong with the design. The concept may be unachievable, or just have technical difficulties or restrictions that prevent its accomplishment. In this case, you'll want to refine the design. Remembering finding a game idea isn't the hard part, the hard part is making it, and having the willpower to do so. Here are some suggestions that should help you find a game idea:
 


* What's your favorite game? What irks you about it? What can you improve? Do it!
* Pick a genre. Think of what sort of game you would want to play in it. Do it!
* Ask on ROBLOX's Game Design forum, or use another such resource—there's always someone there who has a good idea.
* Piggyback on someone else's project (there are many groups on ROBLOX that exist for this purpose).
* Research it, on the web, for example! Get inspired by what you can find elsewhere, what you've experienced, and what you enjoy.
* Ask yourself "Do you really want to make this game?" and "Would I play this game?"



 Once you have an idea in mind, you want to analyze it for several things. You want to make sure it's feasible. Think of each component of the game and ask yourself how you can do it and whether you have seen it before: if you haven't seen it before, in particular on ROBLOX, and you can't think of how to do it, ask a more experienced game developer and designer who may have a clear idea on how to do it. People who are more experienced than you will usually have a more clear view of the situation than you, and can share that view with you, which can help you greatly. With all of this in mind, you'll want to start the most important part.
 




 Recording your idea
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Game_design&veaction=edit&section=T-2 "Edit section: Recording your idea") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Game_design&action=edit&section=T-2 "Edit section: Recording your idea") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Yes, you need to record your idea. You need to write it down. Especially if it's a group project, or a project others will be helping you on. You must do this because recording your idea provides several things for you:
 


* **Recording your idea will help prevent loss of motivation.** 
 Most people tend to lose motivation in their projects due to not knowing what to do next. By having a specific guide there, in front of you, scheduled out and planned, when you ask yourself "What do I need to do to make this game working?" you will easily have a solution right there in front of you. Oftentimes uploading this document to the cloud can prove most beneficial when working with groups, as you can constantly mark off, and debate over topics in the project. Planning and coordination in a group project are one of the keys to success, more so in the virtual world of ROBLOX where motivation is purely from want—chances are that no one is paying you to make your own game.
* **Recording your idea will give you something to show off.** 
 When recruiting people to a group project, or even when fans gather and ask you about your game, you want
 *something* 
 to show off. You need to inspire, make them stop, and differentiate between your project and the dozens of other opportunities that exist on ROBLOX. The best developers are picking the best games, and in order to make your game the best, it must be
 *professional* 
 and well planned.
* **Recording your idea will allow you to plan.** 
 As mentioned in the previous paragraph, planning is required. When you plan out your game, you discover potential problems, and can receive feedback before it's made. As a single person you will not be able to catch all the mistakes in your own mind.




 Leveraging support
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Game_design&veaction=edit&section=T-3 "Edit section: Leveraging support") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Game_design&action=edit&section=T-3 "Edit section: Leveraging support") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 It is important to remember that, as in the real world, making a successful game that is played not only requires a good idea, a finished and polished core, but also marketing. This is also the case for ROBLOX games, but marketing is much less difficult, because the game is hosted by ROBLOX and is mentioned in various places on the website. Regardless, if you want to get a big community of players to play your game, you will need to spend some time marketing it.
 




 Time management
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Game_design&veaction=edit&section=T-4 "Edit section: Time management") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Game_design&action=edit&section=T-4 "Edit section: Time management") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Managing your time is essential when developing a game. It is sometimes a good idea when developing a game for ROBLOX to first complete the plan and then to skip the first fourth of the plan to directly get something working, even if it is something that is not as good as what the plan requires. Having a working demonstration makes it possible to get feedback and to have an area where it is possible to try things: with a working demonstration, it is possible to try things in the game directly before the basic infrastructure of the project is completed.
 




 Game constituents
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Game_design&veaction=edit&section=T-5 "Edit section: Game constituents") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Game_design&action=edit&section=T-5 "Edit section: Game constituents") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Games on ROBLOX consist of three elements:
 **the game engine** 
 , which is part of ROBLOX and handles the physical world, the rendering (displaying of your game), the networking (the communication between the server and clients) and other things,
 **the game content** 
 , which is composed of maps, buildings, images, assets and other items that are created by the developer, and
 **the game code** 
 , which is what makes the game interactive and what forms the player experience. The game content was already covered in part in the previous chapter. The game engine will be the subject of the next chapter, and the game code will be the subject of the other chapters, along with the game content.
 



  






 Game engine
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Single_page_version&veaction=edit&section=T-3 "Edit section: Game engine") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Single_page_version&action=edit&section=T-3 "Edit section: Game engine") 

 ]
==================================================================================================================================================================================================================================================================================================



 The ROBLOX game engine can be divided into different engines. Each of these engines is charged with accomplishing the tasks related to a particular aspect of the game. These include the physics engine, which handles the natural movement of physical objects. For example, gravity, part collisions and explosions are handled by the physics engine. The rendering engine is tasked with displaying physical objects on the monitors of the players. The network engine has the responsibility to make sure the players playing the game are all up-to-date on what is happening in the game. The Lua engine has to handle events and execute the game code so that the game may be interactive.
 






 Client–server model
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Game_engine&veaction=edit&section=T-1 "Edit section: Client–server model") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Game_engine&action=edit&section=T-1 "Edit section: Client–server model") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



[![](//upload.wikimedia.org/wikipedia/commons/thumb/c/c9/Client-server-model.svg/220px-Client-server-model.svg.png)](/wiki/File:Client-server-model.svg)

 A
 [computer network diagram](https://en.wikipedia.org/wiki/computer_network_diagram "wikipedia:computer network diagram") 
 of clients communicating with a server via the Internet. Both the clients and the server are
 [nodes](https://en.wikipedia.org/wiki/Node_(networking) "wikipedia:Node (networking)") 
 (communication points) on the
 [network](https://en.wikipedia.org/wiki/Computer_network "wikipedia:Computer network") 
 .
 


 In order to make it possible for many players to be playing a game together at the same time, ROBLOX hosts game servers, which are instances of the ROBLOX software running on computers owned by ROBLOX. When a player enters a game, his client, the ROBLOX software running on his computer, is either put into communication with a game server already running the game he wants to enter, or is put into communication with a new game server that will be created if there is no game server or if all the available game servers are full (there is a maximum number of players that can join each game server). The client of the player downloads the entire place from the game server. As changes are done in the game, both by the physics engine and by game code, these changes are replicated to all the clients connected to the game. When these changes happen on a player's client (this can happen when the player moves his character and when similar events happen), the changes are replicated to the server and then to all the others clients. This is why all players will see the characters of other players move and why changes done by scripts will be visible by each player. Each instance of ROBLOX software running on a computer is called a peer: all game servers are peers and all clients are peers.
 



 A game server and the clients connected to it together form a network. The networks of ROBLOX game servers are said to operate on
 [a client–server model](https://en.wikipedia.org/wiki/Client%E2%80%93server_model "wikipedia:Client–server model") 
 because of the way the network nodes (the peers) are arranged: the clients communicate to the server and the server communicates to the clients but the clients do not communicate directly with one another. The topology of a network is the way the nodes are arranged in that network.
 



 A distinction is made between game servers and physical servers. Physical servers are physical computers that usually host many game servers. Game servers are the instances of the ROBLOX software running on physical servers that communicate with clients to establish the connection and transmit data. A distinction is also made between something that is local, which is something that is related to a particular client or to all the clients, and something that is related to the server.
 




 Quiz
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Game_engine&veaction=edit&section=T-2 "Edit section: Quiz") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Game_engine&action=edit&section=T-2 "Edit section: Quiz") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 There are some questions you can answer to verify that you have understood the material in this chapter. Note that finding the answer to some of those questions could require having knowledge that is not presented in this chapter. This is normal: the quizzes are part of the learning experience, and they can introduce information that is not available elsewhere in the book.
 




























 Associate each game engine to its role
 














| 
 Network engine
  | 
 Physics engine
  | 
 Rendering engine
  | 
 Lua engine
  |
| --- | --- | --- | --- |
|  |  |  |  | 
 Displays the physical objects on the monitor of the local player.
  |
|  |  |  |  | 
 Keeps the clients updated on the state of the game by replicating changes from the server to them.
  |
|  |  |  |  | 
 Handles the natural movement of parts due to gravity, part collisions and other events.
  |
|  |  |  |  | 
 Fires events when necessary and handles Lua threads.
  |




















  






 Game code
 


 [
 
[edit](/w/index.php?title=Roblox_Game_Development/Single_page_version&veaction=edit&section=T-4 "Edit section: Game code") 

 |
 
[edit source](/w/index.php?title=Roblox_Game_Development/Single_page_version&action=edit&section=T-4 "Edit section: Game code") 

 ]
============================================================================================================================================================================================================================================================================================



 Scripts, which can manipulate game objects, are contained in objects that are part of the game hierarchy. There are four kinds of scripts: server scripts, local scripts, core scripts and starter scripts. They respectively correspond to the classes of the names "Script", "LocalScript", "CoreScript" and "StarterScript". Server scripts are scripts that run on the server while local scripts run on a player's client (the client in question depends on the local script's location in the game hierarchy). Core scripts and starter scripts cannot be used by game developers and are internal to ROBLOX.
 



 You can create a script by using the basic objects panel in the studio. Find the class name of the script you want and double-click on it to insert the script. Scripts will not run everywhere; while there are many places where they can run, most of the time, you will want to put them in the workspace service. Once the script is inserted, it can be edited by double-clicking on it in the explorer panel. This will open a new tab with a script editor, where code can be put. It can then be executed by closing the script editor and running the game with the green run arrow located in the testing toolbar.
 



  





  




1. [↑](#cite_ref-1) 


 The output can be accessed while playing an online game through the developer console, which can be opened with the
 `F9` 
 keyboard key, or by clicking the
 `Log` 
 button in the help section of the game menu. All players can access the developer console, but only the game's owner can see the output on the server (other players can only see the output on their own client).
2. [↑](#cite_ref-2) 


 It is also possible to start a server without any player.







![](//en.wikibooks.org/wiki/Special:CentralAutoLogin/start?type=1x1)


 Retrieved from "
 <https://en.wikibooks.org/w/index.php?title=Roblox_Game_Development/Printable_version&oldid=4008975>
 "
 



[Categories](/wiki/Special:Categories "Special:Categories") 
 :
 * [Print Versions](/wiki/Category:Print_Versions "Category:Print Versions")
* [Book:Roblox Game Development](/wiki/Category:Book:Roblox_Game_Development "Category:Book:Roblox Game Development")








 Navigation menu
-----------------




### 

 Personal tools



* Not logged in
* [Discussion for this IP address](/wiki/Special:MyTalk "Discussion about edits from this IP address [n]")
* [Contributions](/wiki/Special:MyContributions "A list of edits made from this IP address [y]")
* [Create account](/w/index.php?title=Special:CreateAccount&returnto=Roblox+Game+Development%2FPrintable+version "You are encouraged to create an account and log in; however, it is not mandatory")
* [Log in](/w/index.php?title=Special:UserLogin&returnto=Roblox+Game+Development%2FPrintable+version "You are encouraged to log in; however, it is not mandatory [o]")






### 

 Namespaces



* [Book](/wiki/Roblox_Game_Development/Printable_version "View the content page [c]")
* [Discussion](/w/index.php?title=Talk:Roblox_Game_Development/Printable_version&action=edit&redlink=1 "Discussion about the content page (does not exist) [t]")








 English
 









### 

 Views



* [Read](/wiki/Roblox_Game_Development/Printable_version)
* [Edit](/w/index.php?title=Roblox_Game_Development/Printable_version&veaction=edit "Edit this page [v]")
* [Edit source](/w/index.php?title=Roblox_Game_Development/Printable_version&action=edit "Edit this page [e]")
* [View history](/w/index.php?title=Roblox_Game_Development/Printable_version&action=history "Past revisions of this page [h]")








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



* [What links here](/wiki/Special:WhatLinksHere/Roblox_Game_Development/Printable_version "A list of all wiki pages that link here [j]")
* [Related changes](/wiki/Special:RecentChangesLinked/Roblox_Game_Development/Printable_version "Recent changes in pages linked from this page [k]")
* [Upload file](//commons.wikimedia.org/wiki/Special:UploadWizard?uselang=en "Upload files [u]")
* [Special pages](/wiki/Special:SpecialPages "A list of all special pages [q]")
* [Permanent link](/w/index.php?title=Roblox_Game_Development/Printable_version&oldid=4008975 "Permanent link to this revision of this page")
* [Page information](/w/index.php?title=Roblox_Game_Development/Printable_version&action=info "More information about this page")
* [Cite this page](/w/index.php?title=Special:CiteThisPage&page=Roblox_Game_Development%2FPrintable_version&id=4008975&wpFormIdentifier=titleform "Information on how to cite this page")





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



* [Create a collection](/w/index.php?title=Special:Book&bookcmd=book_creator&referer=Roblox+Game+Development%2FPrintable+version)
* [Download as PDF](/w/index.php?title=Special:DownloadAsPdf&page=Roblox_Game_Development%2FPrintable_version&action=show-download-screen)
* [Printable version](/w/index.php?title=Roblox_Game_Development/Printable_version&printable=yes "Printable version of this page [p]")





### 

 In other languages









[Add links](https://www.wikidata.org/wiki/Special:NewItem?site=enwikibooks&page=Roblox+Game+Development%2FPrintable+version "Add interlanguage links") 







* This page was last edited on 28 November 2021, at 06:30.
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
* [Mobile view](//en.m.wikibooks.org/w/index.php?title=Roblox_Game_Development/Printable_version&mobileaction=toggle_view_mobile)
* [Developers](https://developer.wikimedia.org)
* [Statistics](https://stats.wikimedia.org/#/en.wikibooks.org)
* [Cookie statement](https://foundation.wikimedia.org/wiki/Special:MyLanguage/Policy:Cookie_statement)


* [![Wikimedia Foundation](/static/images/footer/wikimedia-button.png)](https://wikimediafoundation.org/)
* [![Powered by MediaWiki](/static/images/footer/poweredby_mediawiki_88x31.png)](https://www.mediawiki.org/)




