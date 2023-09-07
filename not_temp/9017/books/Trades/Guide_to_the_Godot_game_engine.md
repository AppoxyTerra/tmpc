




 Guide to the Godot game engine/Print version - Wikibooks, open books for an open world
 








































[![50% developed](//upload.wikimedia.org/wikipedia/commons/thumb/6/62/50_percents.svg/24px-50_percents.svg.png)](/wiki/Help:Development_stages "50% developed")





 Guide to the Godot game engine/Print version
==============================================




 From Wikibooks, open books for an open world
 



 <
 [Guide to the Godot game engine](/wiki/Guide_to_the_Godot_game_engine "Guide to the Godot game engine") 







[Jump to navigation](#mw-head) 
[Jump to search](#searchInput) 




|  |  |
| --- | --- |
| 



 | **This is the
 [print version](/wiki/Help:Print_versions "Help:Print versions") 
 of
 [Guide to the Godot game engine](/wiki/Guide_to_the_Godot_game_engine "Guide to the Godot game engine")**

 You won't see this message or any elements not part of the book's content when you print or
 [preview](https://en.wikibooks.org/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&printable=yes) 
 this page.
  |




  





 Guide to the Godot game engine
 



 The current, editable version of this book is available in Wikibooks, the open-content textbooks collection, at
   


<https://en.wikibooks.org/wiki/Guide_to_the_Godot_game_engine>





 Permission is granted to copy, distribute, and/or modify this document under the terms of the
 [Creative Commons Attribution-ShareAlike 3.0 License](/wiki/Wikibooks:Creative_Commons_Attribution-ShareAlike_3.0_Unported_License "Wikibooks:Creative Commons Attribution-ShareAlike 3.0 Unported License") 
 .
 


  





  





[![](//upload.wikimedia.org/wikipedia/commons/thumb/5/5a/Godot_logo.svg/480px-Godot_logo.svg.png)](/wiki/File:Godot_logo.svg)




 This book will teach you about the free and open source Godot engine. Godot, like Unreal, Unity and other common game engines, has an active community. However, Godot is free, less demanding on operating systems, so you can use it on older hardware, and you can "export" your game to various systems, including mobile, in a single mouse click. It may be free, but it's not lacking in any way.
 



 Godot was named after the play,
 *Waiting for Godot* 
 , as it represents a never-ending wish to add more features, which would make it closer to a exhaustive product.
 


* [![A screenshot of Godot's user interface from version 3.1.](//upload.wikimedia.org/wikipedia/commons/thumb/e/e4/Godot_3.1_screenshot.png/120px-Godot_3.1_screenshot.png)](/wiki/File:Godot_3.1_screenshot.png "A screenshot of Godot's user interface from version 3.1.")




 A screenshot of Godot's user interface from version 3.1.
* [![A screenshot of a 2D platformer in the editor.](//upload.wikimedia.org/wikipedia/commons/thumb/b/b5/UI_of_Godot_Game_Engine.jpg/120px-UI_of_Godot_Game_Engine.jpg)](/wiki/File:UI_of_Godot_Game_Engine.jpg "A screenshot of a 2D platformer in the editor.")




 A screenshot of a 2D platformer in the editor.
* [![A screenshot of a 3D project.](//upload.wikimedia.org/wikipedia/commons/thumb/e/e3/Godot3.4.png/120px-Godot3.4.png)](/wiki/File:Godot3.4.png "A screenshot of a 3D project.")




 A screenshot of a 3D project.
* [![A test 4.0 mini-project](//upload.wikimedia.org/wikipedia/commons/thumb/c/c8/Godot_dev_4.0.png/120px-Godot_dev_4.0.png)](/wiki/File:Godot_dev_4.0.png "A test 4.0 mini-project")




 A test 4.0 mini-project
* [![The GDScript workspace in an example game.](//upload.wikimedia.org/wikipedia/commons/thumb/7/7a/Scripting_Workspace_in_Godot_Game_Engine.jpg/120px-Scripting_Workspace_in_Godot_Game_Engine.jpg)](/wiki/File:Scripting_Workspace_in_Godot_Game_Engine.jpg "The GDScript workspace in an example game.")




 The GDScript workspace in an example game.



  





  






 Introduction
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine&veaction=edit&section=T-1 "Edit section: Introduction") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine&action=edit&section=T-1 "Edit section: Introduction") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


### 



 What even is Godot?
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine&veaction=edit&section=T-2 "Edit section: What even is Godot?") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine&action=edit&section=T-2 "Edit section: What even is Godot?") 

 ]



 Godot is, like explained above, an open-source game engine. The advantage of being open-source is
 *Anybody can edit its source code!* 
 If it doesn't do quite what you need it to do, just crack it open and see what new tools you can make. If it's good enough, you can even submit the code to be part of the next official update! Another advantage is what you make (be it an app or a game or a plugin) is
 *completely yours* 
 ! No strings attached, no royalties, no limitation of license... Exactly how game development should be!
 



 However, console-specific code cannot be compiled with open-source code. You need to pay somebody else who can compile it for you, and this can be costly. Then-again, most engines have the same issue. And several games made with this engine have been released onto a console.
 



 In addition, Godot's API is not like most game engines, where you can find things like "entities" and "props". Everything is done with
 *nodes* 
 , Godot's building blocks, which can be put together in many ways to get your entity or prop. Each node may also have a script. While highly flexible, it has some performance cost.
 



[![Godot's "Create New Node" popup with the "KinematicBody2D" node highlighted.](//upload.wikimedia.org/wikipedia/commons/thumb/e/e8/Godot_Add_Node_Popup.png/220px-Godot_Add_Node_Popup.png)](/wiki/File:Godot_Add_Node_Popup.png)

 Godot's "Create New Node" popup showing a part of the node family.
 


 Godot has many nodes, but this book is not the place to list each and every one. That's what Godot's
 
[official class reference](https://docs.godotengine.org/en/stable/classes/index.html) 

 is for. This book will focus on what Godot is, help you achieve your goals and provide helpful links for those who want more info can go to.
 


### 



 What inspired me to start this book?
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine&veaction=edit&section=T-3 "Edit section: What inspired me to start this book?") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine&action=edit&section=T-3 "Edit section: What inspired me to start this book?") 

 ]



 I was shocked that Wikibooks had no Godot guides. It had guides for Ada, LolGraphics, C++, C#, HTML, JavaScript and more, but not one on either Godot or a game engine (not that I could find anyway).
 



 Godot guides out there had very little I didn't know, and some were books that cost...
 *money* 
 . Well, a wiki's belief is that all information should be free.
 



  






---




**Getting started** 


[Installation](/wiki/Guide_to_the_Godot_game_engine/Installation "Guide to the Godot game engine/Installation") 


[What is a node?](/wiki/Guide_to_the_Godot_game_engine/What_is_a_node "Guide to the Godot game engine/What is a node") 


[Programming](/wiki/Guide_to_the_Godot_game_engine/Programming "Guide to the Godot game engine/Programming") 


[Resources and importing](/wiki/Guide_to_the_Godot_game_engine/Resources_and_importing "Guide to the Godot game engine/Resources and importing") 


[Signals and methods](/wiki/Guide_to_the_Godot_game_engine/Signals_and_methods "Guide to the Godot game engine/Signals and methods") 


[Your first game](/wiki/Guide_to_the_Godot_game_engine/Your_first_game "Guide to the Godot game engine/Your first game") 






**Making it work** 


[Debugging](/wiki/Guide_to_the_Godot_game_engine/Debugging "Guide to the Godot game engine/Debugging") 


[Input](/wiki/Guide_to_the_Godot_game_engine/Input "Guide to the Godot game engine/Input") 


[Physics](/wiki/Guide_to_the_Godot_game_engine/Physics "Guide to the Godot game engine/Physics") 


[Saving and loading](/wiki/Guide_to_the_Godot_game_engine/Saving_and_loading "Guide to the Godot game engine/Saving and loading") 


[Multiplayer](/w/index.php?title=Guide_to_the_Godot_game_engine/Multiplayer&action=edit&redlink=1 "Guide to the Godot game engine/Multiplayer (does not exist)") 






**Making it look good** 


[UI skinning](/wiki/Guide_to_the_Godot_game_engine/UI_skinning "Guide to the Godot game engine/UI skinning") 


[Animation](/wiki/Guide_to_the_Godot_game_engine/Animation "Guide to the Godot game engine/Animation") 






**Advanced help** 


[Servers (singletons)](/wiki/Guide_to_the_Godot_game_engine/Servers_(singletons) "Guide to the Godot game engine/Servers (singletons)") 


[Platform specific](/wiki/Guide_to_the_Godot_game_engine/Platform_specific "Guide to the Godot game engine/Platform specific") 


[Optimisation](/wiki/Guide_to_the_Godot_game_engine/Optimisation "Guide to the Godot game engine/Optimisation") 


[Encryption](/w/index.php?title=Guide_to_the_Godot_game_engine/Encryption&action=edit&redlink=1 "Guide to the Godot game engine/Encryption (does not exist)") 


[Exporting](/wiki/Guide_to_the_Godot_game_engine/Exporting "Guide to the Godot game engine/Exporting") 


[Plugins](/wiki/Guide_to_the_Godot_game_engine/Plugins "Guide to the Godot game engine/Plugins") 






**Miscellaneous** 


[Helpful links](/wiki/Guide_to_the_Godot_game_engine/Helpful_links "Guide to the Godot game engine/Helpful links") 


[Authors and contributors](/wiki/Guide_to_the_Godot_game_engine/Contributors "Guide to the Godot game engine/Contributors") 





  





  








 What is a node?
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=1 "Edit section: What is a node?") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=1 "Edit section: What is a node?") 

 ]
==============================================================================================================================================================================================================================================================================================================



 Nodes are the building blocks of Godot. They can be combined into trillions of different combinations. There are many different types of nodes, like
 
[Camera2D](https://docs.godotengine.org/en/stable/classes/class_camera2d.html) 

 and
 
[Sprite2D](https://docs.godotengine.org/en/stable/classes/class_sprite2d.html) 

 .
 




 The 3
 *main* 
 node types
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&veaction=edit&section=T-1 "Edit section: The 3 main node types") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&action=edit&section=T-1 "Edit section: The 3 main node types") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


### 

 Node but not a node
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&veaction=edit&section=T-2 "Edit section: Node but not a node") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&action=edit&section=T-2 "Edit section: Node but not a node") 

 ]



*Every* 
 node goes under this one. It is the basic node that defines all others. See it as the parent and the grandparent of Godot and its nodes, and all the games that Godot has been used in. It stores common things like name and script. It can be used instead of
 
[CanvasItem](https://docs.godotengine.org/en/stable/classes/class_canvasitem.html) 

 or
 
[Spatial](https://docs.godotengine.org/en/stable/classes/class_spatial.html) 

 when making objects that store data, and are not needed to be shown on the screen or have a position.
 


### 

 CanvasItem
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&veaction=edit&section=T-3 "Edit section: CanvasItem") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&action=edit&section=T-3 "Edit section: CanvasItem") 

 ]



 Unlike Node, Canvas Items are positional, and implement draw code. They are used for all 2D objects, and have two main node types that inherit it:
 


#### 


[Control](https://docs.godotengine.org/en/stable/classes/class_control.html) 




 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&veaction=edit&section=T-4 "Edit section: Control") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&action=edit&section=T-4 "Edit section: Control") 

 ]



 Used for the GUI. It contains options like whether to ignore mouse input, receive it and let it pass to other UI, or receive it and stop it reaching other UI. They also allow margins and anchors, allowing a Control node to stay in a certain part of the screen or stretch when the window expands or shrinks.
 


#### 


[Node2D](https://docs.godotengine.org/en/stable/classes/class_node2d.html) 




 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&veaction=edit&section=T-5 "Edit section: Node2D") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&action=edit&section=T-5 "Edit section: Node2D") 

 ]



 These are used for 2D game elements, like
 
[Sprite2D](https://docs.godotengine.org/en/stable/classes/class_sprite2d.html) 

 and
 
[PhysicsObject2D](https://docs.godotengine.org/en/stable/classes/class_physicsobject2d.html) 

 . They are drawn on the
 *canvas* 
 , which is drawn on top of the 3D view. Well, its actually the other way around. 3D is actually drawn in the background of the canvas, if there is an active Camera3D in the scene.
 


### 


[Spatial](https://docs.godotengine.org/en/stable/classes/class_spatial.html) 




 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&veaction=edit&section=T-6 "Edit section: Spatial") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&action=edit&section=T-6 "Edit section: Spatial") 

 ]



 Used for 3D game elements. They store positional data, rotation, and scale. They do not draw onto the screen. For this, you need to use the
 
[VisualInstance](https://docs.godotengine.org/en/stable/classes/class_visualinstance.html) 

 node that inherits Spatial. You need an enabled Camera3D in the scene to actually see the 3D world.
 




 Making custom nodes
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&veaction=edit&section=T-7 "Edit section: Making custom nodes") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&action=edit&section=T-7 "Edit section: Making custom nodes") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Firstly, you need to decide what it'll do. Is it some variant of
 
