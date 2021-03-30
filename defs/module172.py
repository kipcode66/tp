#
# Generate By: dol2asm
# Module: 172
#

# Libraries
LIBRARIES = [
	"d/a/e/d_a_e_ba",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_e_ba",
	"global_destructor_chain",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".rodata",
	".data",
	".bss",
	".dtors",
]

# Symbols
SYMBOLS = [
	{'addr':0x8067EC00,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067EC2C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067EC58,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067EC78,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067EC94,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067ECEC,'size':68,'pad':0,'label':"__ct__12daE_BA_HIO_cFv",'name':"__ct__12daE_BA_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067ED30,'size':96,'pad':0,'label':"ba_disappear__FP10fopAc_ac_c",'name':"ba_disappear__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067ED90,'size':168,'pad':0,'label':"anm_init__FP10e_ba_classifUcf",'name':"anm_init__FP10e_ba_classifUcf",'lib':-1,'tu':2,'section':0,'r':[11,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067EE38,'size':112,'pad':0,'label':"daE_BA_Draw__FP10e_ba_class",'name':"daE_BA_Draw__FP10e_ba_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067EEA8,'size':120,'pad':0,'label':"shot_b_sub__FPvPv",'name':"shot_b_sub__FPvPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067EF20,'size':216,'pad':0,'label':"other_bg_check__FP10e_ba_classP10fopAc_ac_c",'name':"other_bg_check__FP10e_ba_classP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067EFF8,'size':180,'pad':0,'label':"pl_check__FP10e_ba_classfs",'name':"pl_check__FP10e_ba_classfs",'lib':-1,'tu':2,'section':0,'r':[5,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067F0AC,'size':560,'pad':0,'label':"damage_check__FP10e_ba_class",'name':"damage_check__FP10e_ba_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067F2DC,'size':616,'pad':0,'label':"path_check__FP10e_ba_class",'name':"path_check__FP10e_ba_class",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067F544,'size':400,'pad':0,'label':"fly_move__FP10e_ba_class",'name':"fly_move__FP10e_ba_class",'lib':-1,'tu':2,'section':0,'r':[6,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067F6D4,'size':328,'pad':0,'label':"e_ba_roof__FP10e_ba_class",'name':"e_ba_roof__FP10e_ba_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067F81C,'size':452,'pad':0,'label':"e_ba_fight_fly__FP10e_ba_class",'name':"e_ba_fight_fly__FP10e_ba_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067F9E0,'size':904,'pad':0,'label':"e_ba_fight__FP10e_ba_class",'name':"e_ba_fight__FP10e_ba_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067FD68,'size':504,'pad':0,'label':"e_ba_attack__FP10e_ba_class",'name':"e_ba_attack__FP10e_ba_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067FF60,'size':556,'pad':0,'label':"e_ba_fly__FP10e_ba_class",'name':"e_ba_fly__FP10e_ba_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068018C,'size':528,'pad':0,'label':"e_ba_return__FP10e_ba_class",'name':"e_ba_return__FP10e_ba_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8068039C,'size':792,'pad':0,'label':"e_ba_path_fly__FP10e_ba_class",'name':"e_ba_path_fly__FP10e_ba_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806806B4,'size':504,'pad':0,'label':"e_ba_chance__FP10e_ba_class",'name':"e_ba_chance__FP10e_ba_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806808AC,'size':584,'pad':0,'label':"e_ba_wolfbite__FP10e_ba_class",'name':"e_ba_wolfbite__FP10e_ba_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80680AF4,'size':420,'pad':0,'label':"e_ba_wind__FP10e_ba_class",'name':"e_ba_wind__FP10e_ba_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80680C98,'size':308,'pad':0,'label':"e_ba_appear__FP10e_ba_class",'name':"e_ba_appear__FP10e_ba_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80680DCC,'size':860,'pad':0,'label':"action__FP10e_ba_class",'name':"action__FP10e_ba_class",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80681128,'size':1548,'pad':0,'label':"daE_BA_Execute__FP10e_ba_class",'name':"daE_BA_Execute__FP10e_ba_class",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80681734,'size':8,'pad':0,'label':"daE_BA_IsDelete__FP10e_ba_class",'name':"daE_BA_IsDelete__FP10e_ba_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x8068173C,'size':100,'pad':0,'label':"daE_BA_Delete__FP10e_ba_class",'name':"daE_BA_Delete__FP10e_ba_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806817A0,'size':240,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80681890,'size':1116,'pad':0,'label':"daE_BA_Create__FP10fopAc_ac_c",'name':"daE_BA_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80681CEC,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80681D34,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80681D7C,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80681DD8,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80681E48,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80681EB8,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80681F00,'size':72,'pad':0,'label':"__dt__12daE_BA_HIO_cFv",'name':"__dt__12daE_BA_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80681F48,'size':60,'pad':0,'label':"__sinit_d_a_e_ba_cpp",'name':"__sinit_d_a_e_ba_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80681F84,'size':8,'pad':0,'label':"func_80681F84",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80681F8C,'size':8,'pad':0,'label':"func_80681F8C",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80681F94,'size':1044,'pad':0,'label':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'name':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806823A8,'size':8,'pad':0,'label':"data_806823A8",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806823B0,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806823B4,'size':8,'pad':0,'label':"pad_806823B4",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806823BC,'size':4,'pad':0,'label':"lit_3947",'name':"@3947",'lib':-1,'tu':2,'section':2,'r':[20,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806823C0,'size':4,'pad':0,'label':"lit_3948",'name':"@3948",'lib':-1,'tu':2,'section':2,'r':[16,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806823C4,'size':4,'pad':4,'label':"lit_3949",'name':"@3949",'lib':-1,'tu':2,'section':2,'r':[17,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806823CC,'size':8,'pad':0,'label':"lit_3950",'name':"@3950",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806823D4,'size':8,'pad':0,'label':"lit_3951",'name':"@3951",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806823DC,'size':8,'pad':0,'label':"lit_3952",'name':"@3952",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806823E4,'size':4,'pad':0,'label':"lit_3953",'name':"@3953",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806823E8,'size':4,'pad':0,'label':"lit_3968",'name':"@3968",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806823EC,'size':4,'pad':0,'label':"lit_3969",'name':"@3969",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806823F0,'size':4,'pad':0,'label':"lit_3970",'name':"@3970",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806823F4,'size':4,'pad':0,'label':"lit_3996",'name':"@3996",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806823F8,'size':4,'pad':0,'label':"lit_4122",'name':"@4122",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806823FC,'size':4,'pad':0,'label':"lit_4123",'name':"@4123",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682400,'size':4,'pad':0,'label':"lit_4124",'name':"@4124",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682404,'size':4,'pad':0,'label':"lit_4156",'name':"@4156",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682408,'size':4,'pad':0,'label':"lit_4242",'name':"@4242",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068240C,'size':4,'pad':0,'label':"lit_4243",'name':"@4243",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682410,'size':4,'pad':0,'label':"lit_4275",'name':"@4275",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682414,'size':4,'pad':0,'label':"lit_4276",'name':"@4276",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682418,'size':4,'pad':0,'label':"lit_4277",'name':"@4277",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068241C,'size':4,'pad':0,'label':"lit_4307",'name':"@4307",'lib':-1,'tu':2,'section':2,'r':[6,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682420,'size':4,'pad':0,'label':"lit_4308",'name':"@4308",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682424,'size':4,'pad':0,'label':"lit_4376",'name':"@4376",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682428,'size':4,'pad':0,'label':"lit_4377",'name':"@4377",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068242C,'size':4,'pad':0,'label':"lit_4378",'name':"@4378",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682430,'size':4,'pad':0,'label':"lit_4379",'name':"@4379",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682434,'size':4,'pad':0,'label':"lit_4380",'name':"@4380",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682438,'size':4,'pad':0,'label':"lit_4417",'name':"@4417",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068243C,'size':4,'pad':0,'label':"lit_4459",'name':"@4459",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682440,'size':4,'pad':0,'label':"lit_4460",'name':"@4460",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682444,'size':4,'pad':0,'label':"lit_4587",'name':"@4587",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682448,'size':4,'pad':0,'label':"lit_4588",'name':"@4588",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068244C,'size':4,'pad':0,'label':"lit_4589",'name':"@4589",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682450,'size':4,'pad':0,'label':"lit_4629",'name':"@4629",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682454,'size':4,'pad':0,'label':"lit_4630",'name':"@4630",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682458,'size':4,'pad':0,'label':"lit_4654",'name':"@4654",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068245C,'size':4,'pad':0,'label':"lit_4655",'name':"@4655",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682460,'size':4,'pad':0,'label':"lit_4678",'name':"@4678",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682464,'size':4,'pad':0,'label':"lit_4679",'name':"@4679",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682468,'size':4,'pad':0,'label':"lit_4680",'name':"@4680",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068246C,'size':4,'pad':0,'label':"lit_4747",'name':"@4747",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682470,'size':4,'pad':0,'label':"lit_4938",'name':"@4938",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682474,'size':4,'pad':0,'label':"lit_4939",'name':"@4939",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682478,'size':4,'pad':0,'label':"lit_5134",'name':"@5134",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8068247C,'size':4,'pad':4,'label':"lit_5135",'name':"@5135",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80682484,'size':8,'pad':0,'label':"lit_5137",'name':"@5137",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068248C,'size':16,'pad':0,'label':"struct_8068248C",'name':None,'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Structure"},
	{'addr':0x8068249C,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806824A8,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806824BC,'size':8,'pad':0,'label':"e_prim",'name':"e_prim$3826",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806824C4,'size':8,'pad':0,'label':"e_env",'name':"e_env$3827",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806824CC,'size':6,'pad':2,'label':"eff_id",'name':"eff_id$3835",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806824D4,'size':64,'pad':0,'label':"lit_4748",'name':"@4748",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80682514,'size':8,'pad':0,'label':"fire_name",'name':"fire_name$4786",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068251C,'size':6,'pad':2,'label':"ice_name",'name':"ice_name$4787",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80682524,'size':12,'pad':0,'label':"arc_name",'name':"arc_name$4985",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80682530,'size':64,'pad':0,'label':"cc_sph_src",'name':"cc_sph_src$5011",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80682570,'size':32,'pad':0,'label':"l_daE_BA_Method",'name':"l_daE_BA_Method",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80682590,'size':48,'pad':0,'label':"g_profile_E_BA",'name':"g_profile_E_BA",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806825C0,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806825CC,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806825D8,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806825E4,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806825F0,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806825FC,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80682620,'size':12,'pad':0,'label':"__vt__12daE_BA_HIO_c",'name':"__vt__12daE_BA_HIO_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80682630,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80682638,'size':4,'pad':0,'label':"data_80682638",'name':None,'lib':-1,'tu':2,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8068263C,'size':12,'pad':0,'label':"lit_3963",'name':"@3963",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80682648,'size':28,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'r':[9,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80682664,'size':255,'pad':0,'label':"check_index",'name':"check_index$4162",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__12daE_BA_HIO_cFv":5,
	"ba_disappear__FP10fopAc_ac_c":6,
	"anm_init__FP10e_ba_classifUcf":7,
	"daE_BA_Draw__FP10e_ba_class":8,
	"shot_b_sub__FPvPv":9,
	"other_bg_check__FP10e_ba_classP10fopAc_ac_c":10,
	"pl_check__FP10e_ba_classfs":11,
	"damage_check__FP10e_ba_class":12,
	"path_check__FP10e_ba_class":13,
	"fly_move__FP10e_ba_class":14,
	"e_ba_roof__FP10e_ba_class":15,
	"e_ba_fight_fly__FP10e_ba_class":16,
	"e_ba_fight__FP10e_ba_class":17,
	"e_ba_attack__FP10e_ba_class":18,
	"e_ba_fly__FP10e_ba_class":19,
	"e_ba_return__FP10e_ba_class":20,
	"e_ba_path_fly__FP10e_ba_class":21,
	"e_ba_chance__FP10e_ba_class":22,
	"e_ba_wolfbite__FP10e_ba_class":23,
	"e_ba_wind__FP10e_ba_class":24,
	"e_ba_appear__FP10e_ba_class":25,
	"action__FP10e_ba_class":26,
	"daE_BA_Execute__FP10e_ba_class":27,
	"daE_BA_IsDelete__FP10e_ba_class":28,
	"daE_BA_Delete__FP10e_ba_class":29,
	"useHeapInit__FP10fopAc_ac_c":30,
	"daE_BA_Create__FP10fopAc_ac_c":31,
	"__dt__8cM3dGSphFv":32,
	"__dt__8cM3dGAabFv":33,
	"__dt__10dCcD_GSttsFv":34,
	"__dt__12dBgS_ObjAcchFv":35,
	"__dt__12dBgS_AcchCirFv":36,
	"__dt__10cCcD_GSttsFv":37,
	"__dt__12daE_BA_HIO_cFv":38,
	"__sinit_d_a_e_ba_cpp":39,
	"func_80681F84":40,
	"func_80681F8C":41,
	"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz":42,
	"data_806823A8":43,
	"__destroy_global_chain_reference":44,
	"pad_806823B4":45,
	"lit_3947":46,
	"lit_3948":47,
	"lit_3949":48,
	"lit_3950":49,
	"lit_3951":50,
	"lit_3952":51,
	"lit_3953":52,
	"lit_3968":53,
	"lit_3969":54,
	"lit_3970":55,
	"lit_3996":56,
	"lit_4122":57,
	"lit_4123":58,
	"lit_4124":59,
	"lit_4156":60,
	"lit_4242":61,
	"lit_4243":62,
	"lit_4275":63,
	"lit_4276":64,
	"lit_4277":65,
	"lit_4307":66,
	"lit_4308":67,
	"lit_4376":68,
	"lit_4377":69,
	"lit_4378":70,
	"lit_4379":71,
	"lit_4380":72,
	"lit_4417":73,
	"lit_4459":74,
	"lit_4460":75,
	"lit_4587":76,
	"lit_4588":77,
	"lit_4589":78,
	"lit_4629":79,
	"lit_4630":80,
	"lit_4654":81,
	"lit_4655":82,
	"lit_4678":83,
	"lit_4679":84,
	"lit_4680":85,
	"lit_4747":86,
	"lit_4938":87,
	"lit_4939":88,
	"lit_5134":89,
	"lit_5135":90,
	"lit_5137":91,
	"struct_8068248C":92,
	"cNullVec__6Z2Calc":93,
	"lit_1787":94,
	"e_prim":95,
	"e_env":96,
	"eff_id":97,
	"lit_4748":98,
	"fire_name":99,
	"ice_name":100,
	"arc_name":101,
	"cc_sph_src":102,
	"l_daE_BA_Method":103,
	"g_profile_E_BA":104,
	"__vt__12dBgS_AcchCir":105,
	"__vt__10cCcD_GStts":106,
	"__vt__10dCcD_GStts":107,
	"__vt__8cM3dGSph":108,
	"__vt__8cM3dGAab":109,
	"__vt__12dBgS_ObjAcch":110,
	"__vt__12daE_BA_HIO_c":111,
	"__global_destructor_chain":112,
	"data_80682638":113,
	"lit_3963":114,
	"l_HIO":115,
	"check_index":116,
}
