#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	vector3 vLocal_43 = { 0f, 0f, 0f };
	bool bLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	float fLocal_55 = 0f;
	float fLocal_56 = 0f;
	vector3 vLocal_57 = { 0f, 0f, 0f };
	vector3 vLocal_58 = { 0f, 0f, 0f };
	int iLocal_59 = 0;
	struct<5> Local_60[31];
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<5> Local_68[14];
	float fLocal_69 = 0f;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	vector3 vLocal_74 = { 0f, 0f, 0f };
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_76 = { 0f, 0f, 0f };
	vector3 vLocal_77 = { 0f, 0f, 0f };
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 16;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	vector3 vLocal_273 = { 0f, 0f, 0f };
	vector3 vLocal_274 = { 0f, 0f, 0f };
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	var uLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	bool bLocal_282 = 0;
	struct<33> Local_283 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_284 = 1;
	struct<2> Local_285 = { 0, 5 } ;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 5;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_49 = -1;
	iLocal_52 = -1;
	fLocal_55 = 0.5f;
	fLocal_56 = 0f;
	iLocal_62 = 1;
	fLocal_69 = 160f;
	iLocal_73 = 55000;
	vLocal_76 = { 30f, 30f, 5f };
	iLocal_102 = -1;
	vLocal_273 = { -458.4085f, -984.6459f, 22.5892f };
	vLocal_274 = { -458.1934f, -995.4897f, 22.7427f };
	vLocal_74 = { ScriptParam_285.f_1[0 /*3*/] };
	if (unk_0x9EC5BDC006623C42(11))
	{
		func_174();
	}
	if (unk_0x13348E86D5B8A052() > 18 || unk_0x13348E86D5B8A052() < 5)
	{
		unk_0x5894DC159447E10A();
	}
	if (func_132(vLocal_74, -1, 0, 0, 0))
	{
		func_129(-1);
	}
	else
	{
		unk_0x5894DC159447E10A();
	}
	while (true)
	{
		wait(0);
		if (unk_0xA80721FDC3BDCCDB())
		{
			if (!func_128())
			{
				if (func_127())
				{
					func_174();
				}
			}
			unk_0x65F534DDBF48606F("RE_CA", 0);
			switch (iLocal_70)
			{
				case 0:
					if (func_115())
					{
						func_174();
					}
					func_109();
					func_106(&Local_283);
					break;
				
				case 1:
					func_22();
					func_106(&Local_283);
					func_13();
					break;
				
				case 2:
					if (((unk_0x765F6FEEFF39224F(iLocal_78) && unk_0xDFB97818AD6C09CC(iLocal_78, 1)) && iLocal_98 < 5) && !bLocal_95)
					{
						func_12();
					}
					func_1();
					break;
			}
		}
		else
		{
			func_174();
		}
	}
}

void func_1()
{
	if (iLocal_280 && !iLocal_281)
	{
		unk_0x65BA35D6D61F1574("RE14A_FAIL");
		iLocal_97 = 0;
		while (iLocal_97 < 11)
		{
			if (unk_0x765F6FEEFF39224F(iLocal_88[iLocal_97]))
			{
				unk_0xF70578F5CD9822CB(iLocal_88[iLocal_97], false);
			}
			iLocal_97++;
		}
		if (!unk_0xD62C4419A41F106A(iLocal_80, 0))
		{
			unk_0xB81134EAAC434D76(iLocal_80, 0f);
			unk_0xF70578F5CD9822CB(iLocal_80, false);
		}
		if (unk_0x765F6FEEFF39224F(iLocal_89))
		{
			unk_0xF70578F5CD9822CB(iLocal_89, false);
		}
		unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
		unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
		unk_0xDFF589A2149528CE(true);
		unk_0x35675D19812BDF22(true);
		func_2(0, 1, 1, 0, 0, 0);
		iLocal_92 = 1;
		unk_0xCBDC8BC7A589C76E(1f);
		unk_0xFF2DEA68E2D3602E("re@construction");
		if (unk_0x117DAF3BF7232886(iLocal_275))
		{
			unk_0x2F8A4DF7D0DFF0A8(iLocal_275, 0);
			unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
			unk_0xC7E6A5D90DED6E0B(0f);
			unk_0xD6EDA274D82E8678(0f, 1065353216);
			unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
			unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), false);
		}
		if (unk_0xE38E3CF1625A4145(iLocal_84))
		{
			unk_0x1ABDB383C83A336A(&iLocal_84);
		}
		if (unk_0xE38E3CF1625A4145(iLocal_85))
		{
			unk_0x1ABDB383C83A336A(&iLocal_85);
		}
		if (unk_0xE38E3CF1625A4145(iLocal_86))
		{
			unk_0x1ABDB383C83A336A(&iLocal_86);
		}
		if (unk_0xE38E3CF1625A4145(iLocal_87))
		{
			unk_0x1ABDB383C83A336A(&iLocal_87);
		}
		iLocal_281 = 1;
	}
	if (unk_0x765F6FEEFF39224F(iLocal_88[0]) || unk_0x765F6FEEFF39224F(iLocal_88[1]))
	{
		if (!unk_0x73E7A21FD53144AB(vLocal_75 + Vector(20f, 0f, 0f), 30f) && !unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_75, 80f, 80f, 80f, false, true, 0))
		{
			func_174();
		}
	}
}

void func_2(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 1);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 1);
		func_11(1);
		unk_0x9F86AEF7DC996029();
		unk_0x68F7298CC6F16961();
		if (Global_14553.f_1 > 3)
		{
			if (unk_0xA30F14B621E3269D())
			{
				unk_0xD92171BC6C48DB90(false);
			}
			if (!func_10())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_9(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_11(0);
		unk_0xD384C2E6BE0D5ABF();
		Global_56500 = 0;
		if (bParam1)
		{
			unk_0x36296F11E96E764D();
		}
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 0);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 0);
		func_9(0, iParam3, iParam2, 0);
		if (unk_0xB331FCEB94EB05C8())
		{
			if (((((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_7(unk_0x95B959F18401C09A())) && !func_4(unk_0x95B959F18401C09A(), 0)) && !func_3()) && !bParam4) && !bParam5)
			{
				unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
			}
		}
		else if (((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_7(unk_0x95B959F18401C09A())) && !bParam4) && !bParam5)
		{
			unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
		}
		Global_71588 = 0;
	}
}

bool func_3()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
}