[Timer](https://docs.godotengine.org/en/stable/classes/class_timer.html) 

 ? Or is it a custom
 
[Button](https://docs.godotengine.org/en/stable/classes/class_button.html) 

 ?
 



 After you decided what it does, you must decide what Node it inherits. This is important. You don't want to use Control if you want a 3D button, or Spatial for a timer.
 



 In my opinion, this is the recommended node for each type of object you want to make:
 



**Node:** 
 Use for objects that won't be part of the GUI, 2D or 3D worlds. Existing examples are Timers,
 
[HttpRequests](https://docs.godotengine.org/en/stable/classes/class_httprequests.html) 

 and
 
[CanvasLayer](https://docs.godotengine.org/en/stable/classes/class_canvaslayer.html) 

 .
 



**Node2D:** 
 Objects for games that are
 *not* 
 used in the GUI. There are exceptions, but in general, don't mix up Node2D and Control too much.
 



**Control:** 
 For GUI, like menus, HUDs and certain game elements that require anchors and margins.
 



**Spatial:** 
 Used only for 3D.
 



 For more on making nodes, please see
 [*Making nodes*](/wiki/Guide_to_the_Godot_game_engine/Programming/GDScript/Making_nodes "Guide to the Godot game engine/Programming/GDScript/Making nodes")
 .
 




 Inheritance
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&veaction=edit&section=T-8 "Edit section: Inheritance") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&action=edit&section=T-8 "Edit section: Inheritance") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Each node has several properties. Like Node with its
 *name* 
 property, or Node2D with positional data. Every node that inherits it gains the properties of it. A brief example:
 




 Node: name, script, others
 * Spatial: properties of Node; position; rotation; scale, others
* CanvasItem: properties of Node; visibility; others
	+ Node2D: properties of CanvasItem and of Node; position; rotation; scale; others
	+ Control: properties of CanvasItem and of Node; rect position, size and scale; rotation; others
		- [ColorRect](https://docs.godotengine.org/en/stable/classes/class_colorrect.html) 
		
		 : properties of Control, CanvasItem and Node; color






 SceneTree
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&veaction=edit&section=T-9 "Edit section: SceneTree") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&action=edit&section=T-9 "Edit section: SceneTree") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Godot has building blocks, yes, but what's the glue that sticks it all together?
 



 The SceneTree is the glue, and it's a strong glue. But it is also a flexible glue. It is an
 *[Object](https://docs.godotengine.org/en/stable/classes/class_object.html)*
 (which is the great-great grandfather/mother of all Godot "things").
 



 The SceneTree is where everything happens. Nodes process in a certain order, draw on the screen, and more.
 





![](//upload.wikimedia.org/wikipedia/commons/thumb/6/69/Nuvola_apps_kate.svg/50px-Nuvola_apps_kate.svg.png)




**Note:** 
  

  

 Throughout tutorials found in this book, I will mention
 **add
 *something* 
 as a child of
 *something else***
 . This means adding a node child of another node. A Button may be the child of a
 
[Container](https://docs.godotengine.org/en/stable/classes/class_container.html) 

 , which may be the child of a normal Control.
 

 When making your game, each menu, every level, and every object are all
 *scenes* 
 . You save them on the file system (or "fs" for short), and can then put those scenes within scenes. You could make an enemy scene, save it, then put it in your "level 1" scene as many times as you like. This is called
 *instancing* 
 a scene.
 



*Inheriting* 
 a scene can be considered the opposite to instancing. An inherited scene is like a copy of a scene, but with limited freedom to make modifications. This is useful to have a base enemy scene, then inherit it for each enemy you add, and make your modifications. This keeps your enemies consistent, and makes each file easier to understand. This is quite similar to inheriting a
 *node* 
 , except that
 *multiple nodes* 
 are inherited instead of making a new inherited script.
 





![](//upload.wikimedia.org/wikipedia/commons/thumb/6/69/Nuvola_apps_kate.svg/50px-Nuvola_apps_kate.svg.png)




**Note:** 
  

  

**Do not confuse** 
 inheriting a scene with inheriting a node/script.
 

 If, for example, on "Level 6", you have to fight a mutant version of a common enemy found throughout the game. You want to use it only once in the entire game, so is not worth inheriting the enemy scene and making a whole new file for an enemy used only once. Instead, while on level 6, right click on the enemy you want to modify in the
 *Scene* 
 dock. Check the "editable children" box, and make your modifications. It is almost exactly the same as inheriting the scene, except that you are not making a new file.
 



 If you decide that the mutant enemy would do well on other levels, or you use it more than once in a single level, left click on the enemy on the Scene dock and click "save branch as scene". This will save the node as a scene a with your modifications to be reused on any other level.
 





![](//upload.wikimedia.org/wikipedia/commons/thumb/d/dc/Nuvola_apps_important_yellow.svg/50px-Nuvola_apps_important_yellow.svg.png)




**Warning:** 
  

  

 If you
 *rename or move* 
 the node with editable children enabled,
 **you will need to re-enable it or changes will be lost!** 
  

  

 Changes will be lost also if you disable it manually and forget to enable it before closing the scene or editor.
 


 Adding a node
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&veaction=edit&section=T-10 "Edit section: Adding a node") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&action=edit&section=T-10 "Edit section: Adding a node") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Okay, so now you know
 *what* 
 you can do,
 *how* 
 do you do any of it?
 



 Lets create a simple scene. Open the Godot project manager. On the left is a list of buttons. Click
 *New Project* 
 . A popup should appear. Press
 *Browse* 
 under "Project Path:" and choose what folder to store your game. It's a good idea to have all your games in the same folder so they can be easily accessed. Once that is done, press "Create Folder", type something like "Godot test project", and click
 *OK* 
 . Then click "Select Current Folder", and
 `Create & Edit` 
 .
 



 Now Godot should open. On the left, there should be a
 *Scene* 
 dock with a few buttons on it. Click
 `User Interface` 
 . Double click the bit that says "Control" and rename it to
 `Test UI` 
 .
 




[![](//upload.wikimedia.org/wikipedia/commons/thumb/4/46/Godot-create_scene-menu.png/120px-Godot-create_scene-menu.png)](/wiki/File:Godot-create_scene-menu.png)





 Now, press the white "+" icon in that dock, and a popup should appear. In the search bar, type
 `Label` 
 . Double click the highlighted menu item for
 
[Label](https://docs.godotengine.org/en/stable/classes/class_label.html) 

 .
 



 On the left, in the
 *Inspector* 
 dock, look for the property
 `Text` 
 . Type
 `Hello world!` 
 (Make sure your Label is selected on the Scene dock). At the top of the screen is a
 `Layout` 
 button. Click it. A drop down menu will appear with many options. Press
 *Center* 
 . The "Hello world!" text appears at the center of the blue box in the 2D viewport (the large bit in the middle of the editor).
 



[![](//upload.wikimedia.org/wikipedia/commons/thumb/3/38/Godot-layout-menu-press-center.png/80px-Godot-layout-menu-press-center.png)](/wiki/File:Godot-layout-menu-press-center.png)

 The layout button
 


 Now you know how to add a node, how do you delete them if you make a mistake? The fastest way is to undo (press "Control+z" on Windows). If the node is not recently created, instead left-click on it in the Scene dock. Click
 `Delete Node(s)` 
 . If you delete a node you didn't want to delete, just press undo. If you press undo too many times, you can redo ("Control+Shift+Z" on Windows).
 



 Now save your scene with "Control+S". Don't change the file name. You can also save to a different scene with "Control+Shift+S".
 




 Instancing and editable children
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&veaction=edit&section=T-11 "Edit section: Instancing and editable children") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&action=edit&section=T-11 "Edit section: Instancing and editable children") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 To save a node and its children as a separate scene file, left click on the node and click
 `Save Branch as Scene` 
 . For this experiment, do so on your Label. The file name should be
 `Label.tscn` 
 . Press "Save".
 




[![](//upload.wikimedia.org/wikipedia/commons/thumb/8/8d/Godot-node-menu-a.png/120px-Godot-node-menu-a.png)](/wiki/File:Godot-node-menu-a.png)





 Find your Label scene but do not open it. Drag and drop it over your "Test UI" node in the Scene dock. At first it appears on the dock, but not on the viewport. This is because both Labels are on top of each-other. Click on your second Label in the Scene dock and click the move button at the top of the screen (or press w). Drag in any direction to see the new Label.
 




[![](//upload.wikimedia.org/wikipedia/commons/thumb/f/f1/Godot-move-selected.png/210px-Godot-move-selected.png)](/wiki/File:Godot-move-selected.png)





 Open the
 `Label.tscn` 
 scene and and add another Label as a child of the root node (which should also be a label). Change the text property to "Label number 2". Save the scene. Go back to the
 `Test UI` 
 scene and notice how both the new and old labels overlap? Go back to the Label scene, select the second Label and move it down by clicking "Shift+Down arrow" 5 times. Save. Go to the other scene. Both Label scenes display correctly, not just one.
 




[![](//upload.wikimedia.org/wikipedia/commons/thumb/a/a6/Godot-node-menu-editable_childeren.png/210px-Godot-node-menu-editable_childeren.png)](/wiki/File:Godot-node-menu-editable_childeren.png)





 On the second label in your scene, left click and check
 `Editable Children` 
 . Click the gray Label button (the child of the second Label), and change it's text property to "Edited child". The other Label and the
 `Label.tscn` 
 scene were not changed, but one you changed was.
 



 Right click on the Label with editable children and press
 `Make Local` 
 . Now the modified label scene is no-longer linked, you can do some finer tweaking like renaming the child or deleting it. You can play around with your new scenes, or continue on.
 




[![](//upload.wikimedia.org/wikipedia/commons/thumb/f/f9/Godot-node-menu-make-local.png/210px-Godot-node-menu-make-local.png)](/wiki/File:Godot-node-menu-make-local.png)






 What you have learned
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&veaction=edit&section=T-12 "Edit section: What you have learned") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/What_is_a_node&action=edit&section=T-12 "Edit section: What you have learned") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


1. What nodes are in Godot and how to use each of the three basic ones.
2. How to instance a scene into another, and how to save existing nodes into a new Scene.
3. About node inheritance.
4. How to start a new project.



  






 Programming
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=2 "Edit section: Programming") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=2 "Edit section: Programming") 

 ]
================================================================================================================================================================================================================================================================================================



 Godot has 3 main programming (or scripting) languages, and a bonus fourth one if you have a version of Godot with Mono compiled. However, you can get unofficial languages or even make your own!
 


### 

[GDScript](/wiki/Guide_to_the_Godot_game_engine/Programming/GDScript "Guide to the Godot game engine/Programming/GDScript") 



 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming&veaction=edit&section=T-1 "Edit section: GDScript") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming&action=edit&section=T-1 "Edit section: GDScript") 

 ]



 GDScript (".gd" file extension) is Godot's main language. It is a custom language that works with Godot's "scene" system. It is also quite simple to use. The developers of Godot say that you could learn GDScript in under an hour.
 



 Example "Hello world!" program:
 



```
func \_ready() -> void:
    # This is a comment. It isn't shown in the game.
    print("Hello world!")

```


 It is the language I understand most, and will be used throughout the book.
 



[![](//upload.wikimedia.org/wikipedia/commons/thumb/0/08/Gdscript3.4.png/500px-Gdscript3.4.png)](/wiki/File:Gdscript3.4.png)




 Fun fact: Godot's developers experimented with Python and Swift before deciding to make a custom scripting language that better fit Godot. As a result, the language is pretty similar to the two.
 



 For more information, please see the
 [GDScript chapter](/wiki/Guide_to_the_Godot_game_engine/Programming/GDScript "Guide to the Godot game engine/Programming/GDScript") 
 .
 


### 

 VisualScript
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming&veaction=edit&section=T-2 "Edit section: VisualScript") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming&action=edit&section=T-2 "Edit section: VisualScript") 

 ]



 VisualScript (".vs" file extension) is Godot's visual language that uses a user-friendly interface to make code. It lacks many features in GDScript, but can be used to create, for example, a conversation tree.
 



[![](//upload.wikimedia.org/wikipedia/commons/thumb/1/11/Godot_VisualScript_Example.png/300px-Godot_VisualScript_Example.png)](/wiki/File:Godot_VisualScript_Example.png)




 However, this language is discontinued for Godot 4.x
 [[1]](#cite_note-1)
 , as only 0.5% of users actually used the language. It is still available in Godot 3.x, and may be added to Godot 4 as an extension at a later date.
 



 .mw-parser-output .reflist{font-size:90%;margin-bottom:0.5em;list-style-type:decimal}.mw-parser-output .reflist .references{font-size:100%;margin-bottom:0;list-style-type:inherit}.mw-parser-output .reflist-columns-2{column-width:30em}.mw-parser-output .reflist-columns-3{column-width:25em}.mw-parser-output .reflist-columns{margin-top:0.3em}.mw-parser-output .reflist-columns ol{margin-top:0}.mw-parser-output .reflist-columns li{page-break-inside:avoid;break-inside:avoid-column}.mw-parser-output .reflist-upper-alpha{list-style-type:upper-alpha}.mw-parser-output .reflist-upper-roman{list-style-type:upper-roman}.mw-parser-output .reflist-lower-alpha{list-style-type:lower-alpha}.mw-parser-output .reflist-lower-greek{list-style-type:lower-greek}.mw-parser-output .reflist-lower-roman{list-style-type:lower-roman}
 


1. [↑](#cite_ref-1) 


<https://godotengine.org/article/godot-4-will-discontinue-visual-scripting>




### 

 NativeScript
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming&veaction=edit&section=T-3 "Edit section: NativeScript") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming&action=edit&section=T-3 "Edit section: NativeScript") 

 ]



 NativeScript (".dll" file extension) can be used to make super fast code and modules without recompiling the engine.
 



 It has also been used to create unofficial support for more common languages like Python and Swift.
 



 As I have no knowledge of NativeScript, this section will likely remain short. If you have knowledge of it, please put it here! Thanks!
 


### 



 C#
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming&veaction=edit&section=T-4 "Edit section: C#") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming&action=edit&section=T-4 "Edit section: C#") 

 ]



 If you have the mono version of Godot, you can write C# code. You can use it to make high-speed code to make modules or objects for your game. It can also be used to write tools.
 





![](//upload.wikimedia.org/wikipedia/commons/thumb/6/69/Nuvola_apps_kate.svg/50px-Nuvola_apps_kate.svg.png)




**Info:** 
  

  

**Note:** 
 Godot itself is made with C++, and making direct modifications require you to recompile Godot's editor. Many Godot users have used this method to make custom Godot editors with custom tools.
 




 How do I use these?
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming&veaction=edit&section=T-5 "Edit section: How do I use these?") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming&action=edit&section=T-5 "Edit section: How do I use these?") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 GDScript, VisualScript and NativeScript can all be
 *attached* 
 to a node, or used to create one. In the mono build of Godot, C# can also be attached. C++ can only be used in Godot's existing engine. To do so, you will need to download a special version of Godot that has not been compiled into an application file.
 



 To attach a script to a node, you first need a node to attach it too! Assuming you read the last chapter ("What is a node"), you can begin from the project you started last time.
 



 Open Godot, and open your test project by double-clicking on it in the menu at the center of the screen. Open "Test UI.tscn" from the File System dock if it is not already open. Select your Test UI Control node. At the top of the Scene dock is a button that looks a little like paper with the edges of two sides rolled up. Press it.
 



 Click the "Template" button and select "Empty" from the drop-down menu that appears. Press Create. Now a new screen should appear with a text edit area in the center of the screen, and the Test UI node should have that paper icon on it. You can click it whenever you want to reopen the script here. The script looks pretty boring right now:
 



`extends
 

 Control`




 This is
 *very* 
 important, however! The
 `extends`
*keyword* 
 (a very important piece of code, like
 `pass`
 ) tells Godot that your script
 *inherits* 
 the node type you place here. You may only attach a script to a node of that type, or a node that inherits that type.
 



 Under
 `extends
 

 Control`
 , write the following code:
 



```
func \_ready() -> void:
  print("Hello world!")

```


`func`
 tells Godot that you want to define a function. If you use Python a lot, you might think the
 `print` 
 never gets called, as it is inside a function, which never get called automatically. The built-in function
 `\_ready
 
 ()` 
 tells Godot to run the code when the node with the script is "ready", or that it has been fully loaded.
 



`\_init
 
 ()` 
 runs
 *before* 
 the node is ready. Use it to do self-contained pre-construction.
 `\_process
 
 (delta)` 
 runs every frame as fast as possible.
 `delta` 
 is an argument for the function. It represents the time
 *in seconds* 
 since the last frame. The value rises as the game lags.
 `\_physics\_process
 
 (delta)` 
 is similar to
 `\_process`
 , it runs every physics frame on a fixed time step, which is typically 60 frames per second.
 `\_exit\_tree
 
 ()` 
 is ran when the node exits the scene (to become an orphan or when it is "freed", or deleted) or the game closes.
 



 Now, for some more complex code. This program will record the time that has passed in seconds since the game ran and show it when it ends.
 



```
var time: float = 0 # Or just "var time = .0"

# The "-> void" is optional

func \_process(delta):
  # This increments time
  time += delta

func \_exit\_tree():
  print("Time passed: ",time)

```


 Now, lets update this to automatically close the game after a random amount of time.
 



 Add this code before
 `\_process`
 :
 



```
const MAX_TIME = 10

const MIN_TIME = 5
onready var time_to_quit=randi() % (MAX_TIME-MIN_TIME) + MIN_TIME + 1

```


 This will create a variable and set it during the call to
 `_ready` 
 automatically.
 `time_to_quit` 
 is a random number between 5 and 10. Add this code
 *in* 
 the
 `_process` 
 function:
 



```
if time >= time_to_quit:
  # Quit after a random amount of time.
  get\_tree().quit()

```


 One problem... The number is never different. Why? Because you need to call
 `randomize
 
 ()` 
 first.
 



 Change the declaration of
 `time_to_quit` 
 to
 `var
 
 time_to_quit` 
 and add this to the
 `\_ready`
 function:
 



```
randomize()
time_to_quit = randi()% (MAX_TIME-MIN_TIME) + MIN_TIME + 1

```


 The
 `+
 
 1`
 is necessary since
 `randi()%X` 
 returns a random number between
 `0`
 and
 `{{Gdscript/string|X-1))` 
 .
 



 This creates a number between 0 and
 `MAX_TIME` 
 subtracted by
 `MIN_TIME` 
 subtracted by 1. Adding the
 `MIN_TIME` 
 and an extra 1 gets the result you need, a random number between
 `MIN_TIME` 
 and
 `MAX_TIME` 
 ..
 



 The
 `randomize
 
 ()` 
 makes
 `randi
 
 ()` 
 give a different stream of random numbers. Randomizing is based on time, and
 *should
 **not***
 be called every frame for performance reasons. Once per node, called during
 `\_ready`
 call, is enough.
 




 What you have learned
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming&veaction=edit&section=T-6 "Edit section: What you have learned") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming&action=edit&section=T-6 "Edit section: What you have learned") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


1. The 3 (4 for Godot 3.x versions) types of currently supported script
2. How to attach a script to a node
3. How to record time with delta
4. How to close a game
5. How to make random numbers.




 See also
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming&veaction=edit&section=T-7 "Edit section: See also") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming&action=edit&section=T-7 "Edit section: See also") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



[Godot documents -> scripting](https://docs.godotengine.org/en/stable/tutorials/scripting/index.html) 




  






 GDScript
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=3 "Edit section: GDScript") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=3 "Edit section: GDScript") 

 ]
=======================================================================================================================================================================================================================================================================================



 GDScript uses dynamic typing (Variable type can change and type is not inferred on creation) with
 *optional* 
[static typing](/wiki/Guide_to_the_Godot_game_engine/Programming/GDScript/Static_typing "Guide to the Godot game engine/Programming/GDScript/Static typing") 
 .
 



  





  

 The GlobalScope is where all the more... Global... Methods and constants are. These include math functions like sin and cos. It also has random number generators, such as randi.
 



 See Godot's documentation for more:
 <https://docs.godotengine.org/en/latest/classes/class_@globalscope.html>
 and:
 <https://docs.godotengine.org/en/latest/classes/class_@gdscript.html>




 Do not confuse it for
 [keywords](/wiki/Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords "Guide to the Godot game engine/Programming/GDScript/Keywords") 
 .
 



  






 Keywords
 


 Keywords in Godot are special words used for GDScript. Unfortunately, some of them are not recorded in Godot's documentation in any detail.
 



  




### 

 break
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-1 "Edit section: break") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-1 "Edit section: break") 

 ]



 The
 *break* 
 keyword ends a looping piece of code. Useful for "forever" loops:
 



```
var counter = 0

while true:
  counter += 1
  if counter == 15:
    break

```


 This ends the loop after 15 runs of the code.
 


### 

 continue
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-2 "Edit section: continue") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-2 "Edit section: continue") 

 ]



 The
 *continue* 
 keyword is used inside loops. Similar to
 *[break](#break)*
 ,
 *continue* 
 skips a single run at the loop. Like breaking it, but instead of ending the whole loop, it only skips the single iteration.
 



```
for num in range( 1,5 ):
  if num == 4:
    continue
  print( num )

```


 The above runs 5 times.
 *Num* 
 is 1, 2, 3, 4 then 5. If
 *num* 
 is 4, it "continues" the loop. Otherwise it prints. So 4 is
 *not* 
 printed, but 1, 2, 3 and 5 are.
 


### 

 const
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-3 "Edit section: const") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-3 "Edit section: const") 

 ]



 The
 *const* 
 keyword can be used in place of
 *[var](#var)*
 to create a
 *constant* 
 , a value that
 **cannot** 
 change.
 



 Unlike variables, constants can be used in
 [static functions](#static) 
 .
 


### 

 enum
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-4 "Edit section: enum") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-4 "Edit section: enum") 

 ]



 The
 *enum* 
 keyword is similar to making
 [integer](#int) 
[constants](#const) 
 .
 



```
enum {
  DRAW_MODE_PEN,
  DRAW_MODE_FILL,
  DRAW_MODE_ERASER,
  DRAW_MODE_LINE,
  DRAW_MODE_BOX,
  DRAW_MODE_SHADING,
  DRAW_MODE_CONTRAST,
  DRAW_MODE_BLEND
}

```


 The code above is a snippet of code from an image editor I once made in godot. It shows the possible draw modes, like line and fill, as
 *named ints* 
 for easier code debugging.
 


### 

 export
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-5 "Edit section: export") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-5 "Edit section: export") 

 ]







 (
 `@export`
 in Godot 4+)
 





 Not to be confused with
 [exporting](/wiki/Guide_to_the_Godot_game_engine/Exporting "Guide to the Godot game engine/Exporting") 
 . The
 *export* 
 keyword is a very powerful keyword.
 



 It allows editing the value in the Inspector dock, and it saves changes per-instance.
 



 For a basic one, try
 `export var
 
 max_health:int` 
 .
 



 You can even use templates and ranges:
 



```
# This allows a range of 0 to 100 with a step of 2
export ( int, 0, 100, 2 ) var number = 50

# This allows linking a file path
export ( String, FILE ) var file_path

# This asks for a file path that ends with ".json" or ".md"
export ( String, FILE, ".json;Json file, .md;Mark Down file" ) var specific_extension_file_path

# You can also try "String" with this one
export ( int, Number1, Number2, Number3 ) var dropdown_menu_int = 0

# This creates a slider to change the float with a step of 0.0001
export ( float, 0, 1, 0.0001 ) var float_with_range = 0.5

```

### 

 extends
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-6 "Edit section: extends") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-6 "Edit section: extends") 

 ]



 The
 *extends* 
 keyword tells Godot that a script inherits the properties of the given Object.
 



 It must be at the very top of a script. Only
 `[tool](#tool)`
 can go before it.
 


### 

 for
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-7 "Edit section: for") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-7 "Edit section: for") 

 ]



 The
 *for* 
 keyword runs the indented block of code after it for every item from a given value.
 



```
for i in ["Hello", "I", "am", "human", 1, 2, 3]:
  print( i )

```

### 

 in
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-8 "Edit section: in") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-8 "Edit section: in") 

 ]



 Often used inside
 [if statements](/wiki/Guide_to_the_Godot_game_engine/Programming/GDScript/If_statements "Guide to the Godot game engine/Programming/GDScript/If statements") 
 . It evaluates as true if the value before it is
 *inside* 
 the value after it. It can check:
 


1. If a value is in an Array
2. If a key is in a Dictionary
3. If a string of text contains another string of text
4. If an Object contains a property or constant of the same name



 Among other things.
 `"h"
 

 in
 

 "Hello"`
 would be false. "Hello" does not have a lowercase "h" in it. If you want case insensitive search, call
 `to\_lower
 
 ()` 
 on both values to convert every letter to lowercase (or
 `to\_upper
 
 ()` 
 for uppercase - all capitals).
 


### 

 is
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-9 "Edit section: is") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-9 "Edit section: is") 

 ]



 Often used in if statements. It checks if the value before it is of the type after it.
 



```
print( "Hello" is String ) # True
print( 52434 is int ) # True
print( bool( "52434" ) is bool ) # True
print( load( "res://icon.png" ) is StreamTexture ) # True
print( load( "res://icon.png" ) is Texture ) # True

```

### 

 load
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-10 "Edit section: load") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-10 "Edit section: load") 

 ]



 Okay,
 *load* 
 is technically described in
 [global scope](/wiki/Guide_to_the_Godot_game_engine/Programming/GDScript/Global_scope "Guide to the Godot game engine/Programming/GDScript/Global scope") 
 . However, it is very much defined as a keyword, so it would make no sense if it were not here.
 



 It loads a file from your FileSystem when called. It takes a single argument: a file path.
 



 File paths
 **must be relative to your project folder** 
 or player save folder and
 **not lead outside** 
 !
 



 Valid examples:
 



```
load( "res://assets/weapons/sword.png" )
load( "res://entities/chicken\_egg.tscn" )
load( "user://custom\_entities/mutant\_monster.tscn" )

```


*res* 
 leads to your project folder.
 *user* 
 leads to the player's save folder. This is typically
 *%appdata%/roaming/godot/app\_userdata/<project\_name>* 
 unless the ProjectSetting
 *Config/Use Custom User Dir* 
 and
 *Config/Custom User Dir Name* 
 are set, in which case it's
 *%appdata%/roaming/
 **<ProjectSettings:Config/Custom User Dir Name>***
 .
 


### 

 master
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-11 "Edit section: master") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-11 "Edit section: master") 

 ]



 The
 *master* 
 keyword is part of a series 5 multiplayer keywords. It makes it so only the "master" calls a function if used.
 



```
remote master func take\_damage( damage ):
  health -= damage
  rpc( "set\_health", health )

```


 You don't want to call this on a
 [puppet](#puppet) 
 to help prevent bugs.
 


### 

 onready
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-12 "Edit section: onready") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-12 "Edit section: onready") 

 ]







 (
 `@onready`
 in Godot 4+)
 





 The
 *onready* 
 keyword goes before the
 [var](#var) 
 keyword. It allows using a dynamic number that is set
 *before* 
 the
 *\_ready()* 
 function call.
 



```
onready var random_number = randi( )

```

### 

 pass
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-13 "Edit section: pass") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-13 "Edit section: pass") 

 ]



 The
 *pass* 
 keyword is used as a blank line of code. Use it after an "if" statement or "for" statement or after a function declaration to count as a "block of code" (to remove the error) without doing anything. This is called an "empty" if statement or a "stub function".
 



```
if true:
    pass

```

### 

 preload
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-14 "Edit section: preload") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-14 "Edit section: preload") 

 ]



 See
 [load](#load) 
 . The file can be relative to the script that calls it or "res". The resource is loaded when the script is, preventing stalls during the running game. However, files
 **must** 
 exist or there will be an error, and the path
 **must** 
 be constant (i.e: not changeable).
 



*res://game/game.gd:* 




```
preload( "entities/thing.tscn" )

```


*or:* 




```
preload( "res://game/entities/thing.tscn" )

```

### 

 puppet
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-15 "Edit section: puppet") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-15 "Edit section: puppet") 

 ]



 The
 *puppet* 
 keyword is one of a series of 5 multiplayer keywords. Use it before "func" but after "remote". It makes a function only call to
 [non-masters](/w/index.php?title=Guide_to_the_Godot_game_engine/Multiplayer&action=edit&redlink=1 "Guide to the Godot game engine/Multiplayer (does not exist)") 
 .
 



```
remote puppet func set\_health( v ):
  health = v

```


 You don't want to call this to the
 [master](#master) 
 to stop players cheating.
 


### 

 remote
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-16 "Edit section: remote") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-16 "Edit section: remote") 

 ]



 Use the
 *remote* 
 keyword before the "func" keyword to allow a function to be called remotely by other peers in multiplayer when calling "rpc", "rpc\_id", "rpc\_unreliable" or "rpc\_unreliable\_id".
 ***Beware of cheating and security threats when doing this***
 !
 



```
func hit( ):
  health -= 1
  rpc( "player\_hit", health )

remote func player\_hit( hp ):
  if get\_tree().get\_rpc\_sender\_id( ) != get\_network\_master( ):
    return # This means a player is trying to cheat
  health = hp

```


 See
 [puppet](#puppet) 
 and
 [master](#master) 
 for more info. Use
 [remotesync](#remotesync) 
 to call the function locally as well as via the network.
 



**WARNING: Malicious hackers can use your game to retrieve or delete data, or players can cheat, if you do not add checks to stop them. Don't ever add
 *remote* 
 to functions that delete or create files unless you know what you're doing.** 



### 

 remotesync
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-17 "Edit section: remotesync") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-17 "Edit section: remotesync") 

 ]



 See
 [remote](#remote) 
 . This keyword also calls a function locally instead of only calling them over the network. Good for telling other peers as well as the master that the character has jumped.
 


### 

 return
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-18 "Edit section: return") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-18 "Edit section: return") 

 ]



 The
 *return* 
 keyword is used to end the function. For functions that are called and "return" a value, the return keyword is where to go.
 



```
func get\_some\_value( ):
  return "some string"

```


 It also ends the function call, so can be used in an if statements to skip the rest of the function. It does not require a return value, and by default returns
 [null](/wiki/Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types#null "Guide to the Godot game engine/Programming/GDScript/Data types") 
 .
 


### 

 setget
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-19 "Edit section: setget") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-19 "Edit section: setget") 

 ]



 Use at the end of a
 [variable](#var) 
 declaration. Syntax:
 `var points = 0 setget set_points get_points` 
 . The getter is optional. The setter must have an argument (the value to set too) and the getter must return a value. Example:
 



```
export var points = 0 setget set_points get_points

func set\_points( value ):
  points = value

func get\_points( ):
  return points

```

### 

 static
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-20 "Edit section: static") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-20 "Edit section: static") 

 ]



 Usually, to call an Object's function, you need an
 *instance* 
 of it. If you use the
 *static* 
 keyword before the "func" keyword, you'll be able to call it from a non-instance. However, you can only use other static functions or those in global scope. You cannot use member
 [variables](#var) 
 .
 



 In the following example,
 *Weapon* 
 is a custom
 
[Resource](https://docs.godotengine.org/en/stable/classes/class_resource.html) 

 .
 




 Weapon.gd
 


```
extends Resource
class\_name Weapon

export var damage = 5
const DAMAGE = 5

static func get\_damage( ):
  # Cannot use an outside variable here
  return DAMAGE # Can use a constant though

```


`Weapon
 
 .
 
 new
 
 ( ).
 
 get\_damage
 
 ( )` 
 becomes
 `Weapon
 
 .
 
 get\_damage
 
 ( )` 
 , saving memory and CPU resources if you were to want to find a value.
 


### 

 tool
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-21 "Edit section: tool") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-21 "Edit section: tool") 

 ]







 (
 `@tool` 
 in Godot 4+)
 





 The
 *tool* 
 keyword tells Godot that a script runs in the editor. These sorts of scripts are commonly referred too as
 **tool scripts** 
 . It won't run if the script is only open in the Script edit screen. It must be attached to a node in the scene, or a node with the script must be in the editor.
 



 It must always be placed before the
 **extends** 
 keyword.
 



 If you have a tool script, scripts that it inherits and scripts that inherit it won't run, unless they are also tool scripts. All nodes themselves run in the editor, but only if placed into it's interface with editor plugins.
 



 See also:
 
