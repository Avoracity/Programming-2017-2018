import discord
from discord.ext.commands import Bot
from discord.ext import commands
import asyncio
import time
import random


Client = discord.Client()
client = commands.Bot(command_prefix = "$")

@client.event
async def on_ready():
    print("Ready!")

@client.event
async def on_message(message):
    if message.content.upper().startswith("$COOKIE"):
        #format: embed = discord.Embed(title="Tile", description="Desc", color=0x00ff00)
        embed = discord.Embed(title = "", description = ":cookie:", color=0x000fff)
        #embed.add_field(name="Fiel1", value="hi", inline=False)
        #embed.add_field(name="Field2", value="hi2", inline=False)
        await client.send_message(message.channel, embed=embed)

    elif message.content.upper().startswith('$SAY'):
        botSay = message.content.split(" ") #split on space
        embed = discord.Embed(title = "", description = "%s" % (" ".join(botSay[1:])), color=0x000fff)
        await client.send_message(message.channel, embed=embed)

    elif message.content.upper().startswith('$DICE'):

        diceRoll = random.randrange(1,6)
        result = ":game_die:" + " " + str(diceRoll)
        embed = discord.Embed(title = "You rolled: ", description = result, color=0x000fff)
        await client.send_message(message.channel, embed=embed)

    elif message.content.upper().startswith('$HELP'):
        embed = discord.Embed(title = "", description = "You got two hands and a brain, 911 yourself", color=0x000fff)
        await client.send_message(message.channel, embed=embed)

    elif message.content.upper().startswith('$SHOOT'):
        counter = True
        if counter == True:
            botSay = message.content.split(" ") #split on space
            choice = " ".join(botSay[1:])
            Win = {'paper'    : 'rock' ,
                   'scissors' : 'paper',
                   'rock'     : 'scissors'}
            
            if choice not in Win:
                wrong = 'incorrect choice entered. Please use either "rock","paper", "scissors. " '
                embed = discord.Embed(title = "", description = wrong, color=0x000fff)
                await client.send_message(message.channel, embed=embed)
                counter = False
               

            botDecision = random.choice(list(Win))

            if Win[choice] == botDecision:
                embed = discord.Embed(title = "Avora threw " + botDecision, description = "%s" % ("You Win! :fireworks: :lollipop:  :confetti_ball:"), color=0x000fff)
                await client.send_message(message.channel, embed=embed) 
            elif Win[botDecision] == choice:
                embed = discord.Embed(title = "Avora threw " + botDecision, description = "%s" % ("Lose.") , color=0x000fff)
                await client.send_message(message.channel, embed=embed)  
            else:
                embed = discord.Embed(title ="Avora threw " + botDecision, description = "%s" % ("Draw!"), color=0x000fff)
                await client.send_message(message.channel, embed=embed)  






client.run("NDU1MDU3ODEzNjMxMjcwOTEy.Df3COA.nxtB52xRmgzEM-wAIqdXO_eSiGw")
