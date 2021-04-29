#include "basicdefines_A3.hpp"
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgPatches
{
	class ROG_MI24 //Original Pbo name attached to your pbo
	{
		units[]= 
		{
		"ROG_MI24_Gunmetalgrey",
		"ROG_MI24_Gunmetalgrey_unmarked",
		"ROG_Armored_SUV"
		};//class names
		weapons[]={};
		magazines[] = {};
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
	class DEGA_GunArmoredSUV_PMC;
	class ROG_Armored_SUV : DEGA_GunArmoredSUV_PMC
	{
		editorCategory="ION";
		editorSubcategory="SUV";
		editorPreview="ROG_MI24\textures\editor\preview.paa";
		picture="ROG_MI24\textures\ROG_Logo.paa";
		Icon="ROG_MI24\textures\ROG_Logo.paa";
		scope = public;
		crew = "B_CTRG_soldier_engineer_exp_F";
		side = 1;
		faction = "BLU_G_F";
		displayName = "[ROG]Armored SUV(M134)";
		author = "CUP TEAM, Kieranator-5050";
	};
	
	class RHS_Mi24V_vvs;
	class ROG_MI24_Gunmetalgrey : RHS_Mi24V_vvs //class name of your skin with the original class name base
	{
		editorCategory="ION";
		editorSubcategory="HELO";
		editorPreview="ROG_MI24\textures\editor\preview.paa";
		picture="ROG_MI24\textures\ROG_Logo.paa";
		Icon="ROG_MI24\textures\ROG_Logo.paa";
		scope = public;
		crew = "B_CTRG_soldier_engineer_exp_F";
		side = 1;
		faction = "BLU_G_F";
		displayName = "[ROG]MI-24V(Marked)";
		author = "RHS TEAM, Kieranator-5050";
		hiddenSelectionsTextures[] = {
		"ROG_MI24\textures\marked\0.paa",
		"ROG_MI24\textures\marked\1.paa",
		"",
		"ROG_MI24\textures\marked\3.paa"
		};
		 	
	};
	class ROG_MI24_Gunmetalgrey_unmarked : RHS_Mi24V_vvs
	{
		editorCategory="ION";
		editorSubcategory="HELO";
		editorPreview="ROG_MI24\textures\editor\preview.paa";
		picture="ROG_MI24\textures\ROG_Logo.paa";
		Icon="ROG_MI24\textures\ROG_Logo.paa";
		scope = public;
		crew = "B_CTRG_soldier_engineer_exp_F";
		side = 1;
		faction = "BLU_G_F";
		displayName = "[ROG]MI-24V(UnMarked)";
		author = "RHS TEAM, Kieranator-5050";
		hiddenSelectionsTextures[] = {
		"ROG_MI24\textures\unmarked\0um.paa",
		"ROG_MI24\textures\marked\1.paa", 
		"",
		"ROG_MI24\textures\marked\3.paa"
		};	
	};

};