[editor plugins](https://docs.godotengine.org/en/latest/tutorials/plugins/editor/index.html) 

 (and
 [the plugins chapter](/wiki/Guide_to_the_Godot_game_engine/Plugins "Guide to the Godot game engine/Plugins") 
 ), very powerful things.
 


### 

 var
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-22 "Edit section: var") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-22 "Edit section: var") 

 ]



 The
 *var* 
 keyword creates a variable. They are automatically freed from memory when they
 *leave the scope* 
 (an indented block of code unindents, for example.)
 




```
var global\_varible = 1

func \_ready():
  some\_function(7)
 
func some\_function(argument):
  print(argument)
  print(global\_variable)
  var temporary\_variable = 2
  print(temporary\_variable)
  if true:
    var another\_variable = 3
    print(another\_variable)
    print(temporary\_variable)
  print(another\_variable) # Error: the identifier "another\_variable" isn't declared in the current scope

```


### 

 while
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-23 "Edit section: while") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-23 "Edit section: while") 

 ]



 The
 *while* 
 keyword runs the indented block of code after it until the if-statement after it is no-longer true. It won't run if it starts as false.
 




```
var i = 0
while i < 50:
  print(i)
  i += 1

```


### 

 yield
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&veaction=edit&section=T-24 "Edit section: yield") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords&action=edit&section=T-24 "Edit section: yield") 

 ]



 Yield has been announced to get different functionality in Godot 4, so if you plan to upgrade when it's out, don't rely on yield too much.
 



 Yield, currently, accepts 2 arguments: an Object and a signal name (as a String). Calling it will wait until that signal is called from that Object.
 




```
print(1)
# Creates a 1 second timer
yield(get\_tree().create\_timer(1), "timeout")
print(2)

```



  





  





  






 "if" statement
 


 An "if" statement is a powerful piece of code. Every programming language has some kind of "if" statement. Valid examples are:
 



```
var variable = 5
if variable == 5:
  pass # True
if variable < 6:
  pass # True
if (variable != {{Gdscript/string|5}) == ({{Gdscript/keyword|not} variable == {{Gdscript/string|5}):
  pass # True (both values are false, and false == false)
if variable is int:
  pass # True
if range({{Gdscript/string|5}) in variable:
  pass # [0,1,2,3,4] is not in 5.
 print("variable is 5" if variable == 5 else "variable is not 5")

```


 Other rules to follow:
 



 You
 **must** 
 use indentation for a new line. You may put a statement on the same line as "if", but only if it is one line long:
 `if
 
 variable ==
 
 5
 
 :
 
 print
 
 (
 
 "variable is 5"
 
 )` 
 .
 



 You cannot use "else if" syntax, like can be used in JavaScript, instead use the "elif" keyword.
 



 A "value1 if something else value2" is a fast way to change a single argument in a function based on another value. It could be used like this:
 `print
 
 (
 
 "I am "
 
 +(age+
 
 " years old."
 
 )
 
 if
 
 age >
 
 1
 

 else
 

 "not at school."
 
 )` 
 Otherwise, an "if" statement
 *must* 
 have indented code after it. Even if it is just
 `[pass](/wiki/Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords#pass "Guide to the Godot game engine/Programming/GDScript/Keywords")`
 .
 



 Conditions in brackets are checked first, making
 `if
 
 draw_lines_inverted == ((
 
 5
 
 ==
 
 5
 
 ) == (
 
 3
 
 !=
 
 4
 
 )):` 
 valid. If you do not use brackets, it reads the conditions left to right. So to check if
 `value` 
 is a bool, then check if it is true (without risking an error if it is not a bool) use
 `if
 
 value
 
 is bool and
 
 value ==
 
 true
 
 :` 
 . If it is not a bool, the value is not checked to see if it is true.
 



  





  






 not
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/If_conditions&veaction=edit&section=T-1 "Edit section: not") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/If_conditions&action=edit&section=T-1 "Edit section: not") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 The
 *not* 
 keyword reverses the condition that is placed afterword.
 



 As an alternative, you can use "!".
 




 and
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/If_conditions&veaction=edit&section=T-2 "Edit section: and") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/If_conditions&action=edit&section=T-2 "Edit section: and") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 The
 *and* 
 keyword checks if the values before and after it are both true.
 




 or
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/If_conditions&veaction=edit&section=T-3 "Edit section: or") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/If_conditions&action=edit&section=T-3 "Edit section: or") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 The
 *or* 
 keyword checks if a value before or after it is true.
 



  






 null
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-1 "Edit section: null") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-1 "Edit section: null") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Null is the absence of value. Null can be inferred as a function's return value with
 `->
 
 void`
 .
 



 Never evaluates as
 `true` 
 in
 [if statements](/wiki/Guide_to_the_Godot_game_engine/Programming/GDScript/If_statements "Guide to the Godot game engine/Programming/GDScript/If statements") 
 :
 



```
if null:
  pass # This never runs

```


 This is the default value used in a variable if it has not been set. If a function that you made is supposed to returns something, but instead return
 `null` 
 , be sure to check the output for errors, and double check the function is working properly.
 




 bool
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-2 "Edit section: bool") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-2 "Edit section: bool") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 A
 *bool* 
 is a basic data type which may only have 2 values:
 `true` 
 (positive, on or 1) and
 `false` 
 (negative, off or 0). bool may be inferred as a function's return value with
 `->
 
 bool`
 .
 



*bool* 
 s evaluate as
 `true` 
 in an if statements if it is equal to
 `true` 
 :
 



```
if true:
  pass # This runs

```


 If converted to an
 [intiger](#int) 
 (with
 `int
 
 (bool)` 
 ), it becomes
 `0` 
 if it's
 `false` 
 and
 `1` 
 if
 `true` 
 .
 


#### 

 History
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-3 "Edit section: History") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-3 "Edit section: History") 

 ]



 Bools were invented by
 [George Boole](https://en.wikipedia.org/wiki/George_Boole "w:George Boole") 
 . George was an English mathematician whose work is the result of a special programming system. This system may only have 2 values,
 *true* 
 and
 *false* 
 . It was called
 *"Boolean logic"* 
 in his honor.
 



 See the official documentation for more:
 <https://docs.godotengine.org/en/stable/classes/class_bool.html>





 int
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-4 "Edit section: int") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-4 "Edit section: int") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 An
 *int* 
 , or
 *integer* 
 , is a whole number. int may be inferred as a function's return value with
 `->
 
 int`
 .
 



*int* 
 s evaluate as
 `true` 
 in an if statements if not equal to
 `0` 
 :
 



```
if 1:
  pass # This runs

```

#### 

 Operators
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-5 "Edit section: Operators") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-5 "Edit section: Operators") 

 ]



 Ints are great for maths. They support the following operators:
 



 Comparitive:
 



```
< Less than
> More than
== Equal to

```


 Modifiers (use a number on both sides):
 



```
* Multiplication
/ Division
+ Addition
- Subtraction
% A type of divide. It sets a 64-bit integer to a limit of the second (randi()%5 is an integer 0 to 5)
^ To the power of

```




![](//upload.wikimedia.org/wikipedia/commons/thumb/6/69/Nuvola_apps_kate.svg/50px-Nuvola_apps_kate.svg.png)




**Note:** 
  

  

 Dividing ints or
 [floats](#float) 
 by 0 is impossible! Attempting to do so will cause an error!
   

 See
 [maths is fun: dividing by zero](https://www.mathsisfun.com/numbers/dividing-by-zero.html) 
 .
 

 Useful constants:
 



```
INF # Or "infinity". When printed, shows "1.#INF"
NAN # Or "not a number". When printed, shows "1.#QNAN"

```


 Speaking of NaN, NaN is
 *not* 
 equal to NaN (
 `NAN
 
 ==
 
 NAN`
 is never true). Instead, use
 `is\_nan
 
 (variable)` 
 to see if it is NaN.
 



 To check for infinity (INF is equal to INF, but INF is
 *not* 
 equal to -INF), use
 `is_inf(variable)` 
 .
 



 Ints can be separated with underscores, like
 `36\_234\_785`
 (which makes 36234785) to be easier to read.
 


#### 

 See also
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-6 "Edit section: See also") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-6 "Edit section: See also") 

 ]



[Float, decimal numbers](#float) 




 See the official documentation for more:
 <https://docs.godotengine.org/en/stable/classes/class_int.html>





 float
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-7 "Edit section: float") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-7 "Edit section: float") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



*Floats* 
 , also known as
 *floating-point* 
 numbers, are decimal numbers, like
 **1.7** 
 . float may be inferred as a function's return value with
 `->
 
 float`
 .
 



*float* 
 s evaluate as
 `true` 
 in an if statements if not equal to
 `0.0` 
 :
 



```
if .1:
  pass # This runs

```

#### 

 Operators
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-8 "Edit section: Operators") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-8 "Edit section: Operators") 

 ]



 Floats are great for maths. They support the following operators:
 



 Comparative:
 



```
< Less than
> More than
== Equal to

```


 Modifiers (use a number on both sides):
 



```
* Multiplication
/ Division
+ Addition
- Subtraction

```


 Useful constants:
 



```
PI # 3.141593

```


 To check if two numbers are approximately equal (I.e: less than 0.00001 difference), use
 `is_equal_approx(num1, num2)` 
 .
 



 Floats can be separated with underscores to be easier to read, like ints.
 


#### 

 See also
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-9 "Edit section: See also") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-9 "Edit section: See also") 

 ]



[Integers, whole numbers](#int) 




 See the official documentation for more:
 <https://docs.godotengine.org/en/stable/classes/class_float.html>





 String
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-10 "Edit section: String") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-10 "Edit section: String") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 A versatile data type that can be any length. They are a
 *string* 
 of characters. Hence the name "String". String may be inferred as a function's return value with
 `->
 
 String`
 .
 



*String* 
 s evaluate as
 `true` 
 in an if statements if not empty:
 



```
if "false":
  pass # This runs

```


 See the official documentation for more:
 <https://docs.godotengine.org/en/stable/classes/class_string.html>





 Array
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-11 "Edit section: Array") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-11 "Edit section: Array") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 An array is even more versatile than a
 [String](#String) 
 . It may be any length, and each value has a numerical index (of
 [int](#int) 
 ). An Array may be inferred as a function's return value with
 `->
 
 Array`
 .
 



 In an if statement
 *Array* 
 s evaluate as
 `false` 
 when empty:
 



```
if [false]:
  pass # This runs

if []:
  pass # This does not run

```


 Arrays are passed by reference rather than value. See
 [Dictionary](#Dictionary) 
 .
 



 See the official documentation for more:
 <https://docs.godotengine.org/en/stable/classes/class_array.html>
 ]
 




 Dictionary
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-12 "Edit section: Dictionary") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-12 "Edit section: Dictionary") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Dictionarys are
 *the most* 
 versatile data type in Godot, besides Objects themselves. Dictionary may be inferred as a function's return value with
 `->
 
 Dictionary`
 .
 



*Dictionary* 
 s evaluate as
 `true` 
 in an if statements if not empty:
 



```
if {"team 1": 0, "team 2": 0}:
  pass # This runs

```


 Every value is indexed with a value. You can use
 **any** 
 data type or Object you wish. As the value or key. FuncRefs and Nodes also count, but remember to keep that same FuncRef or Node (instead of using a different FuncRef for the same function). Even another Dictionary or Array can be used as a key or value.
 



 Dictionaries are passed as reference rather than value, meaning this is never true:
 



```
return {"red": Color.red} == {"red": Color.red} # False

```


 Although this is:
 



```
var dictionary={"red": Color.red}
return dictionary == dictionary # True

```


 This can be useful by saving the same Dictionary in multiple variables, then changing one of them changes them all. If you don't want this functionality, use
 `dictionary.
 
 duplicate
 
 (
 
 true
 
 )` 
 .
 



 To compare them, use
 
 hash
 
 ():
 



```
return hash({"red": Color.red}) == hash({"red": Color.red}) # True

```

#### 

 Indexing
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-13 "Edit section: Indexing") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-13 "Edit section: Indexing") 

 ]



 To get a value from a dictionary, you need to retrieve it with its
 *index* 
 .
 




```
var points = {"Hannah": 5, "Paul": 8, "Tim": 3, "Bob": 0}
var username = "Bob"

func update\_hud():
  $Label.text = "Score: " + String(points[username])

```



 So "Bob" has no points. So the label says "Score: 0".
 



 See the official documentation for more:
 <https://docs.godotengine.org/en/stable/classes/class_dictionary.html>





 Vector2
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-14 "Edit section: Vector2") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-14 "Edit section: Vector2") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 A
 *vector* 
 is a value with multiple
 [floats](#float) 
 . Vector2 is used for 2D positioning among other things. They are indexed at the end with:
 


1. ".x" or "[0]"
2. ".y" or "[1]"



 They are complex things, including many functions. Vector2 may be inferred as a function's return value with
 `->Vector2` 
 .
 



*Vector2* 
 s evaluate as
 `true` 
 in an if statements if at least one value is not equal to 0:
 




```
if Vector2(1, 0):
  pass # This runs

```



 See the official documentation for more:
 <https://docs.godotengine.org/en/stable/classes/class_vector2.html>





 Vector3
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-15 "Edit section: Vector3") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-15 "Edit section: Vector3") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 A vector is a value with multiple
 [floats](#float) 
 . A Vector3 has 3 numbers and used for 3D positional and rotational data, among other things. They are indexed at the end with:
 


1. ".x" or "[0]"
2. ".y" or "[1]"
3. ".z" or "[2]"



*Vector3* 
 s are complex things, having many functions. Vector3 may be inferred as a function's return value with
 `->Vector3` 
 .
 



*Vector3* 
 s evaluate as
 `true` 
 in an if statements if at least one value is not equal to 0:
 




```
if Vector3(1, 0, 0):
  pass # This runs

```



 See the official documentation for more:
 <https://docs.godotengine.org/en/stable/classes/class_vector3.html>





 Color
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-16 "Edit section: Color") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-16 "Edit section: Color") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Technically considered a vector, it contains 4 values:
 


1. ".r" - the red channel (E.g: 0 is no red, 1 is full red)
2. ".g"- the green channel
3. ".b" - the blue channel
4. ".a" - alpha (or transparency)



 Color may be inferred as a function's return value with
 `->Color` 
 .
 



*Color* 
 s evaluate as
 `true` 
 in an
 ["if" statements](/w/index.php?title=Guide_to_the_Godot_game_engine/If_statements&action=edit&redlink=1 "Guide to the Godot game engine/If statements (does not exist)") 
 if not black with no transparency (
 `Color(0, 0, 0, 1)` 
 is false):
 




```
 if Color(1, 1, 1):
    pass # This runs

```



 If
 `r` 
 ,
 `g` 
 and
 `b` 
 are 1, the color is white. If they are 0, the color is black. Know your color wheel! No color or all the colors!
 



 Now, this can be irritating sometimes. How do you quickly get basic colors like orange and yellow? Or common shades of red, green and blue?
 `Color.orange` 
 is a simple way to do so.
 



 All color constants:
 




|  |  |  |  |
| --- | --- | --- | --- |
| 

 aliceblue
 
 | 

 antiquewhite
 
 | 

 aqua
 
 | 

 aquamarine
 
 |
| 

 azure
 
 | 

 beige
 
 | 

 bisque
 
 | 

 black
 
 |
| 
 blanchedalmond
  | 
 blue
  | 
 blueviolet
  | 
 brown
  |
| 
 burlywood
  | 
 cadetblue
  | 
 chartreuse
  | 
 chocolate
  |
| 
 coral
  | 
 cornflower
  | 
 cornsilk
  | 
 crimson
  |
| 
 cyan
  | 
 darkblue
  | 
 darkcyan
  | 
 darkgoldenrod
  |
| 
 darkgray
  | 
 darkgreen
  | 
 darkkhaki
  | 
 darkmagenta
  |
| 
 darkolivegreen
  | 
 darkorange
  | 
 darkorchid
  | 
 darkred
  |
| 
 darksalmon
  | 
 darkseagreen
  | 
 darkslateblue
  | 
 darkslategray
  |
| 
 darkturquoise
  | 
 darkviolet
  | 
 deeppink
  | 
 deepskyblue
  |
| 
 dodgerblue
  | 
 firebrick
  | 
 florawhite
  | 
 forestgreen
  |
| 
 fuchsia
  | 
 gainsborow
  | 
 ghostwhite
  | 
 gold
  |
| 
 goldenrod
  | 
 gray
  | 
 green
  | 
 greenyellow
  |
| 
 honeydew
  | 
 hotpink
  | 
 indianred
  | 
 indigo
  |
| 
 ivory
  | 
 khaki
  | 
 lavender
  | 
 lavenderblush
  |
| 
 lawngreen
  | 
 lemonchiffon
  | 
 lightblue
  | 
 lightcoral
  |
| 
 lightcyan
  | 
 lightgoldenrod
  | 
 lightgray
  | 
 lightgreen
  |
| 
 lightpink
  | 
 lightsalmon
  | 
 lightseagreen
  | 
 lightskyblue
  |
| 
 lightslategray
  | 
 lightsteelblue
  | 
 lightyellow
  | 
 lime
  |
| 
 limegreen
  | 
 linen
  | 
 magenta
  | 
 maroon
  |
| 
 mediumaquamarine
  | 
 mediumblue
  | 
 mediumorchid
  | 
 mediumpurple
  |
| 
 mediumseagreen
  | 
 mediumslateblue
  | 
 mediumspringgreen
  | 
 mediumturquoise
  |
| 
 mediumvioletred
  | 
 midnightblue
  | 
 mintcream
  | 
 mistyrose
  |
| 
 moccasin
  | 
 navajowhite
  | 
 navyblue
  | 
 oldlace
  |
| 
 olive
  | 
 olivedrab
  | 
 orange
  | 
 orangered
  |
| 
 orchid
  | 
 palegoldenrod
  | 
 palegreen
  | 
 paleturquoise
  |
| 
 palevioletred
  | 
 papayawhip
  | 
 peachpuff
  | 
 peru
  |
| 
 pink
  | 
 plum
  | 
 powderblue
  | 
 purple
  |
| 
 rebeccapurple
  | 
 red
  | 
 rosybrown
  | 
 royalblue
  |
| 
 saddlebrown
  | 
 salmon
  | 
 sandybrown
  | 
 seagreen
  |
| 
 seashell
  | 
 sienna
  | 
 silver
  | 
 skyblue
  |
| 
 slateblue
  | 
 slategray
  | 
 snow
  | 
 springgreen
  |
| 
 steelblue
  | 
 tan
  | 
 teal
  | 
 thistle
  |
| 
 tomato
  | 
 transparent
  | 
 turquoise
  | 
 violet
  |
| 
 webgray
  | 
 webgreen
  | 
 webmaroon
  | 
 webpurple
  |
| 
 wheat
  | 
 white
  | 
 whitesmoke
  | 
 yellow
  |
| 
 yellowgreen
  | 
 dimgray
  |



 See the official documentation for more:
 <https://docs.godotengine.org/en/stable/classes/class_color.html>





 Basis
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-17 "Edit section: Basis") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-17 "Edit section: Basis") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 A Basis contains a 3x3 matrix for 3D position, rotation and scale of 3D objects. Basis may be inferred as a function's return value with
 `->Basis` 
 .
 



*Basis* 
 s evaluate as
 `true` 
 in an if statements if at least one of its Vector3s would also evaluate as true:
 




```
 if Basis(Vector3(1, 0, 0), Vector3(0, 0, 0), Vector3(0, 0, 0)):
    pass # This runs

```


#### 

 See also
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-18 "Edit section: See also") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-18 "Edit section: See also") 

 ]



[Matrices and transforms tutorial](https://docs.godotengine.org/en/latest/tutorials/math/matrices_and_transforms.html) 
 .
 



 See the official documentation for more:
 <https://docs.godotengine.org/en/stable/classes/class_basis.html>





 Transform2D
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-19 "Edit section: Transform2D") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-19 "Edit section: Transform2D") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 A
 *Transform2D* 
 is a 2x3 matrix used for 2D linear transformations. It can represent transformations such as translation, rotation or scaling. It consists of three
 [Vector2](#Vector2) 
 values: x, y and origin. Transform2D may be inferred as a function's return value with
 `->Transform2D` 
 .
 



*Transform2D* 
 s evaluate as
 `true` 
 in an if statements if at least one value is
 *not* 
 0:
 




```
if Transform2D(1, 0, 0, 1, 0, 0):
  pass # This runs

```



 See more:
 [The matrices and transforms tutorial](https://docs.godotengine.org/en/stable/tutorials/math/matrices_and_transforms.html) 
 .
 



 See the official documentation for more:
 <https://docs.godotengine.org/en/stable/classes/class_transform2d.html>





 Transform
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-20 "Edit section: Transform") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-20 "Edit section: Transform") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 A
 *Transform* 
 is a 3x4 matrix used for 3D linear transformations. It can represent transformations such as translation, rotation or scaling. It consists of a
 [Basis](#Basis) 
 (first 3
 [Vector3s](#Vector3) 
 ) and origin (last value). Transform may be inferred as a function's return value with
 `->Transform` 
 .
 



*Transform* 
 s evaluate as
 `true` 
 in an if statements if at least one value is
 *not* 
 0:
 




```
if Transform(1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0):
  pass # This runs

```



 See more:
 [The matrices and transforms tutorial](https://docs.godotengine.org/en/stable/tutorials/math/matrices_and_transforms.html) 
 and
 [the using Transforms tutorial](https://docs.godotengine.org/en/stable/3d/using_transforms.html) 
 .
 



 See the official documentation for more:
 <https://docs.godotengine.org/en/stable/classes/class_transform.html>







 Pool<type>Array
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&veaction=edit&section=T-21 "Edit section: Pool<type>Array") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types&action=edit&section=T-21 "Edit section: Pool<type>Array") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 For detailed information, please see
 [Array](#Array) 
 . PoolArrays are optimized versions of Array, but allow storing only
 *one* 
 variant type. They also don't contain certain functions, like
 `find()` 
 .
 



 PoolArrays are passed as value rather than reference:
 



```
var names = PoolStringArray(["Hannah", "Paul", "Bob"])
var reference_array = ["Hi"]

func \_ready():
  var names_copy = names
  names_copy.append("Sam")
  prints(names, names_copy) # Only the second one was changed

  var reference_array_copy = reference_array
  reference_array_copy.append("human")
  prints(reference_array) # Both Arrays were changed here

  var copy2 = reference_array.duplicate()
  copy2.append("I am a robot")
  prints(reference_array, copy2) # They are now both different

```


 As you can see, the Pool
 [String](#String) 
 Array does not keep the same values across all references, but the
 [Array](#Array) 
 does.
 



 Allowed types for Pool<type>Arrays are: int, float, string, real (bytes), color, vector2, and vector3. They may only store data types that match the type mentioned in the name, and are more optimized in terms of memory.
 



  





  

 So, you can add, rename, move and delete nodes in the editor. But how do you do it with code? This is such an important thing, yet it isn't obvious how to do it.
 




 Basic manipulation
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Manipulate_scene_tree&veaction=edit&section=T-1 "Edit section: Basic manipulation") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Manipulate_scene_tree&action=edit&section=T-1 "Edit section: Basic manipulation") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 This is how to create a bullet, add it to the scene, and delete it after 10 seconds:
 




 player.gd
 



```
extends KinematicBody2D

func \_physics\_process(delta):
  if Input.is\_action\_just\_pressed("shoot"):
    # Create bullet and add it as a child of its parent:
    var bullet=preload("res://bullet.tscn").instance()
    get\_parent().add\_child(bullet)

```



  






 bullet.gd
 



```
extends Area2D

var timer:=0.0
var dir = 1 # Right = 1, Left = -1

func \_physics\_process(delta):
  # Increase the timer
  timer+=delta
  if timer >= 10:
    # Ten seconds have passed - delete on next frame
    queue\_free()
  position.x+=(5 \* dir) \*delta

```



**queue\_free()** 
 : Deletes a node on the next frame, or after the node's script has finished.
 



**add\_child(node: Node)** 
 : Adds
 `node` 
 as a child of the node that the
 `add_child()` 
 was called on, providing
 `node` 
 doesn't already have a parent.
 




 Advanced control
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Manipulate_scene_tree&veaction=edit&section=T-2 "Edit section: Advanced control") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Programming/GDScript/Manipulate_scene_tree&action=edit&section=T-2 "Edit section: Advanced control") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 How do you close your game? How do you pause/unpause your game (the correct way)?
 




```
# Remember: call "get\_tree()" before calling any of these

# Quit the game/app
get\_tree().quit()

# Pause
get\_tree().paused=true # Or "false" to unpause
# Pausing stops "\_physics\_process()".
# It also stops "\_process()" and "\*\_input()" if pause mode is not "pause\_mode\_process" for the node.

```



  





  

 Making new nodes can be easy or hard, depending on the planned node. Some will just require this guide, some will benefit from being introduced with an entire
 [plugin](/wiki/Guide_to_the_Godot_game_engine/Plugins "Guide to the Godot game engine/Plugins") 
 . This guide will assume the former.
 



 Write this code:
 




```
tool
extends Node
class\_name TestNode

export var message = "Hello world!" setget set\_message

func \_ready():
  print(message)

func set\_message(value):
  if value and value is String:
    message = value

```



 The
 `setget` 
 tells the engine to run
 `set_message` 
 whenever you try to change
 `message` 
 . In this particular example, you cannot empty it. Because of the
 ``[tool](/wiki/Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords#tool "Guide to the Godot game engine/Programming/GDScript/Keywords")``
 , this runs even if you change the value in the inspector.
 



 The
 `class_name` 
 tells the engine to add the script to the add node popup, add it to the auto-correction list and to allow you to instance it with
 `TestNode.new()` 
 .
 



  






 Resources and importing
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=4 "Edit section: Resources and importing") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=4 "Edit section: Resources and importing") 

 ]
====================================================================================================================================================================================================================================================================================================================================



 In Godot, a
 
[Resource](https://docs.godotengine.org/en/stable/classes/class_resource.html) 

 is an object that stores data, like
 
[Translation](https://docs.godotengine.org/en/stable/classes/class_translation.html) 

 and
 
[Texture](https://docs.godotengine.org/en/stable/classes/class_texture.html) 

 . They are reference-counted, which means when they are no-longer used, they will automatically delete themselves, freeing memory.
 




 Making resources
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Resources_and_importing&veaction=edit&section=T-1 "Edit section: Making resources") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Resources_and_importing&action=edit&section=T-1 "Edit section: Making resources") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 To make a resource, you need to first find something that will use it. Create a new scene with a Sprite2D. You can do this by pressing "Other Node" after making a new scene.
 



 Select it and look for its
 `Texture` 
 property. Click
 `[empty]` 
 and press "New
 
[GradientTexture](https://docs.godotengine.org/en/stable/classes/class_gradienttexture.html) 

 ". Press the
 `Gradient` 
 property (you may need to click on the GradientTexture) and press
 `New
 
[Gradient](https://docs.godotengine.org/en/stable/classes/class_gradient.html)`
 from the drop-down menu. Click on this Gradient. Click the black rectangle. A blank area a little bit to the right will turn black. Click it and a popup that allows you to choose a color will appear. Choose a color. Do the same to the white rectangle. You can add more points and colours by pressing in-between any two of these rectangles. Congratulations! You made your first resource!
 



 Games usually show art, not just square color gradients. For this, download an art program. Microsoft Paint will do for now if you use Windows, but it isn't so great when you want a transparent image (say, non-squares), so you might want a better program soon. I use
 *Piskel* 
 . Alternatively, you could download the Godot plugin that adds an image editor. It can be found in the Asset Library (
 `AssetLib` 
 ) and enabled in Project->ProjectSettings->Plugins. I forgot the name of the image editor, however, so you might need to search around for it.
 



 Make anything at all. A diamond, a person, a car, or just a square. Save it into your project's folder. Go back to Godot, find the file and drag it over to the
 `Texture` 
 property of the Sprite2D in the Inspector. Congratulations! You just imported - and used - your first file!
 






 So, wait, what did I just do?
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Resources_and_importing&veaction=edit&section=T-2 "Edit section: So, wait, what did I just do?") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Resources_and_importing&action=edit&section=T-2 "Edit section: So, wait, what did I just do?") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Importing files into your game is essential for game development. In Godot, you don't need to save the file or image into some kind of database to become usable. Just plop it down into your project's folder. Simple.
 



 If you want to fine-tweak an imported file,
 **do not use the Inspector!** 
 Changes made to imported resources in the Inspector won't save. Instead, double click your file, above the
 `Scene` 
 dock is an
 `Import` 
 tab. Press the
 `Import` 
 tab button to show it. You will see a large or small menu depending on the file selected. For Texture (".png", ".svg", ".bmp" file extensions), you will see things like compression settings or process settings. Under
 `Flags` 
 , uncheck
 `Filter` 
 , then press
 *Reimport* 
 . See any differences from your old image?
 



`Filter` 
 makes your image look higher resolution than it actually is by making it blurry. Turning it off makes an image more pixelated.
 



 Check
 `Mipmaps` 
 if your image will be used in the 3D world, or show in many different sizes, to increase visual quality.
 



`Fix Alpha Border` 
 makes your transparent images look normal when using filter or compression methods other than Lossless.
 



`Svg Scale` 
 makes
 `.svg` 
 files larger, scaled or higher resolution if you increase the number, with the opposite effect if you decrease the number.
 



 What compression modes are available? And what do they do?
 





 Compression modes and their pros and cons
 | 
 Name
  | 
 Quality loss
  | 
 Loading time
  | 
 Performance
  | 
 Disk size
  |
| --- | --- | --- | --- | --- |
| 
 Lossless (default)
  | 
 None
  | 
 Slow
  | 
 Average
  | 
 Medium
  |
| 
 Lossy
  | 
 High
  | 
 Slow
  | 
 Average
  | 
 Smallest
  |
| 
 Video RAM
  | 
 Medium to High
  | 
 Fastest
  | 
 Fastest
  | 
 Small
  |
| 
 Uncompressed
  | 
 None
  | 
 Medium
  | 
 Average
  | 
 Largest
  |



 The compression format you use depends on many things. In general, use
 `Video RAM` 
 for large textures or textures you don't see up close in-game and
 `Lossless` 
 for small textures in 2D games.
 



 Texture artifacts are common in higher quality loss. Make sure to check your texture after re-import that it looks the same or that the quality loss is unnoticeable.
 



 Sometimes you intend to lower the quality to break up a texture that uses flat planes of color if you are a less than skilful artist. Those artifacts can break up solid blocks of color, making it easier to make decent game art. However, consider becoming more skilled at art, or getting an artist,since this is not foolproof.
 




 Making your own resources
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Resources_and_importing&veaction=edit&section=T-3 "Edit section: Making your own resources") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Resources_and_importing&action=edit&section=T-3 "Edit section: Making your own resources") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



[![](//upload.wikimedia.org/wikipedia/commons/thumb/7/77/Godot_Resource_Example.png/300px-Godot_Resource_Example.png)](/wiki/File:Godot_Resource_Example.png)

 This is an example of how you can use resources in Godot 4 to create flexible and robust data storage systems. However, no functionality should be in the resource, except basic calculations based on the variables already in the resource.
 


 You can make your own resource scripts. All they should do is hold information, they should not do any logic. For example, you can use resources to hold data for how an item works. It could store the name of the item, the image, etc. In Godot 4, it is much easier to separate different export variables in groups and drop-down menus.
 



 In Godot 3.x, resources are mostly the same, but it is a bit more difficult to create organised groups like in Godot 4.
 



*External links:* 



* [How to use export variables in Godot 4.x](https://docs.godotengine.org/en/stable/tutorials/scripting/gdscript/gdscript_exports.html)
* [How and when to avoid using Nodes for everything](https://docs.godotengine.org/en/3.5/tutorials/best_practices/node_alternatives.html)




 What you have learned
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Resources_and_importing&veaction=edit&section=T-4 "Edit section: What you have learned") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Resources_and_importing&action=edit&section=T-4 "Edit section: What you have learned") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


1. What importing is in Godot.
2. How to make a resource.
3. How to change the settings for an imported file.



  






 Signals and methods
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=5 "Edit section: Signals and methods") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=5 "Edit section: Signals and methods") 

 ]
========================================================================================================================================================================================================================================================================================================================



 Many Godot users will say to you "signal up, call down" if you ask for tips with coding. Just what does this mean?
 




 Signals
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Signals_and_methods&veaction=edit&section=T-1 "Edit section: Signals") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Signals_and_methods&action=edit&section=T-1 "Edit section: Signals") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Select a node from the Scene dock. Press the "Node" tab next to the inspector. A list will appear. These are
 *signals* 
 .
 



 Create a new scene. Press User Interface. Save it as
 `Signal test.tscn` 
 . Add two nodes: a Button and a Label, both as children of the Control. Use the
 `Layout` 
 button to center the Button to the screen. Set the
 `Text` 
 property to
 `Press Me` 
 in the inspector.
 



 Now add a script to the Control root node (the first one). Select the Button. Open the Node dock, and double click "button\_up()". A popup will appear with your scene root (the Control node) selected. A text edit should say
 `_on_Button_button_up` 
 . Press "Connect".
 



 This will create the code
 



```
func \_on\_Button\_button\_up():
  pass # Replace with function body.

```


 This function will be called when the signal
 `button_up` 
 is emitted. Add the code
 `print("You pressed me!")` 
 to the function. You may remove the
 `pass # Replace with function body.` 
 if you wish.
 



 Run the scene by pressing F6, and grant that button's wish!
 



 You can make your own signals with
 `signal <signal_name> <optional:(argument1: type, argument2: type, ect)>` 
 in GDScript. To emit it in a function:
 `emit\_signal
 
 (
 
 <"signal\_name">
 
 , <argument1>,<argument2 ect.>)` 
 .
 




 Calling
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Signals_and_methods&veaction=edit&section=T-2 "Edit section: Calling") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Signals_and_methods&action=edit&section=T-2 "Edit section: Calling") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Just as important as signals,
 *calling* 
 allows many things to happen. Add
 `$Label.text = "You pressed me!"` 
 to the function. This is actually setting a variable, but it's still considered calling, as setting a variable uses a setter function. More on those in another chapter.
 



 The
 `$path` 
 is a short hand for the
 `get_node(path)` 
 function. The
 `Label` 
 is the path argument. This allows direct manipulation of the child node of that name.
 



 These are called
 
[NodePath](https://docs.godotengine.org/en/stable/classes/class_nodepath.html) 

 s. They work a bit like file paths, and this is a common example:
 `$weapon/art
 
 .texture =
 
 preload
 
 (
 
 "res://assets/weapons/upgraded\_sword.png"
 
 )` 
 , and can also be relative, like (called in
 `res://game/player.gd` 
 )
 `/weapons/upgraaded_sword.tscn` 
 .
 



 A global
 `get_node` 
 looks like
 `/root/game/player/weapon/art` 
 .
 



  






 Signal up and call down
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Signals_and_methods&veaction=edit&section=T-3 "Edit section: Signal up and call down") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Signals_and_methods&action=edit&section=T-3 "Edit section: Signal up and call down") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 It means, if you are calling methods on another node, use signals for calling parents (to decrease code complexity) and use methods when calling children (to increase readability and freedom).
 




 What you have learned
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Signals_and_methods&veaction=edit&section=T-4 "Edit section: What you have learned") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Signals_and_methods&action=edit&section=T-4 "Edit section: What you have learned") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


1. How to get a child node.
2. How to connect a signal.
3. How to set a property of another node (With the ".". You can use it to call their functions too!)



  






 Your first game
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=6 "Edit section: Your first game") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=6 "Edit section: Your first game") 

 ]
============================================================================================================================================================================================================================================================================================================




 Creating a blank project
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Your_first_game&veaction=edit&section=T-1 "Edit section: Creating a blank project") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Your_first_game&action=edit&section=T-1 "Edit section: Creating a blank project") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 The basics of making your very first game (that has nothing in it) are placed below:
 


1. Open Godot. Press "New Project":
 


[![](//upload.wikimedia.org/wikipedia/commons/thumb/e/ea/Godot-new-game-1.png/80px-Godot-new-game-1.png)](/wiki/File:Godot-new-game-1.png)
2. Choose a name for the game:
 


[![](//upload.wikimedia.org/wikipedia/commons/thumb/5/50/Godot-new-game-2.png/220px-Godot-new-game-2.png)](/wiki/File:Godot-new-game-2.png)
3. Press "Create Folder", then "Create & Edit":
 


[![](//upload.wikimedia.org/wikipedia/commons/thumb/2/28/Godot-new-game-3.png/220px-Godot-new-game-3.png)](/wiki/File:Godot-new-game-3.png)




 First game tutorials
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Your_first_game&veaction=edit&section=T-2 "Edit section: First game tutorials") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Your_first_game&action=edit&section=T-2 "Edit section: First game tutorials") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 This book will not contain full game tutorials, as they have already written (and are more likely to be up-to-date). Instead, use the links below.
 


* [Your first 2D game](https://docs.godotengine.org/en/latest/getting_started/first_2d_game/index.html)


* [Your first 3D game](https://docs.godotengine.org/en/latest/getting_started/first_3d_game/index.html) 
 - Note: it's a good idea to make a 2D game first, as making use of the extra dimension makes it four times harder to make games.



  






 Debugging
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=7 "Edit section: Debugging") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=7 "Edit section: Debugging") 

 ]
==========================================================================================================================================================================================================================================================================================




 The debugger dock
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&veaction=edit&section=T-1 "Edit section: The debugger dock") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&action=edit&section=T-1 "Edit section: The debugger dock") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 The debugger dock is the deafult and best way to debug. If a red circle is shown next to it, there is an error to read. If there is a yellow circle, you have a new warning to read.
 



 When you open it, you have several tabs:
 


### 

 Debugger
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&veaction=edit&section=T-2 "Edit section: Debugger") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&action=edit&section=T-2 "Edit section: Debugger") 

 ]



 This is the tab opened when a script error occurs. It is not shown for a fatal error, instead the game just crashes. In this case, see
 [below](#Catching_fatal_errors) 
 .
 



 It shows the "stack frames". This is a
 *stack* 
 of function calls, allowing you to find the source of the error. This is invaluable. To the right of the stack frames show all the variables the script can access, and what they are set to. Above that is a few buttons:
 


* Skip Breakpoints: stops the game being paused on breakpoints until this is repressed.
* Copy Error: copy the error to your clipboard.
* Step Into: runs the next expression. Enters indented blocks that it would enter anyway.
* Step Over: runs the next expression. Skips indented blocks.
* Break: pauses the game as if a breakpoint was used.
* Continue: resumes the game.


### 

 Errors
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&veaction=edit&section=T-3 "Edit section: Errors") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&action=edit&section=T-3 "Edit section: Errors") 

 ]



 Allows you to see every fatal and non-fatal error and warning that you encountered during the running game. There are a few buttons:
 


* Clear: empties this list.
* Expand All: expands every error to see more information.
* Collapse All: collapses every error to see less information.



 Each error may be pressed to go to the script and line the error came from. Double click it to expand or collapse. You can also click the arrow to expand/collapse. Expanding it shows the error and the code stack.
 


### 

 Profiler
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&veaction=edit&section=T-4 "Edit section: Profiler") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&action=edit&section=T-4 "Edit section: Profiler") 

 ]



 This allows you to record function call count and how much frame time is used. It is priceless when optimizing your game, and can be used for debugging too.
 



 To begin, you must press
 *start* 
 . On the right, a chart will generate. Higher up lines means that something takes up a large amount of the game's processing. They should be optimised at some point, as much as possible.
 



 To check what is slowing the game down the most, click in the chart in the area with a high peak, and scroll down the left. You will see how many seconds each function call costs, and how many times it was called. If you want a percentage, click on the
 `Mesure:` 
 value, and choose
 `Frame %` 
 .
 



 The
 `Time:` 
 has two values:
 


* Inclusive: shows the frame time or percentage of all calls to a function
* Self: shows the single largest frame time or percentage during a single call.


### 

 Network Profiler
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&veaction=edit&section=T-5 "Edit section: Network Profiler") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&action=edit&section=T-5 "Edit section: Network Profiler") 

 ]



 This allows you to see how much internet is being used by each node. Both how much used in sending, and how much used in reciving.
 


### 

 Monitors
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&veaction=edit&section=T-6 "Edit section: Monitors") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&action=edit&section=T-6 "Edit section: Monitors") 

 ]



 This allows you to check performance in a graph. Most useful options to show are:
 


* Time:
	+ FPS: Frames per second.
	+ Process: The amount of time spent every idle frame.
	+ Physics Process: The amount of time spent in the physics frame.
* Memory:
	+ Static: How much memory is used for unchanging things.
	+ Dynamic: How much memory used is always changing or code being ran.
	+ Static Max: The maximum static memory reached.
	+ Dynamic Max: The maximum dynamic memory reached.
	+ Msg Buf Max: The memory used by output, including errors and warnings.
* Object
	+ Objects: The total number of
	 
	[Object](https://docs.godotengine.org/en/stable/classes/class_object.html) 
	
	 s there are.
	+ Resources: The amount of
	 
	[Resource](https://docs.godotengine.org/en/stable/classes/class_resource.html) 
	
	 s that exist.
	+ Nodes: The number of Nodes that exist.
	+ Orphan Nodes: The number of Nodes that are not inside the
	 
	[SceneTree](https://docs.godotengine.org/en/stable/classes/class_scenetree.html) 
	
	 . In general, this should always be zero. Try to use resources or an object if it is intentional. Otherwise you should free it if possible, by calling
	 `free
	 
	 ()` 
	 on that node when you are finished with it.


### 

 Video RAM
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&veaction=edit&section=T-7 "Edit section: Video RAM") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&action=edit&section=T-7 "Edit section: Video RAM") 

 ]



 This allows you to see how many images are using up memory, and which ones.
 


### 

 Misc
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&veaction=edit&section=T-8 "Edit section: Misc") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&action=edit&section=T-8 "Edit section: Misc") 

 ]



 This allows you to see the Control node last activated before the game closed, and its node path.
 




 Script debugging
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&veaction=edit&section=T-9 "Edit section: Script debugging") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&action=edit&section=T-9 "Edit section: Script debugging") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 With the script editor open, press the "Debug" button at the top. It is close to "File" and "Search".
 



 You have a few options explained above: Step into, step over, break and continue.
 



 You also have two other options:
 


* Keep Debugger Open: having a running game slows down the editor, so closing it is a must. But closing the game also closes the debugger. Check this option to keep it open when you close your game.
* Debug With External Editor: allows you to use another editor to debug with.




 Debug options
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&veaction=edit&section=T-10 "Edit section: Debug options") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&action=edit&section=T-10 "Edit section: Debug options") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 At the very top of the screen, press the "Debug" button. It appears near "Scene" and "Project". You have the following options:
 


* Deploy with Remote Debug: when exporting, the resulting executable will attempt to connect with the computer to be debugged.
* Small Deploy with Network FS: exporting produces a minimal executable. The file system is provided over the internet.
* Visible Collision Shapes: whether or not to show collision shapes.
* Visible Navigation: whether or not navigation meshes and polygons are visible in the running game.
* Sync Scene Changes: if checked, changes to a scene is replicated to the running game.
* Sync Script Changes: if checked, changes to a script will cause it to be reloaded in the running game.




 Debugging editor plugins
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&veaction=edit&section=T-11 "Edit section: Debugging editor plugins") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&action=edit&section=T-11 "Edit section: Debugging editor plugins") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 The best way to debug an editor plugin is to keep an eye on the output dock. If that doesn't help, adding temporary
 `[print
 
 ()](/wiki/Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords#print "Guide to the Godot game engine/Programming/GDScript/Keywords")`
 calls can help you to see what is called and the values of variables.
 




 Catching fatal errors
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&veaction=edit&section=T-12 "Edit section: Catching fatal errors") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Debugging&action=edit&section=T-12 "Edit section: Catching fatal errors") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 A fatal error is a crash that doesn't throw an error message. Its usually caused by an engine bug, and sometimes has nothing to do with your code. You can either try a different way of doing what the code was doing when it crashed, or report a bug report
 [here](https://github.com/godotengine/godot/issues) 
 . You may need to send a copy of the code that was running when it happened.
 



 Note exactly what you were doing when it happened. Try to find out what code was running, and add breakpoints everywhere around that area. If it doesn't crash this time, remove the breakpoints again. If it still doesn't crash when playing, make certain you are doing exactly what you wrote down.
 



 If you still can't reproduce the crash, assume it is not an issue you can fix, and is an editor bug. Consider
 [sending a bug report](https://github.com/godotengine/godot/issues) 
 . This may require giving a sample of the code used in the general area of where you think the issue is, and you may need to give the exact instructions of what you were doing. Consider also uploading any helpful log files.
 



  






 Input
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=8 "Edit section: Input") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=8 "Edit section: Input") 

 ]
