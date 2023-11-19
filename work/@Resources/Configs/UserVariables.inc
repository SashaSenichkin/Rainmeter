;[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]
;       Change your user settings here
;[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]

[Variables]

;->--[ WEATHER VARIABLES ]----------------------------------------
;-> Get your weather code by going to http://www.weather.com/ and typing your location in the Search box. Then look in the address bar in the top-left to find a number code like DRXX0053.  This is your WeatherCode.
WeatherCode=DRXX0053

;-> Units=m for metric or Units=f for Fahrenheit
Units=m

;->--[ MUSIC PLAYER ]------------------------------------------------
;-> The full list of supported players can be found on http://rainmeter.net/cms/Plugins-NowPlaying#playerlist.  Set your PlayerName below:
MusicPlayer=WMP

;->--[ NETWORK ] ----------------------------------------------------
;-> Set BestDownload and BestUpload to the fastest speeds for your connection in bits/second.  
;-> You can use http://www.speedtest.net/  to get the upload and download speeds in Mb/s and enter them below:
BestDownload=5.0
BestUpload=0.76


;-> Set WarningPing for what you consider to be a slow response time in milliseconds.  
;-> A caution signal will show whenever the actual response time is greater than this.
WarningPing=600
PingAddress=www.google.com
;->Set 'PingUpdate' for how often you want to check the Ping response time 
;->   ( PingUpdate=30 checks once every 30 seconds )
PingUpdate=30

;->--[ READER URLs and Update rates ]-----------------------------
;-> put the URL's for news feeds here along with the update rate for each feed. 
;->    (UpdateRate=1800 = update every 30 minutes).  
URL1=http://feeds.bbci.co.uk/news/rss.xml?edition=uk
UpdateRate1=1200
URL2=http://feeds.guardian.co.uk/theguardian/world/rss
UpdateRate2=3606
URL3=http://feeds.gawker.com/lifehacker/full
UpdateRate3=4200
URL4=http://www.nytimes.com/services/xml/rss/nyt/HomePage.xml
UpdateRate4=5435
URL5=https://forum.rainmeter.net/feed.php
UpdateRate5=1204
;-> change NewItemMinutes to whatever you want to be marked as a 'new' item (NewItemMinutes=60 will mark anything less than one hour old as a "new" item)
NewItemMinutes=60

;->--[ UTORRENT ] ----------------------------------------------------
;-> See the uTorrent-setup(1) .jpg  and uTorrent-setup(2) .jpg  images in the \Documents\Rainmeter\Skins\Alice-Reworked\@Resources\Configs folder for help with setting up uTorrent and then change the values below to match your settings
UserName=MYNAME
Password=secret
uTorrentPort=8081
ProcessName="uTorrent"
PathToUTorrent="C:\Program Files (x86)\uTorrent\uTorrent.exe"
;-> TorrentUpdateRate is the time in seconds between checking for torrents that are uploading or downloading 
TorrentUpdateRate=5

;->--- [ HARD DISKS ]--------------------------------------------------
disk.1=C:
disk.2=D:
disk.3=E:
disk.4=F:

