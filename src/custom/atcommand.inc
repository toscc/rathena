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