==============================================================================================================================================================================================================================================================================



 In every game, you are able to press a button or tap on the screen for something to happen. This is called
 **reacting to input** 
 . There are two ways to do it: using input maps and manually.
 




 Input map
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&veaction=edit&section=T-1 "Edit section: Input map") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&action=edit&section=T-1 "Edit section: Input map") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Go to your Project Settings at
 **Project -> Project Settings...** 
 and click on the
 **Input Map** 
 tab. You will get a list of input actions, like "ui\_select". These are the default ones, and can be edited, but
 *not* 
 removed.
 



 You
 *can* 
 - and should - make your own, however. After where it says "Action:", type a name for an action, like "shoot", or "move\_foward". Press the "Add" button next to it. This will create your action.
 



 You will notice that you have no input events associated with it. Press the "+" button next to your new action. You will see these options:
 


1. Key: Allows you to link any keyboard button.
2. Joy Button: Allows you to link a controller button.
3. Joy Axis: Allows you to link a controller joy-stick movement.
4. Mouse Button: Allows you to link a mouse button.



  





 For touch screen and mouse movement, please see the
 [manual input detection](/wiki/Guide_to_the_Godot_game_engine/Input#Manual_input_detection "Guide to the Godot game engine/Input") 
 section mentioned below.
 



 There are several ways to detect whether or not they are pressed, and the method you choose depends on what the action is for. The functions below return a boolean, unless otherwise stated, and should be put inside "if" or "while" statements.
 




| 
 Function
  | 
 What it's for
  |
| --- | --- |
| 
 is\_action\_pressed
  | 
 Actions that can be held down, like moving, or shooting an automatic weapon
  |
| 
 is\_action\_just\_presed
  | 
 Actions that only run the moment the button is pressed, and cannot run again until the action is released.
  |
| 
 get\_action\_strength
  | 
 Movement, and only for joy sticks (for precise control). Returns a float, 1 = full joy tilt or pressed and 0 = no tilt or not pressed.
  |
| 
 is\_action\_just\_released
  | 
 Actions that run only when released (Button unpressed, for example)
  |



 The above methods are all called on the
 
 Input
 
 singleton. They all accept a single String argument.
 



```
if Input.is\_action\_just\_pressed("shoot"):
  pass # Add shooting code here

```


 The String argument
 *must* 
 be the name of an input action defined in the input map.
 




 Manual input detection
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&veaction=edit&section=T-2 "Edit section: Manual input detection") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&action=edit&section=T-2 "Edit section: Manual input detection") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Let's say that you want to detect mouse movement or touch screen events, or that the input map won't work because you need input for a tool that you can't guarantee the user of the tool (or yourself) will create the input event.
 



 This is when you need
 *manual* 
 input detection. This is like using
 [servers](/w/index.php?title=Guide_to_the_Godot_game_engine/Servers&action=edit&redlink=1 "Guide to the Godot game engine/Servers (does not exist)") 
 . Manual input detection is a low-level equivalent to the input map that is more complex but gives more power.
 



 The below code moves a 2D sprite when you move your mouse, and ignores all other input.
 



```
extends Sprite2D

func \_input(event):
  if event is InputEventMouseMotion:
    position += event.relative

```


 The below code creates a simple button.
 `\_gui\_input
 
 ()` 
 is available only to Control derived nodes and runs if focused and you press a key, you pressed it with the mouse or the mouse moves over it.
 



```
extends Control
signal button_up
signal button_down

var pressed = false

func \_gui\_input(event):
  if event is InputEventMouseButton and event.button_index == BUTTON_LEFT:
    if event.pressed:
      get\_tree().set\_input\_as\_handled()
      emit\_signal("button\_down")
      pressed = true
    elif not event.pressed:
      if pressed:
        emit\_signal("button\_up")
      pressed = false

```


 The
 `get\_tree
 
 ().
 
 set\_input\_as\_handled
 
 ()` 
 makes sure other
 `\_gui\_input
 
 ()` 
 and
 `\_unhandled\_input
 
 ()` 
 are not called.
 



 There are many input events. They are as follows:
 


* InputEventMouse:
	+ InputEventMouseButton: Emitted when you click a mouse button. Read with: button\_index (BUTTON\_\* constants), pressed.
	+ InputEventMouseMotion: Emitted when you move the mouse. Read with: relative (how much the mouse moved since the last call to input), position (the mouse's new position relative to the top-left of the game window - or the node in "\_gui\_input" calls).
* InputEventKey: Emitted when you press a button on the keyboard. Read with: button\_index (KEY\_\* constants), pressed, echo (if true, the button is being held down).
* InputEventScreen:
	+ InputEventScreenTouch: Emitted when you tap the screen. Read with: position (the position you tapped on the screen), pressed (if false, you are untapping the screen).
	+ InputEventScreenDrag: Emitted when you drag on the screen. Read with: position (new position), relative (how much the finger moved since the last input call), fingers.
* InputEventJoy:
	+ InputEventJoyButton: Emitted for controller button presses. Read with: pressed, button\_index (JOY\_\* constants).
	+ InputEventJoyMotion: Emitted for moving the joy stick. Read with: position, relative.



 See more:
 [The InputEvent tutorial](https://docs.godotengine.org/en/stable/tutorials/inputs/inputevent.html) 
 .
 




 Input singleton
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&veaction=edit&section=T-3 "Edit section: Input singleton") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&action=edit&section=T-3 "Edit section: Input singleton") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 So reading input is
 *very* 
 fun. However, there are a few more well used methods of input. Try to think about it before you read on. What are they?
 



 There are more things besides when using the input singleton, and this section will explain in-depth on what can be achieved and how.
 


### 

 Motion controls
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&veaction=edit&section=T-4 "Edit section: Motion controls") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&action=edit&section=T-4 "Edit section: Motion controls") 

 ]



 Motion controls are in many popular games, particularly VR and/or AR games, to look around.
 



```
func \_process():
  # Assume camera\_pivot is a Spatial with a child Camera3D node.
 # The gyroscope only works when exported to Android.
  $camera\_pivot.rotation += Input.get\_gyroscope()
  # The accelerometer is only available when exported to mobile.
 # This makes you move the camera when you move the device (Not when you rotate it)
  $camera\_pivot.rotation += Input.get\_accelerometer()

```


 This is only for "rotational" motion detecting.
 


### 

 Vibration
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&veaction=edit&section=T-5 "Edit section: Vibration") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&action=edit&section=T-5 "Edit section: Vibration") 

 ]



 Many popular games include vibration. You can call the below when the player is hit:
 



```
Input.vibrate\_handheld(100)
Input.start\_joy\_vibration(0, .5, .4, 1.0)

```


 This will vibrate a controller or mobile device for 1 second.
 




 InputMap singleton
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&veaction=edit&section=T-6 "Edit section: InputMap singleton") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&action=edit&section=T-6 "Edit section: InputMap singleton") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 The InputMap allows creating input actions via code. This is good in games where the player can change their controls.
 



 See
 [here](https://docs.godotengine.org/en/stable/tutorials/inputs/inputevent.html#inputmap) 
 for the rundown of InputMap.
 



 The following code creates a shoot action which corresponds to pressing the spacebar.
 



```
extends Node

func \_ready():
  InputMap.add\_action("shoot")
  InputMap.action\_add\_event("shoot", create\_key\_action(KEY_SPACE))

func create\_key\_action(key) -> InputEventKey:
  var input = InputEventKey.new()
  input.pressed = true
  input.scancode = key
  return input

```


 It can be any input event, not just
 
 InputEventKey
 
 .
 



 See the "faking" input section below for more information on creating
 
 InputEvents
 
 .
 



 Other useful methods:
 


1. load\_from\_globals
 
 (): Resets actions to those set in ProjectSettings.
2. has\_action
 
 (action:
 
 String
 
 ): Returns true if the action exists.
3. action\_erase\_events
 
 (action:
 
 String
 
 ): Clears the action so there are no associated events.
4. erase\_action
 
 (action:
 
 String
 
 ): Erases the action.



 As always, this does not list them all. Just a few of them.
 




 Audio input
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&veaction=edit&section=T-7 "Edit section: Audio input") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&action=edit&section=T-7 "Edit section: Audio input") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 To record audio, you need to do 2 things:
 


1. Press "Audio" at the bottom of the screen, and press "New Bus". Rename it "Microphone" and click "Add Effect". Press "Record" in the dropdown menu that appears.
2. Create a new
 
[AudioStreamPlayer](https://docs.godotengine.org/en/stable/classes/class_audiostreamplayer.html) 

 node for your scene. Click on the
 *Stream* 
 value in the Inspector. Choose
 **New AudioStreamMicrophone** 
 from the dropdown menu that appears. Set the "Bus" property to "Microphone". Whenever you want to record audio in-game, just turn the "Playing" value to true.



 Reading audio for stuff like voice recognition
 *can* 
 be done, but it is not easy, and is outside the scope of this book (and outside the knowledge of the author).
 






 "Faking" input
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&veaction=edit&section=T-8 "Edit section: \"Faking\" input") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&action=edit&section=T-8 "Edit section: \"Faking\" input") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 So, you decided that you want to change the InputMap at runtime? But how do you do that?
 



 Godot has several powerful classes that make input detection easier and faking it possible.
 



 See more:
 [The InputEvent tutorial](https://docs.godotengine.org/en/stable/tutorials/inputs/inputevent.html) 
 .
 


### 

 InputEventKey
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&veaction=edit&section=T-9 "Edit section: InputEventKey") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&action=edit&section=T-9 "Edit section: InputEventKey") 

 ]



 InputEventKey is for detecting keyboard button presses and releases.
 



 The below code allows you to shoot with the A key:
 



```
extends Node

func shoot\_with\_a():
  var input = InputEventKey.new()
  input.pressed = true
  input.scancode = KEY_A
  InputMap.action\_erase\_events("shoot")
  InputMap.action\_add\_event("shoot", input)

```


 The "Input.event\_erase\_actions" clears all actions for the event specified. In this case, the space-bar will no longer make you shoot.
 



 Any key can be specified, though it may not be obvious how to do so.
 





 Key constants
 | 
 Constant
  | 
 About
  |
| --- | --- |
| 
 KEY\_<letter>
  | 
 Letter keys
  |
| 
 KEY\_<number>
  | 
 Number keys
  |
| 
 KEY\_KP\_MULTIPLY
  | 
 The keypad
 **\*** 
 key
  |
| 
 KEY\_KP\_DIVIDE
  | 
 The keypad
 **/** 
 key
  |
| 
 KEY\_KP\_SUBTRACT
  | 
 The keypad
 **-** 
 key
  |
| 
 KEY\_KP\_ADD
  | 
 The keypad
 **+** 
 key
  |
| 
 KEY\_KP\_ENTER
  | 
 The keypad
 **Enter** 
 key
  |
| 
 KEY\_KP\_PERIOD
  | 
 The keypad
 **.** 
 key
  |
| 
 KEY\_SPACE
  | 
 The
 **Space** 
 key
  |
| 
 KEY\_ENTER
  | 
 The
 **Enter** 
 key
  |
| 
 KEY\_PLUS
  | 
 The
 **+** 
 key
  |
| 
 KEY\_MINUS
  | 
 The
 **-** 
 key
  |
| 
 KEY\_EQUALS
  | 
 The
 **=** 
 key
  |
| 
 KEY\_QUESTION
  | 
 The
 **?** 
 key
  |
| 
 KEY\_EXCLAIM
  | 
 The
 **!** 
 key
  |
| 
 KEY\_QUOTEDBL
  | 
 The
 **"** 
 key
  |
| 
 KEY\_NUMBERSIGN
  | 
 The
 **#** 
 key
  |
| 
 KEY\_DOLLAR
  | 
 The
 **$** 
 key
  |
| 
 KEY\_PERCENT
  | 
 The
 **%** 
 key
  |
| 
 KEY\_AMPERSAND
  | 
 The
 **&** 
 key
  |
| 
 KEY\_APOSTROPHE
  | 
 The
 **'** 
 key
  |
| 
 KEY\_PARENLEFT
  | 
 The
 **(** 
 key
  |
| 
 KEY\_PARENRIGHT
  | 
 The
 **)** 
 key
  |
| 
 KEY\_AT
  | 
 The
 **@** 
 key
  |
| 
 KEY\_COLON
  | 
 The
 **:** 
 key
  |
| 
 KEY\_SEMICOLON
  | 
 The
 **;** 
 key
  |
| 
 KEY\_GREATER
  | 
 The
 **>** 
 key
  |
| 
 KEY\_LESS
  | 
 The
 **<** 
 key
  |
| 
 KEY\_BRACKETLEFT
  | 
 The
 **[** 
 key
  |
| 
 KEY\_BRACKETRIGHT
  | 
 The
 **]** 
 key
  |
| 
 KEY\_BACKSLASH
  | 
 The
 **\** 
 key
  |
| 
 KEY\_ASCIICIRCUM
  | 
 The
 **^** 
 key
  |
| 
 KEY\_UNDERSCORE
  | 
 The
 **\_** 
 key
  |
| 
 KEY\_QUOTELEFT
  | 
 The
 **`** 
 key
  |
| 
 KEY\_BRACELEFT
  | 
 The
 **{** 
 key
  |
| 
 KEY\_BRACERIGHT
  | 
 The
 **}** 
 key
  |
| 
 KEY\_BAR
  | 
 The
 **|** 
 key
  |
| 
 KEY\_ASCIITIDLE
  | 
 The
 **~** 
 key
  |
| 
 KEY\_STERLING
  | 
 The
 **£** 
 key
  |
| 
 KEY\_CENT
  | 
 The
 **¢** 
 key
  |
| 
 KEY\_YEN
  | 
 The
 **¥** 
 key
  |
| 
 KEY\_COPYRIGHT
  | 
 The
 **©** 
 key
  |
| 
 KEY\_REGISTERED
  | 
 The
 **®** 
 key
  |
| 
 KEY\_UP
  | 
 The
 **Up** 
 arrow key
  |
| 
 KEY\_DOWN
  | 
 The
 **Down** 
 arrow key
  |
| 
 KEY\_LEFT
  | 
 The
 **Left** 
 arrow key
  |
| 
 KEY\_RIGHT
  | 
 The
 **Right** 
 arrow key
  |
| 
 KEY\_TAB
  | 
 The
 **Tab** 
 key
  |
| 
 KEY\_BACKTAB
  | 
 The
 **Shift** 
 +
 **Tab** 
 keys pressed together
  |
| 
 KEY\_ESCAPE
  | 
 The
 **Esc** 
 key
  |
| 
 KEY\_DELETE
  | 
 The
 **Delete** 
 key
  |
| 
 KEY\_INSERT
  | 
 The
 **Insert** 
 key
  |
| 
 KEY\_BACK
  | 
 The
 **Backspace** 
 key
  |
| 
 KEY\_SHIFT
  | 
 The
 **Shift** 
 key
  |
| 
 KEY\_ALT
  | 
 The
 **Alt** 
 key
  |
| 
 KEY\_CONTROL
  | 
 The
 **Ctrl** 
 key (Windows only)
  |
| 
 KEY\_META
  | 
 The
 **Meta** 
 key (Linux only)
  |
| 
 KEY\_F<number 1 to 12>
  | 
 The
 **F1** 
 ect. keys on your keyboard
  |
| 
 KEY\_COMMA
  | 
 The
 **,** 
 key
  |
| 
 KEY\_PERIOD
  | 
 The
 **.** 
 key
  |
| 
 KEY\_ASTERISK
  | 
 The
 **\*** 
 key
  |
| 
 KEY\_SLASH
  | 
 The
 **/** 
 key
  |
| 
 KEY\_HOME
  | 
 The
 **Home** 
 key
  |
| 
 KEY\_PAUSE
  | 
 The
 **Pause** 
 key
  |
| 
 KEY\_PRINT
  | 
 The
 **Print Screen** 
 key
  |
| 
 KEY\_CLEAR
  | 
 The
 **Clear** 
 key
  |
| 
 KEY\_END
  | 
 The
 **End** 
 key
  |
| 
 KEY\_SYSREQ
  | 
 The
 **system request** 
 key
  |
| 
 KEY\_PAGEUP
  | 
 The
 **Page Up** 
 key
  |
| 
 KEY\_PAGEDOWN
  | 
 The
 **Page Down** 
 key
  |
| 
 KEY\_NUMLOCK
  | 
 The
 **Num Lock** 
 key
  |
| 
 KEY\_SCROLLLOCK
  | 
 The
 **Scroll Lock** 
 key
  |
| 
 KEY\_CAPSLOCK
  | 
 The
 **Caps Lock** 
 key
  |
| 
 KEY\_MENU
  | 
 The
 **Context Menu** 
 key
  |
| 
 KEY\_HELP
  | 
 The
 **Help** 
 key
  |
| 
 KEY\_BACK
  | 
 The
 **Media Back** 
 key. Not to be confused with the back button on an Android device
  |
| 
 KEY\_FORWARD
  | 
 The
 **Media Foward** 
 key
  |
| 
 KEY\_STOP
  | 
 The
 **Media Stop** 
 key
  |
| 
 KEY\_MEDIAPLAY
  | 
 The
 **Media Play** 
 key
  |



 If you want to detect if certain
 *modifiers* 
 are also pressed, you have access to these variables:
 


1. alt: Set to true if you must press "Alt" on your keyboard.
2. ctrl: Set to true if you must press "Ctrl" on your keyboard (Windows only).
3. meta: Set to true if you must press "Meta" on your keyboard (Linux only).
4. command: Set to true if you must press "Ctrl" (on Windows) or "Meta" (on Linux) on your keyboard.
5. shift: Set to true if you must press "shift" on your keyboard.



 You may set more than one of these to true. This makes you need to press all the modifiers set.
 



 If you want to detect
 *releasing* 
 the key instead of pressing it, don't set "pressed" to true. If you are adding it to the InputMap, it will always be pressed if the keys for it are not, but only after they have been released for the first time. So how do you fix this then? Actually, it's quite simple!
 



 Try
 `Input.event_<press/release>("shoot")` 
 . It works nicely, but if you need it for calls to \_input, you should instead use
 `Input.parse_input_event(event)` 
 .
 


### 

 InputEventMouse
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&veaction=edit&section=T-10 "Edit section: InputEventMouse") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&action=edit&section=T-10 "Edit section: InputEventMouse") 

 ]



 Detecting mouse input or faking it can be explained in two ways: mouse buttons and mouse motion.
 



 See also:
 [mouse and input coordinates tutorial](https://docs.godotengine.org/en/stable/tutorials/inputs/mouse_and_input_coordinates.html) 
 .
 


#### 

 InputEventMouseButton
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&veaction=edit&section=T-11 "Edit section: InputEventMouseButton") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&action=edit&section=T-11 "Edit section: InputEventMouseButton") 

 ]



 Clicking your mouse is a common action to read, but not as common to fake. It is the simplest action to read
 *and* 
 fake, though, needing only 2 values.
 



```
extends Node

func shoot\_on\_click():
  var input = InputEventMouseButton.new()
  input.pressed = true
  input.button_index = BUTTON_LEFT
  InputMap.action\_erase\_events("shoot")
  InputMap.action\_add\_event("shoot",input)

```




 Variables
 | 
 Variable
  | 
 Use
  |
| --- | --- |
| 
 doubleclick
  | 
 If
 `true` 
 , the button was double-clicked.
  |
| 
 factor
  | 
 The factor (or delta) of the event as a float. When used for high-precision scroll events, this indicates the scroll amount. Only supported on some platforms. If unsupported on the current platform, it may be
 `0` 
 .
  |





 Allowed values for
 `button_index` 
| 
 Constant
  | 
 What it means
  |
| --- | --- |
| 
 BUTTON\_LEFT
  | 
 Left click
  |
| 
 BUTTON\_RIGHT
  | 
 Right click
  |
| 
 BUTTON\_MIDDLE
  | 
 Scroll button pressed down
  |
| 
 BUTTON\_WHEEL\_UP
  | 
 Scroll wheel up.
  |
| 
 BUTTON\_WHEEL\_DOWN
  | 
 Scroll wheel down.
  |


#### 

 InputEventMouseMotion
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&veaction=edit&section=T-12 "Edit section: InputEventMouseMotion") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&action=edit&section=T-12 "Edit section: InputEventMouseMotion") 

 ]



 Faking mouse motion can be harder, but sometimes very useful. If you actually want to move the mouse, instead use
 `Input.set_mouse_position(<Vector2>)` 
 . That will also generate a InputEventMouseMotion event to trigger.
 





 Variables
 | 
 Variable
  | 
 Use
  |
| --- | --- |
| 
 position
  | 
 The
 *new* 
 mouse position, relative to the nodes viewport. If called in
 `_gui_input` 
 , it is instead relative to the Control node.
  |
| 
 relative
  | 
 The new position relative to the mouse position in the last call.
  |
| 
 speed
  | 
 The mouse speed in pixels per second
  |



 By default, this event is only emitted once per frame rendered at most. If you need more precise input reporting, consider using
 `Input.set_use_accumulated_input(false)` 
 to emit events as often as possible. If you need this to draw freehand lines, consider using
 [Bresenham's line algorithm](https://en.wikipedia.org/wiki/Bresenham%27s_line_algorithm "w:Bresenham's line algorithm") 
 as well to avoid gaps when you move the mouse quickly.
 


### 

 InputEventScreenDrag
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&veaction=edit&section=T-13 "Edit section: InputEventScreenDrag") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&action=edit&section=T-13 "Edit section: InputEventScreenDrag") 

 ]





 (Only available on mobile devices)
 





 Reading and writing screen dragging is header than InputEventMouseMotion, simply because you cannot force the user to move their finger via code. Okay, that's a lie. But to do that, you would need a degree in mind control or hypnotising, which is
 *well* 
 outside the scope of this book!
 





 Variables
 | 
 Variable
  | 
 Use
  |