bool func_4(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_5(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			bVar0 = unk_0x12D3B4C76D4AAB00(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_5(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_6();
	}
	if (Global_1312847[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_6()
{
	return Global_1312745;
}

int func_7(int iParam0)
{
	if (func_4(iParam0, 0))
	{
		return 1;
	}
	if (func_8())
	{
		if (iParam0 == unk_0x95B959F18401C09A())
		{
			return 1;
		}
	}
	if (unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_8()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

int func_9(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0xAB923D8907C25634() != iParam0 && uParam2)
		{
			unk_0xE5E26871D8586417(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_10()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_11(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2423, 13);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 13);
	}
}

void func_12()
{
	if (iLocal_102 == -1)
	{
		iLocal_102 = unk_0xE3903F59E2F22150() + 5000;
	}
	if (unk_0xE3903F59E2F22150() > iLocal_102)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_80))
		{
			unk_0xF70578F5CD9822CB(iLocal_80, false);
			unk_0x0848C95091F9ECB9(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			if (!unk_0xD62C4419A41F106A(iLocal_80, 0))
			{
				unk_0x87D8DEABF0FEFAE6(iLocal_80, 1, 0);
			}
		}
	}
}

void func_13()
{
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		func_21();
		func_20();
		func_17();
		func_14();
	}
}

void func_14()
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	vVar1 = { 0f, 0f, 0f };
	if (iLocal_61 == 0)
	{
		if (unk_0xA049C04187B6E28E(&vVar1, Local_68[0 /*5*/]))
		{
			fVar2 = 0f;
			fVar5 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_68)
			{
				if (iVar0 > 0)
				{
					fVar2 = (fVar2 + unk_0x16E00F066AFFEA0D(Local_68[(iVar0 - 1) /*5*/], Local_68[iVar0 /*5*/], true));
				}
				if (Local_68[iVar0 /*5*/].f_4)
				{
					if (unk_0xA049C04187B6E28E(&vVar1, Local_68[iVar0 /*5*/]))
					{
						fVar4 = unk_0x16E00F066AFFEA0D(Local_68[iVar0 /*5*/], vVar1, true);
						if (fVar4 < fVar5)
						{
							fVar5 = fVar4;
							fVar6 = fVar2;
							iVar3 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar5 < fLocal_55)
			{
				iVar3 = iVar3;
				iLocal_61 = 1;
				iLocal_63 = unk_0xE3903F59E2F22150();
				fVar6 = fVar6;
				vLocal_58 = { Local_68[iVar3 /*5*/] };
				iLocal_59 = iVar3;
				iLocal_64 = iVar3 * 2;
				iLocal_66 = iLocal_64;
				iLocal_67 = iLocal_64;
				if (iLocal_67 < 0)
				{
					iLocal_67 = 0;
				}
				if (iLocal_66 >= Local_68 * 2)
				{
					iLocal_66 = (Local_68 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_61 == 1)
	{
		unk_0xA11528F6B1D60172();
		fVar7 = (to_float((unk_0xE3903F59E2F22150() - iLocal_63)) / fLocal_69);
		iVar8 = (floor((fVar7 / (1f / 2f))) - 1);
		iVar9 = (iLocal_64 + iVar8);
		iVar10 = (iLocal_64 - iVar8);
		if (iVar9 >= 28)
		{
			iVar9 = 27;
		}
		if (iVar10 < 0)
		{
			iVar10 = 0;
		}
		if (iVar9 > iLocal_66)
		{
			iVar0 = iLocal_66 + 1;
			while (iVar0 <= iVar9)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_68)
				{
					if (Local_68[iVar11 /*5*/].f_4)
					{
						func_15(iVar0, 1);
					}
					else
					{
						iVar9 = (iVar0 - 1);
						iVar0 = iVar9 + 1;
					}
				}
				iVar0++;
			}
			iLocal_66 = iVar9;
		}
		if (iVar10 < iLocal_67)
		{
			iVar0 = (iLocal_67 - 1);
			while (iVar0 >= iVar10)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_68)
				{
					if (Local_68[iVar11 /*5*/].f_4)
					{
						func_15(iVar0, 1);
					}
					else
					{
						iVar10 = iVar0 + 1;
						iVar0 = (iVar10 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_67 = iVar10;
		}
		iVar0 = 0;
		while (iVar0 < Local_60)
		{
			if ((unk_0xE3903F59E2F22150() - Local_60[iVar0 /*5*/].f_4) > 1000)
			{
				unk_0x140C08484208A7F0(Local_60[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((unk_0xE3903F59E2F22150() - Local_60[iVar0 /*5*/].f_4) > 6000)
			{
				unk_0x05CBE369BED96B7E(Local_60[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_15(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 14)
			{
				func_16(Local_68[(iParam0 / 2) /*5*/] + Local_68[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_56, fLocal_56, fLocal_56), iParam1);
			}
		}
		else if ((iParam0 / 2) < 14)
		{
			func_16(Local_68[(iParam0 / 2) /*5*/] + Vector(fLocal_56, fLocal_56, fLocal_56), iParam1);
		}
	}
}

void func_16(vector3 vParam0, int iParam1)
{
	if (iLocal_62 == 0)
	{
		iParam1 = 0;
	}
	unk_0x05CBE369BED96B7E(Local_60[iLocal_65 /*5*/]);
	if (Local_60[iLocal_65 /*5*/].f_4 != 0)
	{
		unk_0x140C08484208A7F0(Local_60[iLocal_65 /*5*/].f_1, 0.4f, 1f);
	}
	Local_60[iLocal_65 /*5*/].f_4 = unk_0xE3903F59E2F22150();
	Local_60[iLocal_65 /*5*/].f_1 = { vParam0 };
	Local_60[iLocal_65 /*5*/] = unk_0xC16E03D1D784281D(vParam0, iLocal_53, iParam1);
	iLocal_65++;
	if (iLocal_65 >= 31)
	{
		iLocal_65 = 0;
	}
}

void func_17()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (bLocal_48)
	{
		unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (unk_0xF1CDE9FD207C4CD8(0, 24) && unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))
			{
				if (iLocal_54 == 0)
				{
					unk_0xB5D26BFA756D0D11(2f, 8f, 4);
					iLocal_54 = unk_0xE3903F59E2F22150() + 250;
				}
				if (unk_0xE3903F59E2F22150() > iLocal_54)
				{
					if (!bLocal_44)
					{
						fVar4 = 9999.9f;
						vLocal_57 = { func_19() };
						iVar0 = 0;
						while (iVar0 < Local_68)
						{
							if (unk_0xE38E3CF1625A4145(Local_68[iVar0 /*5*/].f_3))
							{
								fVar2 = unk_0x16E00F066AFFEA0D(vLocal_57, unk_0x7BC3899BF7085A7D(Local_68[iVar0 /*5*/].f_3), true);
								fVar3 = unk_0x16E00F066AFFEA0D(Local_68[iVar0 /*5*/], unk_0x7BC3899BF7085A7D(Local_68[iVar0 /*5*/].f_3), true);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_68[iVar0 /*5*/] = { vLocal_57 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_50 != -1)
							{
								if (unk_0xEE14D9A9F531ADDC((iLocal_51 - iVar5)) > 1)
								{
									iLocal_51 = -1;
								}
								if (iLocal_51 == -1)
								{
									iLocal_51 = iLocal_50;
								}
								if (unk_0xEE14D9A9F531ADDC((iLocal_51 - iVar5)) < 3 && unk_0xEE14D9A9F531ADDC((iLocal_51 - iVar5)) > 0)
								{
									if (iLocal_51 < iVar5)
									{
										iVar6 = iLocal_51;
										while (iVar6 <= (iVar5 - 1))
										{
											if (unk_0xE38E3CF1625A4145(Local_68[iVar6 /*5*/].f_3))
											{
												if (unk_0x163940E51B9C8A0D(Local_68[iVar6 /*5*/].f_3) > 0)
												{
													unk_0xE447A1B9434714F3(Local_68[iVar6 /*5*/].f_3, 0);
													Local_68[iVar6 /*5*/].f_4 = 1;
													iLocal_52 = (iLocal_52 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_51)
										{
											if (unk_0xE38E3CF1625A4145(Local_68[iVar6 /*5*/].f_3))
											{
												if (unk_0x163940E51B9C8A0D(Local_68[iVar6 /*5*/].f_3) > 0)
												{
													unk_0xE447A1B9434714F3(Local_68[iVar6 /*5*/].f_3, 0);
													Local_68[iVar6 /*5*/].f_4 = 1;
													iLocal_52 = (iLocal_52 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_51 = iLocal_50;
								}
								if (iVar5 == 0)
								{
									if (unk_0xE38E3CF1625A4145(Local_68[iVar5 /*5*/].f_3))
									{
										if (unk_0x163940E51B9C8A0D(Local_68[iVar5 /*5*/].f_3) > 0)
										{
											unk_0xE447A1B9434714F3(Local_68[iVar5 /*5*/].f_3, 0);
											Local_68[iVar5 /*5*/].f_4 = 1;
											iLocal_52 = (iLocal_52 - 1);
										}
									}
								}
								if (iVar5 == 13)
								{
									if (unk_0xE38E3CF1625A4145(Local_68[iVar5 /*5*/].f_3))
									{
										if (unk_0x163940E51B9C8A0D(Local_68[iVar5 /*5*/].f_3) > 0)
										{
											unk_0xE447A1B9434714F3(Local_68[iVar5 /*5*/].f_3, 0);
											Local_68[iVar5 /*5*/].f_4 = 1;
											iLocal_52 = (iLocal_52 - 1);
										}
									}
								}
								if (iVar5 < 13)
								{
									if (func_18(Local_68[iVar5 + 1 /*5*/]))
									{
										if (unk_0xE38E3CF1625A4145(Local_68[iVar5 /*5*/].f_3))
										{
											if (unk_0x163940E51B9C8A0D(Local_68[iVar5 /*5*/].f_3) > 0)
											{
												unk_0xE447A1B9434714F3(Local_68[iVar5 /*5*/].f_3, 0);
												Local_68[iVar5 /*5*/].f_4 = 1;
												iLocal_52 = (iLocal_52 - 1);
											}
										}
									}
								}
							}
							iLocal_50 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_50 = -1;
				iLocal_51 = -1;
				iLocal_54 = 0;
			}
		}
	}
}

int func_18(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_19()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	var uVar4;
	
	iVar0 = unk_0x3D74C4F085E721B1(unk_0x33CD235DF1E6A94E());
	if (unk_0x765F6FEEFF39224F(iVar0))
	{
		iVar1 = unk_0x89DDAAE6EFF42DD9(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		vVar2 = { unk_0x2D49816199C51B0C(iVar0, iVar1) };
		vVar2 = { unk_0xCD1EDCB38767B47C(vVar2, unk_0xC472E34C8FBEC678(iVar0), 0.35f, 0f, -0.15f) };
		unk_0x8C1596BAD35D957A(vVar2, &uVar4, 0, 0);
		vVar3 = { vVar2.x, vVar2.y, uVar4 };
	}
	return vVar3;
}

void func_20()
{
	int iVar0;
	
	if (iLocal_46)
	{
		if (iLocal_61)
		{
			iVar0 = 0;
			while (iVar0 < Local_60)
			{
				unk_0x05CBE369BED96B7E(Local_60[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_46 = 0;
		iLocal_61 = 1;
		iLocal_63 = unk_0xE3903F59E2F22150();
		iVar0 = 0;
		while (iVar0 < Local_68)
		{
			Local_68[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_49 != -1)
		{
			iLocal_67 = iLocal_49;
			iLocal_66 = iLocal_49;
			iLocal_64 = iLocal_49;
		}
		else
		{
			iLocal_67 = -1;
			iLocal_66 = -1;
			iLocal_64 = iLocal_49;
		}
		iLocal_65 = 1;
	}
}

void func_21()
{
	if (!iLocal_47)
	{
		iLocal_47 = 1;
	}
}

void func_22()
{
	switch (iLocal_71)
	{
		case 0:
			unk_0x3C05A6D663EA1B6A("CONSTRUCTION_ACCIDENT_1", false, -1);
			unk_0x0483D0035D6E46FD("re@construction");
			if (Local_283.f_32 <= 0)
			{
				Local_283.f_32 = unk_0xE77FA521699F639C();
			}
			func_105(&Local_283, joaat("s_m_m_dockwork_01"));
			func_105(&Local_283, -415509317);
			func_105(&Local_283, joaat("p_amb_phone_01"));
			func_102(&Local_283);
			if ((unk_0x3C05A6D663EA1B6A("CONSTRUCTION_ACCIDENT_1", false, -1) && unk_0xE9CCF312047EBEE0("re@construction")) && func_98(&Local_283))
			{
				if (unk_0x91D5C8283D19AF49(iLocal_80, 0))
				{
					iLocal_78 = unk_0xE196503B36B6194B(iLocal_80, 26, joaat("s_m_m_dockwork_01"), -1, 1, true);
					unk_0x93AA93DA1B137032(iLocal_78, 0, 1, 0, 0);
					unk_0x93AA93DA1B137032(iLocal_78, 3, 1, 1, 0);
					unk_0x93AA93DA1B137032(iLocal_78, 4, 0, 1, 0);
					unk_0x93AA93DA1B137032(iLocal_78, 8, 0, 0, 0);
					unk_0x108754262311D34F(iLocal_78, "re@construction", "idle_c", 1000f, -1000f, -1, 49, 0.4f, 0, 0, 0);
					iLocal_90 = unk_0x7CA67831169E8AA6(joaat("p_amb_phone_01"), -455.6561f, -985.8071f, 22.4868f, true, true, false);
					unk_0x71CA80D41E1338B4(joaat("p_amb_phone_01"));
					unk_0x2F0A6390D863D337(iLocal_90, iLocal_78, unk_0xFCAF61876D23D31D(iLocal_78, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0x28F648743D7DE312(iLocal_78, 17, true);
					unk_0xDD9D9FFE59B3E34D(iLocal_78, 1);
					unk_0x4A852F02088ECC9D(iLocal_78, true);
					unk_0xF0BE7CB40DE62A2F(iLocal_78, false);
					func_97(&uLocal_108, 3, iLocal_78, "RECONACWorker", 0, 1);
					unk_0x5464B9731013E08C(iLocal_78, "S_M_Y_GENERICWORKER_01_WHITE_01");
					iLocal_79 = unk_0x9BA5CF280376EEA4(26, joaat("s_m_m_dockwork_01"), -462.2982f, -978.3272f, 65f, 221.4041f, 1, true);
					unk_0x4A852F02088ECC9D(iLocal_79, true);
					unk_0x43D47AD82DA3C6EC(iLocal_79, true, 1);
					unk_0xF70578F5CD9822CB(iLocal_79, true);
					unk_0xF759BA8CFED9E6F7(iLocal_78, -1143637011);
					unk_0x6EAC27E1CB177752(-1143637011, 24);
					unk_0x6EAC27E1CB177752(-1143637011, 46);
					unk_0x6EAC27E1CB177752(-1143637011, 61);
					unk_0x6EAC27E1CB177752(-1143637011, 136);
					unk_0x6EAC27E1CB177752(-1143637011, 55);
					iLocal_89 = unk_0x7CA67831169E8AA6(-415509317, vLocal_274.x, (vLocal_274.y + 0.5f), (vLocal_274.z - 0.25f), true, true, false);
					unk_0x3C990C409B3845DE(iLocal_89, 75f);
					unk_0x4D5F3407F1F37E28(iLocal_89, false, true, true, false, false, false, 0, false);
					iLocal_279 = unk_0x36F0667378D07B9C("scr_sparking_generator", iLocal_89, 0f, 0f, 0.2f, 0f, 0f, 0f, 1f, 0, 0, 0);
					unk_0xF70578F5CD9822CB(iLocal_89, true);
					func_96(&uLocal_108, "CONACAU", "CONAC_CHAT", 4, 0, 0, 0, 0);
					iLocal_101 = unk_0xE3903F59E2F22150();
					iLocal_71 = 1;
				}
			}
			break;
		
		case 1:
			if (iLocal_91)
			{
				func_91();
			}
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (!iLocal_92)
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_78))
					{
						if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -532.2208f, -849.2668f, 19.7038f, -531.6973f, -1065.341f, 60.7893f, 190.8125f, 0, true, 0))
						{
							if (!unk_0xD62C4419A41F106A(iLocal_80, 0))
							{
								if (!unk_0xE38E3CF1625A4145(iLocal_85))
								{
									iLocal_85 = func_90(iLocal_80, 0, 0);
								}
							}
						}
						if (unk_0x91BBD269506D61D2(iLocal_78, unk_0x33CD235DF1E6A94E(), 1) || unk_0x91BBD269506D61D2(iLocal_80, unk_0x33CD235DF1E6A94E(), 1))
						{
							unk_0xF70578F5CD9822CB(iLocal_80, false);
							unk_0xED68CDDDE25A144E(iLocal_78);
							unk_0x99414FB2D30425C1(&iLocal_107);
							unk_0x07C339D4328CA16C(0, 0, 0);
							unk_0xECCD4FDA45197F97(0, unk_0x33CD235DF1E6A94E(), 150f, -1, 0, 0);
							unk_0xC734F59A13D39AEF(iLocal_107);
							unk_0x13A2D602CD10CBAC(iLocal_78, iLocal_107);
							unk_0xA7A57E7757ED035E(&iLocal_107);
							func_89();
						}
						unk_0xB815670C37E03CDE(joaat("prop_ld_pipe_single_01"));
						if ((((unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), -473.1686f, -984.6405f, 22.487f, 40f, 40f, 5f, false, true, 0) && !unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E())) && !unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E())) && func_88(1, 0, 1)) && unk_0x5D98D654CDC2165A(joaat("prop_ld_pipe_single_01")))
						{
							if (!func_128())
							{
								if (!unk_0xD62C4419A41F106A(unk_0x8918EC905FC8975D(), 0))
								{
									iLocal_83 = unk_0x8918EC905FC8975D();
								}
								func_78(1);
							}
							iLocal_91 = 1;
						}
					}
					else
					{
						func_89();
					}
				}
				else
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_78))
					{
						if (unk_0xF0D230FB550CD6EB(iLocal_78, 0))
						{
							if (!unk_0xD62C4419A41F106A(iLocal_80, 0) && !unk_0xE38E3CF1625A4145(iLocal_85))
							{
								iLocal_85 = func_90(iLocal_80, 0, 0);
							}
						}
						else if (!unk_0xE38E3CF1625A4145(iLocal_84))
						{
							if (unk_0xE38E3CF1625A4145(iLocal_85))
							{
								unk_0x1ABDB383C83A336A(&iLocal_85);
							}
							iLocal_84 = func_75(iLocal_78, 0, 145);
						}
					}
					func_46();
					func_43();
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_78))
					{
						if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_78, vLocal_76, 0, 1, 0))
						{
							if (!bLocal_93)
							{
								func_42();
							}
						}
					}
					else
					{
						if (unk_0xE38E3CF1625A4145(iLocal_84))
						{
							unk_0x1ABDB383C83A336A(&iLocal_84);
						}
						if (unk_0xE38E3CF1625A4145(iLocal_85))
						{
							unk_0x1ABDB383C83A336A(&iLocal_85);
						}
						if (unk_0xE38E3CF1625A4145(iLocal_86))
						{
							unk_0x1ABDB383C83A336A(&iLocal_86);
						}
						if (unk_0xBC2FC12AD0FBF72E(iLocal_78) || unk_0xD62C4419A41F106A(iLocal_80, 0))
						{
							func_89();
						}
					}
					if (!unk_0x91D5C8283D19AF49(iLocal_81, 0))
					{
						if (unk_0xE38E3CF1625A4145(iLocal_86))
						{
							unk_0x1ABDB383C83A336A(&iLocal_86);
							if (!unk_0xD62C4419A41F106A(iLocal_80, 0) && !unk_0xE38E3CF1625A4145(iLocal_85))
							{
								iLocal_85 = func_90(iLocal_80, 0, 0);
							}
						}
					}
				}
				if (unk_0x91D5C8283D19AF49(iLocal_81, 0))
				{
					if (iLocal_103 >= 3)
					{
						if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && unk_0xEAB9CD768B92B81F(unk_0x33CD235DF1E6A94E(), joaat("bulldozer")))
						{
							if (unk_0xE38E3CF1625A4145(iLocal_86))
							{
								unk_0x1ABDB383C83A336A(&iLocal_86);
								if (!unk_0xBC2FC12AD0FBF72E(iLocal_78) && !unk_0xD62C4419A41F106A(iLocal_80, 0))
								{
									if (unk_0xF0D230FB550CD6EB(iLocal_78, 0) && !unk_0xE38E3CF1625A4145(iLocal_85))
									{
										iLocal_85 = func_90(iLocal_80, 0, 0);
									}
								}
							}
						}
						else if (!unk_0xBC2FC12AD0FBF72E(iLocal_78) && !unk_0xD62C4419A41F106A(iLocal_80, 0))
						{
							if (unk_0xF0D230FB550CD6EB(iLocal_78, 0) && unk_0xE38E3CF1625A4145(iLocal_85))
							{
								unk_0x1ABDB383C83A336A(&iLocal_85);
								if (!unk_0xE38E3CF1625A4145(iLocal_86))
								{
									iLocal_86 = func_90(iLocal_81, 0, 0);
								}
							}
						}
					}
				}
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_78))
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						if (unk_0xEAB9CD768B92B81F(unk_0x33CD235DF1E6A94E(), joaat("bulldozer")))
						{
							iLocal_97 = 0;
							while (iLocal_97 < 11)
							{
								if (unk_0x765F6FEEFF39224F(iLocal_88[iLocal_97]))
								{
									unk_0xF70578F5CD9822CB(iLocal_88[iLocal_97], false);
								}
								iLocal_97++;
							}
						}
					}
				}
				if (!unk_0xD62C4419A41F106A(iLocal_80, 0))
				{
					if (unk_0x17260B4EA0652E1C(iLocal_80))
					{
						iLocal_97 = 0;
						while (iLocal_97 < 11)
						{
							if (unk_0x765F6FEEFF39224F(iLocal_88[iLocal_97]))
							{
								unk_0xF70578F5CD9822CB(iLocal_88[iLocal_97], false);
							}
							iLocal_97++;
						}
						unk_0xF70578F5CD9822CB(iLocal_80, false);
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_78))
						{
							if (unk_0xF0D230FB550CD6EB(iLocal_78, 0))
							{
								unk_0x4A852F02088ECC9D(iLocal_78, true);
								unk_0x5FEE418CE11E6DDE(iLocal_78, 116, false);
								unk_0x5FEE418CE11E6DDE(iLocal_78, 29, false);
								if (!bLocal_95)
								{
									func_40();
									wait(0);
									func_24(&uLocal_108, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
									while (func_23())
									{
										wait(0);
									}
									bLocal_95 = true;
								}
								if (!unk_0xBC2FC12AD0FBF72E(iLocal_78))
								{
									unk_0x7FC2040EB34E0E31(iLocal_78, 99, 0);
								}
								if (!unk_0xD62C4419A41F106A(iLocal_80, 0))
								{
									unk_0xF70578F5CD9822CB(iLocal_80, false);
									unk_0x0848C95091F9ECB9(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
									unk_0x87D8DEABF0FEFAE6(iLocal_80, 1, 0);
								}
								func_89();
							}
						}
					}
				}
			}
			break;
	}
}

int func_23()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

int func_24(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15873 = 0;
	Global_15875 = 0;
	Global_15880 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_2621441 = 0;
	return func_25(sParam2, iParam3, 0);
}

int func_25(char* sParam0, int iParam1, bool bParam2)
{
	Global_15867 = 0;
	if (Global_15866 == 0 || Global_15868 == 2)
	{
		if (Global_15866 != 0)
		{
			if (iParam1 > Global_15868)
			{
				if (Global_15873 == 0)
				{
					unk_0xD92171BC6C48DB90(false);
					Global_14553.f_1 = 3;
					Global_15866 = 0;
					Global_15867 = 1;
					Global_15919 = 0;
					Global_15862 = 0;
					Global_15863 = 0;
					Global_15877 = 0;
					Global_15876 = 0;
					Global_14552 = 0;
				}
				else
				{
					func_38();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x12BF789190D82474())
		{
			return 0;
		}
		if (func_37(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_36();
		Global_15155 = { Global_15320 };
		Global_15872 = Global_15873;
		Global_15879 = Global_15880;
		Global_2621442 = Global_2621441;
		Global_15881 = { Global_15897 };
		Global_15874 = Global_15875;
		Global_16856 = Global_16857;
		Global_16864 = { Global_16870 };
		Global_16858 = Global_16859;
		Global_16860 = Global_16861;
		Global_16862 = Global_16863;
		Global_15485.f_370 = Global_16855;
		Global_15485.f_368 = Global_16853;
		Global_15485.f_369 = Global_16854;
		Global_15862 = Global_15863;
		if (Global_15872)
		{
			unk_0xCE689A8E8C42ED78(&Global_2423, 20);
			unk_0xCE689A8E8C42ED78(&Global_2424, 17);
			unk_0xCE689A8E8C42ED78(&Global_2425, 0);
			if (bParam2)
			{
				func_29();
				if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14553.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14519 == 1)
			{
				return 0;
			}
			if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
			{
				if (unk_0xA08B8AEC5B1A55D6(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (func_28())
				{
					return 0;
				}
				if (unk_0xC90E2CD6BFE5CC33(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (unk_0xD084701173607F29(unk_0x33CD235DF1E6A94E()))
				{
					return 0;
				}
				if (unk_0x735057E6A0704A43(unk_0x33CD235DF1E6A94E(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71590)
				{
					if (unk_0x8AE34E8B10270D31(unk_0x33CD235DF1E6A94E()))
					{
						return 0;
					}
					if (unk_0x63E238348058FF52(unk_0x95B959F18401C09A()))
					{
						return 0;
					}
					if (unk_0x105CB7A75E93DC77(unk_0x33CD235DF1E6A94E()))
					{
						return 0;
					}
					if (unk_0xB73BBE22563E911A(unk_0x95B959F18401C09A()))
					{
						return 0;
					}
				}
			}
			if (func_10())
			{
				return 0;
			}
			else
			{
				switch (Global_14553.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x0E4018692D92041D(Global_2423, 9))
				{
					return 0;
				}
			}
			func_27();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_26();
		return 1;
	}
	if (Global_15866 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15868 || iParam1 == Global_15868)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_38();
	}
	return 0;
}

void func_26()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14734[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD92171BC6C48DB90(false);
	Global_15866 = 1;
}

void func_27()
{
	Global_15919 = Global_15918;
	Global_15913 = Global_15914;
	Global_15960 = { Global_15948 };
	Global_15966 = { Global_15954 };
	Global_15921 = Global_15920;
	Global_15990 = { Global_15972 };
	Global_15996 = { Global_15978 };
	Global_16002 = { Global_15984 };
	Global_16008 = { Global_16014 };
	Global_1738 = Global_1739;
	Global_1740 = Global_1741;
	Global_15877 = Global_15878;
	Global_15879 = Global_15880;
	Global_15881 = { Global_15897 };
	Global_15870 = Global_15871;
	Global_16882 = 0;
	Global_15915 = 0;
	Global_15916 = 0;
	unk_0xCE689A8E8C42ED78(&Global_2424, 16);
}

int func_28()
{
	int iVar0;
	int iVar1;
	
	if (Global_71590)
	{
		iVar0 = 0;
		unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar1, 1);
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52370FB78E42E275() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (unk_0x1D819CC3EBBF0BFB(unk_0x33CD235DF1E6A94E(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_29()
{
	if (func_35(14))
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[0 /*29*/])
			{
				Global_14553 = 0;
			}
			else if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[1 /*29*/])
			{
				Global_14553 = 1;
			}
			else if (unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()) == Global_106565.f_28044[2 /*29*/])
			{
				Global_14553 = 2;
			}
			else
			{
				Global_14553 = 0;
			}
		}
	}
	else
	{
		Global_14553 = func_30();
		if (Global_14553 == 145)
		{
			Global_14553 = 3;
		}
		if (Global_71590)
		{
			Global_14553 = 3;
		}
		if (Global_14553 > 3)
		{
			Global_14553 = 3;
		}
	}
}

int func_30()
{
	func_31();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_31()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_34(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_33(unk_0x33CD235DF1E6A94E());
			if (func_32(iVar0) && (!func_35(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_32(Global_106565.f_2357.f_539.f_4321))
				{
					Global_106565.f_2357.f_539.f_4322 = Global_106565.f_2357.f_539.f_4321;
				}
				Global_106565.f_2357.f_539.f_4323 = iVar0;
				Global_106565.f_2357.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106565.f_2357.f_539.f_4321 != 145)
			{
				Global_106565.f_2357.f_539.f_4323 = Global_106565.f_2357.f_539.f_4321;
			}
			return;
		}
	}
	Global_106565.f_2357.f_539.f_4321 = 145;
}

bool func_32(int iParam0)
{
	return iParam0 < 3;
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_34(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_34(int iParam0)
{
	if (func_32(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_35(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_36()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15155[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15155[iVar0 /*10*/].f_1), "", 24);
		Global_15155[iVar0 /*10*/].f_7 = 0;
		Global_15155[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15155.f_161 = -99;
	Global_15155.f_162 = { 0f, 0f, 0f };
}

bool func_37(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1371947.f_203[iParam1];
			}
			break;
	}
	return unk_0x0E4018692D92041D(Global_1371947.f_1048, iParam0);
}

void func_38()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if ((unk_0xA30F14B621E3269D() || Global_14553.f_1 == 9) || Global_14552 == 1)
	{
		unk_0xD92171BC6C48DB90(false);
		Global_15866 = 6;
		Global_14553.f_1 = 3;
		return;
	}
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(true);
		Global_15866 = 6;
		return;
	}
}

void func_39(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = uParam5;
	if (iParam3 == 0)
	{
		Global_16853 = 1;
		Global_16851 = 0;
	}
	else
	{
		Global_16853 = 0;
		Global_16851 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16854 = 1;
		Global_16852 = 0;
	}
	else
	{
		Global_16854 = 0;
		Global_16852 = 1;
	}
}

void func_40()
{
	Global_14732 = 0;
	func_41();
}

void func_41()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(false);
		Global_15866 = 6;
	}
}

void func_42()
{
	switch (iLocal_103)
	{
		case 0:
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_78))
			{
				if ((unk_0xE3903F59E2F22150() - iLocal_101) > 3000)
				{
					func_24(&uLocal_108, "CONACAU", "CONAC_HELP", 4, 0, 0, 0);
					iLocal_105 = unk_0xE3903F59E2F22150();
					iLocal_101 = unk_0xE3903F59E2F22150();
					iLocal_103 = 2;
				}
			}
			break;
		
		case 1:
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_78))
			{
				if ((unk_0xE3903F59E2F22150() - iLocal_101) > 3000)
				{
					iLocal_101 = unk_0xE3903F59E2F22150();
					iLocal_103++;
				}
			}
			break;
		
		case 2:
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_78))
			{
				if ((unk_0xE3903F59E2F22150() - iLocal_101) > 5000 && !func_23())
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						iLocal_106 = unk_0x541D5C57194E73C4(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0));
					}
					if (unk_0xF0D230FB550CD6EB(iLocal_78, 0))
					{
						if (unk_0x91D5C8283D19AF49(iLocal_81, 0))
						{
							if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
							{
								if (!unk_0xEAB9CD768B92B81F(unk_0x33CD235DF1E6A94E(), joaat("bulldozer")))
								{
									if (!unk_0xE38E3CF1625A4145(iLocal_86))
									{
										iLocal_86 = func_90(iLocal_81, 0, 0);
										if (unk_0xE38E3CF1625A4145(iLocal_85))
										{
											unk_0x1ABDB383C83A336A(&iLocal_85);
										}
									}
								}
							}
							else if (!unk_0xE38E3CF1625A4145(iLocal_86))
							{
								iLocal_86 = func_90(iLocal_81, 0, 0);
								if (unk_0xE38E3CF1625A4145(iLocal_85))
								{
									unk_0x1ABDB383C83A336A(&iLocal_85);
								}
							}
						}
					}
					if (iLocal_106 == joaat("bulldozer"))
					{
						func_24(&uLocal_108, "CONACAU", "CONAC_HELP2", 4, 0, 0, 0);
					}
					else
					{
						func_24(&uLocal_108, "CONACAU", "CONAC_HELP3", 4, 0, 0, 0);
					}
					iLocal_101 = unk_0xE3903F59E2F22150();
					iLocal_103++;
				}
			}
			break;
		
		case 3:
			if (unk_0xE3903F59E2F22150() - iLocal_101) > unk_0x9EC3B269A34A2BEE(5000, 8000)
			{
				if (!func_23())
				{
					func_24(&uLocal_108, "CONACAU", "CONAC_HURRY", 4, 0, 0, 0);
					iLocal_101 = unk_0xE3903F59E2F22150();
				}
			}
			break;
	}
}

void func_43()
{
	switch (iLocal_99)
	{
		case 0:
			unk_0xFBDF325A70ECDDFC(vLocal_274 + Vector(0f, 1f, 0f), 1f, 1f, 1f);
			wait(0);
			unk_0x08B4BC279E595561(1f);
			unk_0x27A2C5F2E91F5A15(vLocal_273, 1f);
			wait(0);
			unk_0x27A2C5F2E91F5A15(vLocal_273 - Vector(0f, 4f, 0f), 1f);
			wait(0);
			unk_0x27A2C5F2E91F5A15(vLocal_273 - Vector(0f, 8f, 0f), 1f);
			wait(0);
			unk_0x27A2C5F2E91F5A15(vLocal_274, 1f);
			unk_0xF717F78E86807071();
			iLocal_105 = unk_0xE3903F59E2F22150();
			iLocal_99 = 2;
			break;
		
		case 2:
			if ((unk_0xE3903F59E2F22150() - iLocal_105) > iLocal_73 || func_45())
			{
				if (unk_0xC2FDDE313D5A5398(iLocal_279))
				{
					unk_0x91F3E4311D34B364(iLocal_279, 0);
				}
				func_44();
				if (!bLocal_95)
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_78) && !unk_0xD62C4419A41F106A(iLocal_80, 0))
					{
						if (!unk_0x782B99DB55846C95(iLocal_78, iLocal_80, -1, 0, false) && !unk_0x782B99DB55846C95(iLocal_78, iLocal_80, 0, 0, false))
						{
							func_40();
							wait(0);
							func_24(&uLocal_108, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
							bLocal_95 = true;
						}
					}
				}
				unk_0xA53C1C92EE35EC0E(3, true);
				unk_0x8BF099444ED247FB(80f);
				unk_0xAF9EA4E314ED45C2(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, true, 1);
				unk_0x3A59853E7DA8A5D8(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_278, 0, 0);
				settimera(0);
				iLocal_99 = 3;
			}
			break;
		
		case 3:
			if (unk_0x765F6FEEFF39224F(iLocal_80))
			{
				if (!unk_0x17260B4EA0652E1C(iLocal_80))
				{
				}
			}
			if (iLocal_98 < 2)
			{
				if (timera() > 5000)
				{
					if (!unk_0xD62C4419A41F106A(iLocal_80, 0))
					{
						unk_0xF70578F5CD9822CB(iLocal_80, false);
						unk_0x0848C95091F9ECB9(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						unk_0x87D8DEABF0FEFAE6(iLocal_80, 1, 0);
					}
				}
			}
			break;
	}
}

void func_44()
{
	iLocal_46 = 1;
}

int func_45()
{
	if (iLocal_61 == 1)
	{
		return 1;
	}
	return 0;
}

void func_46()
{
	vector3 vVar0;
	
	switch (iLocal_98)
	{
		case 0:
			if (iLocal_103 >= 2)
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_78) && !unk_0xD62C4419A41F106A(iLocal_80, 0))
				{
					if (!unk_0xF0D230FB550CD6EB(iLocal_78, 0))
					{
						iLocal_98++;
					}
					unk_0xEC26F4BFC9942A0C(&iLocal_90);
					if (unk_0x782B99DB55846C95(iLocal_78, iLocal_80, -1, 0, false) || unk_0x782B99DB55846C95(iLocal_78, iLocal_80, 0, 0, false))
					{
						if (unk_0x782B99DB55846C95(iLocal_78, iLocal_80, -1, 0, false))
						{
							bLocal_94 = true;
							vLocal_77 = { unk_0xFBB1F99A825CAB09(iLocal_80, false) + Vector(0f, -1f, -3f) };
						}
						else
						{
							vLocal_77 = { unk_0xFBB1F99A825CAB09(iLocal_80, false) + Vector(0f, 1.5f, -3f) };
						}
						if (unk_0x18FB647D79B09657(unk_0x8918EC905FC8975D(), vLocal_77, 4.2f, 4f, 5f, false, true, 0))
						{
							if (!bLocal_93)
							{
								func_40();
								wait(0);
								func_24(&uLocal_108, "CONACAU", "CONAC_FREE", 4, 0, 0, 0);
								bLocal_93 = true;
							}
						}
						else
						{
							bLocal_93 = true;
							iLocal_98++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_78) && !unk_0xD62C4419A41F106A(iLocal_80, 0))
			{
				if (!unk_0xD62C4419A41F106A(iLocal_81, 0))
				{
					unk_0x4D5F3407F1F37E28(iLocal_81, false, true, true, false, false, false, 0, false);
				}
				unk_0x4D5F3407F1F37E28(iLocal_78, false, true, false, false, false, false, 0, false);
				unk_0xF70578F5CD9822CB(iLocal_80, false);
				unk_0x99414FB2D30425C1(&iLocal_107);
				if (bLocal_94)
				{
					unk_0xC4A347124F39D998(0, unk_0x33CD235DF1E6A94E(), 3000, 0, 2);
					unk_0x07C339D4328CA16C(0, 0, 0);
					unk_0x7E268975AF5EA74F(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				else
				{
					unk_0xC4A347124F39D998(0, unk_0x33CD235DF1E6A94E(), 3000, 0, 2);
					unk_0x07C339D4328CA16C(0, 0, 0);
					unk_0x7E268975AF5EA74F(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				unk_0xC734F59A13D39AEF(iLocal_107);
				unk_0x13A2D602CD10CBAC(iLocal_78, iLocal_107);
				unk_0xA7A57E7757ED035E(&iLocal_107);
				unk_0x897EF720254BBEA3(iLocal_78, true);
				iLocal_101 = unk_0xE3903F59E2F22150();
				iLocal_98++;
			}
			break;
		
		case 2:
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_78))
			{
				if ((unk_0xE3903F59E2F22150() - iLocal_101) > 500 && !unk_0xF0D230FB550CD6EB(iLocal_78, 0))
				{
					iLocal_73 = 0;
					if (unk_0x91D5C8283D19AF49(iLocal_80, 0))
					{
					}
					func_40();
					wait(0);
					func_24(&uLocal_108, "CONACAU", "CONAC_BOOM", 4, 0, 0, 0);
					iLocal_101 = unk_0xE3903F59E2F22150();
					iLocal_98++;
				}
			}
			break;
		
		case 3:
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_78))
			{
				if (unk_0x18FB647D79B09657(iLocal_78, -464.7217f, -989.7214f, 22.4867f, 3f, 10f, 3f, false, true, 0) || (unk_0xE3903F59E2F22150() - iLocal_101) > 10000)
				{
					func_24(&uLocal_108, "CONACAU", "CONAC_AAAH", 4, 0, 0, 0);
					iLocal_98++;
				}
			}
			break;
		
		case 4:
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_78))
			{
				if (unk_0x18FB647D79B09657(iLocal_78, -472.7056f, -991.105f, 22.4867f, 3f, 30f, 3f, false, true, 0) || (unk_0xE3903F59E2F22150() - iLocal_101) > 10000)
				{
					if (!unk_0xD62C4419A41F106A(iLocal_80, 0))
					{
						unk_0xF70578F5CD9822CB(iLocal_80, false);
						unk_0x0848C95091F9ECB9(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						unk_0x87D8DEABF0FEFAE6(iLocal_80, 1, 0);
					}
					iLocal_98++;
				}
			}
			break;
		
		case 5:
			if ((unk_0xE3903F59E2F22150() - iLocal_101) > 3000)
			{
				if (unk_0x91D5C8283D19AF49(iLocal_80, 0))
				{
					unk_0xF70578F5CD9822CB(iLocal_80, false);
					unk_0x0848C95091F9ECB9(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					unk_0x87D8DEABF0FEFAE6(iLocal_80, 1, 0);
				}
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_78))
				{
					unk_0x65BA35D6D61F1574("RE14A_SAFE");
					if (!unk_0xD62C4419A41F106A(iLocal_81, 0))
					{
						unk_0x4D5F3407F1F37E28(iLocal_81, false, false, false, false, false, false, 0, false);
					}
					unk_0x4D5F3407F1F37E28(iLocal_78, false, false, false, false, false, false, 0, false);
					unk_0xC2A270E9C5578803(iLocal_78, 1);
					unk_0xF0BE7CB40DE62A2F(iLocal_78, true);
					unk_0xDD9D9FFE59B3E34D(iLocal_78, 0);
					unk_0x4A852F02088ECC9D(iLocal_78, false);
					unk_0xF759BA8CFED9E6F7(iLocal_78, -455129387);
					unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
					unk_0x99414FB2D30425C1(&iLocal_107);
					unk_0x108754262311D34F(0, "re@construction", "Out_Of_Breath", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0x656E3BB78935070E(iLocal_107, 1);
					unk_0xC734F59A13D39AEF(iLocal_107);
					unk_0x13A2D602CD10CBAC(iLocal_78, iLocal_107);
					unk_0xA7A57E7757ED035E(&iLocal_107);
				}
				unk_0xAF9EA4E314ED45C2(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, true, 1);
				unk_0x3A59853E7DA8A5D8(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_278, 0, 0);
				iLocal_101 = unk_0xE3903F59E2F22150();
				iLocal_98++;
			}
			break;
		
		case 6:
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_78))
			{
				if ((unk_0xE3903F59E2F22150() - iLocal_101) > 6400)
				{
					vVar0 = { -477.2774f, -990.0638f, 23.5497f };
					if (unk_0x765F6FEEFF39224F(unk_0x8918EC905FC8975D()))
					{
						if (unk_0x18FB647D79B09657(unk_0x8918EC905FC8975D(), -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, false, true, 0))
						{
							vVar0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (unk_0x765F6FEEFF39224F(iLocal_83))
					{
						if (unk_0x18FB647D79B09657(iLocal_83, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, false, true, 0))
						{
							vVar0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (unk_0x765F6FEEFF39224F(iLocal_81))
					{
						if (unk_0x18FB647D79B09657(iLocal_81, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, false, true, 0))
						{
							vVar0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					unk_0x99414FB2D30425C1(&iLocal_107);
					unk_0xC4A347124F39D998(0, unk_0x33CD235DF1E6A94E(), 3000, 2052, 2);
					unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
					unk_0x0BFA5DCFCE7BBE54(0, "WORLD_HUMAN_PICNIC", vVar0, 304.8172f, 0, 1, 0);
					unk_0xC734F59A13D39AEF(iLocal_107);
					unk_0x13A2D602CD10CBAC(iLocal_78, iLocal_107);
					unk_0xA7A57E7757ED035E(&iLocal_107);
					func_24(&uLocal_108, "CONACAU", "CONAC_THANK", 4, 0, 0, 0);
					func_47();
				}
			}
			else
			{
				func_89();
			}
			break;
	}
}

void func_47()
{
	while (!func_74())
	{
		wait(0);
	}
	func_70(func_30(), 4, 2);
	func_51(-1, 0);
	func_48();
	iLocal_70 = 2;
}

void func_48()
{
	func_49();
}

int func_49()
{
	if (func_50(0))
	{
		return 0;
	}
	if (Global_93721.f_8)
	{
		if (Global_93721.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93721.f_10 > 1)
	{
		return 0;
	}
	Global_93721.f_10++;
	return 1;
}

bool func_50(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

void func_51(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_68();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_67(iParam0))
	{
		func_66(iParam0, iParam1);
		if (!func_65(51))
		{
			func_61("RE_REWARD", 1, 0, 4000, 10000, func_64(), 0, 138, 0);
			func_60(51);
		}
		if (func_59(iParam0))
		{
			Global_106565.f_24989.f_2 = 3;
		}
		if (func_58(iParam0, iParam1) != 322)
		{
			func_53(func_58(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_106553 = iParam1;
		if (Global_106551 == 0)
		{
			if (((Global_106554 == 1 || Global_106554 == 5) || Global_106554 == 11) || Global_106554 == 25)
			{
				func_52(2);
			}
			else if ((Global_106554 == 26 || Global_106554 == 8) || Global_106554 == 17)
			{
				func_52(7);
			}
			else
			{
				func_52(1);
			}
		}
	}
}

void func_52(int iParam0)
{
	Global_106551 = iParam0;
}

void func_53(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_57((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106565.f_10188[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106565.f_10188[iParam0 /*12*/].f_6 == 11 || Global_106565.f_10188[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106565.f_10188[iParam0 /*12*/].f_5 = 1;
		Global_106565.f_10188[iParam0 /*12*/].f_10 = uParam1;
		Global_106565.f_10188[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x3BDFDF06B92DF21C(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3BDFDF06B92DF21C(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3BDFDF06B92DF21C(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_54();
	}
}

void func_54()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_106301 = 0;
	Global_106302 = 0;
	Global_106303 = 0;
	Global_106304 = 0;
	Global_106305 = 0;
	Global_106306 = 0;
	Global_106307 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106565.f_10188.f_3853;
	Global_106565.f_10188.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106565.f_10188[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106565.f_10188[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_106301++;
					fVar1 = (fVar1 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_106302++;
					fVar2 = (fVar2 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_106303++;
					fVar3 = (fVar3 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_106304++;
					fVar4 = (fVar4 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_106305++;
					fVar5 = (fVar5 + (Global_106565.f_10188[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_106306++;
					fVar6 = (fVar6 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_106307++;
					fVar7 = (fVar7 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_106284 > 0)
	{
		if (Global_106301 == Global_106284)
		{
			fVar1 = 55f;
		}
	}
	if (Global_106285 > 0)
	{
		if (Global_106302 == Global_106285)
		{
			fVar2 = 10f;
		}
	}
	if (Global_106286 > 0)
	{
		if (Global_106303 == Global_106286)
		{
			fVar3 = 0f;
		}
	}
	if (Global_106287 > 0)
	{
		if (Global_106304 == Global_106287)
		{
			fVar4 = 10f;
		}
	}
	if (Global_106288 > 0)
	{
		if (((Global_106305 == Global_106288 || (Global_106288 * 10 / Global_106305) < 41) || Global_106305 > Global_106291) || Global_106305 == Global_106291)
		{
			if (!unk_0x0E4018692D92041D(Global_106565.f_10188.f_3856, 14))
			{
				if (Global_106305 == Global_106288)
				{
					unk_0x3BDFDF06B92DF21C(joaat("num_rndevents_completed"), Global_106288, 0);
					unk_0x8950ED5730F62EE8(&(Global_106565.f_10188.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_106289 > 0)
	{
		if (Global_106306 == Global_106289)
		{
			fVar6 = 15f;
		}
	}
	if (Global_106290 > 0)
	{
		if (Global_106307 == Global_106290)
		{
			fVar7 = 5f;
		}
	}
	Global_106565.f_10188.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_106305 > Global_106291 || Global_106305 == Global_106291)
	{
		iVar9 = Global_106291;
	}
	else
	{
		iVar9 = Global_106305;
	}
	unk_0x12B6E23F244DDB0F(joaat("num_missions_completed"), Global_106301, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_missions_available"), Global_106284, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_minigames_completed"), Global_106302, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_minigames_available"), Global_106285, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_oddjobs_completed"), Global_106303, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_oddjobs_available"), Global_106286, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndpeople_completed"), Global_106304, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndpeople_available"), Global_106287, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndevents_available"), Global_106291, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_misc_completed"), (Global_106307 + Global_106306), 1);
	unk_0x12B6E23F244DDB0F(joaat("num_misc_available"), (Global_106290 + Global_106289), 1);
	Global_106308 = (Global_106301 * 100 / Global_106284);
	Global_106310 = ((Global_106303 + Global_106302) * 100 / (Global_106286 + Global_106285));
	Global_106309 = ((Global_106304 + iVar9) * 100 / (Global_106287 + Global_106291));
	Global_106311 = ((Global_106306 + Global_106307) * 100 / (Global_106289 + Global_106290));
	unk_0xB04A838EE49FBBAD(joaat("total_progress_made"), Global_106565.f_10188.f_3853, 1);
	unk_0x12B6E23F244DDB0F(joaat("percent_story_missions"), Global_106308, 1);
	unk_0x12B6E23F244DDB0F(joaat("percent_ambient_missions"), Global_106309, 1);
	unk_0x12B6E23F244DDB0F(joaat("percent_oddjobs"), Global_106310, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_106565.f_10188.f_3853))
	{
		func_56(13, floor(Global_106565.f_10188.f_3853));
	}
	if (!unk_0xDC17890B0B8B5081())
	{
		if (!Global_71590)
		{
			if (func_55() == 2 == 0 && !unk_0xB331FCEB94EB05C8())
			{
				if (unk_0xB16BC34F6CB4A57A())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_49();
				}
			}
		}
	}
}

int func_55()
{
	return Global_25765;
}

int func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x95FB4F650A03D477(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x6DD215A8A3129C26(iParam0, iParam1);
	}
	return 0;
}

int func_57(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	if (iParam2 == -1)
	{
		iParam2 = func_6();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x7FB03A24AC826003((iParam0 - 0)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x7FB03A24AC826003((iParam0 - 192)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x7FB03A24AC826003((iParam0 - 513)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x7FB03A24AC826003((iParam0 - 705)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xD9ABF415C92ECCBC((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x7FB03A24AC826003((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xD9ABF415C92ECCBC((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x7FB03A24AC826003((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x8951614902E1632F((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x7FB03A24AC826003((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x8951614902E1632F((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x7FB03A24AC826003((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x8951614902E1632F((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x7FB03A24AC826003((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x8951614902E1632F((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x7FB03A24AC826003((iParam0 - 7385)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x8951614902E1632F((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x7FB03A24AC826003((iParam0 - 7321)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x8951614902E1632F((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x7FB03A24AC826003((iParam0 - 9361)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x8951614902E1632F((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x7FB03A24AC826003((iParam0 - 15369)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x8951614902E1632F((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x7FB03A24AC826003((iParam0 - 15562)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x8951614902E1632F((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x7FB03A24AC826003((iParam0 - 15946)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x8951614902E1632F((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x7FB03A24AC826003((iParam0 - 18098)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x8951614902E1632F((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x7FB03A24AC826003((iParam0 - 22066)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x8951614902E1632F((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x7FB03A24AC826003((iParam0 - 24962)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x8951614902E1632F((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x7FB03A24AC826003((iParam0 - 26810)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar20, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_58(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x8950ED5730F62EE8(&(Global_106565.f_20404.f_150[iVar1]), iVar0);
	}
}

void func_61(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_62(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_62(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xCE3CFF625BEBAA04(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (unk_0xCE3CFF625BEBAA04(&(Global_106565.f_20404[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_106565.f_20404.f_145 < 9)
	{
		StringCopy(&(Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_4), sParam1, 16);
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_8 = (unk_0xE3903F59E2F22150() + iParam3);
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_9 = iParam5;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_11 = iParam6;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_12 = uParam2;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_13 = iParam7;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_14 = iParam8;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_10 = ((unk_0xE3903F59E2F22150() + iParam3) + iParam4);
		}
		else
		{
			Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_10 = -1;
		}
		Global_106565.f_20404.f_145++;
		func_63();
	}
}

void func_63()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_106565.f_20404.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (unk_0x0E4018692D92041D(Global_106565.f_20404[iVar0 /*16*/].f_11, 0))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[0])
			{
				Global_106565.f_20404.f_146[0] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x0E4018692D92041D(Global_106565.f_20404[iVar0 /*16*/].f_11, 1))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[1])
			{
				Global_106565.f_20404.f_146[1] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x0E4018692D92041D(Global_106565.f_20404[iVar0 /*16*/].f_11, 2))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[2])
			{
				Global_106565.f_20404.f_146[2] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_64()
{
	func_31();
	switch (Global_106565.f_2357.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x0E4018692D92041D(Global_106565.f_20404.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_66(int iParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(&(Global_106565.f_24989.f_8[iParam0]), iParam1);
}

int func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_68()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xD178EF744F20B712(), 64);
	uVar1 = func_69(Var0);
	return uVar1;
}

int func_69(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x36163153849DFDA1(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_70(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_106565.f_2357.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_106565.f_2357.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 10383;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 10383)
			{
				iVar0 = func_73(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_71(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
		if (iVar1 > -1)
		{
			Global_2539215 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2539215 = 1;
		}
	}
	return iVar0;
}

int func_73(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_72(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_74()
{
	return 1;
}

int func_75(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_76(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE38E3CF1625A4145(iVar0)) && unk_0xEAF855A7DC28BC8D(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		unk_0x1C95CD840303FC37(iVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_76(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x8848A15CBDADDC60(iParam0);
	if (unk_0x680558231C80291D(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_77(unk_0xB331FCEB94EB05C8(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xBF11C8A43770C598(iVar0, bParam1);
		}
		else
		{
			unk_0xB9E84A421C105943(iVar0, 2);
		}
	}
	else if (unk_0x068481DAF84B9654(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_77(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
		unk_0xBF11C8A43770C598(iVar0, bParam1);
	}
	else if (unk_0xA3A29DB165882310(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_77(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_77(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_78(int iParam0)
{
	if (func_82())
	{
		Global_106555 = 1;
		Global_106552 = unk_0xE3903F59E2F22150();
		if (func_59(Global_106554))
		{
			func_79(0);
		}
		unk_0xF72C40745AA793F1(1, "RE_TITLE");
		if (iParam0 && func_59(Global_106554))
		{
			unk_0x0B1FD891620F7745();
		}
		return 1;
	}
	return 0;
}

void func_79(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106565.f_24989.f_2 < 3)
			{
				if (!unk_0x6B59932722922B69())
				{
					func_80(func_81(iParam0), -1);
					Global_106565.f_24989.f_2++;
					unk_0x8950ED5730F62EE8(&Global_106561, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x0E4018692D92041D(Global_106561, 1))
			{
				if (!unk_0x6B59932722922B69())
				{
					func_80(func_81(iParam0), -1);
					Global_106565.f_24989.f_3++;
					unk_0x8950ED5730F62EE8(&Global_106561, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x0E4018692D92041D(Global_106561, 2))
			{
				if (!unk_0x6B59932722922B69())
				{
					func_80(func_81(iParam0), -1);
					Global_106565.f_24989.f_4++;
					unk_0x8950ED5730F62EE8(&Global_106561, 2);
				}
			}
			break;
	}
}

void func_80(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

char* func_81(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_82()
{
	switch (func_83(&Global_25824, 0, 5, 0, unk_0x8C40DC84EDF05997()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_83(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_91190.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_87(0))
		{
			return 0;
		}
		Global_36389++;
		*uParam0 = Global_36389;
		unk_0xF23201C524E43F1C(unk_0x3EE1295CEFBEFED4(), 0);
		Global_17272.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x3D732B99F6301C4D(8);
		}
		Global_36425 = iParam2;
		Global_36387 = *uParam0;
		Global_36388 = iParam4;
		Global_36386 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_36386 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36386)
			{
				if (Global_36392[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36387 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_85(iParam2))
		{
			return 0;
		}
		if (Global_36386 == 8)
		{
			return 0;
		}
		Global_36389++;
		*uParam0 = Global_36389;
		Global_36392[Global_36386 /*4*/] = Global_36389;
		Global_36392[Global_36386 /*4*/].f_1 = iParam1;
		Global_36392[Global_36386 /*4*/].f_2 = iParam2;
		Global_36392[Global_36386 /*4*/].f_3 = 0;
		Global_36386++;
		if (iParam4 != 0)
		{
			func_84(uParam0, iParam4);
		}
	}
	return 2;
}

void func_84(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_36386 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_36386)
	{
		if (Global_36392[iVar0 /*4*/] == *uParam0)
		{
			Global_36392[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_85(int iParam0)
{
	return func_86(iParam0, Global_36425);
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_87(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_85(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_88(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x8D13BA3BB8F16771())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
		{
			return 0;
		}
		iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (bParam0)
		{
			if (unk_0xD62C4419A41F106A(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xD62C4419A41F106A(iVar0, 0))
			{
				if (unk_0x7BDC41A7CA0C77A2(iVar0, -1, 0) != unk_0x33CD235DF1E6A94E())
				{
					return 0;
				}
			}
		}
		if (!unk_0xD62C4419A41F106A(iVar0, 0))
		{
			if (unk_0x67F8A06049221C80(iVar0) < 0.95f || unk_0x67F8A06049221C80(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (!unk_0x3B06C717B2793DBE(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

void func_89()
{
	unk_0x65BA35D6D61F1574("RE14A_FAIL");
	iLocal_70 = 2;
}

int func_90(int iParam0, bool bParam1, bool bParam2)
{
	return func_76(iParam0, !bParam1, bParam2);
}

void func_91()
{
	if (func_94(1000))
	{
		func_40();
		unk_0x7EDEAEAED85BEE4F(800);
		while (unk_0x75A50A9E5219C397())
		{
			wait(0);
		}
		if (!unk_0xD62C4419A41F106A(iLocal_80, 0))
		{
			unk_0xA3B3E54143896FE9(iLocal_80, 0f, 1f, 1f, 200f, 800f, 1);
		}
		bLocal_282 = true;
		iLocal_72 = 8;
	}
	switch (iLocal_72)
	{
		case 0:
			func_2(1, 1, 1, 0, 0, 0);
			unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
			unk_0x37ADE0EC220ACF87();
			unk_0xDFF589A2149528CE(false);
			unk_0x35675D19812BDF22(false);
			unk_0x1E76B6E2B806EE0F(0);
			if (unk_0x765F6FEEFF39224F(unk_0x8918EC905FC8975D()))
			{
				unk_0x0D21E1FDE062ED99(unk_0x8918EC905FC8975D(), true, 0);
			}
			unk_0x9C47E5CDFB45F474(vLocal_75, 50f, 0);
			unk_0xB7350047030F7672(vLocal_75, 30f, 0, 0, 0, 0, false, 0);
			unk_0x9FDF63945C690003(vLocal_75, 100f, 0);
			if (!unk_0xD62C4419A41F106A(unk_0x8918EC905FC8975D(), 0))
			{
				if (unk_0x18FB647D79B09657(unk_0x8918EC905FC8975D(), vLocal_75, 8f, 8f, 8f, false, true, 0))
				{
					iLocal_82 = unk_0x8918EC905FC8975D();
					unk_0x0D21E1FDE062ED99(iLocal_82, true, 0);
					unk_0x7AC8DF0B83EB4C6B(&iLocal_82);
				}
			}
			if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), -473.1686f, -984.6405f, 22.487f, 15f, 15f, 5f, false, true, 0))
			{
				unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), -477.3538f, -972.67f, 22.5494f, 1, false, 0, 1);
				unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), 237.4839f);
			}
			iLocal_276 = unk_0x392F736BA9C4A337("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, -0.1371f, -0.0346f, -29.6605f, 28f, 1, 2);
			iLocal_277 = unk_0x392F736BA9C4A337("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, 69.4831f, -0.0346f, -40.8884f, 28f, 1, 2);
			unk_0x083F68B89E3EA476(iLocal_276, "HAND_SHAKE", 0.3f);
			unk_0x083F68B89E3EA476(iLocal_277, "HAND_SHAKE", 0.3f);
			func_93();
			unk_0x189377BFBDC9127F(iLocal_276, true);
			unk_0x63F0B040CE6EDF0F(true, false, 3000, 1, 0, 0);
			wait(500);
			unk_0x8EB023915CEEDB99(iLocal_277, iLocal_276, 3500, 1, 1);
			unk_0x65BA35D6D61F1574("RE14A_START");
			iLocal_104 = unk_0xE3903F59E2F22150();
			iLocal_72 = 1;
			break;
		
		case 1:
			if ((unk_0xE3903F59E2F22150() - iLocal_104) > 3500)
			{
				unk_0x0F8EAEEC97DDBCB3(-1, "WEAKEN", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
				unk_0x0F8EAEEC97DDBCB3(iLocal_100, "WIND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
				unk_0x4CBC0B0C8471392B(iLocal_88[0], 1);
				func_92(iLocal_276);
				func_92(iLocal_277);
				iLocal_276 = unk_0x392F736BA9C4A337("DEFAULT_SCRIPTED_CAMERA", -455.4617f, -990.631f, 61.6885f, -89.0761f, -0.0146f, -49.881f, 80.5355f, 1, 2);
				iLocal_277 = unk_0x392F736BA9C4A337("DEFAULT_SCRIPTED_CAMERA", -455.4543f, -990.6208f, 61.012f, -89.0759f, -0.0146f, -47.8226f, 80.5355f, 1, 2);
				unk_0x083F68B89E3EA476(iLocal_276, "HAND_SHAKE", 0.3f);
				unk_0x083F68B89E3EA476(iLocal_277, "HAND_SHAKE", 0.3f);
				unk_0x8EB023915CEEDB99(iLocal_277, iLocal_276, 4000, 1, 0);
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_78))
				{
					unk_0xED68CDDDE25A144E(iLocal_78);
					unk_0xAE5B044AA2973E2A(iLocal_78, -461.4785f, -984.8583f, 28.0809f, 30000, 2080, 2);
				}
				if (unk_0x765F6FEEFF39224F(iLocal_90))
				{
					unk_0x35F11A916FDFCF32(iLocal_90, 1, true);
					unk_0xEC26F4BFC9942A0C(&iLocal_90);
				}
				iLocal_104 = unk_0xE3903F59E2F22150();
				iLocal_72 = 2;
			}
			break;
		
		case 2:
			if ((unk_0xE3903F59E2F22150() - iLocal_104) > 1500)
			{
				unk_0x0F8EAEEC97DDBCB3(-1, "CABLE_SNAPS", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
				iLocal_104 = unk_0xE3903F59E2F22150();
				iLocal_72 = 3;
			}
			break;
		
		case 3:
			if ((unk_0xE3903F59E2F22150() - iLocal_104) > 500)
			{
				if (unk_0x765F6FEEFF39224F(iLocal_88[0]))
				{
					unk_0xF70578F5CD9822CB(iLocal_88[0], false);
					unk_0x0848C95091F9ECB9(iLocal_88[0], 0, 0f, 0f, 5f, 0f, -2f, 2f, 0, 1, 1, 1, 0, 1);
					unk_0xF56E8C0D662F8C55(iLocal_88[0], 11, 0);
					unk_0xF56E8C0D662F8C55(iLocal_88[0], 18, 0);
					unk_0xF56E8C0D662F8C55(iLocal_88[0], 19, 0);
					unk_0xF56E8C0D662F8C55(iLocal_88[0], 23, 0);
					unk_0xF56E8C0D662F8C55(iLocal_88[0], 9, 0);
					unk_0xF56E8C0D662F8C55(iLocal_88[0], 12, 0);
					unk_0xF56E8C0D662F8C55(iLocal_88[0], 17, 0);
					unk_0xD9F039B57895690F("scr_reconstruct_pipefall_debris", iLocal_88[0], 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				iLocal_104 = unk_0xE3903F59E2F22150();
				iLocal_72 = 4;
			}
			break;
		
		case 4:
			if ((unk_0xE3903F59E2F22150() - iLocal_104) > 2000)
			{
				func_92(iLocal_276);
				func_92(iLocal_277);
				iLocal_276 = unk_0x392F736BA9C4A337("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 25.437f, -0.0087f, -118.3831f, 34f, 1, 2);
				iLocal_277 = unk_0x392F736BA9C4A337("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 2.0695f, -0.0087f, -120.2811f, 34f, 1, 2);
				unk_0x083F68B89E3EA476(iLocal_276, "HAND_SHAKE", 0.3f);
				unk_0x083F68B89E3EA476(iLocal_277, "HAND_SHAKE", 0.3f);
				unk_0x8EB023915CEEDB99(iLocal_277, iLocal_276, 1000, 3, 3);
				unk_0xCBE6AF58552C63B2(iLocal_100);
				iLocal_104 = unk_0xE3903F59E2F22150();
				iLocal_72 = 5;
			}
			break;
		
		case 5:
			if ((unk_0xE3903F59E2F22150() - iLocal_104) > 500)
			{
				if (!unk_0xD62C4419A41F106A(iLocal_80, 0))
				{
					unk_0xF70578F5CD9822CB(iLocal_80, false);
					unk_0x0F8EAEEC97DDBCB3(-1, "PIPES_LAND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
					unk_0xA3B3E54143896FE9(iLocal_80, 0f, 1f, 1f, 200f, 800f, 1);
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_78))
					{
						unk_0xE0DAC4ABE9900D9A(iLocal_78);
					}
					unk_0x108754262311D34F(iLocal_78, "re@construction", "idle_panic", 8f, -8f, -1, 16, 0, 0, 0, 0);
					unk_0xD9F039B57895690F("scr_reconstruct_pipe_impact", iLocal_80, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					func_24(&uLocal_108, "CONACAU", "CONAC_SCREAM", 4, 0, 0, 0);
					if (unk_0x117DAF3BF7232886(iLocal_276) && unk_0x117DAF3BF7232886(iLocal_277))
					{
						unk_0x083F68B89E3EA476(iLocal_276, "HAND_SHAKE", 1.5f);
						unk_0x083F68B89E3EA476(iLocal_277, "HAND_SHAKE", 1.5f);
					}
					iLocal_104 = unk_0xE3903F59E2F22150();
					iLocal_72 = 6;
				}
			}
			break;
		
		case 6:
			if ((unk_0xE3903F59E2F22150() - iLocal_104) > 500)
			{
				func_92(iLocal_276);
				func_92(iLocal_277);
				iLocal_276 = unk_0x392F736BA9C4A337("DEFAULT_SCRIPTED_CAMERA", -459.2609f, -987.5602f, 24.2611f, 0.583f, 0.2617f, -32.7532f, 49.9914f, 1, 2);
				iLocal_277 = unk_0x392F736BA9C4A337("DEFAULT_SCRIPTED_CAMERA", -459.0622f, -987.2584f, 24.2661f, 5.0301f, 0.2617f, -36.7308f, 49.9914f, 1, 2);
				unk_0x083F68B89E3EA476(iLocal_276, "HAND_SHAKE", 0.5f);
				unk_0x083F68B89E3EA476(iLocal_277, "HAND_SHAKE", 0.5f);
				unk_0x8EB023915CEEDB99(iLocal_277, iLocal_276, 2500, 3, 3);
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_78))
				{
					unk_0xAE5B044AA2973E2A(iLocal_78, unk_0xFBB1F99A825CAB09(iLocal_78, true) - Vector(10f, 0f, 2f), 30000, 2080, 2);
				}
				iLocal_104 = unk_0xE3903F59E2F22150();
				iLocal_72 = 7;
			}
			break;
		
		case 7:
			if ((unk_0xE3903F59E2F22150() - iLocal_104) > 2200 && !iLocal_96)
			{
				if ((unk_0xA1248DEAD0B27B8E(unk_0x33CD235DF1E6A94E()) && unk_0xB813DCBD5002BC42() == 4) || (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && unk_0x8ACF6D19519697BD() == 4))
				{
					unk_0x0B1F8038F56C12B7("CamPushInNeutral", 0, 0);
					unk_0x0F8EAEEC97DDBCB3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_96 = 1;
				}
			}
			if ((unk_0xE3903F59E2F22150() - iLocal_104) > 2500)
			{
				if (unk_0x91D5C8283D19AF49(iLocal_80, 0))
				{
					unk_0xF70578F5CD9822CB(iLocal_80, true);
				}
				iLocal_72 = 8;
			}
			break;
		
		case 8:
			unk_0x65BA35D6D61F1574("RE14A_PIPES");
			if (unk_0x765F6FEEFF39224F(iLocal_88[0]))
			{
				unk_0xEC26F4BFC9942A0C(&(iLocal_88[0]));
			}
			if (unk_0x91D5C8283D19AF49(iLocal_80, 0))
			{
				unk_0xB81134EAAC434D76(iLocal_80, 250f);
				unk_0xBEADAF07D2339505(iLocal_80, vLocal_75, 1, false, 0, 1);
				unk_0x3C990C409B3845DE(iLocal_80, 80f);
				unk_0xBAE549A63F38DAE8(vLocal_75, 50f, 0);
			}
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_78))
			{
				unk_0xED68CDDDE25A144E(iLocal_78);
				unk_0xE0DAC4ABE9900D9A(iLocal_78);
				unk_0x108754262311D34F(iLocal_78, "re@construction", "idle_panic", 8f, -8f, -1, 1, 0, 0, 0, 0);
			}
			unk_0x189377BFBDC9127F(iLocal_276, false);
			unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
			unk_0x2F8A4DF7D0DFF0A8(iLocal_276, 0);
			unk_0x2F8A4DF7D0DFF0A8(iLocal_277, 0);
			unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
			unk_0xC7E6A5D90DED6E0B(0f);
			unk_0xDFF589A2149528CE(true);
			unk_0x35675D19812BDF22(true);
			unk_0x1E76B6E2B806EE0F(1);
			func_2(0, 1, 1, 0, 0, 0);
			iLocal_101 = unk_0xE3903F59E2F22150();
			unk_0x71CA80D41E1338B4(1668676931);
			iLocal_88[1] = unk_0xDD9A603448A23A17(joaat("prop_ld_pipe_single_01"), -457.8815f, -988.9059f, 22.9554f, true, true, false);
			unk_0x1C8705F667F673EA(iLocal_88[1], -0.1939f, 105.0058f, 77.3964f, 2, 1);
			iLocal_88[2] = unk_0xDD9A603448A23A17(joaat("prop_ld_pipe_single_01"), -451.5131f, -986.8079f, 24.6947f, true, true, false);
			unk_0x1C8705F667F673EA(iLocal_88[2], 24.3941f, 32.5423f, 80.6862f, 2, 1);
			iLocal_88[3] = unk_0xDD9A603448A23A17(joaat("prop_ld_pipe_single_01"), -450.8099f, -985.9972f, 24.7104f, true, true, false);
			unk_0x1C8705F667F673EA(iLocal_88[3], 24.1841f, 110.287f, 78.4357f, 2, 1);
			iLocal_88[4] = unk_0xDD9A603448A23A17(joaat("prop_ld_pipe_single_01"), -456.6558f, -987.3979f, 22.9537f, true, true, false);
			unk_0x1C8705F667F673EA(iLocal_88[4], -0.0264f, 29.5754f, 79.1811f, 2, 1);
			iLocal_88[5] = unk_0xDD9A603448A23A17(joaat("prop_ld_pipe_single_01"), -456.1279f, -988.4162f, 22.9889f, true, true, false);
			unk_0x1C8705F667F673EA(iLocal_88[5], -0.6337f, 108.4339f, 77.9539f, 2, 1);
			iLocal_88[6] = unk_0xDD9A603448A23A17(joaat("prop_ld_pipe_single_01"), -457.0807f, -987.3059f, 23.7564f, true, true, false);
			unk_0x1C8705F667F673EA(iLocal_88[6], 0.0929f, 74.2657f, 79.3839f, 2, 1);
			iLocal_88[7] = unk_0xDD9A603448A23A17(joaat("prop_ld_pipe_single_01"), -456.6558f, -983.7804f, 22.9712f, true, true, false);
			unk_0x1C8705F667F673EA(iLocal_88[7], -0.0264f, 29.5754f, 80.9061f, 2, 1);
			iLocal_88[8] = unk_0xDD9A603448A23A17(joaat("prop_ld_pipe_single_01"), -455.3279f, -983.1712f, 22.9564f, true, true, false);
			unk_0x1C8705F667F673EA(iLocal_88[8], -0.1087f, 109.7339f, 80.9789f, 2, 1);
			iLocal_88[9] = unk_0xDD9A603448A23A17(joaat("prop_ld_pipe_single_01"), -456.1632f, -983.9359f, 23.7964f, true, true, false);
			unk_0x1C8705F667F673EA(iLocal_88[9], -0.3321f, 74.1907f, 81.6089f, 2, 1);
			iLocal_88[10] = unk_0xDD9A603448A23A17(joaat("prop_ld_pipe_single_01"), -454.644f, -994.1709f, 23.3329f, true, true, false);
			unk_0x1C8705F667F673EA(iLocal_88[10], 5.7811f, 104.6058f, 104.6964f, 2, 1);
			iLocal_97 = 0;
			while (iLocal_97 < 11)
			{
				if (unk_0x765F6FEEFF39224F(iLocal_88[iLocal_97]))
				{
					unk_0x76CE32E50F0C5270(iLocal_88[iLocal_97], 1);
					unk_0xF70578F5CD9822CB(iLocal_88[iLocal_97], true);
				}
				iLocal_97++;
			}
			if (bLocal_282)
			{
				unk_0xACCDA78123DB57B0(800);
				while (unk_0xD33DAC8D0D70A78C())
				{
					wait(0);
				}
			}
			iLocal_92 = 1;
			iLocal_91 = 0;
			break;
	}
}

void func_92(int iParam0)
{
	if (unk_0x117DAF3BF7232886(iParam0))
	{
		unk_0x2F8A4DF7D0DFF0A8(iParam0, 0);
	}
}

void func_93()
{
	unk_0x16E1A618A518A9D5();
	Global_16858 = 0;
}

int func_94(int iParam0)
{
	if (unk_0x73DA1542B2F0C458())
	{
		if ((unk_0xE3903F59E2F22150() - Global_28) > iParam0)
		{
			Global_27 = unk_0xE3903F59E2F22150();
		}
		Global_28 = unk_0xE3903F59E2F22150();
		if ((unk_0xE3903F59E2F22150() - Global_27) > iParam0)
		{
			if (func_95())
			{
				Global_27 = unk_0xE3903F59E2F22150();
				return 1;
			}
		}
	}
	return 0;
}

int func_95()
{
	if (unk_0xD9C92B0885A075F8())
	{
		return 0;
	}
	if (unk_0x833B1A3D9F713E03(0, 18) || unk_0x833B1A3D9F713E03(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_96(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15873 = 0;
	Global_15875 = 0;
	Global_15880 = 0;
	Global_16857 = 0;
	Global_16859 = 1;
	Global_16863 = 0;
	Global_16861 = iParam7;
	Global_2621441 = 0;
	return func_25(sParam2, iParam3, 0);
}

void func_97(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71590)
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x990A34F9DA8E506D(iParam2, 0);
			}
			else
			{
				unk_0x990A34F9DA8E506D(iParam2, 1);
			}
		}
		if (!unk_0xBC2FC12AD0FBF72E(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xC36B7971576CC42F(iParam2, 0);
			}
			else
			{
				unk_0xC36B7971576CC42F(iParam2, 1);
			}
		}
	}
}

int func_98(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0x0E4018692D92041D((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_99(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_99(var uParam0)
{
	return func_100(*uParam0, "NULL", uParam0->f_1);
}

int func_100(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x0E4018692D92041D(iParam0, 30))
	{
		if (unk_0x0E4018692D92041D(iParam0, 29))
		{
			switch (func_101(iParam0))
			{
				case 0:
					return unk_0x5D98D654CDC2165A(iParam2);
					break;
				
				case 1:
					return unk_0xE9CCF312047EBEE0(sParam1);
					break;
				
				case 2:
					return unk_0xCDA107F8BEE35F40(sParam1);
					break;
				
				case 3:
					return unk_0xD83C9F072D059CC4(sParam1);
					break;
				
				case 4:
					return unk_0x371855A6F27F144B(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xB6596C29F3179D0C(sParam1);
					break;
				
				case 6:
					return unk_0x3C05A6D663EA1B6A(sParam1, unk_0x0E4018692D92041D(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x854F5F1E3A6FEA55(iParam2);
					break;
				
				case 8:
					return unk_0x8A7F864DAB908749(iParam2);
					break;
				
				case 9:
					return unk_0xD3957903B061A8C8();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_101(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x0E4018692D92041D(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_102(var uParam0)
{
	func_103(uParam0, 9, -1, 0);
}

void func_103(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_104(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0x0E4018692D92041D((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x8950ED5730F62EE8(uParam0[iVar0 /*2*/], iParam1);
			unk_0x8950ED5730F62EE8(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_105(var uParam0, int iParam1)
{
	func_103(uParam0, 0, iParam1, 0);
}

void func_106(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0xE77FA521699F639C() >= (uParam0->f_32 + uParam0->f_33) || unk_0x0E4018692D92041D(Global_93682.f_20, 2)) || unk_0x0E4018692D92041D(Global_93682.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0x0E4018692D92041D((*uParam0)[iVar0 /*2*/], 29))
					{
						func_107(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0xE77FA521699F639C();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_107(int iParam0)
{
	func_108(iParam0, "NULL", iParam0->f_1);
}

void func_108(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x0E4018692D92041D(*iParam0, 30))
	{
		switch (func_101(*iParam0))
		{
			case 0:
				unk_0xB815670C37E03CDE(iParam2);
				break;
			
			case 1:
				unk_0x0483D0035D6E46FD(sParam1);
				break;
			
			case 2:
				unk_0x1FCB57E33CEA24E8(sParam1);
				break;
			
			case 3:
				unk_0x0A06DEFFF267C21E(sParam1, unk_0x0E4018692D92041D(*iParam0, 28));
				break;
			
			case 4:
				unk_0xD51062C52BCD2AE8(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xBC6AA949398C551E(sParam1);
				break;
			
			case 6:
				unk_0x3C05A6D663EA1B6A(sParam1, unk_0x0E4018692D92041D(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0xA70F5BB55D0343E6(iParam2);
				break;
			
			case 8:
				unk_0x2EE8D1440C9060EF(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x13157A56158089D8();
				break;
			
			default:
				break;
		}
		unk_0x8950ED5730F62EE8(iParam0, 29);
	}
}

void func_109()
{
	int iVar0;
	
	func_105(&Local_283, joaat("bulldozer"));
	func_105(&Local_283, joaat("utillitruck2"));
	func_105(&Local_283, 1668676931);
	if (func_98(&Local_283))
	{
		unk_0x8C4EA5F6857553AE(joaat("utillitruck2"), true);
		unk_0x4B06B5746CBEC99F(0.1f);
		unk_0xA53C1C92EE35EC0E(3, false);
		unk_0x0335D8135051EA56(vLocal_74 + Vector(50f, 50f, 50f), vLocal_74 - Vector(50f, 50f, 50f), 0, 1, 1, 1);
		vLocal_75 = { -455.6561f, -985.8071f, 22.4868f };
		iLocal_80 = unk_0xC651C43AB13A15E5(joaat("utillitruck2"), vLocal_75, 80f, true, true, false);
		unk_0x9FABD0AB045A5D6E(iLocal_80, false, true, 0);
		unk_0xD303E20CB0AE4AD0(iLocal_80, 3);
		unk_0x3A3707C1ECABF993(iLocal_80, 1, true);
		unk_0x3A3707C1ECABF993(iLocal_80, 2, true);
		unk_0x3A3707C1ECABF993(iLocal_80, 3, false);
		unk_0x3A3707C1ECABF993(iLocal_80, 4, true);
		unk_0x3A3707C1ECABF993(iLocal_80, 5, true);
		unk_0x3A3707C1ECABF993(iLocal_80, 6, false);
		unk_0x3A3707C1ECABF993(iLocal_80, 7, true);
		unk_0xF70578F5CD9822CB(iLocal_80, true);
		unk_0x4D5F3407F1F37E28(iLocal_80, false, false, false, true, false, false, 0, false);
		unk_0x3D258435016D9F74(iLocal_80, 10000);
		unk_0x18A74017AFD59D9B(iLocal_80, 5f);
		iLocal_81 = unk_0xC651C43AB13A15E5(joaat("bulldozer"), -472.9444f, -966.671f, 22.5534f, 181.8365f, true, true, false);
		unk_0xCE04CE961AF41AB9(vLocal_75, 10f, 1, 0, 0, false);
		iLocal_88[0] = unk_0xDD9A603448A23A17(1668676931, -453.2f, -986.1f, 59.45f, true, true, false);
		unk_0x3C990C409B3845DE(iLocal_88[0], 90f);
		unk_0xF70578F5CD9822CB(iLocal_88[0], true);
		unk_0x4D5F3407F1F37E28(iLocal_88[0], true, true, true, true, false, false, 0, false);
		unk_0x3D258435016D9F74(iLocal_88[0], 10000000);
		Local_68[0 /*5*/] = { vLocal_274 };
		Local_68[1 /*5*/] = { vLocal_274 + Vector(0f, 0.5f, 0f) };
		Local_68[2 /*5*/] = { vLocal_274 + Vector(0f, 1f, 0f) };
		Local_68[3 /*5*/] = { vLocal_274 + Vector(0f, 2.5f, 0f) };
		Local_68[4 /*5*/] = { vLocal_274 + Vector(0f, 3f, 0f) };
		Local_68[5 /*5*/] = { vLocal_274 + Vector(0f, 3.5f, 0f) };
		Local_68[6 /*5*/] = { vLocal_274 + Vector(0f, 4f, 0f) };
		Local_68[7 /*5*/] = { vLocal_274 + Vector(0f, 4.5f, 0f) };
		Local_68[8 /*5*/] = { vLocal_274 + Vector(0f, 5f, 0f) };
		Local_68[9 /*5*/] = { vLocal_274 + Vector(0f, 5.5f, 0f) };
		Local_68[10 /*5*/] = { vLocal_274 + Vector(0f, 6f, 0f) };
		Local_68[11 /*5*/] = { vLocal_274 + Vector(0f, 6.5f, 0f) };
		Local_68[12 /*5*/] = { vLocal_274 + Vector(0f, 7f, 0f) };
		Local_68[13 /*5*/] = { vLocal_273 };
		iVar0 = 0;
		while (iVar0 < Local_68)
		{
			Local_68[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (!unk_0xE38E3CF1625A4145(iLocal_87))
		{
		}
		func_110(&Local_283, 0);
		iLocal_280 = 1;
		iLocal_70 = 1;
	}
}

void func_110(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_112(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_111(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_111(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_112(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*2*/], 30))
		{
			func_113(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_113(var uParam0)
{
	func_114(*uParam0, "NULL", uParam0->f_1);
}

void func_114(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x0E4018692D92041D(iParam0, 30))
	{
		switch (func_101(iParam0))
		{
			case 0:
				unk_0x71CA80D41E1338B4(iParam2);
				break;
			
			case 1:
				unk_0xFF2DEA68E2D3602E(sParam1);
				break;
			
			case 2:
				unk_0x80BCAFF1FDCC7E85(sParam1);
				break;
			
			case 3:
				unk_0x30F6F0B876E12AD8(sParam1);
				break;
			
			case 4:
				unk_0x4167B14D99BD7D75(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xF1C2AA9472B34A78(sParam1);
				break;
			
			case 6:
				unk_0xC16C998D785ABF3A();
				break;
			
			case 7:
				unk_0x7316EA42E2F967B0(iParam2);
				break;
			
			case 8:
				unk_0xB073DB452891DC0B(iParam2, unk_0x0E4018692D92041D(iParam0, 26));
				break;
			
			case 9:
				unk_0xAEF90BD69E5087CF();
				break;
			
			default:
				break;
		}
	}
}

int func_115()
{
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_126())
		{
			return 0;
		}
	}
	if (func_122())
	{
		return 1;
	}
	if (func_116(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_116(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (func_32(func_30()))
		{
			iVar5 = func_64();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0x0E4018692D92041D(Global_106565.f_18568[iVar1 /*6*/], 2) && !unk_0x0E4018692D92041D(Global_106565.f_18568[iVar1 /*6*/], 3))
				{
					func_117(iVar1, &Var0);
					fVar4 = unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_117(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_118(uParam1, "Abigail1", func_120(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 1:
			func_118(uParam1, "Abigail2", func_120(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 2:
			func_118(uParam1, "Barry1", func_120(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 3:
			func_118(uParam1, "Barry2", func_120(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 4:
			func_118(uParam1, "Barry3", func_120(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 5:
			func_118(uParam1, "Barry3A", func_120(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 6:
			func_118(uParam1, "Barry3C", func_120(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 7:
			func_118(uParam1, "Barry4", func_120(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_119(iParam0), 0, 0);
			break;
		
		case 8:
			func_118(uParam1, "Dreyfuss1", func_120(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 9:
			func_118(uParam1, "Epsilon1", func_120(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 10:
			func_118(uParam1, "Epsilon2", func_120(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 11:
			func_118(uParam1, "Epsilon3", func_120(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 12:
			func_118(uParam1, "Epsilon4", func_120(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 13:
			func_118(uParam1, "Epsilon5", func_120(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 14:
			func_118(uParam1, "Epsilon6", func_120(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 15:
			func_118(uParam1, "Epsilon7", func_120(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 16:
			func_118(uParam1, "Epsilon8", func_120(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 17:
			func_118(uParam1, "Extreme1", func_120(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 18:
			func_118(uParam1, "Extreme2", func_120(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 19:
			func_118(uParam1, "Extreme3", func_120(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 20:
			func_118(uParam1, "Extreme4", func_120(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 21:
			func_118(uParam1, "Fanatic1", func_120(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_119(iParam0), 1, 0);
			break;
		
		case 22:
			func_118(uParam1, "Fanatic2", func_120(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_119(iParam0), 1, 0);
			break;
		
		case 23:
			func_118(uParam1, "Fanatic3", func_120(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_119(iParam0), 0, 1);
			break;
		
		case 24:
			func_118(uParam1, "Hao1", func_120(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_119(iParam0), 0, 1);
			break;
		
		case 25:
			func_118(uParam1, "Hunting1", func_120(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 26:
			func_118(uParam1, "Hunting2", func_120(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 27:
			func_118(uParam1, "Josh1", func_120(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 28:
			func_118(uParam1, "Josh2", func_120(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 29:
			func_118(uParam1, "Josh3", func_120(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 30:
			func_118(uParam1, "Josh4", func_120(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 31:
			func_118(uParam1, "Maude1", func_120(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 32:
			func_118(uParam1, "Minute1", func_120(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 33:
			func_118(uParam1, "Minute2", func_120(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 34:
			func_118(uParam1, "Minute3", func_120(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 35:
			func_118(uParam1, "MrsPhilips1", func_120(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 36:
			func_118(uParam1, "MrsPhilips2", func_120(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 37:
			func_118(uParam1, "Nigel1", func_120(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 38:
			func_118(uParam1, "Nigel1A", func_120(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 39:
			func_118(uParam1, "Nigel1B", func_120(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_119(iParam0), 1, 1);
			break;
		
		case 40:
			func_118(uParam1, "Nigel1C", func_120(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_119(iParam0), 1, 1);
			break;
		
		case 41:
			func_118(uParam1, "Nigel1D", func_120(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_119(iParam0), 1, 1);
			break;
		
		case 42:
			func_118(uParam1, "Nigel2", func_120(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 43:
			func_118(uParam1, "Nigel3", func_120(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 44:
			func_118(uParam1, "Omega1", func_120(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 45:
			func_118(uParam1, "Omega2", func_120(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 46:
			func_118(uParam1, "Paparazzo1", func_120(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 47:
			func_118(uParam1, "Paparazzo2", func_120(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 48:
			func_118(uParam1, "Paparazzo3", func_120(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 49:
			func_118(uParam1, "Paparazzo3A", func_120(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 50:
			func_118(uParam1, "Paparazzo3B", func_120(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 51:
			func_118(uParam1, "Paparazzo4", func_120(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 52:
			func_118(uParam1, "Rampage1", func_120(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 54:
			func_118(uParam1, "Rampage3", func_120(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 55:
			func_118(uParam1, "Rampage4", func_120(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 56:
			func_118(uParam1, "Rampage5", func_120(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 53:
			func_118(uParam1, "Rampage2", func_120(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 57:
			func_118(uParam1, "TheLastOne", func_120(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 58:
			func_118(uParam1, "Tonya1", func_120(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 59:
			func_118(uParam1, "Tonya2", func_120(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 60:
			func_118(uParam1, "Tonya3", func_120(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 61:
			func_118(uParam1, "Tonya4", func_120(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 62:
			func_118(uParam1, "Tonya5", func_120(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_118(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_120(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_121(iParam0) };
	if (unk_0x786AF4A44E1B5B4B(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_121(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_122()
{
	if (func_125() && !func_126())
	{
		return 1;
	}
	if (func_124() && func_123())
	{
		return 1;
	}
	return 0;
}

bool func_123()
{
	return Global_106283 > 0;
}

int func_124()
{
	if (Global_90634 != -1)
	{
		return 1;
	}
	return 0;
}

int func_125()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

int func_126()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0x7A0BCF765DB6E029() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_127()
{
	if (!func_85(5))
	{
		return 1;
	}
	if (func_122())
	{
		return 1;
	}
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_126())
		{
			return 0;
		}
	}
	if (func_116(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_128()
{
	if ((Global_106554 == func_68() && unk_0x40AC0B9EFCB6A65B()) && Global_106555)
	{
		return 1;
	}
	return 0;
}

void func_129(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_68();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_131(iParam0);
	unk_0x88B04627B159D024(0);
	unk_0xDCCE32451D4E5521(1);
	Global_106551 = 0;
	func_130();
}

void func_130()
{
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			unk_0x8C4EA5F6857553AE(unk_0x541D5C57194E73C4(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)), true);
		}
		unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 32, false);
	}
}

void func_131(int iParam0)
{
	Global_106554 = iParam0;
}

int func_132(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_145143)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_68();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_173())
		{
			return 0;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
			if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_126())
			{
				return 0;
			}
		}
		if (!Global_106565.f_9079)
		{
			return 0;
		}
		if (func_50(0))
		{
			return 0;
		}
		if (func_122())
		{
			return 0;
		}
		if (func_172())
		{
			return 0;
		}
		if (Global_106554 != -1)
		{
			return 0;
		}
		if (func_32(func_30()))
		{
			if (func_116(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) && !bParam4)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_171(iParam1))
		{
			return 0;
		}
		if (func_32(func_30()))
		{
			if (func_170(func_30()) == 4 || func_170(func_30()) == 5)
			{
				return 0;
			}
		}
		if (func_32(func_30()))
		{
			if (!func_169(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_168(Global_106565.f_24989.f_43[iParam1]))
		{
			return 0;
		}
		if ((unk_0xE3903F59E2F22150() - Global_106556) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_167())
		{
			return 0;
		}
		if (unk_0xB2B616B1F434DB30())
		{
			return 0;
		}
		if (unk_0x40AC0B9EFCB6A65B())
		{
			return 0;
		}
		if (!func_158(4))
		{
			return 0;
		}
		if (!func_85(5))
		{
			return 0;
		}
		if (func_157(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0xDE9B75BB528AC06E(unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E())))
		{
			if ((unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == unk_0x90D2E06562D440E1(377.153f, -717.567f, 10.0536f) || unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == unk_0x90D2E06562D440E1(320.9934f, 265.2515f, 82.1221f)) || unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == unk_0x90D2E06562D440E1(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_157(0, 0))
		{
			return 0;
		}
		if (Global_25911)
		{
			return 0;
		}
		if (func_171(30) && !func_157(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_32(func_30()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_106565.f_2357.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_106565.f_2357.f_539.f_2296[iVar2];
				if (func_156(iVar4))
				{
					if (func_134(iVar2))
					{
						if (!func_133(vVar3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), vVar3) < (210f * 210f))
							{
								if (func_30() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_133(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_134(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_106565.f_2357.f_539.f_2296[iParam0];
	return func_135(iVar0);
}

int func_135(int iParam0)
{
	return func_136(iParam0, 1);
}

int func_136(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_156(iParam0))
	{
		return 0;
	}
	func_137(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_137(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_138(func_149(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_138(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_148(iParam0, iParam1))
	{
		iVar0 = func_147(iParam1);
		iVar1 = func_145(iParam0);
		iVar2 = (func_145(iParam0) - func_145(iParam1));
		iVar3 = (func_147(iParam0) - func_147(iParam1));
		iVar4 = (func_144(iParam0) - func_144(iParam1));
		iVar5 = (func_143(iParam0) - func_143(iParam1));
		iVar6 = (func_142(iParam0) - func_142(iParam1));
		iVar7 = (func_141(iParam0) - func_141(iParam1));
	}
	else
	{
		iVar0 = func_147(iParam0);
		iVar1 = func_145(iParam1);
		iVar2 = (func_145(iParam1) - func_145(iParam0));
		iVar3 = (func_147(iParam1) - func_147(iParam0));
		iVar4 = (func_144(iParam1) - func_144(iParam0));
		iVar5 = (func_143(iParam1) - func_143(iParam0));
		iVar6 = (func_142(iParam1) - func_142(iParam0));
		iVar7 = (func_141(iParam1) - func_141(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_140(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_139(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_139(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_140(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_141(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_142(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_143(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_144(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_145(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_146(unk_0x0E4018692D92041D(iParam0, 31), -1, 1)) + 2011;
}

int func_146(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_147(int iParam0)
{
	return iParam0 & 15;
}

int func_148(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_156(iParam1) || !func_156(iParam0))
	{
		return 1;
	}
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_147(iParam0);
	iVar1 = func_147(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_142(iParam0);
	iVar1 = func_142(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_141(iParam0);
	iVar1 = func_141(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_149()
{
	var uVar0;
	
	func_155(&uVar0, unk_0xE6A7CE90720B9037());
	func_154(&uVar0, unk_0x7EA67BD818402745());
	func_153(&uVar0, unk_0x13348E86D5B8A052());
	func_152(&uVar0, unk_0x020A28FAE1C09250());
	func_151(&uVar0, unk_0x2C02CAA9C4127339());
	func_150(&uVar0, unk_0xED3F08F762AAA55A());
	return uVar0;
}

void func_150(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_151(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_152(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_147(*uParam0);
	iVar1 = func_145(*uParam0);
	if (iParam1 < 1 || iParam1 > func_140(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_153(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_154(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_155(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_156(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_141(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_142(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_143(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_145(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_147(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_144(iParam0);
	if (iVar5 < 1 || iVar5 > func_140(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_157(int iParam0, int iParam1)
{
	if (unk_0x0E4018692D92041D(Global_106565.f_24989.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0)
{
	int iVar0;
	
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				iVar0 = func_30();
				if (!func_32(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_166()) || Global_105612) || Global_25767) || func_165()) || func_37(8, -1)) || func_164()) || func_163()) || func_162()) || func_161()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1) || func_166()) || Global_25767) || func_165()) || func_37(8, -1)) || func_162()) || func_164()) || func_163()) || func_161()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_166()) || Global_105612) || Global_25767) || func_165()) || func_37(8, -1)) || func_162()) || func_164()) || func_163()) || func_161()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_166()) || Global_105612) || Global_25767) || func_165()) || func_37(8, -1)) || func_164()) || func_163()) || func_161()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_166() || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || func_37(8, -1)) || func_161()) || func_160()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_37(8, -1) || func_164()) || func_163()) || func_160()) || func_159())
						{
							return 0;
						}
						if ((unk_0x71EC91BA8C88BCE0() && unk_0xC043A1CA19EA599D() != 3) && unk_0x469BF85808505E83() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
						{
							if ((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_166()) || Global_25767) || func_165()) || func_37(8, -1)) || func_163()) || func_162()) || func_161()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || func_166()) || func_163()) || Global_105612) || Global_25767) || func_165()) || Global_37584) || func_37(8, -1)) || func_162()) || func_160()) || func_161()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0)) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1)) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0x04571D88090E0F77(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_166()) || Global_105612) || Global_25767) || func_165()) || func_37(8, -1)) || func_162()) || func_160()) || func_164()) || func_163()) || func_161())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_159()
{
	return Global_93721.f_1;
}

int func_160()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_161()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_162()
{
	if (Global_71850)
	{
		return 1;
	}
	else if (Global_56488 && !Global_56494)
	{
		return 1;
	}
	return 0;
}

bool func_163()
{
	return Global_93734.f_340 > 0;
}

bool func_164()
{
	return Global_93734.f_339 > 0;
}

var func_165()
{
	return Global_1312867;
}

int func_166()
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_167()
{
	func_29();
	if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_168(int iParam0)
{
	return func_148(func_149(), iParam0);
}

int func_169(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_30();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_170(int iParam0)
{
	if (!func_32(iParam0))
	{
		return 7;
	}
	return Global_106565.f_7682.f_919[iParam0];
}

bool func_171(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_173())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x0E4018692D92041D(Global_106565.f_24989, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x0E4018692D92041D(Global_106565.f_24989.f_1, iVar0);
	}
	return bVar1;
}

int func_172()
{
	int iVar0;
	
	if (Global_25915)
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x91D5C8283D19AF49(iVar0, 0))
			{
				if (!unk_0xBC2FC12AD0FBF72E(unk_0x7BDC41A7CA0C77A2(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_173()
{
	int iVar0;
	
	if (unk_0x40863EBAEA2F03D7())
	{
		if (unk_0xDBB8379205DEBBFE())
		{
			if (unk_0x0E7784F64A622FCE())
			{
				unk_0x75D54ED6C1AD1642(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x8950ED5730F62EE8(&iVar0, 2);
				unk_0x8950ED5730F62EE8(&iVar0, 4);
				unk_0x8950ED5730F62EE8(&iVar0, 6);
				unk_0x8950ED5730F62EE8(&Global_25, 2);
				unk_0x8950ED5730F62EE8(&Global_25, 4);
				unk_0x8950ED5730F62EE8(&Global_25, 6);
				unk_0x12B6E23F244DDB0F(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x3CEDCF35B2FFE080())
				{
					iVar0 = unk_0x37FBC14B2F5D54DB(866);
					unk_0x8950ED5730F62EE8(&iVar0, 0);
					unk_0x59DD23556BF7C12E(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_145398 == 2)
	{
		return 1;
	}
	else if (Global_145398 == 3)
	{
		return 0;
	}
	if (unk_0x3CEDCF35B2FFE080())
	{
		if (unk_0x0E4018692D92041D(unk_0x37FBC14B2F5D54DB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_174()
{
	if (iLocal_280)
	{
		if (!iLocal_281)
		{
			unk_0x65BA35D6D61F1574("RE14A_FAIL");
			func_210();
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_78))
			{
				unk_0x5FEE418CE11E6DDE(iLocal_78, 317, true);
			}
			if (!unk_0xD62C4419A41F106A(iLocal_83, 0))
			{
				if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_83, 0) && !unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_83, 50f, 50f, 50f, 0, 1, 0))
				{
					func_186(iLocal_83, 0, 145);
				}
			}
			iLocal_97 = 0;
			while (iLocal_97 < 11)
			{
				if (unk_0x765F6FEEFF39224F(iLocal_88[iLocal_97]))
				{
					unk_0xF70578F5CD9822CB(iLocal_88[iLocal_97], false);
				}
				iLocal_97++;
			}
			if (!unk_0xD62C4419A41F106A(iLocal_80, 0))
			{
				unk_0xB81134EAAC434D76(iLocal_80, 0f);
				unk_0xF70578F5CD9822CB(iLocal_80, false);
			}
			if (unk_0x765F6FEEFF39224F(iLocal_89))
			{
				unk_0xF70578F5CD9822CB(iLocal_89, false);
			}
			unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
			unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
			unk_0xDFF589A2149528CE(true);
			unk_0x35675D19812BDF22(true);
			func_2(0, 1, 1, 0, 0, 0);
			iLocal_92 = 1;
			unk_0xCBDC8BC7A589C76E(1f);
			unk_0xFF2DEA68E2D3602E("re@construction");
			if (unk_0x117DAF3BF7232886(iLocal_275))
			{
				unk_0x2F8A4DF7D0DFF0A8(iLocal_275, 0);
				unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
				unk_0xC7E6A5D90DED6E0B(0f);
				unk_0xD6EDA274D82E8678(0f, 1065353216);
				unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
				unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), false);
			}
			if (unk_0xE38E3CF1625A4145(iLocal_84))
			{
				unk_0x1ABDB383C83A336A(&iLocal_84);
			}
			if (unk_0xE38E3CF1625A4145(iLocal_85))
			{
				unk_0x1ABDB383C83A336A(&iLocal_85);
			}
			if (unk_0xE38E3CF1625A4145(iLocal_86))
			{
				unk_0x1ABDB383C83A336A(&iLocal_86);
			}
			if (unk_0xE38E3CF1625A4145(iLocal_87))
			{
				unk_0x1ABDB383C83A336A(&iLocal_87);
			}
		}
		unk_0x78713C03966ED44F(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 1);
		unk_0x4B06B5746CBEC99F(1f);
		unk_0xA53C1C92EE35EC0E(3, true);
		unk_0x0E688A76CA2618D5();
		unk_0x0ADAD7B4709951D1();
	}
	func_110(&Local_283, 0);
	func_175(-1);
	unk_0x5894DC159447E10A();
}

void func_175(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_68();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_128())
	{
		func_179(iParam0);
		unk_0xF72C40745AA793F1(0, 0);
		Global_106556 = unk_0xE3903F59E2F22150();
		func_178(30000);
		StringCopy(&cVar0, func_177(Global_106554, 1), 64);
		if (func_67(Global_106554) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_106553, 64);
		}
		unk_0x3976D3CAA943B599(&cVar0, Global_106551, (unk_0xE3903F59E2F22150() - Global_106552), 0);
	}
	else if (unk_0x0E4018692D92041D(Global_106561, 0) && Global_106565.f_24989.f_2 < 3)
	{
		unk_0xCE689A8E8C42ED78(&Global_106561, 0);
	}
	func_176(&Global_25824);
	Global_106555 = 0;
	func_131(-1);
}

void func_176(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_36387)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_36386 = 0;
	Global_36388 = 0;
	Global_36425 = 15;
	Global_56491 = 0;
	Global_56492 = 0;
}

char* func_177(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_178(int iParam0)
{
	Global_36976 = (unk_0xE3903F59E2F22150() + iParam0);
}

void func_179(int iParam0)
{
	func_180(iParam0, 0, func_185(iParam0));
}

void func_180(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_149();
	func_183(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_182(iParam0, &uVar0);
	Var1 = { func_181(&uVar0) };
}

struct<16> func_181(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_143(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_142(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_141(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_144(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_147(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_145(*uParam0), 64);
	return Var0;
}

void func_182(int iParam0, var uParam1)
{
	Global_106565.f_24989.f_43[iParam0] = *uParam1;
}

void func_183(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_145(*uParam0);
	iVar1 = func_147(*uParam0);
	iVar2 = func_144(*uParam0);
	iVar3 = func_143(*uParam0);
	iVar4 = func_142(*uParam0);
	iVar5 = func_141(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_140(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_140(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_184(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_184(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_155(uParam0, iParam1);
	func_154(uParam0, iParam2);
	func_153(uParam0, iParam3);
	func_151(uParam0, iParam5);
	func_152(uParam0, iParam4);
	func_150(uParam0, iParam6);
}

int func_185(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_186(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0x4527878B077DBA42(iParam0, &uVar0);
		if (!unk_0x786AF4A44E1B5B4B(sVar1))
		{
			if (unk_0x36163153849DFDA1(sVar1) == unk_0x36163153849DFDA1("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_187(iParam0, iParam2);
	return 1;
}

void func_187(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_193(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x7BDC41A7CA0C77A2(iParam0, -1, 0);
		if (!unk_0x765F6FEEFF39224F(iVar0))
		{
			iVar0 = unk_0xDAF93A0E27EE6FC7(iParam0, -1);
		}
		if (unk_0x765F6FEEFF39224F(iVar0) && !unk_0xBC2FC12AD0FBF72E(iVar0))
		{
			if (unk_0x541D5C57194E73C4(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x541D5C57194E73C4(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x541D5C57194E73C4(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_106565.f_2357.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x541D5C57194E73C4(iParam0) == Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x786AF4A44E1B5B4B(&(Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xCE3CFF625BEBAA04(unk_0x00D614EBCFFD919D(iParam0), &(Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_106565.f_32743.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x541D5C57194E73C4(iParam0) == Global_106565.f_32743.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x786AF4A44E1B5B4B(&(Global_106565.f_32743.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xCE3CFF625BEBAA04(unk_0x00D614EBCFFD919D(iParam0), &(Global_106565.f_32743.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_106565.f_32743.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_106565.f_32743.f_5590 = iParam1;
	Global_71314 = iParam0;
	Global_106565.f_32743.f_5588 = 1;
	func_188(iParam0, &(Global_106565.f_32743.f_5510));
}

void func_188(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		func_192(uParam1);
		uParam1->f_66 = unk_0x541D5C57194E73C4(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x00D614EBCFFD919D(iParam0), 16);
		*uParam1 = unk_0x4FD199DD0B583F5C(iParam0);
		unk_0x344F2893FA037279(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xEB9780F1DB69CCB5(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xBA1F4FDFE2E12FFE(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x362EE6C496FA3D80(iParam0);
		uParam1->f_67 = unk_0xE84981C3FDDC67C7(iParam0);
		uParam1->f_69 = unk_0x6598BA4640D7E61A(iParam0);
		uParam1->f_70 = unk_0xAF60E30B2CC603B2(iParam0);
		unk_0x7BC172C1973D1722(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x425E187882F60326(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xA8DC0D4489FEC63C(iParam0, 2))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 28);
		}
		if (unk_0xA8DC0D4489FEC63C(iParam0, 3))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 29);
		}
		if (unk_0xA8DC0D4489FEC63C(iParam0, 0))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 30);
		}
		if (unk_0xA8DC0D4489FEC63C(iParam0, 1))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_191(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x8D9FD90A001D447C(iParam0, 0))
		{
			uParam1->f_68 = unk_0xDFEA91A83C472035(iParam0);
		}
		if (unk_0x57D74362A8BD1490(uParam1->f_66))
		{
			if (unk_0x411E3F93EC413BF3(iParam0))
			{
				switch (unk_0x6379DAF3AD61121F(iParam0))
				{
					case 3:
					case 0:
						unk_0xCE689A8E8C42ED78(&(uParam1->f_77), 23);
						unk_0x8950ED5730F62EE8(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xCE689A8E8C42ED78(&(uParam1->f_77), 23);
						unk_0xCE689A8E8C42ED78(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x8950ED5730F62EE8(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xEEBF939BC404D2BE(iParam0))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 9);
		}
		if (unk_0xFB89D9B67066DB2C(iParam0))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 10);
		}
		if (unk_0x17097E17C445781F(iParam0))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 13);
			unk_0xB6BB43D4EAC89240(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xDBEA4F184CA4EA54(iParam0))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 12);
		}
		func_190(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x34B1602009421B58(iParam0, iVar0 + 1))
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_77), func_189(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x7E0C34F3D4B48A15(iParam0, 0))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(uParam1->f_77), 11);
		}
		if (unk_0xA0EDFFB6CF5B314A(iParam0, "IgnoredByQuickSave") && unk_0x821D9C8EA372B2F8(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(uParam1->f_77), 27);
		}
	}
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_190(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x91D5C8283D19AF49(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xCD2E94F6C3101AFC(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x44DCCCE026DA934A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x44DCCCE026DA934A(*iParam0, iVar1))
			{
				switch (unk_0x57BBAEE53EDFE2D0(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xEECA910C75BFF02B(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x9EA1E2F3ADA356E7(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x9EA1E2F3ADA356E7(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_192(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_193(int iParam0)
{
	if ((((((((((!unk_0x765F6FEEFF39224F(iParam0) || !unk_0x91D5C8283D19AF49(iParam0, 0)) || func_208(iParam0, 0, 0)) || func_208(iParam0, 1, 0)) || func_208(iParam0, 2, 0)) || func_207(iParam0) != 145) || func_206(iParam0)) || func_205(iParam0)) || func_204(iParam0)) || func_203(iParam0)) || !func_194(unk_0x541D5C57194E73C4(iParam0)))
	{
		if (func_205(iParam0))
		{
		}
		if (func_205(iParam0))
		{
		}
		if (func_208(iParam0, 0, 0))
		{
		}
		if (func_208(iParam0, 1, 0))
		{
		}
		if (func_208(iParam0, 2, 0))
		{
		}
		if (func_207(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_194(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_195(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x444D956C7F94526E(iParam0) || unk_0x57D74362A8BD1490(iParam0)) || unk_0x097E7778E3E162E8(iParam0)) || unk_0xFFB467183FEE27C4(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_195(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xBB8F0B8D18FF4982(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0xB331FCEB94EB05C8()) || (iParam0 == joaat("buffalo3") && !unk_0xB331FCEB94EB05C8())) || (iParam0 == joaat("gauntlet2") && !unk_0xB331FCEB94EB05C8())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0xB331FCEB94EB05C8()))
	{
		if (!func_173())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x3039527F47B67213())
		{
			if (unk_0xD78C9FF329D2C218(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xC4ED190294E9E658(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_202() && !func_201()) && !func_200()) && !func_199()) && !func_173())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDB36A8F522CBC12D() || unk_0x4CE1DD5CFC1F941E()) || unk_0xF5DB888C353E2BED())
		{
		}
		else if (!func_200())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_198(iParam0))
		{
			return 0;
		}
	}
	if (!func_196(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_196(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_197())
	{
		return 1;
	}
	unk_0x84EDD6303549E375(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x97E4D6970CDE676B(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_197()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		return unk_0xFCAD2CB678396284();
	}
	return 0;
}

int func_198(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2505720)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xEF4753434B24594D();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6490 && !Global_262145.f_12801) && iVar1 < Global_262145.f_12802)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14099 && iVar1 < Global_262145.f_14111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14095 && iVar1 < Global_262145.f_14107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14096 && iVar1 < Global_262145.f_14108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14097 && iVar1 < Global_262145.f_14109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14098 && iVar1 < Global_262145.f_14110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14100 && iVar1 < Global_262145.f_14112)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14101 && iVar1 < Global_262145.f_14104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14102 && iVar1 < Global_262145.f_14105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14103 && iVar1 < Global_262145.f_14106)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16730 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16725 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16729 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16728 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16722 && iVar1 < Global_262145.f_16687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16723 && iVar1 < Global_262145.f_16688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16726 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16727 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16724 && iVar1 < Global_262145.f_16689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16732 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16733 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16721 && iVar1 < Global_262145.f_16686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16720 && iVar1 < Global_262145.f_16685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16719 && iVar1 < Global_262145.f_16684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16731 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16734 && iVar1 < Global_262145.f_16699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16735 && iVar1 < Global_262145.f_16700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16736 && iVar1 < Global_262145.f_16701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16737 && iVar1 < Global_262145.f_16702)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16882 && iVar1 < Global_262145.f_16904)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16883 && iVar1 < Global_262145.f_16905)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16884 && iVar1 < Global_262145.f_16906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16885 && iVar1 < Global_262145.f_16907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16886 && iVar1 < Global_262145.f_16908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16887 && iVar1 < Global_262145.f_16909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16889 && iVar1 < Global_262145.f_16910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16890 && iVar1 < Global_262145.f_16911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16891 && iVar1 < Global_262145.f_16912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16892 && iVar1 < Global_262145.f_16913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16893 && iVar1 < Global_262145.f_16914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16894 && iVar1 < Global_262145.f_16915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16895 && iVar1 < Global_262145.f_16916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16901 && iVar1 < Global_262145.f_16923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16898 && iVar1 < Global_262145.f_16919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16899 && iVar1 < Global_262145.f_16920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16900 && iVar1 < Global_262145.f_16921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16888 && iVar1 < Global_262145.f_16922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16902 && iVar1 < Global_262145.f_16924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16896 && iVar1 < Global_262145.f_16917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16897 && iVar1 < Global_262145.f_16918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16903 && iVar1 < Global_262145.f_16925)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18533 && iVar1 < Global_262145.f_18630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18534 && iVar1 < Global_262145.f_18631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18535 && iVar1 < Global_262145.f_18632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18536 && iVar1 < Global_262145.f_18633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18537 && iVar1 < Global_262145.f_18634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18538 && iVar1 < Global_262145.f_18635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18539 && iVar1 < Global_262145.f_18636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18540 && iVar1 < Global_262145.f_18637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18541 && iVar1 < Global_262145.f_18638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18542 && iVar1 < Global_262145.f_18639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18543 && iVar1 < Global_262145.f_18640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18544 && iVar1 < Global_262145.f_18641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18545 && iVar1 < Global_262145.f_18642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18546 && iVar1 < Global_262145.f_18643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18547 && iVar1 < Global_262145.f_18644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18548 && iVar1 < Global_262145.f_18645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18549 && iVar1 < Global_262145.f_18646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18550 && iVar1 < Global_262145.f_18647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18551 && iVar1 < Global_262145.f_18648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18552 && iVar1 < Global_262145.f_18649)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18553 && iVar1 < Global_262145.f_18650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18554 && iVar1 < Global_262145.f_18651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18555 && iVar1 < Global_262145.f_18652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18556 && iVar1 < Global_262145.f_18653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18557 && iVar1 < Global_262145.f_18654)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19614 && iVar1 < Global_262145.f_19610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19615 && iVar1 < Global_262145.f_19611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19616 && iVar1 < Global_262145.f_19612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19617 && iVar1 < Global_262145.f_19613)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20493 && iVar1 < Global_262145.f_20501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20494 && iVar1 < Global_262145.f_20502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20495 && iVar1 < Global_262145.f_20503)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20496 && iVar1 < Global_262145.f_20504)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20497 && iVar1 < Global_262145.f_20505)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20498 && iVar1 < Global_262145.f_20506)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21270 && iVar1 < Global_262145.f_21290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21282 && iVar1 < Global_262145.f_21302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21273 && iVar1 < Global_262145.f_21293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21283 && iVar1 < Global_262145.f_21303)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21271 && iVar1 < Global_262145.f_21291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21287 && iVar1 < Global_262145.f_21307)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21285 && iVar1 < Global_262145.f_21305)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21286 && iVar1 < Global_262145.f_21306)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21281 && iVar1 < Global_262145.f_21301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21288 && iVar1 < Global_262145.f_21308)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21284 && iVar1 < Global_262145.f_21304)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21280 && iVar1 < Global_262145.f_21300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21272 && iVar1 < Global_262145.f_21292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21274 && iVar1 < Global_262145.f_21294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21275 && iVar1 < Global_262145.f_21295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21276 && iVar1 < Global_262145.f_21296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21277 && iVar1 < Global_262145.f_21297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21278 && iVar1 < Global_262145.f_21298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21279 && iVar1 < Global_262145.f_21299)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22231 && iVar1 < Global_262145.f_22259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22232 && iVar1 < Global_262145.f_22260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22233 && iVar1 < Global_262145.f_22261)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22234 && iVar1 < Global_262145.f_22262)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22235 && iVar1 < Global_262145.f_22263)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22236 && iVar1 < Global_262145.f_22264)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22237 && iVar1 < Global_262145.f_22265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22238 && iVar1 < Global_262145.f_22266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22239 && iVar1 < Global_262145.f_22267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22240 && iVar1 < Global_262145.f_22268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22241 && iVar1 < Global_262145.f_22269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22242 && iVar1 < Global_262145.f_22270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22243 && iVar1 < Global_262145.f_22271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22244 && iVar1 < Global_262145.f_22272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22245 && iVar1 < Global_262145.f_22273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22246 && iVar1 < Global_262145.f_22274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22247 && iVar1 < Global_262145.f_22275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22248 && iVar1 < Global_262145.f_22276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22249 && iVar1 < Global_262145.f_22277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22250 && iVar1 < Global_262145.f_22278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22251 && iVar1 < Global_262145.f_22279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22252 && iVar1 < Global_262145.f_22280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22253 && iVar1 < Global_262145.f_22281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22254 && iVar1 < Global_262145.f_22282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22255 && iVar1 < Global_262145.f_22283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22256 && iVar1 < Global_262145.f_22284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22257 && iVar1 < Global_262145.f_22285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22258 && iVar1 < Global_262145.f_22286)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23439 && iVar1 < Global_262145.f_23455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23440 && iVar1 < Global_262145.f_23456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23444 && iVar1 < Global_262145.f_23460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23447 && iVar1 < Global_262145.f_23463)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23452 && iVar1 < Global_262145.f_23468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23446 && iVar1 < Global_262145.f_23462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23438 && iVar1 < Global_262145.f_23454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23445 && iVar1 < Global_262145.f_23461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23451 && iVar1 < Global_262145.f_23467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23450 && iVar1 < Global_262145.f_23466)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23441 && iVar1 < Global_262145.f_23457)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23443 && iVar1 < Global_262145.f_23459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23453 && iVar1 < Global_262145.f_23469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23449 && iVar1 < Global_262145.f_23465)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23442 && iVar1 < Global_262145.f_23458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23448 && iVar1 < Global_262145.f_23464)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23529 && iVar1 < Global_262145.f_23516)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23530 && iVar1 < Global_262145.f_23517)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23535 && iVar1 < Global_262145.f_23522)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23534 && iVar1 < Global_262145.f_23521)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23532 && iVar1 < Global_262145.f_23519)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23538 && iVar1 < Global_262145.f_23525)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23540 && iVar1 < Global_262145.f_23527)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23541 && iVar1 < Global_262145.f_23528)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23539 && iVar1 < Global_262145.f_23526)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23531 && iVar1 < Global_262145.f_23518)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23533 && iVar1 < Global_262145.f_23520)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23537 && iVar1 < Global_262145.f_23524)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23536 && iVar1 < Global_262145.f_23523)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25739 && iVar1 < Global_262145.f_25741)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24753 && iVar1 < Global_262145.f_24746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24754 && iVar1 < Global_262145.f_24747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24755 && iVar1 < Global_262145.f_24748)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24756 && iVar1 < Global_262145.f_24749)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25740 && iVar1 < Global_262145.f_25742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24757 && iVar1 < Global_262145.f_24750)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24758 && iVar1 < Global_262145.f_24751)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24759 && iVar1 < Global_262145.f_24752)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_24763 && iVar1 < Global_262145.f_24784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_24764 && iVar1 < Global_262145.f_24785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -941272559)
	{
		if (!Global_262145.f_24765 && iVar1 < Global_262145.f_24786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_24766 && iVar1 < Global_262145.f_24787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_24767 && iVar1 < Global_262145.f_24788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_24768 && iVar1 < Global_262145.f_24789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_24769 && iVar1 < Global_262145.f_24790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_24770 && iVar1 < Global_262145.f_24791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_24771 && iVar1 < Global_262145.f_24792)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_24772 && iVar1 < Global_262145.f_24793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_24773 && iVar1 < Global_262145.f_24794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_24774 && iVar1 < Global_262145.f_24795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_24775 && iVar1 < Global_262145.f_24796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_24776 && iVar1 < Global_262145.f_24797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_24777 && iVar1 < Global_262145.f_24798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_24778 && iVar1 < Global_262145.f_24799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_24779 && iVar1 < Global_262145.f_24800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_24780 && iVar1 < Global_262145.f_24801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_24781 && iVar1 < Global_262145.f_24802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_24782 && iVar1 < Global_262145.f_24803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_24783 && iVar1 < Global_262145.f_24804)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_199()
{
	return 0;
}

int func_200()
{
	return 1;
}

int func_201()
{
	return 1;
}

int func_202()
{
	if (unk_0xE9D7B652961D4AA3(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x541D5C57194E73C4(iParam0);
	sVar1 = unk_0x00D614EBCFFD919D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xCE3CFF625BEBAA04(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_195(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x765F6FEEFF39224F(Global_91073[iVar0]))
		{
			if (Global_91073[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_205(int iParam0)
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(iParam0) && unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x765F6FEEFF39224F(Global_91043[iVar0]) && unk_0x91D5C8283D19AF49(Global_91043[iVar0], 0))
			{
				if (Global_91043[iVar0] == iParam0 && unk_0x541D5C57194E73C4(Global_91043[iVar0]) == unk_0x541D5C57194E73C4(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_206(int iParam0)
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(Global_70409.f_484[24]))
	{
		if (iParam0 == Global_70409.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x765F6FEEFF39224F(Global_70409.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_70409.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_207(int iParam0)
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 145;
	}
	if (!unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x765F6FEEFF39224F(Global_91043[iVar0]))
		{
			if (Global_91043[iVar0] == iParam0)
			{
				return Global_91053[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_208(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x765F6FEEFF39224F(iParam0) || !unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_209(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0x0E4018692D92041D(Global_106565.f_7223[iVar2], 0))
		{
			if (unk_0xE9B30318257F029D(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_209(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_210()
{
	Global_14732 = 0;
	func_211();
}

void func_211()
{
	if (unk_0x12BF789190D82474())
	{
		unk_0x3F4DBD0F910C454B();
		Global_16877 = 0;
		unk_0xD92171BC6C48DB90(true);
		Global_15866 = 6;
		return;
	}
}

