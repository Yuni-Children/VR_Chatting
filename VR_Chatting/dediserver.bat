setlocal
set regVar_LocalPrjPath="InstalledDirectory"
set regVar_Path="HKLM\Software\EpicGames\Unreal Engine\4.22"

:: ### Retrieve VAR1 ###
FOR /F "skip=2 tokens=2,*" %%A IN ('reg.exe query %regVar_Path% /v %regVar_LocalPrjPath%') DO set VAR1=%%B

start /b "" "%VAR1%\Engine\Binaries\Win64\UE4Editor.exe" %cd%\senal.uproject %* -server -log -Port=7777