| --- | --- |
| 
 position
  | 
 The new position of the finger relative to the node's viewport. If used in
 `_gui_input` 
 , it is relative to the Control node.
  |
| 
 relative
  | 
 The finger's new position, relative to its old position.
  |
| 
 speed
  | 
 The drag speed in pixels per second.
  |


### 

 InputEventScreenTouch
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&veaction=edit&section=T-14 "Edit section: InputEventScreenTouch") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&action=edit&section=T-14 "Edit section: InputEventScreenTouch") 

 ]





 (Only available on mobile devices)
 





 This event is for tapping (or untapping) on the screen.
 





 Variables
 | 
 Variable
  | 
 Use
  |
| --- | --- |
| 
 position
  | 
 The finger's position relative to the node's viewport. If used in
 `_gui_input` 
 , it is relative to the Control.
  |
| 
 pressed
  | 
 If
 `true` 
 , the user is putting their finger on the screen. Otherwise, they are taking their finger off the screen.
  |


### 

 InputEventJoypadButton
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&veaction=edit&section=T-15 "Edit section: InputEventJoypadButton") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&action=edit&section=T-15 "Edit section: InputEventJoypadButton") 

 ]



 This InputEvent is for detecting joy-con buttons (i.e: buttons on a controller, linked to a computer or a console).
 





 Variables
 | 
 Variables
  | 
 About
  |
| --- | --- |
| 
 button\_index
  | 
 The button that is pressed.
  |
| 
 If "true", the button is pressed. Otherwise the button is released.
  |


### 

 InputEventJoypadMotion
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&veaction=edit&section=T-16 "Edit section: InputEventJoypadMotion") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Input&action=edit&section=T-16 "Edit section: InputEventJoypadMotion") 

 ]



 This event is for moving the Joy stick, one axis at a time. This InputEvent can be confusing.
 





 Variables
 | 
 Variable
  | 
 About
  |
| --- | --- |
| 
 axis
  | 
 A constant that has one of six values: JOY\_AXIS\_\*, where "\*" can be:
 
 0: Left stick on the horizontal axis
 

 1: Left stick on the vertical axis
 

 2: Right stick on the horizontal axis
 

 3: Right stick on the vertical axis
 

 6: Left trigger analogue axis
 

 7: Right trigger analogue axis
 

 The other four have no function yet, and are described as "generic game pad axises" and are just used as blank space.
  |
| 
 axis\_value
  | 
 A number from -1.0 to 1.0.
  |



 It is important to know that this InputEvent does not have a Vector2 value you can read from. The following script converts this InputEvent into a Vector3, x and y are for position, z is for the joystick being moved.
 



```
func convert\_from\_joypad\_motion(event: InputEventJoypadMotion) -> Vector3:
  match event.axis:
    JOY_AXIS_0:# Left stick horizontal
      return Vector3(event.axis_value, 0, 0)
    JOY_AXIS_1:# Left stich vertical
      return Vector3(0, event.axis_value, 0)
    JOY_AXIS_2:# Right stick horizontal
      return Vector3(event.axis_value, 0, 1)
    JOY_AXIS_3:# Right stick vertical
      return Vector3(0, event.axis_value, 1)
  # An error occurred
  printerr("Invalid axis: %s in call to convert\_from\_joypad\_motion" % [event.axis])
  print\_stack() # To help with debugging, print the call stack.
  return Vector3(0, 0, 0)

```


  






 Physics
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=9 "Edit section: Physics") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=9 "Edit section: Physics") 

 ]
====================================================================================================================================================================================================================================================================================



 Physics is used in many games, for many different things, such as falling, colliding into a wall, jumping, and so forth.
 





[StaticBody2D](https://docs.godotengine.org/en/stable/classes/class_staticbody2d.html) 

 and
 
[StaticBody3D](https://docs.godotengine.org/en/stable/classes/class_staticbody.html) 




 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Physics&veaction=edit&section=T-1 "Edit section: StaticBody2D and StaticBody3D") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Physics&action=edit&section=T-1 "Edit section: StaticBody2D and StaticBody3D") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 A
 *StaticBody* 
 is a collision body that is not meant to move. While it can move, it
 *should not* 
 be used for characters.
 



 A static body may be scaled with no problems.
 



 It is the fastest collision body type. It should be used for the environment and other non-movable things.
 





[RigidBody2D](https://docs.godotengine.org/en/stable/classes/class_rigidbody2d.html) 

 and
 
[RigidBody3D](https://docs.godotengine.org/en/stable/classes/class_rigidbody.html) 




 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Physics&veaction=edit&section=T-2 "Edit section: RigidBody2D and RigidBody3D") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Physics&action=edit&section=T-2 "Edit section: RigidBody2D and RigidBody3D") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 A
 *RigidBody* 
 is an object that is affected by gravity. It usually is not used for characters as it is hard to control, but can be used in physics simulation games as it is quite accurate.
 



 It
 **cannot** 
 be scaled in any way!
 





[KinematicBody2D](https://docs.godotengine.org/en/stable/classes/class_kinematicbody2d.html) 

 and
 
[KinematicBody3D](https://docs.godotengine.org/en/stable/classes/class_kinematicbody.html) 




 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Physics&veaction=edit&section=T-3 "Edit section: KinematicBody2D and KinematicBody3D") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Physics&action=edit&section=T-3 "Edit section: KinematicBody2D and KinematicBody3D") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 A
 *KinematicBody* 
 is a body that is intended to be given a script to move. It can also be used as a way to detect for hitting an object or surface.
 



 Kinematic bodies work well for characters, but should not be used to simulate advanced physics.
 





[Area2D](https://docs.godotengine.org/en/stable/classes/class_area2d.html) 

 and
 
[Area3D](https://docs.godotengine.org/en/stable/classes/class_area.html) 




 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Physics&veaction=edit&section=T-4 "Edit section: Area2D and Area3D") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Physics&action=edit&section=T-4 "Edit section: Area2D and Area3D") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 An
 *Area* 
 can be used to detect for other Areas, RigidBodies, or KinematicBodies. Upon overlap, a
 [signal](/wiki/Guide_to_the_Godot_game_engine/Signals_and_methods "Guide to the Godot game engine/Signals and methods") 
 is emitted, and another is emitted when the object leaves.
 



 If the camera/audio listener is inside the Area, it is possible to change the effects of sounds. E.g: to muffle car noises when jumping into water. You can do this by changing the "AudioBus" properties, and selecting a bus. You should make a "muffled" bus for this to work, and
 `audio_bus_override` 
 must be set to
 `true` 
 . (This is the overrided
 *default* 
 audio bus, meaning the car noises must not use an audio bus. It will not layer the bus on top of others.).
 





[CollisionShape2D](https://docs.godotengine.org/en/stable/classes/class_collisionshape2d.html) 

 and
 
[CollisionShape3D](https://docs.godotengine.org/en/stable/classes/class_collisionshape.html) 




 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Physics&veaction=edit&section=T-5 "Edit section: CollisionShape2D and CollisionShape3D") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Physics&action=edit&section=T-5 "Edit section: CollisionShape2D and CollisionShape3D") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 In order for a collision object to collide with another, it needs one or more
 *CollisionShape* 
 or
 *ColisionPolygon* 
 children. CollisionShapes need an object defined to set their shape and size, and CollisionPolygons need multiple edges (at least 3) defined.
 




 Collision mask and layers
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Physics&veaction=edit&section=T-6 "Edit section: Collision mask and layers") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Physics&action=edit&section=T-6 "Edit section: Collision mask and layers") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Each object can have masks and layers. If at least one mask is equal to the overlapping object's layer, the two objects will be considered to have collided. This can be used to make the player collide with the floor, walls and enemies, but not other players, or
 *only* 
 the floor and walls.
 



 Each layer can be given a name in
 *Project Settings -> Layer Names -> 2d Physics* 
 and
 *Project Settings -> Layer Names -> 3d Physics* 
 . This improves readability, and decreases the chance of bugs. Here's an example:
 


* Layer 1: World (walls, floors, bridges, ect)
* Layer 2: Player
* Layer 3: Enemies
* Layer 4: Projectiles
* Etc.




 Soft world
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Physics&veaction=edit&section=T-7 "Edit section: Soft world") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Physics&action=edit&section=T-7 "Edit section: Soft world") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 If your 3D game uses
 
[SoftBody](https://docs.godotengine.org/en/stable/classes/class_softbody.html) 

 , you can simulate objects that deform when another object collides with it. Useful for capes and curtains. If not used, it is best to turn off
 *Project Settings -> Physics -> 3d -> Active Soft World* 
 to increase performance.
 




 Physics engines
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Physics&veaction=edit&section=T-8 "Edit section: Physics engines") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Physics&action=edit&section=T-8 "Edit section: Physics engines") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------




 3D
 

* GodotPhysics: Simple and functional. Incompatible with some collision shapes.
* Bullet: The deafult. Constantly checks for collision, missing fewer collisions, but having more performance cost. Use if your game has fast moving objects, like racecars or bullets.




 2D
 

* GodotPhysics: The default. Simple and functional.



  






 Saving and loading
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=10 "Edit section: Saving and loading") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=10 "Edit section: Saving and loading") 

 ]
=======================================================================================================================================================================================================================================================================================================================



 Most game engines allow you to save files. Godot is no different.
 



 There are five methods to save files, and each method has at least 1 loading method.
 




 Methods
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Saving_and_loading&veaction=edit&section=T-1 "Edit section: Methods") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Saving_and_loading&action=edit&section=T-1 "Edit section: Methods") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


### 

 Resources
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Saving_and_loading&veaction=edit&section=T-2 "Edit section: Resources") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Saving_and_loading&action=edit&section=T-2 "Edit section: Resources") 

 ]



 These can be loaded with GDScript's built-in
 `load()` 
 function. See
 [creating resources](/wiki/Guide_to_the_Godot_game_engine/Plugins/Creating_resources "Guide to the Godot game engine/Plugins/Creating resources") 
 for more.
 




 Pros
 

* Load and save built-into Godot




 Cons
 

* Hard to debug


### 

 Json
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Saving_and_loading&veaction=edit&section=T-3 "Edit section: Json") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Saving_and_loading&action=edit&section=T-3 "Edit section: Json") 

 ]



 Commonly used for sending data over the internet. It's easy to read and modify, so consider compressing or encrypting your save file to prevent cheats. This is especially important in multiplayer games. Alternatively, save player data in the cloud. This will require setting up a
 [server](/w/index.php?title=Guide_to_the_Godot_game_engine/Multiplayer&action=edit&redlink=1 "Guide to the Godot game engine/Multiplayer (does not exist)") 
 .
 




 Pros
 

* Easy to debug
* Fast saving/loading times




 Cons
 

* JSON does not define
 [ints](/wiki/Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types#int "Guide to the Godot game engine/Programming/GDScript/Data types") 
 , only numbers. All numbers comes out as a
 [float](/wiki/Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types#float "Guide to the Godot game engine/Programming/GDScript/Data types") 
 .


### 

 File
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Saving_and_loading&veaction=edit&section=T-4 "Edit section: File") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Saving_and_loading&action=edit&section=T-4 "Edit section: File") 

 ]



 Files can be opened and parsed with the
 
[File](https://docs.godotengine.org/en/stable/classes/class_file.html) 

 object.
 




 Pros
 

* Easy to debug
* Easy to
 [encrypt](/w/index.php?title=Guide_to_the_Godot_game_engine/Encryption&action=edit&redlink=1 "Guide to the Godot game engine/Encryption (does not exist)") 
 to prevent cheaters




 Cons
 

* Can be hard to parse


### 

 Xml
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Saving_and_loading&veaction=edit&section=T-5 "Edit section: Xml") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Saving_and_loading&action=edit&section=T-5 "Edit section: Xml") 

 ]



 Xml is a simple file format, but hard to parse. See
 
[XMLParser](https://docs.godotengine.org/en/stable/classes/class_xmlparser.html) 

 .
 




 Pros
 

* Widely supported




 Cons
 

* Hard to parse


### 

 Scenes
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Saving_and_loading&veaction=edit&section=T-6 "Edit section: Scenes") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Saving_and_loading&action=edit&section=T-6 "Edit section: Scenes") 

 ]



 This can be done by calling
 `Node.pack()` 
 , which turns it and any child with
 `owner` 
 set to it, which can be saved with
 `[ResourceSaver](https://docs.godotengine.org/en/stable/classes/class_resourcesaver.html) 

 .save()` 
 and loaded with
 `load()` 
 .
 




 Pros
 

* Built into Godot, can be rather fast




 Cons
 

* Saves everything, difficult and time-consuming to select what to save
* Hard to debug



 You can exclude a node by setting its
 `owner` 
 to
 `null` 
 . To include a property, make the property exported. If a node's
 `oowner` 
 property to anything other than the node that
 `pack()` 
 is called on, it will not be saved. Note that this property will have to be set to anything that is added to the scene by script, as they start with no owner.
 




 Notes
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Saving_and_loading&veaction=edit&section=T-7 "Edit section: Notes") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Saving_and_loading&action=edit&section=T-7 "Edit section: Notes") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


1. Prior to Godot 4.0, file sizes cannot be larger than 24Gib (gigabytes).
2. A useful text file format is "csv" (comma separated values), where each value is comma (",") separated. Use
 `[String](/wiki/Guide_to_the_Godot_game_engine/Programming/GDScript/Data_types#String "Guide to the Godot game engine/Programming/GDScript/Data types") 
 .get_csv()` 
 to separate them.




 Tips
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Saving_and_loading&veaction=edit&section=T-8 "Edit section: Tips") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Saving_and_loading&action=edit&section=T-8 "Edit section: Tips") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


* Really large files can take almost a whole minute to load. Consider splitting save files up into more than one, and only load each file when needed.




 Animation
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=11 "Edit section: Animation") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=11 "Edit section: Animation") 

 ]
============================================================================================================================================================================================================================================================================================




 Animation methods
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&veaction=edit&section=T-1 "Edit section: Animation methods") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&action=edit&section=T-1 "Edit section: Animation methods") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


### 

 With an
 
[AnimationTree](https://docs.godotengine.org/en/stable/classes/class_animationtree.html) 




 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&veaction=edit&section=T-2 "Edit section: With an AnimationTree") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&action=edit&section=T-2 "Edit section: With an AnimationTree") 

 ]



 Animation trees just play animation players, but they make it easier to animate properly, by controlling which animation occurs, based on a state machine, and they also make adding transition animations easier. So, it takes less work to go from a "sitting" animation to a "stand up from sitting" animation, to "walking" animation. However, they take a little while to set up.
 


### 

 With an
 
[AnimationPlayer](https://docs.godotengine.org/en/stable/classes/class_animationplayer.html) 




 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&veaction=edit&section=T-3 "Edit section: With an AnimationPlayer") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&action=edit&section=T-3 "Edit section: With an AnimationPlayer") 

 ]



 AnimationPlayers allow you to control every frame, with fewer bugs than when animating directly from code, of the animation. They use "keyframes", which are points of the animation where a value is set. Some types can slowly transition to the next keyframe. Some are instantly set. You can also control whether they transition or just set. They are the fastest to set up, but the least versatile.
 


### 

 With a
 
[Tween](https://docs.godotengine.org/en/stable/classes/class_tween.html) 




 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&veaction=edit&section=T-4 "Edit section: With a Tween") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&action=edit&section=T-4 "Edit section: With a Tween") 

 ]



 Tweens are started and manipulated with code, they just make it a bit simpler to do so, allowing you to animate a node's property over time, with ease-in and ease-out effects.
 


### 

 With code
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&veaction=edit&section=T-5 "Edit section: With code") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&action=edit&section=T-5 "Edit section: With code") 

 ]



 The most versatile method, but the most difficult to get right. It takes trial and error to fix bugs, since code
 [usually doesn't run in the editor](/wiki/Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords#tool "Guide to the Godot game engine/Programming/GDScript/Keywords") 
 .
 


### 

 With shaders
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&veaction=edit&section=T-6 "Edit section: With shaders") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&action=edit&section=T-6 "Edit section: With shaders") 

 ]



 While little more versatile as AnimationPlayers, are the fastest, as they run on the
 [GPU](https://en.wikipedia.org/wiki/Graphics_processing_unit "w:Graphics processing unit") 
 . They can do many things, including animating water and clouds.
 




 Animating movement
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&veaction=edit&section=T-7 "Edit section: Animating movement") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&action=edit&section=T-7 "Edit section: Animating movement") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 When animating movement, first consider how the object or creature moves. Does it propel itself forward like a rolling jelly creature, or does it walk on two legs like a human. Wherever possible, look at references in real life to help you make you animation look more realistic.
 


### 

 Easing
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&veaction=edit&section=T-8 "Edit section: Easing") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&action=edit&section=T-8 "Edit section: Easing") 

 ]



 Easing is used to make an animation seem less static.
 **Easing in** 
 means an animation starts slow, then speeds up.
 **Easing out** 
 means an animation that starts at a faster rate, then slows down over time.
 


### 

 Spinning
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&veaction=edit&section=T-9 "Edit section: Spinning") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&action=edit&section=T-9 "Edit section: Spinning") 

 ]



 In 3D, you can animate spinning by changing the rotation property. In 2D, it depend if you wanna make it spin around, or simulate rotating in the plane that doesn't exist in 2D. The latter is easier done by changing frames of a Sprite that uses a sprite sheet of a rotating object. Otherwise you can just use the rotation property in an AnimationPlayer or by code.
 




 Animating the environment
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&veaction=edit&section=T-10 "Edit section: Animating the environment") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&action=edit&section=T-10 "Edit section: Animating the environment") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


### 

 Animating water
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&veaction=edit&section=T-11 "Edit section: Animating water") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&action=edit&section=T-11 "Edit section: Animating water") 

 ]



 See
 [your first 3D shader](https://docs.godotengine.org/en/stable/tutorials/shaders/your_first_shader/your_first_3d_shader.html) 
 to make a terrain, then read
 [your second 3D shader](https://docs.godotengine.org/en/stable/tutorials/shaders/your_first_shader/your_second_3d_shader.html) 
 to turn it into animated water.
 




 See also
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&veaction=edit&section=T-12 "Edit section: See also") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Animation&action=edit&section=T-12 "Edit section: See also") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



<https://docs.godotengine.org/en/latest/tutorials/animation/index.html>




  








 Servers (singletons)
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=12 "Edit section: Servers (singletons)") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=12 "Edit section: Servers (singletons)") 

 ]
===============================================================================================================================================================================================================================================================================================================================




|  |  |
| --- | --- |
| 





 | **This page or section is an undeveloped draft or outline.** 

 You can help to
 [develop the work](https://en.wikibooks.org/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit) 
 , or you can ask for assistance in the
 [project room](/wiki/Wikibooks:PROJECTS "Wikibooks:PROJECTS") 
 .
  |



 Servers in Godot are for low-level engine manipulation, like changing the volume of sounds, creating collision objects and more. A "Server", in this sense, can also, less confusingly, be called a "singleton", as it is loaded only once, and cannot be duplicated or instanced.
 



 Nodes are just "things" that make use of these servers and present the user high-level (easier) manipulation, which can only go so far.
 



 These are the limitations:
 


1. It's slower
2. Godot's source code is more complex
3. It's harder to control them in different threads
4. More memory is required.



  

 Strengths are, however:
 


1. It's simpler
2. It's less likely to cause bugs in your game
3. It's less confusing and more attractive - it draws users is with its simplicity
4. It's faster to set up Node trees than write C++ code



  

 Whether you use high-level, low-level or a combination of both is
 *completely* 
 up to you and the game you are making.
 



 Many server functions return or use RIDs (Resource ID). They
 **must** 
 be kept stored in a variable to remain modifiable. In the case of resources, like textures, you
 **must** 
 store the resource as a variable as well, or both it and its corresponding RID
 **will** 
 be erased.
 



 For more information on usage, see
 [the docs](https://docs.godotengine.org/en/stable/tutorials/optimization/using_servers.html) 
 .
 




 VisualServer
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Servers_(singletons)&veaction=edit&section=T-1 "Edit section: VisualServer") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Servers_(singletons)&action=edit&section=T-1 "Edit section: VisualServer") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



**NOTE: Godot's API for everything visual will change in Godot 4** 




 The VisualServer creates a 2D "canvas" and a 3D "scenario", which can be given objects, both 2D and 3D, to draw. They will not draw unless you use a Viewport node.
 



 Use
 `VisualServer.canvas_item_set_parent(<Item RID>, get_canvas())` 
 to add an item to the main canvas. You can create a canvas to use its RID with
 `var canvas=VisualServer.canvas_create()` 
 . You can attach a canvas to a Viewport with
 `VisualServer.canvas_item_set_parent(<canvas RID>, <Viewport RID>)` 
 , providing it is not already attached to one.
 



 For 3D, use
 `VisualServer.scenario_create()` 
 for a new scenario,
 `Spatial.get_world().scenario` 
 for the existing scenario and
 `VisualServer.instance_set_scenario(<Item RID>, <Scenario RID>)` 
 for adding an object/light to a scenario.
 



 CanvasItems and VisualInstance nodes contain methods that allow drawing directly. In 2D, you can draw circles and rectangles, as well as textures and text. Using VisualInstance, you can draw meshes into 3D.
 



 Helpful simple methods:
 



```
# Set the textures of the black borders when using stretch\_mode ProjectSettings
VisualServer.black\_bars\_set\_images(left, top, right, bottom)

# Force the screen to update immediately
VisualServer.force\_draw()

```


```
# Attach a new Viewport and disable the root
func \_ready():
  get\_viewport().set\_attach\_to\_screen\_rect(Rect2()) # Sets the rect to zero size
  # To get <Viewport RID>, call get\_rid() on the chosen Viewport Node
  VisualServer.set\_attach\_to\_screen\_rect(<Viewport RID>, Rect2(0, 0, 600, 600)) # You can also use other sizes and offsets
# The reason you must disable the root Viewport is because it is drawn last,
# or in other words, drawn over the others. As it has no transparent pixels
# in the default settings, it would override every pixel on the screen.

# Detach a Viewport from the screen
VisualServer.viewport\_detach(<Viewport RID>)

```


 Example of drawing a texture with 25 width and height:
 



