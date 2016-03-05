/*
	File: fn_welcomeNotification.sqf
	Author:

	Description:
	Called upon first spawn selection and welcomes our player.
*/
disableSerialization;
[
        "",
        0,
        0.2,
        10,
        0,
        0,
        8
] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayctrl 2400;
_textSpoiler = _display displayctrl 1101;
_text2 = _display displayCtrl 1102;

_message = "";
_message = _message + "<t align='center' size='8' shadow='0'><img image='textures\armalife.jpg' /></t><br /><br />";
_message = _message + "Welcome to SoulFucker 24h  Life Mod Server!!!<br />";
_message = _message + " <a href='http://cafe.naver.com/alflrss' color='#56BDD6'>SoulFucker Life Homepage </a> <br />클릭하시면 카페로 이동합니다. 규칙 및 공지사항 확인하세요.<br />";
_message = _message + "지속적으로 패치 및 업데이트 됩니다.  <br /><br />아프리카 TV  http://afreeca.com/mixkorea <br /><br />";
_message = _message + "저희 서버는 애드온Free!! 를 지향하며 24시간 운영됩니다.  <br /> 물건줍기가 잘 안되시면 window키 + T 누른 후 재시도해보세요<br /><br/> This mod based on Altis life lastest version";


//Fill only the first text
_text1 ctrlSetStructuredText (parseText _message);

//Resize StructuredText component to display the scrollbar if needed
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlcommit 0;
//Hide second text, spoiler text and button
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;
