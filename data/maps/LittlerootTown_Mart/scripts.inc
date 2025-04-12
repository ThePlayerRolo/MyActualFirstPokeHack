LittlerootTown_Mart_MapScripts::
	.byte 0

LittleRoot_PokeMartClerk::
	lock
	message LittleRoot_PokeMartClerk_Text_0
	waitmessage
	pokemart LittleRootTownMartItems
	msgbox LittleRoot_PokeMartClerk_Text_1
	release
	return
LittleRoot_PokeMartRandomGuy::
	lock
	msgbox LittleRoot_RandomGuy_Text_0
	release
	return


	.align 2
LittleRootTownMartItems:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_MASTER_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_PROTEIN
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_NONE

LittleRoot_PokeMartClerk_Text_0:
	.string "We got a lot of rare stuff just for you!$"

LittleRoot_PokeMartClerk_Text_1:
	.string "Come Back Some Time!$"
LittleRoot_RandomGuy_Text_0:
	.string "Master Balls in here are so useful!$"