```
extends Node2D

var texture = preload("res://assets/weapons/sword.png")
func \_ready():
  var sprite = VisualServer.canvas\_item\_create()
  VisualServer.canvas\_item\_add\_texture\_rect(Rect2(0, 0, 25, 25), texture.get\_rid())
  VisualServer.canvas\_item\_set\_parent(sprite, get\_canvas())

```



 AudioServer
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Servers_(singletons)&veaction=edit&section=T-2 "Edit section: AudioServer") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Servers_(singletons)&action=edit&section=T-2 "Edit section: AudioServer") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 The AudioServer is used for low-level audio access. It can also record and playback recorded audio. This is useful when implementing voice-chat in games.
 



 The AudioServer does not use RIDs.
 



  






|  |  |
| --- | --- |
| 

Clipboard



 | 
**To do:** 

 I do not know how to use this server. Please help!
  |



  






 PhysicsServer
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Servers_(singletons)&veaction=edit&section=T-3 "Edit section: PhysicsServer") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Servers_(singletons)&action=edit&section=T-3 "Edit section: PhysicsServer") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 The server for 3D physics.
 



 Physics servers are for creating areas and bodies, but do not place them on the scene tree.
 



 The below code creates a wall that is 5 units high, half a unit thick, and 4 units wide and adds it the the physics space.
 



```
extends Spacial

func \_ready():
  var wall = PhysicsServer.body\_create(0)
  var shape = PhysicsServer.shape\_create(PhysicsServer.SHAPE_BOX)
  PhysicsServer.shape\_set\_data(shape, Vector3(0.5, 5, 4))
  PhysicsServer.body\_add\_shape(body, shape)
  PhysicsServer.body\_set\_space(body, get\_world().space) 

```



 Physics2DServer
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Servers_(singletons)&veaction=edit&section=T-4 "Edit section: Physics2DServer") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Servers_(singletons)&action=edit&section=T-4 "Edit section: Physics2DServer") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 The 2D version of PhysicsServer. It is used in exactly the same way, but some values may need to be adjusted, like Vector3s to Vector2s.
 




 ARVRServer
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Servers_(singletons)&veaction=edit&section=T-5 "Edit section: ARVRServer") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Servers_(singletons)&action=edit&section=T-5 "Edit section: ARVRServer") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 The ARVRServer, or the XRServer, is the heart of Godot's advanced XR solution, and handles all the processing.
 



  





 See also:
 [XR Godot tutorials](https://docs.godotengine.org/en/stable/tutorials/xr/index.html) 
 .
 




 CameraServer
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Servers_(singletons)&veaction=edit&section=T-6 "Edit section: CameraServer") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Servers_(singletons)&action=edit&section=T-6 "Edit section: CameraServer") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 The CameraServer is not used to keep track of Camera nodes like it sounds. It is a server to use external cameras. Like the camera at the back of your phone. It can take pictures, but is mostly used in AR.
 



 This server doesn't use RIDs.
 



  






|  |  |
| --- | --- |
| 

Clipboard



 | 
**To do:** 

 I don't know how to use this server. Please help!
  |



  





  






 Platform specific
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=13 "Edit section: Platform specific") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=13 "Edit section: Platform specific") 

 ]
====================================================================================================================================================================================================================================================================================================================



 When gaming was young, games were rarely designed for multiple systems at once. When that started, people had to check every screen resolution worked. When phones started coming in many different shapes and sizes, this soon became impractical, and even impossible for most of us. Godot has a way to combat this, of course. But screen size is not your only problem.
 




 Stretching the screen
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Platform_specific&veaction=edit&section=T-1 "Edit section: Stretching the screen") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Platform_specific&action=edit&section=T-1 "Edit section: Stretching the screen") 

 ]
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Go to ProjectSettings, and find
 *Display -> Window* 
 . Go to the bottom of the area on the right, and under "Stretch", there are 3 settings: Mode, Aspect and Shrink.
 





 Modes
 | 
 Mode
  | 
 About
  |
| --- | --- |
| 
 disabled
  | 
 Deafult. Does not stretch the screen.
  |
| 
 2d
  | 
 Only works on 2D, ignores 3D. Streches the 2D world.
  |
| 
 viewport
  | 
 Always works. Stretches the picture.
  |





 Aspect
 | 
 Value
  | 
 About
  |
| --- | --- |
| 
 ignore
  | 
 Simply stretches or shrinks the screen.
  |
| 
 keep
  | 
 The image scales, but the aspect ratio never changes. May create black bars around the edge of the screen.
  |
| 
 keep\_width
  | 
 Height changes freely, width stays same size as the image scales. Aspect ratio never changes.
  |
| 
 keep\_height
  | 
 Width changes freely, height stays same size as the image scales. Aspect ratio never changes.
  |
| 
 expand
  | 
 Scales image to show at minimum of the camera size. May reveal more of the game world vertically if the window is shrank horizontally and vice versa.
  |



 As the
 `Shrink` 
 value gets bigger, the screen resolution goes down.
 



 .mw-parser-output .ambox{border:1px solid #a2a9b1;border-left:10px solid #36c;background-color:#fbfbfb;box-sizing:border-box}.mw-parser-output .ambox+link+.ambox,.mw-parser-output .ambox+link+style+.ambox,.mw-parser-output .ambox+link+link+.ambox,.mw-parser-output .ambox+.mw-empty-elt+link+.ambox,.mw-parser-output .ambox+.mw-empty-elt+link+style+.ambox,.mw-parser-output .ambox+.mw-empty-elt+link+link+.ambox{margin-top:-1px}html body.mediawiki .mw-parser-output .ambox.mbox-small-left{margin:4px 1em 4px 0;overflow:hidden;width:238px;border-collapse:collapse;font-size:88%;line-height:1.25em}.mw-parser-output .ambox-speedy{border-left:10px solid #b32424;background-color:#fee7e6}.mw-parser-output .ambox-delete{border-left:10px solid #b32424}.mw-parser-output .ambox-content{border-left:10px solid #f28500}.mw-parser-output .ambox-style{border-left:10px solid #fc3}.mw-parser-output .ambox-move{border-left:10px solid #9932cc}.mw-parser-output .ambox-protection{border-left:10px solid #a2a9b1}.mw-parser-output .ambox .mbox-text{border:none;padding:0.25em 0.5em;width:100%}.mw-parser-output .ambox .mbox-image{border:none;padding:2px 0 2px 0.5em;text-align:center}.mw-parser-output .ambox .mbox-imageright{border:none;padding:2px 0.5em 2px 0;text-align:center}.mw-parser-output .ambox .mbox-empty-cell{border:none;padding:0;width:1px}.mw-parser-output .ambox .mbox-image-div{width:52px}html.client-js body.skin-minerva .mw-parser-output .mbox-text-span{margin-left:23px!important}@media(min-width:720px){.mw-parser-output .ambox{margin:0 10%}}
 


|  |  |
| --- | --- |
| 





 | 
 The ProjectSetting
 **Rendering -> Quality -> Dynamic Fonts -> Use Oversampling** 
 only works when using
 **"Keep Height"** 
 /
 **"Keep Width"** 
 /
 **"Expand"** 
 aspect ratios, and does not work with the
 **"Viewport"** 
 Stretch mode.
  |



  






 Encryption
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=14 "Edit section: Encryption") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=14 "Edit section: Encryption") 

 ]
===============================================================================================================================================================================================================================================================================================



[Guide to the Godot game engine/Encryption](/w/index.php?title=Guide_to_the_Godot_game_engine/Encryption&action=edit&redlink=1 "Guide to the Godot game engine/Encryption (does not exist)") 





 Multiplayer
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=15 "Edit section: Multiplayer") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=15 "Edit section: Multiplayer") 

 ]
==================================================================================================================================================================================================================================================================================================



[Guide to the Godot game engine/Multiplayer](/w/index.php?title=Guide_to_the_Godot_game_engine/Multiplayer&action=edit&redlink=1 "Guide to the Godot game engine/Multiplayer (does not exist)") 





 UI skinning
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=16 "Edit section: UI skinning") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=16 "Edit section: UI skinning") 

 ]
==================================================================================================================================================================================================================================================================================================



 UI skinning allows you to turn a game's UI (user interface) to something more fancy than the default. The deafult styling for buttons and panels is an ugly shade of gray. But you can change it as far as complex textures as backgrounds. Whether you go that far or not depends on the game, your time, and your artistic skills.
 




 Basic skinning with themes
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/UI_skinning&veaction=edit&section=T-1 "Edit section: Basic skinning with themes") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/UI_skinning&action=edit&section=T-1 "Edit section: Basic skinning with themes") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



[![](//upload.wikimedia.org/wikipedia/commons/thumb/0/0b/Godot-3-theme-editor.png/220px-Godot-3-theme-editor.png)](/wiki/File:Godot-3-theme-editor.png)

 The Theme Editor for Godot 3.0
 


 To do this, let's first create a
 
[Theme](https://docs.godotengine.org/en/stable/classes/class_theme.html) 

 . You will need to create a new resource using the file system. Search for
 `Theme` 
 .
 



 After saving it, a dock will open which allows you to preview the theme. Looks pretty dull, right?
 



 Lets make buttons look nice first. Click
 *Edit theme* 
 , and select
 *Add Class Items* 
 . Do not confuse with
 *Add Class Item* 
 .
 



 Type
 `Button` 
 in the popup, under "type". Then press
 *Add All* 
 .
 



 In the Inspector, you will see a property category called "Button". Expand it. Expand the sub-categories "colors" and "styles". Set the style for "normal" to a new
 
[StyleBoxFlat](https://docs.godotengine.org/en/stable/classes/class_styleboxflat.html) 

 . Some of the more common things you can change are:
 


* **Background color**
* **Corner radius** 
 (the higher the value, the bigger the curve)
* **Border width** 
 and
 **Border color**
* Shadow
* **Content margin** 
 (a margin between the border and the content within)
* **Expand Margin** 
 (a margin to expand the style outside the Button's bounding-box, without increasing its size - you can only interact with a button by clicking the area inside the bounding box itself)



 Have fun changing styles as much as you like! Remember to choose a single styling theme, like retro, or ski-fi, that suits your game.
 



 You can change much more than just buttons. But only skin the UI elements that are needed, not every single Control-derived node.
 



 After you are done, go to
 *Project->ProjectSettings->Gui->Theme* 
 and set the
 `custom` 
 value to the path to the newly created theme. Save, and then play your main menu scene.
 




 Fancy skinning with themes
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/UI_skinning&veaction=edit&section=T-2 "Edit section: Fancy skinning with themes") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/UI_skinning&action=edit&section=T-2 "Edit section: Fancy skinning with themes") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Instead of using StyleBoxeFlat, use StyleBoxeTexture. This allows using images instead of styled boxes. You can also set the icons for certain Control node elements, like the "increment" and "decrement" buttons.
 




 Custom UI events
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/UI_skinning&veaction=edit&section=T-3 "Edit section: Custom UI events") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/UI_skinning&action=edit&section=T-3 "Edit section: Custom UI events") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Some games show fancy effects when clicking on buttons, like fading menus out. Here are some suggestions:
 


* When clicking on a button that changes the scene, consider fading the screen out for a fraction of a second before changing the scene, then fading the new scene in. The whole process should take less than a tenth of a second, or less. It should be subtle and quick, or you risk boring the player as the ui "loads", which could in theory happen instantly. Here is a code example:



```
extends Control
# main\_menu.gd

func \_on\_play\_button\_up():
  # screen\_blocker should be a hidden Control node placed on top all the other UI elements
  $screen\_blocker.show() # This stops you clicking every button and seeing something weird afterwards.
  for _i in range(20):
    modulate.a -= .2
    yield(get\_tree().create\_timer(.002), "timeout")
  get\_tree().change\_scene("Target scene here")

```





 The opposite to this (to fade in a new menu) can be done with an
 
[AnimationPlayer](https://docs.godotengine.org/en/stable/classes/class_animationplayer.html) 

 set to "autoplay".
 



* When disabling a button, consider setting its
 `mouse_mode` 
 to
 `MOUSE_MODE_IGNORE` 
 , for stylistic purposes. Not doing so layers the "disabled" style and the "clicked" style on top of each other when clicking it, which doesn't look that good. Remember to set the
 `mouse_mode` 
 to
 `MOUSE_MODE_STOP` 
 when you enable the button again.



  






 Exporting
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=17 "Edit section: Exporting") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=17 "Edit section: Exporting") 

 ]
============================================================================================================================================================================================================================================================================================



 Have you made an epic game that you want to share with your friends or sell online? You could give away the Godot editor along with your game's files, but that is (a) impractical and (b) allows others to peek into your hard work, and maybe even claim it as their own.
 



 The solution to both of these problems? Exporting.
 




 Getting an export template
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Exporting&veaction=edit&section=T-1 "Edit section: Getting an export template") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Exporting&action=edit&section=T-1 "Edit section: Getting an export template") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 When you export your game, you export every file in your game to an application file, also known as an
 *executable* 
 . But in order to do this, you need an
 *export template* 
 . These can be downloaded on Godot's download page. You want them for all platforms you intend to sell your game on. Supported templates are:
 


