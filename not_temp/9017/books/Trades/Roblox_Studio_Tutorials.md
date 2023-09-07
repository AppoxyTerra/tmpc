




 Roblox Studio Tutorials/Printable version - Wikibooks, open books for an open world
 








































 Roblox Studio Tutorials/Printable version
============================================




 From Wikibooks, open books for an open world
 



 <
 [Roblox Studio Tutorials](/wiki/Roblox_Studio_Tutorials "Roblox Studio Tutorials") 







[Jump to navigation](#mw-head) 
[Jump to search](#searchInput) 




|  |  |
| --- | --- |
| 



 | **This is the
 [print version](/wiki/Help:Print_versions "Help:Print versions") 
 of
 [Roblox Studio Tutorials](/wiki/Roblox_Studio_Tutorials "Roblox Studio Tutorials")**

 You won't see this message or any elements not part of the book's content when you print or
 [preview](https://en.wikibooks.org/w/index.php?title=Roblox_Studio_Tutorials/Printable_version&printable=yes) 
 this page.
  |




  





 Roblox Studio Tutorials
 



 The current, editable version of this book is available in Wikibooks, the open-content textbooks collection, at
   


<https://en.wikibooks.org/wiki/Roblox_Studio_Tutorials>





 Permission is granted to copy, distribute, and/or modify this document under the terms of the
 [Creative Commons Attribution-ShareAlike 3.0 License](/wiki/Wikibooks:Creative_Commons_Attribution-ShareAlike_3.0_Unported_License "Wikibooks:Creative Commons Attribution-ShareAlike 3.0 Unported License") 
 .
 





 Contents
----------







* [1
 

 Beginning to build](#Beginning_to_build)
* [2
 

 Effects and lighting](#Effects_and_lighting)
	+ [2.1
	 
	
	 ...](#...)
* [3
 

 Effects](#Effects)
	+ [3.1
	 
	
	 Campfire](#Campfire)
	+ [3.2
	 
	
	 Fountain](#Fountain)
* [4
 

 Treasure Hunt Simulator](#Treasure_Hunt_Simulator)
	+ [4.1
	 
	
	 Currencies](#Currencies)
	+ [4.2
	 
	
	 Rebirths](#Rebirths)
	+ [4.3
	 
	
	 Crates](#Crates)
	+ [4.4
	 
	
	 Hat crates](#Hat_crates)
	+ [4.5
	 
	
	 Hats](#Hats)
	+ [4.6
	 
	
	 Tools](#Tools)
	+ [4.7
	 
	
	 Backpacks](#Backpacks)
	+ [4.8
	 
	
	 Pets](#Pets)
	+ [4.9
	 
	
	 Dig Sites](#Dig_Sites)
	+ [4.10
	 
	
	 Chests](#Chests)
	+ [4.11
	 
	
	 General Strategies](#General_Strategies)
* [5
 

 Beginning to script](#Beginning_to_script)
* [6
 

 Ways to die in Roblox Natural Disaster Survival](#Ways_to_die_in_Roblox_Natural_Disaster_Survival)
* [7
 

 New spawns](#New_spawns)
* [8
 

 Day and night cycle](#Day_and_night_cycle)
* [9
 

 Basic hinges and jump boost](#Basic_hinges_and_jump_boost)









 Beginning to build
=====================



 Every Roblox PC or Mac player already has Roblox Studio downloaded. So just open Roblox Studio, then click install. Once that is done, log in to your Roblox account. You should now be on the templates page. We are going to start an obby now. Click on baseplate, a new place should be opened. Select "Baseplate" then use CTRL+X to delete it. Click on part and a new block should spawn in the middle of your screen. Click on scale and make the block look like a floor. Insert three new blocks and scale them like walls that fits the floor. Use the move tool to move your walls in the right spot. Select your floor and click on duplicate. Use the move tool and move it on top of the walls. Now we just need a spawn so the players will spawn in your lobby. Go to models and click on spawn. move the spawn in your lobby. The lobby for your obby is now finished(VIP doors are in future tutorials). Click next again and your game should be saved.
 



  










 Effects and lighting
=======================




 ...
 


 [
 
[edit](/w/index.php?title=Roblox_Studio_Tutorials/Effects_and_lighting&veaction=edit&section=T-1 "Edit section: ...") 

 |
 
[edit source](/w/index.php?title=Roblox_Studio_Tutorials/Effects_and_lighting&action=edit&section=T-1 "Edit section: ...") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 This tutorial will be about how to make a light that goes off in the day and goes on at night. First, make the part that shines. Insert a script and a PointLight inside it. And let's say it is named "Light". Script:
 



```
light = game.workspace.Light
minutesAfterMidnight = 0
while true do()
            minutesAfterMidnight =[press space]minutesAfterMidnight+10

```


  










 Effects
==========




 Campfire
 


 [
 
[edit](/w/index.php?title=Roblox_Studio_Tutorials/Effects&veaction=edit&section=T-1 "Edit section: Campfire") 

 |
 
[edit source](/w/index.php?title=Roblox_Studio_Tutorials/Effects&action=edit&section=T-1 "Edit section: Campfire") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 You can make a cool campfire using effects! First, build the campfire with surroundings and a base and some logs. Then, add a fire effect by going to models>effects>fire. You will see a fire coming out from the base. The fire might be too small, but we can make it bigger by going to the properties of the fire. You can change the size of the fire by changing the size property. You can also change the brightness, and the color, also the range to make a cool campfire!
 




 Fountain
 


 [
 
[edit](/w/index.php?title=Roblox_Studio_Tutorials/Effects&veaction=edit&section=T-2 "Edit section: Fountain") 

 |
 
[edit source](/w/index.php?title=Roblox_Studio_Tutorials/Effects&action=edit&section=T-2 "Edit section: Fountain") 

 ]
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 This one is a little bit harder than campfire. But it is really cool. First, add a ring of water, then, add surrounding and a middle. Add a part that would spray water into the air in the middle. Insert a ParticleEmitter inside the sprayer. You will see that the sprayer starts to "spray" out sparkles. But sparkles look nothing like water. We need water.
Copy this smoke: wiki.roblox.com/index.php?title=File:Smoke.png&filetimestamp=20150731221157&
 



```
copy this website.

```


 Add the new smoke file to replace the sparkles file. You should see smoke coming out of the sprayer.
That still doesn't look like water though, we need to change the properties. Change Color>Start to light teal, then change LightEmission to 0.5, click on size and click ... and drag the right endpoint to the bottom. Do the same thing to transparency. But this time, drag the left endpoint to about in the middle. Now they look good but they don't fall. To make the particles fall, we need to change acceleration to 0,-10,0. Now for the finishing touches. Change RotSpeed to -90,90, change speed to 15, velocity spread to 5, rate to 200 and LifeTime to 4.
 



  










 Treasure Hunt Simulator
==========================




 Currencies
 


 [
 
[edit](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&veaction=edit&section=T-1 "Edit section: Currencies") 

 |
 
[edit source](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&action=edit&section=T-1 "Edit section: Currencies") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 There are two types of currency in Treasure Hunt Simulator: Coins and Rubies.
 



 Coins are earned by selling sand and by opening Chests found underground. Coins are used to purchase Tools, Backpacks, Pets and Crates.
 



 Rubies are earned by Rebirthing and opening Chests found underground.
 




 Rebirths
 


 [
 
[edit](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&veaction=edit&section=T-2 "Edit section: Rebirths") 

 |
 
[edit source](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&action=edit&section=T-2 "Edit section: Rebirths") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Rebirths reset the player's progress, removing all Tools, Backpacks and Pets. After rebirthing, the player starts with the Bucket and Starterpack. Rebirths can be purchased using the Coin currency, with each subsequent rebirth costing more than the previous.
 



 Each rebirth grants the player a 0.5 multiplier to Coins earned from selling Sand and opening Chests, and 50 Rubies.
 




 Crates
 


 [
 
[edit](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&veaction=edit&section=T-3 "Edit section: Crates") 

 |
 
[edit source](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&action=edit&section=T-3 "Edit section: Crates") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Crates are items containing one random Skin or Hat. Skin and Hat Crates can be purchased at the Upgrade Shop with Coins or Rubies. The Crates that require Rubies have a higher chance of granting rare items.
 



 Skins can be applied to the player's Tool or Backpack. Skins do not grant any bonuses to Tool strength or Backpack storage and are purely cosmetic. Rebirthing does not remove skins from the player's inventory.
 



  






 Hat crates
 


 [
 
[edit](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&veaction=edit&section=T-4 "Edit section: Hat crates") 

 |
 
[edit source](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&action=edit&section=T-4 "Edit section: Hat crates") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 tier 1: 5000 coins 70% chance of common 20% chance of rare 7% chance of epic 2.9% chance of legendary 0.1% chance of mythical
 



 tier 2: 250K coins 49% chance of common 20% chance of rare 15% chance of epic 5% chance of legendary 1% chance of mythical
 



 tier 3: 5M coins 23% chance of common 45% chance of rare 20% chance of epic 10% chance of legendary 1.9% chance of mythical 0.1% chance of sacred
 



 tier 4: 250 gems 0% chance of common 54.5% chance of rare 25% chance of epic 15% chance of legendary 5% chance of mythical 0.5% chance of sacred
 



 tier 5: 500 gems 0% chance of common 30% chance of rare 36.5% chance of epic 25% chance of legendary 7.5% chance of mythical 1% chance of sacred
 




 Hats
 


 [
 
[edit](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&veaction=edit&section=T-5 "Edit section: Hats") 

 |
 
[edit source](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&action=edit&section=T-5 "Edit section: Hats") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Hats grant a bonus to Tool strength. Most importantly, Hats are not removed when rebirthing, so spending Coins on Hat Crates is a good strategy to start rebirths with plenty of strength, even when the player only has the starting Bucket.
 



 The player may equip hats in the Hats tab of the inventory screen. Up to three hats can be equipped at once.
 



 Minimum and Maximum bonus values were obtained from the in-game Hat Index.
 





| 
 Quality
  | 
 Color
  | 
 Minimum Bonus
  | 
 Maximum Bonus
  | 
 Notes
  |
| --- | --- | --- | --- | --- |
| 
 Common
  | 
 White
  | 
 10
  | 
 50
  |  |
| 
 Rare
  | 
 Yellow
  | 
 130
  | 
 170
  |  |
| 
 Epic
  | 
 Purple
  | 
 250
  | 
 380
  |  |
| 
 Legendary
  | 
 Red
  | 
 500
  | 
 750
  | 
 The White Sparkle Time Fedora emits a visual effect around the player's head that can significantly obstruct the player's view, especially in first-person view. This effect is visible even when hats display is turned off in game.
  |
| 
 Mythical
  | 
 Green
  | 
 1,030
  | 
 1,480
  |  |
| 
 Sacred
  | 
 Orange
  | 
 2,310
  | 
 3,250
  |  |
| 
 GODLY
  | 
 Pink
  | 
 4,560
  | 
 6,200
  |  |




 Tools
 


 [
 
[edit](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&veaction=edit&section=T-6 "Edit section: Tools") 

 |
 
[edit source](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&action=edit&section=T-6 "Edit section: Tools") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Tools can be purchased at the Upgrade Shop (also referred to as simply Shop). Some tools are only available for purchase in specific areas. When a new tool is purchased, it will automatically be equipped. The player can switch between purchased tools at the Shop.
 **BEWARE!!!** 
 Some tools dig automatically and only dig straight down, which makes it very difficult to mine a chest above or beside you; these tools are primarily used for getting to lower depths very quickly, without regard for chests you pass along the way down.
 





| 
 Tool
  | 
 Strength
  | 
 Time (seconds)
  | 
 Cost
  | 
 Robux
  | 
 Area Shop
  | 
 Dig Type
  | 
 Notes
  |
| --- | --- | --- | --- | --- | --- | --- | --- |
| 
 Bucket
  | 
 1
  | 
 2
  | 
 0
  |  |  | 
 Manual
  | 
 Can target blocks above, beside and below the player, up to four blocks away (excluding the block the player is in).
  |
| 
 Spade
  | 
 2
  | 
 2
  | 
 100
  |  |  | 
 Manual
  |  |
| 
 Toy Shovel
  | 
 3
  | 
 2
  | 
 250
  |  |  | 
 Manual
  |  |
| 
 Small Shovel
  | 
 4
  | 
 1.5
  | 
 600
  |  |  | 
 Manual
  |  |
| 
 Medium Shovel
  | 
 5
  | 
 1.5
  | 
 2,100
  |  |  | 
 Manual
  |  |
| 
 Large Shovel
  | 
 7
  | 
 1.5
  | 
 8,800
  |  |  | 
 Manual
  |  |
| 
 Big Scooper
  | 
 10
  | 
 1
  | 
 24,000
  |  |  | 
 Manual
  |  |
| 
 Rake
  | 
 15
  | 
 1
  | 
 40,000
  |  |  | 
 Manual
  |  |
| 
 Vacuum
  | 
 20
  | 
 1
  | 
 65,000
  |  |  | 
 Automatic
  | 
 Unlike regular tools, the Vacuum tool will continuously dig at the block directly below the player when active. With careful positioning, the player can dig adjacent blocks, but not ones above.
  |
| 
 Dynamite
  | 
 50
  | 
 0.5
  | 
 185,000
  |  |  | 
 Manual
  | 
 When used, dynamite is dropped near the feet and explodes. Cannot be used to target blocks like regular tools.
  |
| 
 Giant Shovel
  | 
 75
  | 
 0.5
  | 
 250,000
  |  |  | 
 Manual
  |  |
| 
 Metal Detector
  | 
 100
  | 
 0.5
  | 
 500,000
  |  |  | 
 Automatic
  | 
 Unlike regular tools, the Metal Detector tool will continuously dig at the block directly below the player when active. With careful positioning, the player can dig adjacent blocks, but not ones above.
  |
| 
 Lollipop
  | 
 100
  | 
 0.5
  | 
 200,000
  |  | 
 Candy
  | 
 Manual
  |  |
| 
 Chisel
  | 
 125
  | 
 0.5
  | 
 300,000
  |  | 
 Dino
  | 
 Manual
  |  |
| 
 Magical Message Bottle
  | 
 150
  | 
 0.5
  | 
 400,000
  |  | 
 Pirate
  | 
 Manual
  |  |
| 
 C4
  | 
 150
  | 
 0.5
  | 
 1,500,000
  |  |  | 
 Manual
  |  |
| 
 Jack Hammer
  | 
 250
  | 
 0.5
  | 
 3,000,000
  |  |  | 
 Automatic
  | 
 Unlike regular tools, the Jack Hammer tool will continuously dig at the block directly below the player when active. With careful positioning, the player can dig adjacent blocks, but not ones above.
  |
| 
 Golden Spoon
  | 
 500
  | 
 0.5
  | 
 10,000,000
  |  |  | 
 Manual
  |  |
| 
 Dual Scoops
  | 
 750
  | 
 0.5
  | 
 22,000,000
  |  |  | 
 Manual
  |  |
| 
 Candy Hammer
  | 
 800
  | 
 0.5
  | 
 20,000,000
  |  | 
 Candy
  | 
 Manual
  |  |
| 
 Pickaxe
  | 
 900
  | 
 0.5
  | 
 25,000,000
  |  | 
 Dino
  | 
 Manual
  |  |
| 
 Drill
  | 
 1,000
  | 
 0.5
  | 
 45,000,000
  |  |  | 
 Automatic
  | 
 Unlike regular tools, drill-type tools will continuously dig at the block directly below the player when active. With careful positioning, the player can dig adjacent blocks, but not ones above.
  |
| 
 Golden Bucket
  | 
 1,000
  | 
 0.5
  | 
 30,000,000
  |  | 
 Pirate
  | 
 Manual
  |  |
| 
 Easter Basket
  | 
 2,000
  | 
 0.5
  | 
 250,000,000
  |  |  | 
 Manual
  |  |
| 
 Nuke
  | 
 2,000
  | 
 0.5
  | 
 100,000,000
  |  |  | 
 Manual
  | 
 Nukes are dropped on the floor and eventually explode, like the dynamite tool.
  |
| 
 Dual Drills
  | 
 2,000
  | 
 0.5
  | 
 500,000,000
  |  |  | 
 Automatic
  | 
 Unlike regular tools, the Dual Drills tool will continuously dig at the block directly below the player when active. With careful positioning, the player can dig adjacent blocks, but not ones above.
  |
| 
 Golden Nuke
  | 
 4,000
  | 
 0.5
  | 
 300,000,000
  |  |  | 
 Manual
  |  |
| 
 Lightning Bolt
  | 
 3,500
  | 
 0.3
  | 
 N/A
  | 
 500
  |  | 
 Automatic
  | 
 Unlike regular tools, the Lightning Bolt tool will continuously dig at the block directly below the player when active. With careful positioning, the player can dig adjacent blocks, but not ones above.
  |
| 
 Magnifying Glass
  | 
 3,000
  | 
 0.25
  | 
 1,000,000,000
  |  |  | 
 Automatic
  | 
 Unlike regular tools, the Magnifying Glass tool will continuously dig at the block directly below the player when active. With careful positioning, the player can dig adjacent blocks, but not ones above.
  |
| 
 Golden Metal Detector
  | 
 3,500
  | 
 0.25
  | 
 3,000,000,000
  |  |  | 
 Automatic
  | 
 Unlike regular tools, the Golden Metal Detector tool will continuously dig at the block directly below the player when active. With careful positioning, the player can dig adjacent blocks, but not ones above.
  |
| 
 Claw Scooper
  | 
 4,750
  | 
 0.25
  | 
 4,000,000,000
  |  | 
 Candy
  | 
 Manual
  |  |
| 
 Magical Map
  | 
 4,900
  | 
 0.25
  | 
 5,000,000,000
  |  | 
 Pirate
  |  |  |
| 
 Grenade
  | 
 5,000
  | 
 0.25
  | 
 1,500,000,000
  |  |  | 
 Manual
  |  |
| 
 Spiked Shovel
  | 
 5,000
  | 
 0.25
  | 
 6,000,000,000
  |  | 
 Dino
  | 
 Manual
  |  |
| 
 Firework
  | 
 6,000
  | 
 0.25
  | 
 80,000,000,000
  |  |  | 
 Manual
  |  |
| 
 Sword
  | 
 5,000
  | 
 0.2
  | 
 5,000,000,000
  |  | 
 Medieval
  | 
 Manual
  |  |
| 
 Black Hole
  | 
 5,000
  | 
 0.15
  | 
 N/A
  | 
 1,299
  |  | 
 Automatic
  | 
 Unlike regular tools, the Black Hole tool will continuously dig at the block directly below the player when active. With careful positioning, the player can dig adjacent blocks, but not ones above.
  |
| 
 Double Big Scooper
  | 
 5,500
  | 
 0.15
  | 
 20,000,000,000
  |  |  | 
 Manual
  |  |
| 
 Hoover
  | 
 6,000
  | 
 0.15
  | 
 100,000,000,000
  |  |  | 
 Automatic
  | 
 Unlike regular tools, the Hoover tool will continuously dig at the block directly below the player when active. With careful positioning, the player can dig adjacent blocks, but not ones above.
  |
| 
 Golden Fork
  | 
 6,150
  | 
 0.15
  | 
 125,000,000,000
  |  |  | 
 Manual
  |  |
| 
 Lawn Mower
  | 
 6,500
  | 
 0.15
  | 
 250,000,000,000
  |  |  | 
 Automatic
  | 
 Unlike regular tools, the Lawn Mower tool will continuously dig at the block directly below the player when active. With careful positioning, the player can dig adjacent blocks, but not ones above.
  |
| 
 Trident
  | 
 6,500
  | 
 0.15
  | 
 300,000,000,000
  |  | 
 Atlantis
  | 
 Manual
  |  |
| 
 Lazer Gun
  | 
 6,750
  | 
 0.15
  | 
 500,000,000,000
  |  | 
 Toy Land
  | 
 Manual
  |  |
| 
 Great Sword
  | 
 7,000
  | 
 0.15
  | 
 650,000,000,000
  |  | 
 Medieval
  | 
 Manual
  |  |
| 
 Alien Lazer Gun
  | 
 7,250
  | 
 0.15
  | 
 700,000,000,000
  |  | 
 Mars
  | 
 Manual
  |  |
| 
 Police Baton
  | 
 7,350
  | 
 0.15
  | 
 800,000,000,000
  |  | 
 Prison
  | 
 Manual
  |  |
| 
 Flaming Axe
  | 
 7,500
  | 
 0.15
  | 
 1,000,000,000,000
  |  | 
 Volcano
  | 
 Manual
  |  |
| 
 Scythe
  | 
 10,000
  | 
 0.125
  | 
 N/A
  | 
 3,000
  |  | 
 Automatic
  | 
 Unlike regular tools, the Scythe tool will continuously dig at the block directly below the player when active. With careful positioning, the player can dig adjacent blocks, but not ones above.
  |




 Backpacks
 


 [
 
[edit](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&veaction=edit&section=T-7 "Edit section: Backpacks") 

 |
 
[edit source](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&action=edit&section=T-7 "Edit section: Backpacks") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Like tools, backpacks can be purchased at the Upgrade Shop. Similarly, backpacks are automatically equipped when first purchased, and can only be switched at the shop.
 



 When the backpack is filled, a prompt will appear on screen that allows the player to return to the Sell area. The player may ignore the prompt and continue digging through blocks, but will not be able to accumulate any more sand until they've emptied their backpack.
 





| 
 Backpack
  | 
 Storage
  | 
 Cost
  | 
 Robux
  | 
 Area Shop
  | 
 Notes
  |
| --- | --- | --- | --- | --- | --- |
| 
 Starterpack
  | 
 10
  | 
 0
  |  |  | 
 This is the backpack the player starts with.
  |
| 
 Small Bag
  | 
 25
  | 
 150
  |  |  |  |
| 
 Medium Bag
  | 
 40
  | 
 375
  |  |  |  |
| 
 Large Bag
  | 
 140
  | 
 900
  |  |  |  |
| 
 XL Bag
  | 
 250
  | 
 3,150
  |  |  |  |
| 
 XXL Bag
  | 
 480
  | 
 13,200
  |  |  |  |
| 
 SuperStorage
  | 
 1,000
  | 
 36,000
  |  |  |  |
| 
 SuperStorage 2
  | 
 1,500
  | 
 75,000
  |  |  |  |
| 
 Sand Safe
  | 
 2,500
  | 
 150,000
  |  |  |  |
| 
 Sand Vault
  | 
 5,000
  | 
 350,000
  |  |  |  |
| 
 SuperStorage 3
  | 
 7,500
  | 
 700,000
  |  |  |  |
| 
 Small Canister
  | 
 10,000
  | 
 1,500,000
  |  |  |  |
| 
 Medium Canister
  | 
 15,000
  | 
 4,000,000
  |  |  |  |
| 
 Ice Cream Sandwich
  | 
 25,000
  | 
 5,000,000
  |  | 
 Candy
  |  |
| 
 Large Canister
  | 
 25,000
  | 
 8,000,000
  |  |  |  |
| 
 Duffle Bag
  | 
 35,000
  | 
 12,000,000
  |  |  |  |
| 
 Empty Crate
  | 
 50,000
  | 
 7,500,000
  |  | 
 Pirate
  |  |
| 
 Dual Canister
  | 
 50,000
  | 
 24,000,000
  |  |  |  |
| 
 Giant Canister
  | 
 75,000
  | 
 48,000,000
  |  |  |  |
| 
 Magical Fanny Pack
  | 
 100,000
  | 
 100,000,000
  |  |  |  |
| 
 Hiking Pack
  | 
 100,000
  | 
 10,000,000
  |  | 
 Dino
  |  |
| 
 Humongous Canister
  | 
 200,000
  | 
 250,000,000
  |  |  |  |
| 
 Candy Bucket
  | 
 200,000
  | 
 200,000,000
  |  | 
 Candy
  |  |
| 
 Giant Magical Fanny Pack
  | 
 300,000
  | 
 500,000,000
  |  |  |  |
| 
 Bucket O
  | 
 350,000
  | 
 250,000,000
  |  | 
 Pirate
  |  |
| 
 Brief Case
  | 
 400,000
  | 
 750,000,000
  |  |  |  |
| 
 Chest
  | 
 500,000
  | 
 1,000,000,000
  |  |  |  |
| 
 Dinosaur Cage
  | 
 500,000
  | 
 330,000,000
  |  | 
 Dino
  |  |
| 
 Candy Bag
  | 
 700,000
  | 
 1,250,000,000
  |  | 
 Candy
  |  |
| 
 Popcorn Bucket
  | 
 750,000
  | 
 5,000,000,000
  |  |  |  |
| 
 Golden Chest
  | 
 900,000
  | 
 1,500,000,000
  |  | 
 Pirate
  |  |
| 
 Giant Safe
  | 
 1,000,000
  | 
 2,500,000,000
  |  |  |  |
| 
 Egg Preserver
  | 
 1,200,000
  | 
 2,000,000,000
  |  | 
 Dino
  |  |
| 
 Present
  | 
 2,000,000
  | 
 20,000,000,000
  |  |  |  |
| 
 Rubix Cube
  | 
 10,000,000
  | 
 50,000,000,000
  |  | 
 Toy
  |  |
| 
 Shield
  | 
 15,000,000
  | 
 70,000,000,000
  |  | 
 Medieval
  |  |
| 
 Double Humongous Canister
  | 
 20,000,000
  | 
 80,000,000,000
  |  |  |  |
| 
 Rainbow Rock
  | 
 30,000,000
  | 
 100,000,000,000
  |  |  |  |
| 
 Infinite
  |  | 
 N/A
  | 
 800
  |  |  |




 Pets
 


 [
 
[edit](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&veaction=edit&section=T-8 "Edit section: Pets") 

 |
 
[edit source](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&action=edit&section=T-8 "Edit section: Pets") 

 ]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Pets can be purchased at the Upgrade Shop. Like tools and backpacks, they are automatically equipped when purchased, and can be switched at the Shop.
 



 When equipped, a pet will give the player a passive bonus to digging strength that is added to their tool strength. This bonus remains active as long as the pet is equipped.
 





| 
 Pet
  | 
 Strength
  | 
 Cost
  | 
 Robux
  | 
 Area Shop
  | 
 Notes
  |
| --- | --- | --- | --- | --- | --- |
| 
 Duck
  | 
 5
  | 
 7,500
  |  |  |  |
| 
 Squid
  | 
 10
  | 
 14,000
  |  |  |  |
| 
 Hedgehog
  | 
 15
  | 
 27,000
  |  |  |  |
| 
 Turtle
  | 
 17
  | 
 34,000
  |  |  |  |
| 
 Snow Fairy
  | 
 18
  | 
 33,750
  |  |  |  |
| 
 Cat
  | 
 20
  | 
 43,000
  |  |  |  |
| 
 Duckling
  | 
 22
  | 
 49,000
  |  |  |  |
| 
 Red Orb
  | 
 24
  | 
 53,750
  |  |  |  |
| 
 Ocelot
  | 
 25
  | 
 52,500
  |  |  |  |
| 
 Elephant
  | 
 26
  | 
 61,250
  |  |  |  |
| 
 Fighter Jet
  | 
 28
  | 
 67,187
  |  |  |  |
| 
 Parrot
  | 
 28
  | 
 80,000
  |  |  |  |
| 
 Alpaca
  | 
 30
  | 
 110,000
  |  |  |  |
| 
 Iguana
  | 
 35
  | 
 150,000
  |  |  |  |
| 
 Penguin
  | 
 40
  | 
 170,000
  |  |  |  |
| 
 Candy
  | 
 40
  | 
 100,000
  |  | 
 Candy
  |  |
| 
 Shark
  | 
 45
  | 
 205,000
  |  |  |  |
| 
 Eyepatch Parrot
  | 
 45
  | 
 125,000
  |  | 
 Pirate
  |  |
| 
 Elf
  | 
 48
  | 
 125,000
  |  |  |  |
| 
 White Orb
  | 
 50
  | 
 150,000
  |  | 
 Dino
  |  |
| 
 Seagull
  | 
 50
  | 
 260,000
  |  |  |  |
| 
 Siamese Cat
  | 
 54
  | 
 256,250
  |  |  |  |
| 
 Hound
  | 
 54
  | 
 256,250
  |  |  |  |
| 
 Gummy Bear
  | 
 54
  | 
 156,250
  |  |  |  |
| 
 Crab
  | 
 54
  | 
 256,250
  |  |  |  |
| 
 Crocodile
  | 
 60
  | 
 300,000
  |  |  |  |
| 
 Octopus
  | 
 64
  | 
 320,312
  |  |  |  |
| 
 Eagle
  | 
 70
  | 
 375,000
  |  |  |  |
| 
 Robot Dog
  | 
 80
  | 
 450,000
  |  |  |  |
| 
 Sloth
  | 
 100
  | 
 500,000
  |  |  |  |
| 
 Robot
  | 
 120
  | 
 1,500,000
  |  |  |  |
| 
 Panda
  | 
 140
  | 
 2,500,000
  |  |  |  |
| 
 Red Panda
  | 
 160
  | 
 7,500,000
  |  |  |  |
| 
 Rocket Cat
  | 
 168
  | 
 3,125,000
  |  |  |  |
| 
 Robot Horse
  | 
 168
  | 
 3,125,000
  |  |  |  |
| 
 RC Tank
  | 
 200
  | 
 12,500,000
  |  |  |  |
| 
 Doge
  | 
 240
  | 
 17,500,000
  |  |  |  |
| 
 Polar Bear
  | 
 280
  | 
 35,000,000
  |  |  |  |
| 
 Dragon
  | 
 320
  | 
 50,000,000
  |  |  |  |
| 
 Walrus
  | 
 336
  | 
 43,750,000
  |  |  |  |
| 
 Pony
  | 
 360
  | 
 65,000,000
  |  |  |  |
| 
 Seahorse
  | 
 384
  | 
 62,500,000
  |  |  |  |
| 
 Robot Bunny
  | 
 390
  | 
 72,500,000
  |  |  |  |
| 
 Phoenix
  | 
 420
  | 
 87,500,000
  |  |  |  |
| 
 Fairy
  | 
 468
  | 
 90,625,000
  |  |  |  |
| 
 Donuts
  | 
 750
  | 
 100,000,000
  |  | 
 Candy
  |  |
| 
 Unicorn
  | 
 750
  | 
 125,000,000
  |  |  |  |
| 
 Black Orb
  | 
 1,000
  | 
 125,000,000
  |  | 
 Pirate
  |  |
| 
 Dinosaur
  | 
 1,250
  | 
 150,000,000
  |  | 
 Dino
  |  |
| 
 Pegasus
  | 
 1,500
  | 
 200,000,000
  |  |  |  |
| 
 Magical Frog
  | 
 1,750
  | 
 500,000,000
  |  |  |  |
| 
 Monkey
  | 
 2,000
  | 
 1,000,000,000
  |  |  |  |
| 
 Dark Pegasus
  | 
 2,000
  | 
 N/A
  | 
 1299
  |  |  |
| 
 Snowman
  | 
 2,100
  | 
 625,000,000
  |  |  |  |
| 
 Car
  | 
 2,250
  | 
 1,500,000,000
  |  |  |  |
| 
 Butterfly
  | 
 2,500
  | 
 2,500,000,000
  |  |  |  |
| 
 Pufferfish
  | 
 3,000
  | 
 5,000,000,000
  |  | 
 Atlantis
  |  |
| 
 Pinata
  | 
 3,500
  | 
 10,000,000,000
  |  | 
 Candy
  |  |
| 
 Ship
  | 
 4,000
  | 
 15,000,000,000
  |  | 
 Pirate
  |  |
| 
 Santa
  | 
 4,040
  | 
 18,000,000,000
  |  |  |  |
| 
 Booga
  | 
 4,500
  | 
 20,000,000,000
  |  | 
 Dino
  |  |
| 
 Jellyfish
  | 
 4,650
  | 
 30,000,000,000
  |  |  |  |
| 
 Swamp Monster
  | 
 4,800
  | 
 35,000,000,000
  |  |  |  |
| 
 Magical Umbrella
  | 
 5,000
  | 
 40,000,000,000
  |  |  |  |
| 
 Snow Fox
  | 
 5,050
  | 
 60,000,000,000
  |  |  |  |
| 
 Gurt
  | 
 5,100
  | 
 80,000,000,000
  |  |  |  |
| 
 Blue Doge
  | 
 5,250
  | 
 100,000,000,000
  |  |  |  |
| 
 Blimp
  | 
 5,400
  | 
 250,000,000,000
  |  |  |  |
| 
 Moon
  | 
 5,760
  | 
 337,500,000,000
  |  | 
 Moon
  |  |
| 
 Satellites
  | 
 6,120
  | 
 500,000,000,000
  |  |  |  |
| 
 Pink Jellyfish
  | 
 6,250
  | 
 550,000,000,000
  |  | 
 Atlantis
  |  |
| 
 K-9
  | 
 6,500
  | 
 650,000,000,000
  |  | 
 Prison
  |  |




 Dig Sites
 


 [
 
[edit](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&veaction=edit&section=T-9 "Edit section: Dig Sites") 

 |
 
[edit source](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&action=edit&section=T-9 "Edit section: Dig Sites") 

 ]
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Dig sites are what the player interacts with for the bulk of the game. When starting out, the player only has access to the initial dig site. Other dig sites are walled off with messages indicating the entrance requirements, which can be total sand extracted, total rebirths, or Robux.
 



 Each dig site covers a 10-block by 10-block area, with an indeterminate depth. Every 30 minutes, all dig sites are reset and refilled with sand and chests.
 



 Players use their equipped tool to dig up blocks and chests.
 



 Notes for the table below:
 



 - Sand Value is how much the seller pays for each unit of sand sold in the area. While it's possible to dig sand from the Start area and move to the seller in another area to sell for a higher price, the time it takes to do this is largely negated by the time it takes to climb back out of the dig site (if it's even possible), and walk to another dig site.
- 1 to 100 indicates the strength of each block of sand between depth 1 and 100. 101 to 200 indicates the strength of each block between depth 101 and 200, and so on.
 





| 
 Area
  | 
 Sand to Unlock
  | 
 Rebirths to Unlock
  | 
 Robux to Unlock
  | 
 Sand Value
  | 
 1 to 100
  | 
 101 to 200
  | 
 201 to 300
  | 
 301 to 666
  | 
 667 to 900
  | 
 901 to 1300
  | 
 1301 to ?
  | 
 Notes
  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| 
 Start
  |  |  |  | 
 5
  | 
 5
  | 
 50
  | 
 150
  | 
 500
  | 
 1,500
  | 
 3,000
  | 
 5,000
  |  |
| 
 Candy Land
  | 
 5,000
  |  |  | 
 10
  | 
 15
  | 
 150
  | 
 450
  | 
 1,500
  | 
 4,500
  | 
 9,000
  | 
 15,000
  | 
 This site is at the end of the path to the left of the spawn location.
  |
| 
 Pirate Isle
  | 
 25,000
  |  |  | 
 15
  | 
 25
  | 
 250
  | 
 750
  | 
 2,500
  | 
 7,500
  | 
 15,000
  | 
 25,000
  | 
 The portal to this site is at the pier just past the Start site.
  |
| 
 Dino Land
  | 
 125,000
  |  |  | 
 20
  | 
 35
  | 
 350
  | 
 1,050
  | 
 3,500
  | 
 10,500
  | 
 21,000
  | 
 35000
  | 
 This site is at the end of the path opposite the Start site.
  |
| 
 Launch Site
  | 
 625,000
  |  |  | 
 25
  | 
 45
  | 
 450
  | 
 1,350
  | 
 4,500
  | 
 13,500
  | 
 27,000
  | 
 45,000
  | 
 This site is at the end of the path to the right of the spawn location.
  |
| 
 Moon Landing
  |  | 
 10
  |  | 
 30
  | 
 55
  | 
 550
  | 
 1,650
  | 
 5,500
  | 
 16,500
  | 
 33,000
  | 
 55,000
  | 
 The portal to this site is accessed from the Launch Site.
  |
| 
 Atlantis
  |  | 
 50
  |  | 
 40
  | 
 75
  | 
 750
  | 
 2,250
  | 
 7,500
  | 
 22,500
  | 
 45,000
  | 
 75,000
  | 
 The portal to this site is at the pier just past the Start site.
  |
| 
 VIP Island
  |  | 
 N/A
  | 
 400
  | 
 50
  |  |  |  |  |  |  |  | 
 The portal to this site is the helicopter next to the spawn location.
  |
| 
 Toy Land
  |  | 
 75
  |  | 
 55
  | 
 100
  | 
 1,000
  | 
 3,000
  | 
 10,000
  | 
 30,000
  | 
 60,000
  | 
 100,000
  | 
 The portal to this site is to the right of the spawn location.
  |
| 
 Medieval
  |  | 
 100
  |  | 
 65
  | 
 125
  | 
 1,250
  | 
 3,750
  | 
 12,500
  | 
 37,500
  | 
 75,000
  | 
 125,000
  | 
 The portal to this site is to the left of the spawn location.
  |
| 
 Mars Landing
  |  | 
 125
  |  | 
 75
  | 
 150
  | 
 1,500
  | 
 4,500
  | 
 15,000
  | 
 45,000
  | 
 90,000
  | 
 150,000
  | 
 The portal to this site is accessed from the Launch Site.
  |
| 
 Prison
  |  | 
 150
  |  | 
 85
  | 
 175
  | 
 1,750
  | 
 5,250
  | 
 17,500
  | 
 52,500
  | 
 105,00
  | 
 175,000
  | 
 The portal to this site is to the right of the spawn location.
  |
| 
 Dominus Land
  | 
 250,000,000
  | 
 75
  |  | 
 95
  | 
 200
  | 
 2,000
  | 
 6,000
  | 
 20,000
  | 
 60,000
  | 
 120,000
  | 
 200,000
  | 
 The portal to this site is to the left of the spawn location.
  |
| 
 Volcano
  | 
 500,000,000
  | 
 150
  |  | 
 110
  | 
 250
  | 
 2,500
  | 
 7,500
  | 
 25,000
  | 
 75,000
  | 
 150,000
  | 
 250,000
  | 
 The portal to this site is to the right of the spawn location.
  |
| 
 Private Islands
  |  | 
 N/A
  | 
 35
  |  |  |  |  |  |  |  |  | 
 The portal to this site is at the pier just past the Start site.
  |




 Chests
 


 [
 
[edit](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&veaction=edit&section=T-10 "Edit section: Chests") 

 |
 
[edit source](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&action=edit&section=T-10 "Edit section: Chests") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Normal: Normal layer+ Rare: Gray layer+ Epic: Brown layer+ Legendary: Underworld+ Mythical: Mythtic+
 




 General Strategies
 


 [
 
[edit](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&veaction=edit&section=T-11 "Edit section: General Strategies") 

 |
 
[edit source](/w/index.php?title=Roblox_Studio_Tutorials/Treasure_Hunt_Simulator&action=edit&section=T-11 "Edit section: General Strategies") 

 ]
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 - The first rebirth takes the longest. Each subsequent rebirth takes less and less time as the player accumulates more strength bonuses through hats.
 



 - Before rebirthing, spend Coins and/or Rubies on the most expensive Hat Crates possible, leaving just enough for the rebirth cost. Since Hats are not removed when rebirthing, they are the main source of boosts when starting over after rebirthing.
 



 - Look for Dice Chests from depth 50 and below in any dig site. They offer the highest reward to work ratio. Often times, the first Dice Chest the player opens after a rebirth will contain enough Coins to do the next rebirth.
 



 - The site-specific Tools and Backpacks found in the Candy, Pirate and Dino sites offer the best value, once those sites are accessible. However, once the player has rebirthed eight times or more, the differences in cost become more and more negligible.
 



 - For max efficency, immediately BEFORE you hit the rebirth button, FIND, & stand next to a very HIGH value chest, e.g. a "Dice Chest" or a "Mars Chest".
 



 Hit the rebirth button (Purple swirl @ bottom left). Everything then goes back to "zero", so, equip the bucket & dig out the valuable chest. You will now have several millions of cash to zoom off to the Shop with & kit yourself out again with little time wasted. Check the "rebirth" button to see what is the next cash total that you need to collect.
 



 And repeat. (Set aside half a day to get 150 rebirths)
 



 - Check the chart above for the best "Sand values" & always dig the highest value site you can access.
 



 - A big rucksack is ALMOST as important as your preferred digging tool. You will be very surprised at the value of the sand you have dug when you sell it, especially when you times by the "rebirth multiplier", (screen bottom left) ( Value is x76 when "rebirth" = 150) - SO DON'T WASTE YOUR SAND, sell it as soon as your backpack is full.
 



 - Digging tools - A personal preference, "Drill type" tools are VERY fast & VERY hard to control.
 



 I used the "Giant Shovel" for a very long time as It was cheap & totaly controllable for "cherry picking" the best chests on the way down. Take your pick (lol).
 



  










 Beginning to script
======================



 Oops. I forgot to tell you to go to models, then use the anchor tool to anchor everything. Do it right now. I apologize for that. But anyways, we are going to start scripting today! The first thing we are going to script is lava. Insert a new part then rename it "Lava" by clicking on its name, delete its current name, and type in "Lava".
Now click on the plus sign on the right side of lava. search "Script" and click on script. Now type this in the script:
 




```
local LavaPart = script.Parent

local function onPartTouch(otherPart)

       local partParent = otherPart.Parent
       local humanoid = partParent:FindFirstChildWhichIsA("Humanoid")

       if ( Humanoid ) then
             humanoid.Health = 0
       end
end
LavaPart.Touched:Connect(onPartTouch)

```



 Test it by touching the lava. If you died, then the script is working. The other thing we are going to script is a conveyor that pushes players off. Make a new part and insert another script inside this one. Put the following script inside:
while wait() do
script.Parent.Velocity=script.Parent.
CFrame.lookVector\*10
Change 10 to how fast you want the player to move on it. Don't forget to anchor everything!
 



  










 Ways to die in Roblox Natural Disaster Survival
==================================================




|  |  |
| --- | --- |
| 





 | **This page or section is an undeveloped draft or outline.** 

 You can help to
 [develop the work](https://en.wikibooks.org/w/index.php?title=Roblox_Studio_Tutorials/Printable_version&action=edit) 
 , or you can ask for assistance in the
 [project room](/wiki/Wikibooks:PROJECTS "Wikibooks:PROJECTS") 
 .
  |


1. Fall damage
2. Drowned
3. Burnt
4. Hit by a piece of lava
5. Fell off the edge
6. Hit by a piece of thing in a sandstorm
7. Staying outside in a blizzard
8. Hit by a meteor
9. Attempting to cross over a tsunami when not high enough
10. Struck by lightning
11. Falling into the volcano
12. Volcano spawned on you
13. Staying on the edge in an earthquake
14. Staying outside in an acid rain
15. Walking into the tornado
16. Falling off second floor of lobby
17. Staying on green or black stuff in an acid rain
18. Staying on white stuff in a blizzard
19. Attempting to reach the volcano when you have orange or red health bar
20. Falling off the play area
21. Reset your character



  










 New spawns
=============



 You will need new spawns for each level in your obby, but when you put multiple spawns, if you test your game a died, you will spawn at random positions. To prevent that, we needed teams. We can do that by click on the advanced section, then click on services, then select teams. We can add a new team by click on the plus sign by teams, then insert the object "team". Change the team color to whatever color you want and change the spawn you want to have that color in properties and change neutral to false and change TeamColorChangeOnTouch to true. Keep the lobby spawn neutral though, because the player is not going to spawn on the lobby spawn if you don't do so.
 



  










 Day and night cycle
======================



 Have you ever wondered how to set the time of day? It is easy. Just go to Workspace -> Lighting, and change the property (clock time) to whatever you want (0:00 - 23:59). To make the time change in game, we just need to insert a script. Also, "\_" in the script section is empty space. This is the simplest way to do it:\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_ while wait(1) do --change one to whatever speed you want. less is faster\_\_\_\_\_\_\_\_ game.Lighting.SetMinutesAfterMidnight((+1)\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_end --30 is the minutes changed
 



```
Basically, press enter whenever you see "_".

```


  










 Basic hinges and jump boost
==============================



 This will be our final obby tutorial, we are going to move on to lighting and effects next. One basic hinge is a seesaw.
 



 To build it, first we need to make two supporters for the seesaw. Make sure that the supporters have anchored true and CanCollide false so that the player don't just pass the level by jumping on the supporter. Now, make the part that the player have to balance on so they're not dumped into empty space. Make sure that the balancing part is NOT anchored. Go to models and select surface select hinge inside surface. Put hinges on the supporters and name them Hinge0 or something(If I'm wrong then I will say the correct name in discussion). And put hinges on the opposite sides of the seesaw and rename them Hinge1. Test your game and the seesaw should not fall into empty space(If it did I apologize for that and I will say the correct way in discussion). You can also make doors with this strategy too.
 



 The other kind of hinge we are going to talk about is spinning blocks. (I think it is like this, if not, same thing, discussion)First, you make one supporter for the spinning block. Put the block that is going to spin on top of the supporter. Connect them using hinges again and change the hinge type to motor. Test your game and the block should spin! You can also use spinning lava too. Now it is time for jump boost. First, insert a new part, go to properties, expand velocity, change y velocity to something no bigger than 200. Test your game and your character should be able to jump very high!
 



  










![](//en.wikibooks.org/wiki/Special:CentralAutoLogin/start?type=1x1)


 Retrieved from "
 <https://en.wikibooks.org/w/index.php?title=Roblox_Studio_Tutorials/Printable_version&oldid=3989330>
 "
 



[Categories](/wiki/Special:Categories "Special:Categories") 
 :
 * [Print Versions](/wiki/Category:Print_Versions "Category:Print Versions")
* [Book:Roblox Studio Tutorials](/wiki/Category:Book:Roblox_Studio_Tutorials "Category:Book:Roblox Studio Tutorials")




 Hidden category:
 * [Stubs](/wiki/Category:Stubs "Category:Stubs")








 Navigation menu
-----------------




### 

 Personal tools



* Not logged in
* [Discussion for this IP address](/wiki/Special:MyTalk "Discussion about edits from this IP address [n]")
* [Contributions](/wiki/Special:MyContributions "A list of edits made from this IP address [y]")
* [Create account](/w/index.php?title=Special:CreateAccount&returnto=Roblox+Studio+Tutorials%2FPrintable+version "You are encouraged to create an account and log in; however, it is not mandatory")
* [Log in](/w/index.php?title=Special:UserLogin&returnto=Roblox+Studio+Tutorials%2FPrintable+version "You are encouraged to log in; however, it is not mandatory [o]")






### 

 Namespaces



* [Book](/wiki/Roblox_Studio_Tutorials/Printable_version "View the content page [c]")
* [Discussion](/w/index.php?title=Talk:Roblox_Studio_Tutorials/Printable_version&action=edit&redlink=1 "Discussion about the content page (does not exist) [t]")








 English
 









### 

 Views



* [Read](/wiki/Roblox_Studio_Tutorials/Printable_version)
* [Edit](/w/index.php?title=Roblox_Studio_Tutorials/Printable_version&veaction=edit "Edit this page [v]")
* [Edit source](/w/index.php?title=Roblox_Studio_Tutorials/Printable_version&action=edit "Edit this page [e]")
* [View history](/w/index.php?title=Roblox_Studio_Tutorials/Printable_version&action=history "Past revisions of this page [h]")








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



* [What links here](/wiki/Special:WhatLinksHere/Roblox_Studio_Tutorials/Printable_version "A list of all wiki pages that link here [j]")
* [Related changes](/wiki/Special:RecentChangesLinked/Roblox_Studio_Tutorials/Printable_version "Recent changes in pages linked from this page [k]")
* [Upload file](//commons.wikimedia.org/wiki/Special:UploadWizard?uselang=en "Upload files [u]")
* [Special pages](/wiki/Special:SpecialPages "A list of all special pages [q]")
* [Permanent link](/w/index.php?title=Roblox_Studio_Tutorials/Printable_version&oldid=3989330 "Permanent link to this revision of this page")
* [Page information](/w/index.php?title=Roblox_Studio_Tutorials/Printable_version&action=info "More information about this page")
* [Cite this page](/w/index.php?title=Special:CiteThisPage&page=Roblox_Studio_Tutorials%2FPrintable_version&id=3989330&wpFormIdentifier=titleform "Information on how to cite this page")





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



* [Create a collection](/w/index.php?title=Special:Book&bookcmd=book_creator&referer=Roblox+Studio+Tutorials%2FPrintable+version)
* [Download as PDF](/w/index.php?title=Special:DownloadAsPdf&page=Roblox_Studio_Tutorials%2FPrintable_version&action=show-download-screen)
* [Printable version](/w/index.php?title=Roblox_Studio_Tutorials/Printable_version&printable=yes "Printable version of this page [p]")





### 

 In other languages









[Add links](https://www.wikidata.org/wiki/Special:NewItem?site=enwikibooks&page=Roblox+Studio+Tutorials%2FPrintable+version "Add interlanguage links") 







* This page was last edited on 21 September 2021, at 16:21.
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
* [Mobile view](//en.m.wikibooks.org/w/index.php?title=Roblox_Studio_Tutorials/Printable_version&mobileaction=toggle_view_mobile)
* [Developers](https://developer.wikimedia.org)
* [Statistics](https://stats.wikimedia.org/#/en.wikibooks.org)
* [Cookie statement](https://foundation.wikimedia.org/wiki/Special:MyLanguage/Policy:Cookie_statement)


* [![Wikimedia Foundation](/static/images/footer/wikimedia-button.png)](https://wikimediafoundation.org/)
* [![Powered by MediaWiki](/static/images/footer/poweredby_mediawiki_88x31.png)](https://www.mediawiki.org/)




