
local Library = loadstring(game:HttpGet("https://raw.githubusercontent.com/xHeptc/Kavo-UI-Library/main/source.lua"))()
local Window = Library.CreateLib("TeddyBear Hub--外掛(V1.0)", "GrapeTheme")

 --LOCAL PLAYER
 local Player = Window:NewTab("常用功能")
 local PlayerSection = Player:NewSection("常用功能")

 PlayerSection:NewSlider("速度", "調整速度", 500, 16, function(s)
     game.Players.LocalPlayer.Character.Humanoid.WalkSpeed = s
 end)

 PlayerSection:NewSlider("跳的力量", "調整跳的力量", 350, 50, function(s)
     game.Players.LocalPlayer.Character.Humanoid.JumpPower = s
 end)

 PlayerSection:NewButton("重置 速度/跳", "恢復原本的速度/跳的力量", function()
     game.Players.LocalPlayer.Character.Humanoid.JumpPower = 50
     game.Players.LocalPlayer.Character.Humanoid.WalkSpeed = 16
 end)

PlayerSection :NewButton("飛", "起飛囉", function()
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

OtherSection:NewButton("jailbreak", "其他腳本", function ()
    loadstring(game:HttpGet(("https://raw.githubusercontent.com/KuriWasTaken/MonkeyScripts/main/JailMonkey.lua"),true))()
end)

OtherSection:NewButton("造船尋寶刷錢", "其他腳本", function ()
    loadstring(game:HttpGet(("https://bearshenmin.github.io/roblox%20hacker/boat.lua"),true))()
end)

local Other = Window:NewTab("關於")
local OtherSection = Other:NewSection("關於")
local OtherSection = Other:NewSection("TeddyBear Hub")
local OtherSection = Other:NewSection("版本:1.0(升級成正式版)")
local OtherSection = Other:NewSection("經過一段時間的測試，已升級成第1版")
local OtherSection = Other:NewSection("copyright: TeddyBear2023")
local OtherSection = Other:NewSection("https://bearshenmin.github.io")
local OtherSection = Other:NewSection("yt頻道:雞排飯好吃(https://youtube.com/@bearshen1019)")
local OtherSection = Other:NewSection("感謝使用TeddyBear Hub，祝你有個美好的一天")