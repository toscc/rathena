// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

/**
 * Custom Atcommands
 * Place the body of custom atcommands in this file.
 * Format:
 *	ACMD_FUNC(command_name)
 *	{
 *		<code>;
 *	}
 **/

//ACMD_FUNC(newcommand)
//{
//	clif_displaymessage(fd, "It works!");
//	clif_specialeffect(&sd->bl, EF_HEARTCASTING, AREA);
//	return 0;
//}

ACMD_FUNC(autopilot)
{
if (!message || !*message) { clif_displaymessage(fd, "please specify type : Tank,Skill,Support, Off"); }
else {
sd->state.autopilotmode = 0; clif_displaymessage(fd, message);

if (!strcmp(message,"Tank")) {sd->state.autopilotmode = 1; clif_displaymessage(fd, "Tanking..."); };
if (!strcmp(message,"Skill")) {sd->state.autopilotmode = 2; clif_displaymessage(fd, "Skilling..."); };
if (!strcmp(message,"Support")) {sd->state.autopilotmode = 3; clif_displaymessage(fd, "Supporting..."); };
//char buffer [33];
//clif_displaymessage(fd, itoa(sd->status.autopilotmode,buffer,10));
}
return 0; 
}

ACMD_FUNC(autopilotsp)
{
if (!message || !*message) { clif_displaymessage(fd, "please specify amount : 0-100"); }
else {
sd->state.autospgoal = atoi(message);
}
return 0; 
}

ACMD_FUNC(autosong)
{
if (!message || !*message) { clif_displaymessage(fd, "please specify type a song to play :");
clif_displaymessage(fd, "Whistle Sinx Bragi Apple Lullaby Loki Siegfried Drum Abyss Chaos Kim Ring Moonlit Humming Forget Kiss Service Diss Ugly");
 }
else {
sd->state.autosong = 0; clif_displaymessage(fd, message);

if (!strcmp(message,"Whistle")) {sd->state.autosong = BA_WHISTLE;};
if (!strcmp(message,"Sinx")) {sd->state.autosong = BA_ASSASSINCROSS;  };
if (!strcmp(message,"Bragi")) {sd->state.autosong = BA_POEMBRAGI; };
if (!strcmp(message,"Apple")) {sd->state.autosong = BA_APPLEIDUN; };
if (!strcmp(message,"Lullaby")) {sd->state.autosong = BD_LULLABY; };
if (!strcmp(message,"Loki")) {sd->state.autosong = BD_ROKISWEIL; };
if (!strcmp(message,"Siegfried")) {sd->state.autosong = BD_SIEGFRIED; };
if (!strcmp(message,"Drum")) {sd->state.autosong = BD_DRUMBATTLEFIELD; };
if (!strcmp(message,"Abyss")) {sd->state.autosong = BD_INTOABYSS; };
if (!strcmp(message,"Chaos")) {sd->state.autosong = BD_ETERNALCHAOS; };
if (!strcmp(message,"Kim")) {sd->state.autosong = BD_RICHMANKIM; };
if (!strcmp(message,"Ring")) {sd->state.autosong =  BD_RINGNIBELUNGEN; };
if (!strcmp(message,"Moonlit")) {sd->state.autosong = CG_MOONLIT; };
if (!strcmp(message,"Humming")) {sd->state.autosong =  DC_HUMMING; };
if (!strcmp(message,"Forget")) {sd->state.autosong = DC_DONTFORGETME; };
if (!strcmp(message,"Kiss")) {sd->state.autosong =  DC_FORTUNEKISS; };
if (!strcmp(message,"Service")) {sd->state.autosong = DC_SERVICEFORYOU; };
if (!strcmp(message,"Diss")) {sd->state.autosong = BA_DISSONANCE; };
if (!strcmp(message,"Ugly")) {sd->state.autosong = DC_UGLYDANCE; };
}
return 0; 
}
