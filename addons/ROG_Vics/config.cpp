#define private 0
#define protected 1
#define public 2
class CfgPatches
{
	class ROG_Vics
	{
		units[]= 
		{
		"ROG_M1117_Miggy",
		"ROG_Armored_SUV",
		"ROG_CGRCAT1A2_M2",
		"ROG_CGRCAT1A2_M2_Pumbaa",
		"ROG_CGRCAT1A2",
		"ROG_m1151",
		"ROG_m1151_m2_v2",
		"ROG_m1151_m2_v2_Timon",
		"ROG_m1151_m2_lras3_v1",
		"ROG_m1151_m2_lras3_v1_Simba",
		"ROG_bmp2d_grey"
		};
		weapons[]={};
		magazines[] = {};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
}

class CfgEditorCategories
{
	class ROG
	{
		displayName="Reaper Operations Group[ROG]";
	};
};
class CfgEditorSubcategories
{
	class IFV
	{
		displayName="IFV";
	};
	class MCar
	{
		displayName="MRAP";
	};
	class Car
	{
		displayName="Car";
	}
	class SUV
	{
		displayName="SUV";
	};
};

class CfgVehicles
{
	class rhsusf_M1117_O;
	class DEGA_GunArmoredSUV_PMC;
	class rhsusf_m1151_usarmy_d;//Unarmed Humvee
	class rhsusf_m1151_m2_v2_usarmy_d;//Ogpk Humvee
	class rhsusf_m1151_m2_lras3_v1_usarmy_d;//Lras Humvee
	class rhsusf_CGRCAT1A2_usmc_d;//CAT Unarmed
	class rhsusf_CGRCAT1A2_M2_usmc_d;//CAT M2
	class rhsgref_ins_bmp2d;//BMP-2D MSV
	
	class ROG_bmp2d_grey : rhsgref_ins_bmp2d{ //BMP-2D
		editorCategory="ROG";
		editorSubcategory="IFV";
		scope = public;
		side = 1;	
		displayName = "[Minotaur]M1117(ROG)(Big Chungus)";
		author = "Kieranator-5050";
			
		hiddenSelectionsTextures[] = {
		"ROG_Vics\textures\bmp2d\0.paa",
		"ROG_Vics\textures\bmp2d\1.paa",
		"ROG_Vics\textures\bmp2d\2.paa",
		"ROG_Vics\textures\bmp2d\3.paa",
		"ROG_Vics\textures\bmp2d\4.paa",
		"ROG_Vics\textures\bmp2d\5.paa",
		"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};

	};
	
	class ROG_M1117_Miggy : rhsusf_M1117_O
	{
		editorCategory="ROG";
		editorSubcategory="Mcar";
		scope = public;
		side = 1;
		displayName = "[Carabao]M1117(ROG)";
		author = "Kieranator-5050";
		
		hiddenSelectionsTextures[] = 
		{
		"rhsusf\addons\rhsusf_m1117\data\M1117_tex1_OD_co.paa",
		"ROG_Vics\textures\Layer1.paa",
		"ROG_Vics\textures\Layer2.paa",
		"rhsusf\addons\rhsusf_m1117\data\m1117_wheel_green_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
		"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
		};
	};
	
	class ROG_Armored_SUV : DEGA_GunArmoredSUV_PMC
	{
		editorCategory="ROG";
		editorSubcategory="SUV";
		scope = public;
		side = 1;
		displayName = "[ROG]Armored SUV(M134)";
		author = "CUP TEAM, Kieranator-5050";
		//Armor
		armor = 150;
		// for vehicles general
		armorStructural= 4;	// ranges between 1 and 4.0, default 1
		armorFuel = 1.4;	// default
		armorGlass = 0.5;	// default
		armorLights = 0.4;	// default 0.4 in all models.
		armorWheels = 0.05;	// default
	};


