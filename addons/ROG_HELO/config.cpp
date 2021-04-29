#include "basicdefines_A3.hpp"
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgPatches
{
	class ROG_MERLIN_A3 //Original Pbo name attached to your pbo
	{
		units[]= 
		{
		"ROG_MERLIN_BLK" , 
		"ROG_MERLIN_BLK_Unmarked",
		"ROG_MH6_BLK",
		"ROG_MH6_BLK_UM"
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
	
	class Helicopter_Base_H;

	class Heli_Transport_02_base_F;//basic class name in the config.cpp of the org pbo
	class I_Heli_Transport_02_F : Heli_Transport_02_base_F{};
	class ROG_MERLIN_BLK : I_Heli_Transport_02_F //class name of your skin with the original class name base
	{
		editorCategory="ION";
		editorSubcategory="HELO";
		editorPreview="ROG_HELO\textures\editor\preview.paa";
		picture="ROG_HELO\textures\ROG_Logo.paa";
		Icon="ROG_HELO\textures\ROG_Logo.paa";
		scope = public;
		crew = "B_CTRG_soldier_engineer_exp_F";
		side = 1;
		faction = "BLU_G_F";
		displayName = "Merlin(ROG)";
		author = "Kieranator-5050";
	hiddenSelectionsTextures[] = {"ROG_HELO\textures\MERLIN\Marked\mer1.paa","ROG_HELO\textures\MERLIN\Marked\mer2.paa","ROG_HELO\textures\MERLIN\Marked\mer3.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"};
		
	};
	
	class ROG_MERLIN_BLK_Unmarked : I_Heli_Transport_02_F //Unmarked Version of the above skin
	{
		editorCategory="ION";
		editorSubcategory="HELO";
		editorPreview="ROG_HELO\textures\editor\preview.paa";
		picture="ROG_HELO\textures\ROG_Logo.paa";
		Icon="ROG_HELO\textures\ROG_Logo.paa";
		scope = public;
		crew = "B_CTRG_soldier_engineer_exp_F";
		side = 1;
		faction = "BLU_G_F";
		displayName = "Merlin[Unmarked](ROG)";
		author = "Kieranator-5050";
		hiddenSelectionsTextures[] = {"ROG_HELO\textures\MERLIN\Marked\mer1.paa","ROG_HELO\textures\MERLIN\Unmarked\mer2um.paa","ROG_HELO\textures\MERLIN\Marked\mer3.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"};	
	};
	
	class B_Heli_Light_01_F{};
	class ROG_MH6_BLK : B_Heli_Light_01_F
	{
		editorCategory="ION";
		editorSubcategory="HELO";
		editorPreview="ROG_HELO\textures\editor\preview.paa";
		picture="ROG_HELO\textures\ROG_Logo.paa";
		Icon="ROG_HELO\textures\ROG_Logo.paa";
		scope = public;
		crew = "B_CTRG_soldier_engineer_exp_F";
		side = 1;
		faction = "BLU_G_F";
		displayName = "MH6[Marked](ROG)";
		author = "Kieranator-5050";
		hiddenSelectionsTextures[] = {"ROG_HELO\textures\MH-6\hummingbird1.paa"};
	};

	class ROG_MH6_BLK_UM : B_Heli_Light_01_F
	{
		editorCategory="ION";
		editorSubcategory="HELO";
		editorPreview="ROG_HELO\textures\editor\preview.paa";
		picture="ROG_HELO\textures\ROG_Logo.paa";
		Icon="ROG_HELO\textures\ROG_Logo.paa";
		scope = public;
		crew = "B_CTRG_soldier_engineer_exp_F";
		side = 1;
		faction = "BLU_G_F";
		displayName = "MH6[Unmarked](ROG)";
		author = "Kieranator-5050";
		hiddenSelectionsTextures[] = {"ROG_HELO\textures\MH-6\hummingbird1UM.paa"};
	};
	
};
