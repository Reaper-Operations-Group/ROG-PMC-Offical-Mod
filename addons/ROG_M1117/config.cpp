#include "basicdefines_A3.hpp"
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgPatches
{
	class ROG_M1117_rhsusf_m1117
	{
		units[]= 
		{
		"ROG_M1117_Miggy"
		};
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
	class MCar
	{
		displayName="MRAP";
	};
};

class CfgVehicles
{
	class rhsusf_M1117_W{};
	class rhsusf_M1117_O : rhsusf_M1117_W{};
	class ROG_M1117_Miggy : rhsusf_M1117_O
	{
		editorCategory="ION";
		editorSubcategory="Mcar";
		editorPreview="ROG_M1117\textures\editor\preview.paa";
		picture="ROG_M1117\textures\ROG_Logo.paa";
		Icon="ROG_M1117\textures\ROG_Logo.paa";
		scope = public;
		crew = "B_CTRG_soldier_engineer_exp_F";
		side = 1;
		faction = "BLU_G_F";
		displayName = "[Carabao]M1117(ROG)";
		author = "Kieranator-5050";
		
		hiddenSelectionsTextures[] = 
		{
		"rhsusf\addons\rhsusf_m1117\data\M1117_tex1_OD_co.paa",
		"ROG_M1117\textures\Layer1.paa",
		"ROG_M1117\textures\Layer2.paa",
		"rhsusf\addons\rhsusf_m1117\data\m1117_wheel_green_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
		"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
		};
		
	};

};