	class ROG_CGRCAT1A2_M2 : rhsusf_CGRCAT1A2_M2_usmc_d //CAT M2
	{
		scope = public;
		side = 1;
		editorCategory="ROG";
		editorSubcategory="Mcar";
		displayName = "[ROG] CGR CAT1A2 (MCTAGS/M2)";
		HiddenSelectionsTextures[] = {
		"ROG_Vics\textures\Cats\ROG_CGR_Body_CO.paa",
		"ROG_Vics\textures\Cats\ROG_CGR_Labels_CA.paa",
		"ROG_Vics\textures\Cats\ROG_MCTAGS_CO.paa",
		"ROG_Vics\textures\Cats\ROG_mk64mount_d_co.paa"
		};
		
	}
	
	class ROG_CGRCAT1A2_M2_Pumbaa : rhsusf_CGRCAT1A2_M2_usmc_d // CAT M2 Pumbaa
	{
		scope = public;
		side = 1;
		editorCategory="ROG";
		editorSubcategory="Mcar";
		displayName = "[ROG] CGR CAT1A2 (MCTAGS/M2) (Pumbaa)";
		HiddenSelectionsTextures[] = {
		"ROG_Vics\textures\Cats\ROG_CGR_Body_CO.paa",
		"ROG_Vics\textures\Cats\ROG_CGR_Labels_CA.paa",
		"ROG_Vics\textures\Cats\ROG_MCTAGS_CO.paa",
		"ROG_Vics\textures\Cats\ROG_mk64mount_d_co.paa"
		};
	}
	
	class ROG_CGRCAT1A2 : rhsusf_CGRCAT1A2_usmc_d //CAT Unarmed
	{
		scope = public;
		side = 1;
		editorCategory="ROG";
		editorSubcategory="Mcar";
		displayName = "[ROG] CGR CAT1A2";
		HiddenSelectionsTextures[] = {
		"ROG_Vics\textures\Cats\ROG_CGR_Body_CO.paa",
		"ROG_Vics\textures\Cats\ROG_CGR_Labels_CA.paa",
		"ROG_Vics\textures\Cats\ROG_MCTAGS_CO.paa",
		"ROG_Vics\textures\Cats\ROG_mk64mount_d_co.paa"
		};
	}
	
	class ROG_m1151 : rhsusf_m1151_usarmy_d // Humvee Unarmed
	{
		scope = public;
		side = 1;
		editorCategory="ROG";
		editorSubcategory="Car";
		displayName = "[ROG] M1151A1";
		hiddenselectionstextures[] = {
		"ROG_Vics\textures\hvee\ROG_M1151_Ext_d_CO.paa",
		"ROG_Vics\textures\hvee\ROG_M1151_Tire_d_CO.paa",
		"ROG_Vics\textures\hvee\ROG_M1151_Int_CO.paa",
		"ROG_Vics\textures\hvee\ROG_M1151_Acc_D_CO.paa",
		"ROG_Vics\textures\hvee\ROG_exterior_d_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
		"ROG_Vics\textures\hvee\ROG_M1152M1165_d_CO.paa"
		};
	}
	
	class ROG_m1151_m2_v2 : rhsusf_m1151_m2_v2_usarmy_d //OGPK M2 Humvee
	{
		scope = public;
		side = 1;
		editorCategory="ROG";
		editorSubcategory="Car";
		displayName = "[ROG] M1151A1 (O-GPK/M2)";
		HiddenSelectionsTextures[] = {
		"ROG_Vics\textures\hvee\ROG_M1151_Ext_d_CO.paa",
		"ROG_Vics\textures\hvee\ROG_M1151_Tire_d_CO.paa",
		"ROG_Vics\textures\hvee\ROG_M1151_Int_CO.paa",
		"ROG_Vics\textures\hvee\ROG_M1151_Acc_D_CO.paa",
		"ROG_Vics\textures\hvee\ROG_exterior_d_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
		"ROG_Vics\textures\hvee\ROG_M1152M1165_d_CO.paa",
		"ROG_Vics\textures\hvee\ROG_mk64mount_d_co.paa",
		"ROG_Vics\textures\hvee\ROG_RG33_TurretD_CO.paa",
		"ROG_Vics\textures\hvee\ROG_camonet_des_co.paa"
		};
	}
	