1. Windows Desktop
2. Linux/X11
3. Mac OSX
4. Html5
5. UWP (Universal Windows Platform)
6. IOS
7. Android



 Once downloaded, the templates must be put in your Godot appdata folder in the
 *Godot/templates/<CURRENT VERSION>/* 
 dir. An easy way to do this is go to the "Editor" dropdown menu at the top of the screen and click "Open Editor Data/Settings Folder".
 



 Another way to download them is to go to
 *Editor -> Manage Export Templates...* 
 and click "Download" under the "Current Version" section.
 



 You can then create export
 *presets* 
 . Go to
 *Project -> Export...* 
 and a popup will appear.
 



 Press "Add..." and choose a platform your game will run on. You may choose any value for the settings on the left on the "Options" tab.
 




 Options
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Exporting&veaction=edit&section=T-2 "Edit section: Options") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Exporting&action=edit&section=T-2 "Edit section: Options") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 You should pick a name for "Product name". This should be the name of your game.
 



 If present, "Company Name", "File Version", "File Version" and "File Description" should be set. Sometimes the names are changed based on the platform, most notably hand-held devices.
 



 You can also set an image for your game's icon, shown as the image next to the file's name on your file explorer or on your handheld device's menus.
 



 Android has quite a lot of "permissions". You
 **must** 
 enable the ones your game uses, like "Camera" if you use a camera (e.g: for AR) or "Internet" if your game is multiplayer. If in doubt, enable them one at a time, if it doesn't help, disable it and enable the next. Repeat until the game works as expected. (Try not to feel tempted to enable them all, as some players would stop playing the game immediately if they see 500 permission requests for completly unrelated things, such as access to location in a simple game.)
 




 Resources
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Exporting&veaction=edit&section=T-3 "Edit section: Resources") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Exporting&action=edit&section=T-3 "Edit section: Resources") 

 ]
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Go on the "Resources" tab, and under the "Filters to export non-resource files/folders", you may use regex patterns. Here are some common examples:
 


* To allow all files that end in ".json", use
 `*.json`
* To allow all files inside a "docs" folder, use
 `docs/*`
* To allow all files/folders that begin with "doc", use
 `*/doc*`
* To allow a specific file called "versions.txt" inside the main folder, use
 `versions.txt`



 The text box below that one is for excluding things that fit the include filters or are normally excluded. For example, to avoid exporting any folder called "exclude\_export", use
 `*exclude_export/*` 
 . Uses the same rule as "Filters to export non-resource files/folders".
 



 Both of these "filters" may be comma separated to define more than one pattern.
 




 Features
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Exporting&veaction=edit&section=T-4 "Edit section: Features") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Exporting&action=edit&section=T-4 "Edit section: Features") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 The "features" tab is a list of
 *features* 
 that can be checked with
 `OS.has_feature()` 
 . (It doesn't define "release" or "debug" here, that is done automatically based on the options you chose.)
 




 Script
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Exporting&veaction=edit&section=T-5 "Edit section: Script") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Exporting&action=edit&section=T-5 "Edit section: Script") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Go onto the "Script" tab. The 3 script modes are:
 


1. Text: code is saved as plain text that anybody can read
2. Compiled: code is compressed, to be smaller and harder to read
3. Encrypted: code is encrypted to become almost impossible to read. Recommended for retail games where the code is not free or open-source, and when you want to prevent cheating.



  






 Plugins
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=18 "Edit section: Plugins") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=18 "Edit section: Plugins") 

 ]
======================================================================================================================================================================================================================================================================================



 Plugins are powerful things, allowing you to change Godot's functionality without recompiling the engine.
 



  





 You can also download plugins (among other things) from the Asset Library ("AssetLib").
 



  





 Plugins are powerful. People have made image editors, spritesheet makers, height-map terrains and fog. With the right knowledge and skills, along with the right resources, you can make almost anything. And this guide will help with that.
 



 First, let's start simple. To make a plugin, you need to create a script that extends
 
[EditorPlugin](https://docs.godotengine.org/en/stable/classes/class_editorplugin.html) 

 .
 



 1. Go to the
 *Script* 
 tab. Press "File", "New Script..." and a popup will appear.
 



 2. Change "Inherits" to "EditorPlugin". Press the folder next to "Path". Create an "addons" folder (lowercase "a") in the "res" dir. If the folder already exists, just open it. Create a new folder. Call it "My plugin". Set the script name to "main.gd". Press "Open" and "Create".
 



 3. Put
 ``[tool](/wiki/Guide_to_the_Godot_game_engine/Programming/GDScript/Keywords#tool "Guide to the Godot game engine/Programming/GDScript/Keywords")``
 at the very top of the script.
 **Do not forget this!** 
 Then type the following code:
 



```
func \_ready():
  print("Hello!")

```


 4. Open a text file editor, and write this text:
 



```
[plugin]
name="My first plugin"
description="This is my first plugin!"
author="Your name"
version="0.0.1"
script="main.gd"

```


 5. Save the file as "plugin.cfg" in the same folder as "main.gd".
 



 6. Go to "ProjectSettings", open the "Plugins" tab and search for your plugin. If it is not there, press "Update". Check the box next to "Enable".
 



 7. Check the "Output" dock. You should see "Hello!" printed on it.
 



  






 Making your first plugin
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Plugins/Making_your_first_plugin&veaction=edit&section=T-1 "Edit section: Making your first plugin") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Plugins/Making_your_first_plugin&action=edit&section=T-1 "Edit section: Making your first plugin") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 So now you know how to make a simple plugin, how can you make a helpful one?
 



[Guide to the Godot game engine/Plugins/Making your first plugin/The idea](/w/index.php?title=Guide_to_the_Godot_game_engine/Plugins/Making_your_first_plugin/The_idea&action=edit&redlink=1 "Guide to the Godot game engine/Plugins/Making your first plugin/The idea (does not exist)") 
[Guide to the Godot game engine/Plugins/Making your first plugin/The idea/Conversation tree 1](/w/index.php?title=Guide_to_the_Godot_game_engine/Plugins/Making_your_first_plugin/The_idea/Conversation_tree_1&action=edit&redlink=1 "Guide to the Godot game engine/Plugins/Making your first plugin/The idea/Conversation tree 1 (does not exist)") 
[Guide to the Godot game engine/Plugins/Making your first plugin/The idea/Conversation tree 2](/w/index.php?title=Guide_to_the_Godot_game_engine/Plugins/Making_your_first_plugin/The_idea/Conversation_tree_2&action=edit&redlink=1 "Guide to the Godot game engine/Plugins/Making your first plugin/The idea/Conversation tree 2 (does not exist)") 
[Guide to the Godot game engine/Plugins/Making your first plugin/The idea/Conversation tree 3](/w/index.php?title=Guide_to_the_Godot_game_engine/Plugins/Making_your_first_plugin/The_idea/Conversation_tree_3&action=edit&redlink=1 "Guide to the Godot game engine/Plugins/Making your first plugin/The idea/Conversation tree 3 (does not exist)") 



### 

 Bottom panels
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Plugins/Making_your_first_plugin/Bottom_panels&veaction=edit&section=T-1 "Edit section: Bottom panels") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Plugins/Making_your_first_plugin/Bottom_panels&action=edit&section=T-1 "Edit section: Bottom panels") 

 ]



 A
 *bottom panel* 
 is a button at the bottom of the screen that shows a dock when clicked. Examples are
 `Output` 
 ,
 `Debugger` 
 and
 `Audio` 
 .
 



 First, to create a bottom panel, you need to make a UI for it:
 


1. Create a scene and choose
 `User Interface` 
 , and rename the root Control node to
 `bottom_panel` 
 .
2. Save it inside your plugin folder, in the same place as the plugin script, under the name "bottom\_panel.tscn".
3. Select your Control, press
 `Layout` 
 from the top of the screen, and press
 `Full Rect` 
 from the drop down menu that appears.
4. With the Control still selected, expand
 `Rect` 
 in the Inspector and change
 `min_size.y` 
 to 50 (or some larger value) to ensure your UI appears with a non zero size.
5. Add a
 
[VBoxContainer](https://docs.godotengine.org/en/stable/classes/class_vboxcontainer.html) 

 as a child of the bottom panel. Set its layout to
 `Full Rect` 
 .
6. Add a
 
[Label](https://docs.godotengine.org/en/stable/classes/class_label.html) 

 , and give it text suitable to what the UI does.
7. Add a
 
[Panel](https://docs.godotengine.org/en/stable/classes/class_panel.html) 

 as a child of the VBoxContainer.
8. Make sure the Panel is selected, and go to
 `Size Flags` 
 on the inspector, and check
 `expand` 
 for both horizontal and vertical.
9. Create the main UI as a child of the VBoxContainer.



 You may wish to put the top Label in a
 
[HBoxContainer](https://docs.godotengine.org/en/stable/classes/class_hboxcontainer.html) 

 (which is in the VBoxContainer) if you want to also put buttons on the top.
 



 You also may want to use containers more than you would for a game. You may often want to stretch or shrink the bottom panel to be larger or smaller than the default small size. Setting a
 `min_size.x` 
 to 200 - 250 will also stop you from shrinking it too much and making the main screen invisible while the panel is open.
 



 Now, open your plugin's main script, and type the following code:
 



```
expands Control

var bp: Control
var bp_button: ToolButton

func \_enter\_tree():
  # Put any load logic here, including adding new project settings
  bp = preload("bottom\_panel.tscn").instance()
  bp_button = add\_control\_to\_bottom\_panel(bp, "Dock name")

func \_exit\_tree():
  # Put exit tree logic here, including any saving
  remove\_control\_from\_bottom\_panel(bp)
  bp.queue\_free()

```


  

 You may hide or show the button whenever you need too, by using
 `bp_button` 
 .
 



  




### 

 Dock
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Plugins/Making_your_first_plugin/Docks&veaction=edit&section=T-1 "Edit section: Dock") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Plugins/Making_your_first_plugin/Docks&action=edit&section=T-1 "Edit section: Dock") 

 ]



 A
 *dock* 
 is a side panel. Examples are
 `Inspector` 
 and
 `Scene` 
 .
 



 First, to create a bottom panel, you need to make a UI for it:
 


1. Create a scene and choose
 `User Interface` 
 , and rename the root Control node to
 `dock` 
 .
2. Save it inside your plugin folder, in the same place as the plugin script, under the name "dock.tscn".
3. Select your Control, press
 `Layout` 
 from the top of the screen, and press
 `Full Rect` 
 from the drop down menu that appears.
4. With the Control still selected, expand
 `Rect` 
 in the Inspector and change
 `min_size.x` 
 to 60 (or some larger value) to ensure your UI appears with a non zero size.
5. Create the main UI as a child of the VBoxContainer.



 Now, open your plugin's main script, and type the following code:
 



```
expands Control

var dock: Control

func \_enter\_tree():
  # Put any load logic here, including adding new project settings
  dock = preload("dock.tscn").instance()

func \_exit\_tree():
  # Put exit tree logic here, including any saving
  remove\_control\_from\_bottom\_panel(dock)
  dock.queue\_free()

```


  

[Guide to the Godot game engine/Plugins/Making your first plugin/Menus](/w/index.php?title=Guide_to_the_Godot_game_engine/Plugins/Making_your_first_plugin/Menus&action=edit&redlink=1 "Guide to the Godot game engine/Plugins/Making your first plugin/Menus (does not exist)") 
[Guide to the Godot game engine/Plugins/Making your first plugin/Gizmos](/w/index.php?title=Guide_to_the_Godot_game_engine/Plugins/Making_your_first_plugin/Gizmos&action=edit&redlink=1 "Guide to the Godot game engine/Plugins/Making your first plugin/Gizmos (does not exist)") 
[Guide to the Godot game engine/Plugins/Making your first plugin/Settings](/w/index.php?title=Guide_to_the_Godot_game_engine/Plugins/Making_your_first_plugin/Settings&action=edit&redlink=1 "Guide to the Godot game engine/Plugins/Making your first plugin/Settings (does not exist)") 
[Guide to the Godot game engine/Plugins/Making resources](/w/index.php?title=Guide_to_the_Godot_game_engine/Plugins/Making_resources&action=edit&redlink=1 "Guide to the Godot game engine/Plugins/Making resources (does not exist)") 
[Guide to the Godot game engine/Plugins/Importers](/w/index.php?title=Guide_to_the_Godot_game_engine/Plugins/Importers&action=edit&redlink=1 "Guide to the Godot game engine/Plugins/Importers (does not exist)") 
[Guide to the Godot game engine/Plugins/Text editors](/w/index.php?title=Guide_to_the_Godot_game_engine/Plugins/Text_editors&action=edit&redlink=1 "Guide to the Godot game engine/Plugins/Text editors (does not exist)") 





 Authors and contributors
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=19 "Edit section: Authors and contributors") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=19 "Edit section: Authors and contributors") 

 ]
=========================================================================================================================================================================================================================================================================================================================================



 This list is updated automatically by
 [AuthorsAndContributorsBot](/wiki/User:AuthorsAndContributorsBot "User:AuthorsAndContributorsBot") 
 . Please do not update it manually.
 


1. [L10nM4st3r](/wiki/User:L10nM4st3r "User:L10nM4st3r") 

 (
 [discuss](/wiki/User_talk:L10nM4st3r "User talk:L10nM4st3r") 
**·** 
[contribs](/wiki/Special:Contributions/L10nM4st3r "Special:Contributions/L10nM4st3r") 
**·** 
[count](http://tools.wmflabs.org/xtools/pcount/index.php?name=L10nM4st3r&lang=en&wiki=wikibooks)
**·** 
[logs](https://en.wikibooks.org/w/index.php?title=Special:Log&user=L10nM4st3r)
**·** 
[block log](https://en.wikibooks.org/w/index.php?title=Special:Log/block&page=User:L10nM4st3r)
**·** 
[rfp](/w/index.php?title=Wikibooks:Requests_for_permissions/L10nM4st3r&action=edit&redlink=1 "Wikibooks:Requests for permissions/L10nM4st3r (does not exist)")
**·** 
[rights](/wiki/Special:UserRights/L10nM4st3r "Special:UserRights/L10nM4st3r")
 [
 *[change](/wiki/Special:UserRights/L10nM4st3r "Special:UserRights/L10nM4st3r")*
 ])
2. [Mbrickn](/wiki/User:Mbrickn "User:Mbrickn") 

 (
 [discuss](/wiki/User_talk:Mbrickn "User talk:Mbrickn") 
**·** 
[contribs](/wiki/Special:Contributions/Mbrickn "Special:Contributions/Mbrickn") 
**·** 
[count](http://tools.wmflabs.org/xtools/pcount/index.php?name=Mbrickn&lang=en&wiki=wikibooks)
**·** 
[logs](https://en.wikibooks.org/w/index.php?title=Special:Log&user=Mbrickn)
**·** 
[block log](https://en.wikibooks.org/w/index.php?title=Special:Log/block&page=User:Mbrickn)
**·** 
[rfp](/w/index.php?title=Wikibooks:Requests_for_permissions/Mbrickn&action=edit&redlink=1 "Wikibooks:Requests for permissions/Mbrickn (does not exist)")
**·** 
[rights](/wiki/Special:UserRights/Mbrickn "Special:UserRights/Mbrickn")
 [
 *[change](/wiki/Special:UserRights/Mbrickn "Special:UserRights/Mbrickn")*
 ])
3. [Mrjulesd](/wiki/User:Mrjulesd "User:Mrjulesd") 

 (
 [discuss](/wiki/User_talk:Mrjulesd "User talk:Mrjulesd") 
**·** 
[contribs](/wiki/Special:Contributions/Mrjulesd "Special:Contributions/Mrjulesd") 
**·** 
[count](http://tools.wmflabs.org/xtools/pcount/index.php?name=Mrjulesd&lang=en&wiki=wikibooks)
**·** 
[logs](https://en.wikibooks.org/w/index.php?title=Special:Log&user=Mrjulesd)
**·** 
[block log](https://en.wikibooks.org/w/index.php?title=Special:Log/block&page=User:Mrjulesd)
**·** 
[rfps](/wiki/Wikibooks:Requests_for_permissions/Mrjulesd "Wikibooks:Requests for permissions/Mrjulesd") 
**·** 
[rights](/wiki/Special:UserRights/Mrjulesd "Special:UserRights/Mrjulesd")
 [
 *[change](/wiki/Special:UserRights/Mrjulesd "Special:UserRights/Mrjulesd")*
 ])
4. [Atcovi](/wiki/User:Atcovi "User:Atcovi") 

 (
 [discuss](/wiki/User_talk:Atcovi "User talk:Atcovi") 
**·** 
[contribs](/wiki/Special:Contributions/Atcovi "Special:Contributions/Atcovi") 
**·** 
[count](http://tools.wmflabs.org/xtools/pcount/index.php?name=Atcovi&lang=en&wiki=wikibooks)
**·** 
[logs](https://en.wikibooks.org/w/index.php?title=Special:Log&user=Atcovi)
**·** 
[block log](https://en.wikibooks.org/w/index.php?title=Special:Log/block&page=User:Atcovi)
**·** 
[rfps](/wiki/Wikibooks:Requests_for_permissions/Atcovi "Wikibooks:Requests for permissions/Atcovi") 
**·** 
[rights](/wiki/Special:UserRights/Atcovi "Special:UserRights/Atcovi")
 [
 *[change](/wiki/Special:UserRights/Atcovi "Special:UserRights/Atcovi")*
 ])
5. [Darklilac](/w/index.php?title=User:Darklilac&action=edit&redlink=1 "User:Darklilac (does not exist)") 

 (
 [discuss](/wiki/User_talk:Darklilac "User talk:Darklilac") 
**·** 
[contribs](/wiki/Special:Contributions/Darklilac "Special:Contributions/Darklilac") 
**·** 
[count](http://tools.wmflabs.org/xtools/pcount/index.php?name=Darklilac&lang=en&wiki=wikibooks)
**·** 
[logs](https://en.wikibooks.org/w/index.php?title=Special:Log&user=Darklilac)
**·** 
[block log](https://en.wikibooks.org/w/index.php?title=Special:Log/block&page=User:Darklilac)
**·** 
[rfp](/w/index.php?title=Wikibooks:Requests_for_permissions/Darklilac&action=edit&redlink=1 "Wikibooks:Requests for permissions/Darklilac (does not exist)")
**·** 
[rights](/wiki/Special:UserRights/Darklilac "Special:UserRights/Darklilac")
 [
 *[change](/wiki/Special:UserRights/Darklilac "Special:UserRights/Darklilac")*
 ])
6. [Slava Ukraini Heroyam Slava 123](/wiki/User:Slava_Ukraini_Heroyam_Slava_123 "User:Slava Ukraini Heroyam Slava 123") 

 (
 [discuss](/wiki/User_talk:Slava_Ukraini_Heroyam_Slava_123 "User talk:Slava Ukraini Heroyam Slava 123") 
**·** 
[contribs](/wiki/Special:Contributions/Slava_Ukraini_Heroyam_Slava_123 "Special:Contributions/Slava Ukraini Heroyam Slava 123") 
**·** 
[count](http://tools.wmflabs.org/xtools/pcount/index.php?name=Slava+Ukraini+Heroyam+Slava+123&lang=en&wiki=wikibooks)
**·** 
[logs](https://en.wikibooks.org/w/index.php?title=Special:Log&user=Slava+Ukraini+Heroyam+Slava+123)
**·** 
[block log](https://en.wikibooks.org/w/index.php?title=Special:Log/block&page=User:Slava+Ukraini+Heroyam+Slava+123)
**·** 
[rfp](/w/index.php?title=Wikibooks:Requests_for_permissions/Slava_Ukraini_Heroyam_Slava_123&action=edit&redlink=1 "Wikibooks:Requests for permissions/Slava Ukraini Heroyam Slava 123 (does not exist)")
**·** 
[rights](/wiki/Special:UserRights/Slava_Ukraini_Heroyam_Slava_123 "Special:UserRights/Slava Ukraini Heroyam Slava 123")
 [
 *[change](/wiki/Special:UserRights/Slava_Ukraini_Heroyam_Slava_123 "Special:UserRights/Slava Ukraini Heroyam Slava 123")*
 ])
7. [Xania](/wiki/User:Xania "User:Xania") 

 (
 [discuss](/wiki/User_talk:Xania "User talk:Xania") 
**·** 
[contribs](/wiki/Special:Contributions/Xania "Special:Contributions/Xania") 
**·** 
[count](http://tools.wmflabs.org/xtools/pcount/index.php?name=Xania&lang=en&wiki=wikibooks)
**·** 
[logs](https://en.wikibooks.org/w/index.php?title=Special:Log&user=Xania)
**·** 
[block log](https://en.wikibooks.org/w/index.php?title=Special:Log/block&page=User:Xania)
**·** 
[rfps](/wiki/Wikibooks:Requests_for_permissions/Xania "Wikibooks:Requests for permissions/Xania") 
**·** 
[rights](/wiki/Special:UserRights/Xania "Special:UserRights/Xania")
 [
 *[change](/wiki/Special:UserRights/Xania "Special:UserRights/Xania")*
 ])
8. [1234qwer1234qwer4](/wiki/User:1234qwer1234qwer4 "User:1234qwer1234qwer4") 

 (
 [discuss](/wiki/User_talk:1234qwer1234qwer4 "User talk:1234qwer1234qwer4") 
**·** 
[contribs](/wiki/Special:Contributions/1234qwer1234qwer4 "Special:Contributions/1234qwer1234qwer4") 
**·** 
[count](http://tools.wmflabs.org/xtools/pcount/index.php?name=1234qwer1234qwer4&lang=en&wiki=wikibooks)
**·** 
[logs](https://en.wikibooks.org/w/index.php?title=Special:Log&user=1234qwer1234qwer4)
**·** 
[block log](https://en.wikibooks.org/w/index.php?title=Special:Log/block&page=User:1234qwer1234qwer4)
**·** 
[rfp](/w/index.php?title=Wikibooks:Requests_for_permissions/1234qwer1234qwer4&action=edit&redlink=1 "Wikibooks:Requests for permissions/1234qwer1234qwer4 (does not exist)")
**·** 
[rights](/wiki/Special:UserRights/1234qwer1234qwer4 "Special:UserRights/1234qwer1234qwer4")
 [
 *[change](/wiki/Special:UserRights/1234qwer1234qwer4 "Special:UserRights/1234qwer1234qwer4")*
 ])
9. [Daev](/w/index.php?title=User:Daev&action=edit&redlink=1 "User:Daev (does not exist)") 

 (
 [discuss](/w/index.php?title=User_talk:Daev&action=edit&redlink=1 "User talk:Daev (does not exist)") 
**·** 
[contribs](/wiki/Special:Contributions/Daev "Special:Contributions/Daev") 
**·** 
[count](http://tools.wmflabs.org/xtools/pcount/index.php?name=Daev&lang=en&wiki=wikibooks)
**·** 
[logs](https://en.wikibooks.org/w/index.php?title=Special:Log&user=Daev)
**·** 
[block log](https://en.wikibooks.org/w/index.php?title=Special:Log/block&page=User:Daev)
**·** 
[rfp](/w/index.php?title=Wikibooks:Requests_for_permissions/Daev&action=edit&redlink=1 "Wikibooks:Requests for permissions/Daev (does not exist)")
**·** 
[rights](/wiki/Special:UserRights/Daev "Special:UserRights/Daev")
 [
 *[change](/wiki/Special:UserRights/Daev "Special:UserRights/Daev")*
 ])
10. [Jellysandwich0](/w/index.php?title=User:Jellysandwich0&action=edit&redlink=1 "User:Jellysandwich0 (does not exist)") 

 (
 [discuss](/wiki/User_talk:Jellysandwich0 "User talk:Jellysandwich0") 
**·** 
[contribs](/wiki/Special:Contributions/Jellysandwich0 "Special:Contributions/Jellysandwich0") 
**·** 
[count](http://tools.wmflabs.org/xtools/pcount/index.php?name=Jellysandwich0&lang=en&wiki=wikibooks)
**·** 
[logs](https://en.wikibooks.org/w/index.php?title=Special:Log&user=Jellysandwich0)
**·** 
[block log](https://en.wikibooks.org/w/index.php?title=Special:Log/block&page=User:Jellysandwich0)
**·** 
[rfp](/w/index.php?title=Wikibooks:Requests_for_permissions/Jellysandwich0&action=edit&redlink=1 "Wikibooks:Requests for permissions/Jellysandwich0 (does not exist)")
**·** 
[rights](/wiki/Special:UserRights/Jellysandwich0 "Special:UserRights/Jellysandwich0")
 [
 *[change](/wiki/Special:UserRights/Jellysandwich0 "Special:UserRights/Jellysandwich0")*
 ])
11. [Kaltenmeyer](/w/index.php?title=User:Kaltenmeyer&action=edit&redlink=1 "User:Kaltenmeyer (does not exist)") 

 (
 [discuss](/wiki/User_talk:Kaltenmeyer "User talk:Kaltenmeyer") 
**·** 
[contribs](/wiki/Special:Contributions/Kaltenmeyer "Special:Contributions/Kaltenmeyer") 
**·** 
[count](http://tools.wmflabs.org/xtools/pcount/index.php?name=Kaltenmeyer&lang=en&wiki=wikibooks)
**·** 
[logs](https://en.wikibooks.org/w/index.php?title=Special:Log&user=Kaltenmeyer)
**·** 
[block log](https://en.wikibooks.org/w/index.php?title=Special:Log/block&page=User:Kaltenmeyer)
**·** 
[rfp](/w/index.php?title=Wikibooks:Requests_for_permissions/Kaltenmeyer&action=edit&redlink=1 "Wikibooks:Requests for permissions/Kaltenmeyer (does not exist)")
**·** 
[rights](/wiki/Special:UserRights/Kaltenmeyer "Special:UserRights/Kaltenmeyer")
 [
 *[change](/wiki/Special:UserRights/Kaltenmeyer "Special:UserRights/Kaltenmeyer")*
 ])
12. [SHB2000](/wiki/User:SHB2000 "User:SHB2000") 

 (
 [discuss](/wiki/User_talk:SHB2000 "User talk:SHB2000") 
**·** 
[contribs](/wiki/Special:Contributions/SHB2000 "Special:Contributions/SHB2000") 
**·** 
[count](http://tools.wmflabs.org/xtools/pcount/index.php?name=SHB2000&lang=en&wiki=wikibooks)
**·** 
[logs](https://en.wikibooks.org/w/index.php?title=Special:Log&user=SHB2000)
**·** 
[block log](https://en.wikibooks.org/w/index.php?title=Special:Log/block&page=User:SHB2000)
**·** 
[rfps](/wiki/Wikibooks:Requests_for_permissions/SHB2000 "Wikibooks:Requests for permissions/SHB2000") 
**·** 
[rights](/wiki/Special:UserRights/SHB2000 "Special:UserRights/SHB2000")
 [
 *[change](/wiki/Special:UserRights/SHB2000 "Special:UserRights/SHB2000")*
 ])



  






 Helpful links
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit&section=20 "Edit section: Helpful links") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit&section=20 "Edit section: Helpful links") 

 ]
========================================================================================================================================================================================================================================================================================================




 Official websites
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Helpful_links&veaction=edit&section=T-1 "Edit section: Official websites") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Helpful_links&action=edit&section=T-1 "Edit section: Official websites") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


* Godot's official website:
 <https://godotengine.org>


* Godot's official unstable (latest) documentation:
 <https://docs.godotengine.org/en/latest>


* Godot's official stable documentation:
 <https://docs.godotengine.org/en/stable>




 Third Party websites
 


 [
 
[edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Helpful_links&veaction=edit&section=T-2 "Edit section: Third Party websites") 

 |
 
[edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Helpful_links&action=edit&section=T-2 "Edit section: Third Party websites") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


* Kids Can Code - Godot recipes:
 <https://kidscancode.org/godot_recipes>



  










![](//en.wikibooks.org/wiki/Special:CentralAutoLogin/start?type=1x1)


 Retrieved from "
 <https://en.wikibooks.org/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&oldid=4296689>
 "
 



[Categories](/wiki/Special:Categories "Special:Categories") 
 :
 * [Print Versions](/wiki/Category:Print_Versions "Category:Print Versions")
* [Book:Guide to the Godot game engine](/wiki/Category:Book:Guide_to_the_Godot_game_engine "Category:Book:Guide to the Godot game engine")




 Hidden categories:
 * [Stubs](/wiki/Category:Stubs "Category:Stubs")
* [Wikibooks pages with to-do lists](/wiki/Category:Wikibooks_pages_with_to-do_lists "Category:Wikibooks pages with to-do lists")








 Navigation menu
-----------------




### 

 Personal tools



* Not logged in
* [Discussion for this IP address](/wiki/Special:MyTalk "Discussion about edits from this IP address [n]")
* [Contributions](/wiki/Special:MyContributions "A list of edits made from this IP address [y]")
* [Create account](/w/index.php?title=Special:CreateAccount&returnto=Guide+to+the+Godot+game+engine%2FPrint+version "You are encouraged to create an account and log in; however, it is not mandatory")
* [Log in](/w/index.php?title=Special:UserLogin&returnto=Guide+to+the+Godot+game+engine%2FPrint+version "You are encouraged to log in; however, it is not mandatory [o]")






### 

 Namespaces



* [Book](/wiki/Guide_to_the_Godot_game_engine/Print_version "View the content page [c]")
* [Discussion](/w/index.php?title=Talk:Guide_to_the_Godot_game_engine/Print_version&action=edit&redlink=1 "Discussion about the content page (does not exist) [t]")








 English
 









### 

 Views



* [Read](/wiki/Guide_to_the_Godot_game_engine/Print_version)
* [Edit](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&veaction=edit "Edit this page [v]")
* [Edit source](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=edit "Edit this page [e]")
* [View history](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=history "Past revisions of this page [h]")








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



* [What links here](/wiki/Special:WhatLinksHere/Guide_to_the_Godot_game_engine/Print_version "A list of all wiki pages that link here [j]")
* [Related changes](/wiki/Special:RecentChangesLinked/Guide_to_the_Godot_game_engine/Print_version "Recent changes in pages linked from this page [k]")
* [Upload file](//commons.wikimedia.org/wiki/Special:UploadWizard?uselang=en "Upload files [u]")
* [Special pages](/wiki/Special:SpecialPages "A list of all special pages [q]")
* [Permanent link](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&oldid=4296689 "Permanent link to this revision of this page")
* [Page information](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&action=info "More information about this page")
* [Cite this page](/w/index.php?title=Special:CiteThisPage&page=Guide_to_the_Godot_game_engine%2FPrint_version&id=4296689&wpFormIdentifier=titleform "Information on how to cite this page")





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



* [Create a collection](/w/index.php?title=Special:Book&bookcmd=book_creator&referer=Guide+to+the+Godot+game+engine%2FPrint+version)
* [Download as PDF](/w/index.php?title=Special:DownloadAsPdf&page=Guide_to_the_Godot_game_engine%2FPrint_version&action=show-download-screen)
* [Printable version](/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&printable=yes "Printable version of this page [p]")





### 

 In other languages









[Add links](https://www.wikidata.org/wiki/Special:NewItem?site=enwikibooks&page=Guide+to+the+Godot+game+engine%2FPrint+version "Add interlanguage links") 







* This page was last edited on 8 June 2023, at 21:05.
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
* [Mobile view](//en.m.wikibooks.org/w/index.php?title=Guide_to_the_Godot_game_engine/Print_version&mobileaction=toggle_view_mobile)
* [Developers](https://developer.wikimedia.org)
* [Statistics](https://stats.wikimedia.org/#/en.wikibooks.org)
* [Cookie statement](https://foundation.wikimedia.org/wiki/Special:MyLanguage/Policy:Cookie_statement)


* [![Wikimedia Foundation](/static/images/footer/wikimedia-button.png)](https://wikimediafoundation.org/)
* [![Powered by MediaWiki](/static/images/footer/poweredby_mediawiki_88x31.png)](https://www.mediawiki.org/)




