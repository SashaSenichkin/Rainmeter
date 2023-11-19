;[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]
;              Settings for SkinLauncher.ini - six items                       
;[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]

[Variables]
Layout=Alice-Reworked
;--- 1
ItemText-1=News Feeds
ItemAction-1=[!ToggleConfig "#Layout#\FeedReader" "FeedReader.ini"]
ItemIcon-1=#@#Icons\rss.png

;--- 2
ItemText-2=Weather
ItemAction-2=[!ToggleConfig "#Layout#\Weather" "Weather.ini"]
ItemIcon-2=#@#Icons\weather.png

;--- 3
ItemText-3=Network Activity
ItemAction-3=[!ToggleConfig "#Layout#\Network" "Network.ini"]
ItemIcon-3=#@#Icons\activity.png

;--- 4
ItemText-4=Utorrent
ItemAction-4=[!ToggleConfig "#Layout#\Utorrent" "Utorrent.ini"]
ItemIcon-4=#@#Icons\uTorrent.png

;--- 5
ItemText-5=Music Player
ItemAction-5=[!ToggleConfig "#Layout#\MusicPlayer" "MusicPlayer.ini"]
ItemIcon-5=#@#Icons\music.png

; --- 6
ItemText-6=Settings
ItemAction-6=["#ROOTCONFIGPATH#@Resources\Configs\UserVariables.inc"]
ItemIcon-6=#@#Icons\settings.png
