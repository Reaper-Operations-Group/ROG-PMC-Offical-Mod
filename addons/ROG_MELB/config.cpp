#include "basicdefines_A3.hpp"
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgPatches
{
	class ROG_MELB_rhsusf_melb
	{
		units[]= 
		{
		"ROG_MELB_Gunmetalgrey" ,
		"ROG_MELB_Gunmetalgrey_Marked",
		"ROG_MELB_OD_Unmarked" ,
		"ROG_MELB_OD_Marked"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
}

class CfgEditorCategories
{
	class ION
	{
		displayName="Reaper Operations Group[ROG]";
	};
};
class CfgEditorSubcategories
{
	class HELO
	{
		displayName="Helicopter";
	};
};

class CfgVehicles
{
	
	class RHS_MELB_base;
	class RHS_MELB_MH6M : RHS_MELB_base{};
	class ROG_MELB_Gunmetalgrey : RHS_MELB_MH6M
	{
		editorCategory="ION";
		editorSubcategory="HELO";
		editorPreview="ROG_MELB\textures\editor\preview.paa";
		picture="ROG_MELB\textures\ROG_Logo.paa";
		Icon="ROG_MELB\textures\ROG_Logo.paa";
		scope = public;
		crew = "B_CTRG_soldier_engineer_exp_F";
		side = 1;
		faction = "BLU_G_F";
		displayName = "MH-6M[Unmarked](ROG)";
		author = "RHS Team, Kieranator-5050";
		hiddenSelectionsTextures[] = {"ROG_MELB\textures\rog_melb_unmarked.paa", ""};
	};
	
	class ROG_MELB_Gunmetalgrey_Marked : RHS_MELB_MH6M
	{
		editorCategory="ION";
		editorSubcategory="HELO";
		editorPreview="ROG_MELB\textures\editor\preview.paa";
		picture="ROG_MELB\textures\ROG_Logo.paa";
		Icon="ROG_MELB\textures\ROG_Logo.paa";
		scope = public;
		crew = "B_CTRG_soldier_engineer_exp_F";
		side = 1;
		faction = "BLU_G_F";
		displayName = "MH-6M[Marked](ROG)";
		author = "RHS Team, Kieranator-5050";
		hiddenSelectionsTextures[] = {"ROG_MELB\textures\rog_melb_marked.paa", ""};
	};
	
	class ROG_MELB_OD_Unmarked : RHS_MELB_MH6M
	{
		editorCategory="ION";
		editorSubcategory="HELO";
		editorPreview="ROG_MELB\textures\editor\preview.paa";
		picture="ROG_MELB\textures\ROG_Logo.paa";
		Icon="ROG_MELB\textures\ROG_Logo.paa";
		scope = public;
		crew = "B_CTRG_soldier_engineer_exp_F";
		side = 1;
		faction = "BLU_G_F";
		displayName = "MH-6M{OD}[Unmarked](ROG)";
		author = "RHS Team, Kieranator-5050";
		hiddenSelectionsTextures[] = {"ROG_MELB\textures\rog_melb_unmarked(OD).paa", ""};
	};
	
	class ROG_MELB_OD_Marked : RHS_MELB_MH6M
	{
		editorCategory="ION";
		editorSubcategory="HELO";
		editorPreview="ROG_MELB\textures\editor\preview.paa";
		picture="ROG_MELB\textures\ROG_Logo.paa";
		Icon="ROG_MELB\textures\ROG_Logo.paa";
		scope = public;
		crew = "B_CTRG_soldier_engineer_exp_F";
		side = 1;
		faction = "BLU_G_F";
		displayName = "MH-6M{OD}[Marked](ROG)";
		author = "RHS Team, Kieranator-5050";
		hiddenSelectionsTextures[] = {"ROG_MELB\textures\rog_melb_marked(OD).paa", ""};
	};
		
};
