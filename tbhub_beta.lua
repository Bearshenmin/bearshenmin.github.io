
local Library = loadstring(game:HttpGet("https://raw.githubusercontent.com/xHeptc/Kavo-UI-Library/main/source.lua"))()
local Window = Library.CreateLib("TeddyBear", "DarkTheme")

 --LOCAL PLAYER
 local Player = Window:NewTab("玩家")
 local PlayerSection = Player:NewSection("玩家")

 PlayerSection:NewSlider("速度", "超級快!!", 500, 16, function(s)
     game.Players.LocalPlayer.Character.Humanoid.WalkSpeed = s
 end)

 PlayerSection:NewSlider("跳", "超級高!!", 350, 50, function(s)
     game.Players.LocalPlayer.Character.Humanoid.JumpPower = s
 end)

 PlayerSection:NewButton("重製 速度/跳", "恢復原本", function()
     game.Players.LocalPlayer.Character.Humanoid.JumpPower = 50
     game.Players.LocalPlayer.Character.Humanoid.WalkSpeed = 16
 end)

PlayerSection :NewButton("飛", "起飛lol", function()
        loadstring(game:HttpGet("https://raw.githubusercontent.com/Nicuse/RobloxScripts/main/BypassedFly.lua"))() 

        Fly(true)
    end)

    --其他外掛
local Other = Window:NewTab("其他外掛")
local OtherSection = Other:NewSection("其他外掛")

OtherSection:NewButton("Blox Fruits", "其他腳本", function()
    getgenv().WaterMark = true
    loadstring(game:HttpGet("https://raw.githubusercontent.com/Frerfgzz/free-script/main/SMZHUBv2BETA"))()
end)

OtherSection:NewButton("指令外掛(所有遊戲)", "多遊戲通用", function()
    loadstring(game:HttpGet(('https://raw.githubusercontent.com/EdgeIY/infiniteyield/master/source'),true))()
end)

OtherSection:NewButton("聊天欺騙", "讓您為其他人聊天", function()
    loadstring(game:HttpGet(('https://pastebin.com/raw/djBfk8Li'),true))()
end)