	class ROG_m1151_m2_v2_Timon : rhsusf_m1151_m2_v2_usarmy_d //OGPK M2 Humvee Timon
	{
		scope = public;
		side = 1;
		editorCategory="ROG";
		editorSubcategory="Car";
		displayName = "[ROG] M1151A1 (O-GPK/M2) (Timon)";
		HiddenSelectionsTextures[] = {
		"ROG_Vics\textures\hvee\ROG_M1151_Ext_d_CO.paa",
		"ROG_Vics\textures\hvee\ROG_M1151_Tire_d_CO.paa",
		"ROG_Vics\textures\hvee\ROG_M1151_Int_CO.paa",
		"ROG_Vics\textures\hvee\ROG_M1151_Acc_D_CO.paa",
		"ROG_Vics\textures\hvee\ROG_exterior_d_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
		"ROG_Vics\textures\hvee\ROG_M1152M1165_d_CO.paa",
		"ROG_Vics\textures\hvee\ROG_mk64mount_d_co.paa",
		"ROG_Vics\textures\hvee\ROG_RG33_TurretD_CO.paa",
		"ROG_Vics\textures\hvee\ROG_camonet_des_co.paa"
		};
	}
	
	class ROG_m1151_m2_lras3_v1 : rhsusf_m1151_m2_lras3_v1_usarmy_d //Lras Humvee 
	{
		scope = public;
		side = 1;
		editorCategory="ROG";
		editorSubcategory="Car";
		displayName = "[ROG] M1151A1 (GPK/M2/LRAS3)";
		HiddenSelectionsTextures[] = {
		"ROG_Vics\textures\hvee\ROG_M1151_Ext_d_CO.paa",
		"ROG_Vics\textures\hvee\ROG_M1151_Tire_d_CO.paa",
		"ROG_Vics\textures\hvee\ROG_M1151_Int_CO.paa",
		"ROG_Vics\textures\hvee\ROG_M1151_Acc_D_CO.paa",
		"ROG_Vics\textures\hvee\ROG_exterior_d_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
		"ROG_Vics\textures\hvee\ROG_M1152M1165_d_CO.paa",
		"ROG_Vics\textures\hvee\ROG_M1151_GPK_d_CO.paa",
		"ROG_Vics\textures\hvee\ROG_mk64mount_d_co.paa",
		"ROG_Vics\textures\hvee\ROG_lras3_d_co.paa"
		};
	}
	
	class ROG_m1151_m2_lras3_v1_Simba : rhsusf_m1151_m2_lras3_v1_usarmy_d //Lras Humvee Simba
	{
		scope = public;
		side = 1;
		editorCategory="ROG";
		editorSubcategory="Car";
		displayName = "[ROG] M1151A1 (GPK/M2/LRAS3) (Simba)";
		HiddenSelectionsTextures[] = {
		"ROG_Vics\textures\hvee\ROG_M1151_Ext_d_CO.paa",
		"ROG_Vics\textures\hvee\ROG_M1151_Tire_d_CO.paa",
		"ROG_Vics\textures\hvee\ROG_M1151_Int_CO.paa",
		"ROG_Vics\textures\hvee\ROG_M1151_Acc_D_CO.paa",
		"ROG_Vics\textures\hvee\ROG_exterior_d_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
		"ROG_Vics\textures\hvee\ROG_M1152M1165_d_CO.paa",
		"ROG_Vics\textures\hvee\ROG_M1151_GPK_d_CO.paa",
		"ROG_Vics\textures\hvee\ROG_mk64mount_d_co.paa",
		"ROG_Vics\textures\hvee\ROG_lras3_d_co.paa"
		};
	}
};
