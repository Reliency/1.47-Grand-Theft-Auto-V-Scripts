#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
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
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	vector3 vLocal_47 = { 0f, 0f, 0f };
	vector3 vLocal_48[9] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_49[9] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_50 = { 0f, 0f, 0f };
	vector3 vLocal_51 = { 0f, 0f, 0f };
	vector3 vLocal_52 = { 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	vector3 vLocal_55 = { 0f, 0f, 0f };
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	float fLocal_60 = 0f;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	var uLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_82[2] = { 0, 0 };
	int iLocal_83[4] = { 0, 0, 0, 0 };
	int iLocal_84[4] = { 0, 0, 0, 0 };
	int iLocal_85[5] = { 0, 0, 0, 0, 0 };
	int iLocal_86[4] = { 0, 0, 0, 0 };
	int iLocal_87[4] = { 0, 0, 0, 0 };
	int iLocal_88[4] = { 0, 0, 0, 0 };
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_93[4] = { 0, 0, 0, 0 };
	int iLocal_94[4] = { 0, 0, 0, 0 };
	var uLocal_95[4] = { 0, 0, 0, 0 };
	var uLocal_96[4] = { 0, 0, 0, 0 };
	int iLocal_97 = 0;
	int iLocal_98[5] = { 0, 0, 0, 0, 0 };
	int iLocal_99[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_100 = { 0f, 0f, 0f };
	vector3 vLocal_101 = { 0f, 0f, 0f };
	vector3 vLocal_102 = { 0f, 0f, 0f };
	vector3 vLocal_103 = { 0f, 0f, 0f };
	vector3 vLocal_104[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 16;
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
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	vector3 vLocal_279 = { 0f, 0f, 0f };
	vector3 vLocal_280[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_281 = { 0f, 0f, 0f };
	int iLocal_282 = 0;
	bool bLocal_283 = 0;
	struct<2> Local_284 = { 0, 5 } ;
	var uLocal_285 = 0;
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
	var uLocal_300 = 5;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
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
	vLocal_100 = { -1635.648f, 4737.801f, 52.4304f };
	vLocal_101 = { -1640.745f, 4696.386f, 39.279f };
	vLocal_47 = { ScriptParam_284.f_1[0 /*3*/] };
	if (unk_0x9EC5BDC006623C42(11))
	{
		func_173();
	}
	if (func_131(vLocal_47, -1, 0, 0, 0))
	{
		func_128(-1);
	}
	else
	{
		unk_0x5894DC159447E10A();
	}
	while (true)
	{
		wait(0);
		if ((unk_0xA80721FDC3BDCCDB() || unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), -1503.54f, 4934.923f, 114.2284f, 100f, 100f, 100f, false, true, 0)) || iLocal_45 == 2)
		{
			if (!func_127())
			{
				if (func_126())
				{
					func_173();
				}
			}
			unk_0x65F534DDBF48606F("RE_DGW", 0);
			switch (iLocal_45)
			{
				case 0:
					if (iLocal_282)
					{
						iLocal_45 = 1;
					}
					else
					{
						if (func_114())
						{
							func_173();
						}
						func_111();
					}
					break;
				
				case 1:
					func_110();
					func_99();
					break;
				
				case 2:
					switch (iLocal_44)
					{
						case 0:
							func_110();
							iLocal_44 = 1;
							break;
						
						case 1:
							func_110();
							func_79();
							if (iLocal_46 >= 6)
							{
								if (!func_78())
								{
									iVar0 = 0;
									while (iVar0 < 4)
									{
										if (bLocal_110)
										{
											func_77(&(iLocal_83[iVar0]), &(iLocal_93[iVar0]), &(iLocal_88[iVar0]), &(uLocal_95[iVar0]));
											func_72(iLocal_88[0], unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 0f, 0f, 1000, 0f);
											func_72(iLocal_88[1], unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 2f, 0f, 1000, 0f);
											func_67(&(iLocal_83[iVar0]), &(iLocal_93[iVar0]), &(iLocal_88[iVar0]), &(uLocal_95[iVar0]));
										}
										else if (bLocal_107)
										{
											func_77(&(iLocal_83[iVar0]), &(iLocal_93[iVar0]), &(iLocal_86[iVar0]), &(uLocal_95[iVar0]));
											func_72(iLocal_86[0], unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 0f, 0f, 1000, 0f);
											func_72(iLocal_86[1], unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 5f, 0f, 1000, 0f);
											func_67(&(iLocal_83[iVar0]), &(iLocal_93[iVar0]), &(iLocal_86[iVar0]), &(uLocal_95[iVar0]));
										}
										else if (bLocal_108)
										{
											func_77(&(iLocal_84[iVar0]), &(iLocal_94[iVar0]), &(iLocal_87[iVar0]), &(uLocal_96[iVar0]));
											func_72(iLocal_87[0], unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 0f, 0f, 1000, 0f);
											func_72(iLocal_87[1], unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 5f, 0f, 1000, 0f);
											func_67(&(iLocal_84[iVar0]), &(iLocal_94[iVar0]), &(iLocal_87[iVar0]), &(uLocal_96[iVar0]));
										}
										iVar0++;
									}
								}
								else
								{
									func_44();
								}
							}
							if (((unk_0xA1248DEAD0B27B8E(unk_0x33CD235DF1E6A94E()) || unk_0xB4185A89B91B3C53(unk_0x33CD235DF1E6A94E())) && !unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_100, 100f, 100f, 100f, false, true, 0)) && iLocal_46 < 2)
							{
								func_44();
							}
							break;
					}
					break;
				
				case 3:
					func_1();
					break;
			}
		}
		else
		{
			func_173();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_282 && !iLocal_105)
	{
		unk_0x0ADAD7B4709951D1();
		unk_0x4B06B5746CBEC99F(1f);
		if (unk_0xE38E3CF1625A4145(iLocal_89))
		{
			unk_0x1ABDB383C83A336A(&iLocal_89);
		}
		if (unk_0xE38E3CF1625A4145(iLocal_90))
		{
			unk_0x1ABDB383C83A336A(&iLocal_90);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xE38E3CF1625A4145(iLocal_93[iVar0]))
			{
				unk_0x1ABDB383C83A336A(&(iLocal_93[iVar0]));
			}
			if (unk_0xE38E3CF1625A4145(uLocal_95[iVar0]))
			{
				unk_0x1ABDB383C83A336A(&(uLocal_95[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_83[iVar0]))
					{
						if (unk_0x335C0645074963FE(iLocal_83[iVar0], unk_0x33CD235DF1E6A94E(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xE38E3CF1625A4145(iLocal_94[iVar0]))
			{
				unk_0x1ABDB383C83A336A(&(iLocal_94[iVar0]));
			}
			if (unk_0xE38E3CF1625A4145(uLocal_96[iVar0]))
			{
				unk_0x1ABDB383C83A336A(&(uLocal_96[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_84[iVar0]))
					{
						if (unk_0x335C0645074963FE(iLocal_84[iVar0], unk_0x33CD235DF1E6A94E(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_44 >= 1)
		{
			unk_0xA53C1C92EE35EC0E(5, true);
			unk_0xA53C1C92EE35EC0E(3, true);
		}
		if (bLocal_109)
		{
			func_3(func_39(), 1, 25000);
		}
		iLocal_105 = 1;
	}
	if (!unk_0x73E7A21FD53144AB(vLocal_100, 30f) && vdist(func_2(unk_0x95B959F18401C09A()), vLocal_100) > 300f)
	{
		func_173();
	}
}

Vector3 func_2(int iParam0)
{
	return unk_0xFBB1F99A825CAB09(unk_0x378BD4B3881338C2(iParam0), false);
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_4(Global_106565.f_28044[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_38();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_37(99, 1);
					func_36(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_36(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_36(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_20(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_15(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_36(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_36(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_36(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_15(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_36(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_36(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_36(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_36(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_36(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_36(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_36(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_36(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_36(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x535C9C52117DA0AD())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_36(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_36(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_36(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_36(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_36(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_36(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_15(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_36(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_36(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_36(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_36(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_36(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_36(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_14(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_37(95, iParam3);
					break;
				
				case 1:
					func_37(97, iParam3);
					break;
				
				case 2:
					func_37(96, iParam3);
					break;
			}
			func_37(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(iVar1);
	}
	iVar5 = (Global_53668[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53668[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53668[iVar2] = 2147483647;
				}
				else
				{
					Global_53668[iVar2] = (Global_53668[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_36(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_36(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_36(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53668[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53668[iVar2];
			Global_53668[iVar2] = (Global_53668[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_106565.f_20558.f_233[iVar2 /*69*/]++;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_1++;
		if (Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_6(iParam0);
	if (Global_36425 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53676[iVar0 /*3*/][0] = Global_106565.f_20558[iVar0];
		Global_53676.f_31[iVar0 /*3*/][0] = Global_106565.f_20558.f_11[iVar0];
		Global_53676.f_62[iVar0 /*3*/][0] = Global_106565.f_20558.f_22[iVar0];
		Global_53676.f_93[iVar0 /*3*/][0] = Global_106565.f_20558.f_33[iVar0];
		Global_53676.f_124[iVar0 /*3*/][0] = Global_106565.f_20558.f_44[iVar0];
		Global_53676.f_155[iVar0 /*3*/][0] = Global_106565.f_20558.f_55[iVar0];
		Global_53676.f_186[iVar0 /*3*/][0] = Global_106565.f_20558.f_66[iVar0];
		Global_53676.f_217[iVar0 /*3*/][0] = Global_106565.f_20558.f_77[iVar0];
		Global_53676.f_248[iVar0 /*3*/][0] = Global_106565.f_20558.f_88[iVar0];
		if (!bParam0)
		{
			Global_53676[iVar0 /*3*/][1] = Global_106565.f_20558[iVar0];
			Global_53676.f_31[iVar0 /*3*/][1] = Global_106565.f_20558.f_11[iVar0];
			Global_53676.f_62[iVar0 /*3*/][1] = Global_106565.f_20558.f_22[iVar0];
			Global_53676.f_93[iVar0 /*3*/][1] = Global_106565.f_20558.f_33[iVar0];
			Global_53676.f_124[iVar0 /*3*/][1] = Global_106565.f_20558.f_44[iVar0];
			Global_53676.f_155[iVar0 /*3*/][1] = Global_106565.f_20558.f_55[iVar0];
			Global_53676.f_186[iVar0 /*3*/][1] = Global_106565.f_20558.f_66[iVar0];
			Global_53676.f_217[iVar0 /*3*/][1] = Global_106565.f_20558.f_77[iVar0];
			Global_53676.f_248[iVar0 /*3*/][1] = Global_106565.f_20558.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53668[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x12B6E23F244DDB0F(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x12B6E23F244DDB0F(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x12B6E23F244DDB0F(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_7(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_13(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_13(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_13(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_13(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_10(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_10(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_10(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_10(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_10(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_10(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0xB331FCEB94EB05C8())
	{
		if (unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_20558.f_471), iParam0);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0) || unk_0x0E4018692D92041D(Global_2097152[func_9() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_20558.f_471), iParam0);
		unk_0xCE689A8E8C42ED78(&(Global_2097152[func_9() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1F85AD4B26B92795("COUP_RED");
		unk_0xFA6BEE2B1507FF1E(func_8(iParam0));
		unk_0xDE1BA36E3BACF7C1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_9()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_11(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_11(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1312745;
}

int func_13(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_12();
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

void func_14(int iParam0)
{
	func_37(93, iParam0);
	func_37(29, iParam0);
	func_37(30, iParam0);
}

bool func_15(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_17(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_17(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_17(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_17(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xEF4753434B24594D();
		iVar1 = func_16(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xEF4753434B24594D();
		iVar3 = func_16(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xEF4753434B24594D();
		iVar5 = func_16(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xEF4753434B24594D();
		iVar7 = func_16(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xEF4753434B24594D();
		iVar9 = func_16(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xEF4753434B24594D();
		iVar11 = func_16(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0xB331FCEB94EB05C8())
	{
		return unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0);
	}
	return unk_0x0E4018692D92041D(Global_2097152[func_9() /*10778*/].f_6165.f_10, iParam0);
}

int func_16(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_11(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_12();
	}
	iVar1 = func_19(iParam0, iParam1);
	uVar2 = func_18(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE35D1055B69473FB(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x7FB03A24AC826003((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x7FB03A24AC826003((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x7FB03A24AC826003((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x7FB03A24AC826003((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x7FB03A24AC826003((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x7FB03A24AC826003((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x7FB03A24AC826003((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x7FB03A24AC826003((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x7FB03A24AC826003((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x7FB03A24AC826003((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x7FB03A24AC826003((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x7FB03A24AC826003((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x7FB03A24AC826003((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x7FB03A24AC826003((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x7FB03A24AC826003((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x7FB03A24AC826003((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x7FB03A24AC826003((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x7FB03A24AC826003((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x7FB03A24AC826003((iParam0 - 26810)) * 64);
	}
	return iVar0;
}

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_12();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xD9ABF415C92ECCBC((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xD9ABF415C92ECCBC((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	return iVar0;
}

int func_20(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x321808B6A32CCA20(27))
	{
		return 0;
	}
	if (unk_0x75D54ED6C1AD1642(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x75D54ED6C1AD1642(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x75D54ED6C1AD1642(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x75D54ED6C1AD1642(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x12B6E23F244DDB0F(joaat("num_cash_spent"), iVar1, 1);
		func_35(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_21(27, 1);
	return 1;
}

int func_21(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_22(iParam0, iParam1);
}

int func_22(int iParam0, int iParam1)
{
	if (func_34(14) && !func_33(iParam0))
	{
		return 0;
	}
	if (unk_0x321808B6A32CCA20(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_26012 != 0 && !Global_71590)
	{
		return 0;
	}
	if (func_32(&Global_4269608))
	{
		if (func_30(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_23(&Global_4269608, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xBECC4FBAC9C8E5E7(iParam0))
		{
			return 0;
		}
		if (unk_0x321808B6A32CCA20(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_23(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_34(14) && !func_33(iParam1))
	{
		return 0;
	}
	if (func_30(uParam0, iParam1))
	{
		return 0;
	}
	if (func_29(uParam0) < 0f)
	{
		func_28(uParam0, 0);
	}
	func_26(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_24(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_24(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_34(14) && !func_33(iParam1))
	{
		return 0;
	}
	if (func_30(uParam0, iParam1))
	{
		return 0;
	}
	if (func_29(uParam0) < 0f)
	{
		func_28(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_25(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_25(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_26(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_27(uParam0, iVar0);
		iVar0++;
	}
	func_28(uParam0, (Global_4269607 - 0.5f));
}

void func_27(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_28(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_29(var uParam0)
{
	return uParam0->f_80;
}

bool func_30(var uParam0, int iParam1)
{
	return func_31(uParam0, iParam1) != -1;
}

int func_31(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_32(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_34(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_35(int iParam0, int iParam1)
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

void func_36(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x75D54ED6C1AD1642(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x12B6E23F244DDB0F(iParam0, iVar0, 1);
}

void func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/])
	{
		unk_0x75D54ED6C1AD1642(Global_52236[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x12B6E23F244DDB0F(Global_52236[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_38()
{
	int iVar0;
	
	if (unk_0x40863EBAEA2F03D7())
	{
		unk_0x75D54ED6C1AD1642(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53668[0] == iVar0)
		{
			Global_53668[0] = iVar0;
		}
		unk_0x75D54ED6C1AD1642(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53668[1] == iVar0)
		{
			Global_53668[1] = iVar0;
		}
		unk_0x75D54ED6C1AD1642(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53668[2] == iVar0)
		{
			Global_53668[2] = iVar0;
		}
	}
}

int func_39()
{
	func_40();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_40()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_43(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_42(unk_0x33CD235DF1E6A94E());
			if (func_41(iVar0) && (!func_34(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_41(Global_106565.f_2357.f_539.f_4321))
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

bool func_41(int iParam0)
{
	return iParam0 < 3;
}

int func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_43(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_43(int iParam0)
{
	if (func_41(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_44()
{
	while (func_66())
	{
		wait(0);
	}
	while (!func_65())
	{
		wait(0);
	}
	func_48(-1, 0);
	func_45();
	iLocal_45 = 3;
}

void func_45()
{
	func_46();
}

int func_46()
{
	if (func_47(0))
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

bool func_47(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

void func_48(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_63();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_62(iParam0))
	{
		func_61(iParam0, iParam1);
		if (!func_60(51))
		{
			func_56("RE_REWARD", 1, 0, 4000, 10000, func_59(), 0, 138, 0);
			func_55(51);
		}
		if (func_54(iParam0))
		{
			Global_106565.f_24989.f_2 = 3;
		}
		if (func_53(iParam0, iParam1) != 322)
		{
			func_50(func_53(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_106553 = iParam1;
		if (Global_106551 == 0)
		{
			if (((Global_106554 == 1 || Global_106554 == 5) || Global_106554 == 11) || Global_106554 == 25)
			{
				func_49(2);
			}
			else if ((Global_106554 == 26 || Global_106554 == 8) || Global_106554 == 17)
			{
				func_49(7);
			}
			else
			{
				func_49(1);
			}
		}
	}
}

void func_49(int iParam0)
{
	Global_106551 = iParam0;
}

void func_50(int iParam0, var uParam1, var uParam2)
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
		func_13((891 + iParam0), 1, -1, 1);
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
		func_51();
	}
}

void func_51()
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
		func_35(13, floor(Global_106565.f_10188.f_3853));
	}
	if (!unk_0xDC17890B0B8B5081())
	{
		if (!Global_71590)
		{
			if (func_52() == 2 == 0 && !unk_0xB331FCEB94EB05C8())
			{
				if (unk_0xB16BC34F6CB4A57A())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_46();
				}
			}
		}
	}
}

int func_52()
{
	return Global_25765;
}

int func_53(int iParam0, int iParam1)
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

int func_54(int iParam0)
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

void func_55(int iParam0)
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

void func_56(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_57(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_57(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_58();
	}
}

void func_58()
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

int func_59()
{
	func_40();
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

int func_60(int iParam0)
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

void func_61(int iParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(&(Global_106565.f_24989.f_8[iParam0]), iParam1);
}

int func_62(int iParam0)
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

int func_63()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xD178EF744F20B712(), 64);
	uVar1 = func_64(Var0);
	return uVar1;
}

int func_64(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_65()
{
	return 1;
}

int func_66()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

void func_67(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (unk_0x765F6FEEFF39224F(*uParam2))
	{
		if (unk_0x91D5C8283D19AF49(*uParam2, 0))
		{
			if (!unk_0xBC2FC12AD0FBF72E(*uParam0))
			{
				if (unk_0x10930B9CAD4111C2(*uParam0, *uParam2, 0))
				{
					if (unk_0xE38E3CF1625A4145(*iParam1))
					{
						unk_0x1ABDB383C83A336A(iParam1);
					}
					iVar0 = 1;
				}
				else if (!unk_0xE38E3CF1625A4145(*iParam1))
				{
					*iParam1 = func_70(*uParam0, 1, 145);
				}
			}
			if (!unk_0xE38E3CF1625A4145(*iParam3))
			{
				if (iVar0 == 1)
				{
					*iParam3 = func_68(unk_0xFBB1F99A825CAB09(*uParam2, true), 0);
					unk_0xB9E84A421C105943(*iParam3, 1);
					unk_0xC51C58C963968740(*iParam3, 9);
					unk_0x1C95CD840303FC37(*iParam3, "BLIP_VEH");
				}
			}
			else
			{
				vVar1 = { unk_0x7BC3899BF7085A7D(*iParam3) };
				vVar2 = { unk_0xFBB1F99A825CAB09(*uParam2, true) };
				vVar1.x = (vVar1.x + (((vVar2.x - vVar1.x) / 1f) * timestep()));
				vVar1.y = (vVar1.y + (((vVar2.y - vVar1.y) / 1f) * timestep()));
				vVar1.z = (vVar1.z + (((vVar2.z - vVar1.z) / 1f) * timestep()));
				unk_0xA0220BF0AB292278(*iParam3, vVar1);
				if (iVar0 == 0)
				{
					unk_0x1ABDB383C83A336A(iParam3);
				}
			}
		}
		else
		{
			if (unk_0xE38E3CF1625A4145(*iParam3))
			{
				unk_0x1ABDB383C83A336A(iParam3);
			}
			if (!unk_0xBC2FC12AD0FBF72E(*uParam0))
			{
				if (!unk_0xE38E3CF1625A4145(*iParam1))
				{
					*iParam1 = func_70(*uParam0, 1, 145);
				}
			}
		}
	}
}

int func_68(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x2C0ED4741A007C6A(vParam0);
	unk_0xCE5C49921A521962(iVar0, func_69(unk_0xB331FCEB94EB05C8(), 1f, 1f));
	unk_0x1C316779E36C1967(iVar0, bParam1);
	return iVar0;
}

float func_69(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_70(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_71(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE38E3CF1625A4145(iVar0)) && unk_0xEAF855A7DC28BC8D(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		unk_0x1C95CD840303FC37(iVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_71(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x8848A15CBDADDC60(iParam0);
	if (unk_0x680558231C80291D(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_69(unk_0xB331FCEB94EB05C8(), 1f, 1f));
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
		unk_0xCE5C49921A521962(iVar0, func_69(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
		unk_0xBF11C8A43770C598(iVar0, bParam1);
	}
	else if (unk_0xA3A29DB165882310(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_69(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_72(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, var uParam6, vector3 vParam7, int iParam8, float fParam9)
{
	vector3 vVar0;
	
	if (unk_0x765F6FEEFF39224F(iParam0) && unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		if (((((((unk_0x765F6FEEFF39224F(iParam1) && iParam0 != iParam1) && !unk_0x444D956C7F94526E(unk_0x541D5C57194E73C4(iParam1))) && !unk_0x57D74362A8BD1490(unk_0x541D5C57194E73C4(iParam1))) && !unk_0x097E7778E3E162E8(unk_0x541D5C57194E73C4(iParam1))) && !unk_0xFFB467183FEE27C4(unk_0x541D5C57194E73C4(iParam1))) && unk_0x156573D1AADB54ED(iParam1)) && func_76(iParam0))
		{
			if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iParam1, true), *uParam4, true) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *fParam5;
				*uParam2 = { unk_0xCD1EDCB38767B47C(*uParam2, *uParam3, vParam7) };
				func_75(iParam1, uParam4, fParam5);
			}
			if (!unk_0xC30D5C4DCAC8020A(iParam0))
			{
				*uParam6 = unk_0xE3903F59E2F22150();
			}
			else if ((unk_0xE3903F59E2F22150() - *uParam6) > iParam8)
			{
				if (func_74(iParam0, iParam1, 1) > fParam9 && unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iParam1, true), *uParam2, true) > 20f)
				{
					if (!func_73(*uParam2))
					{
						if (!unk_0x73E7A21FD53144AB(*uParam2, 3f))
						{
							unk_0x9C47E5CDFB45F474(*uParam2, 1.5f, 0);
							unk_0xB7350047030F7672(*uParam2, 3f, 0, 0, 0, 0, false, 0);
							unk_0xBEADAF07D2339505(iParam0, *uParam2, 1, false, 0, 1);
							unk_0x3C990C409B3845DE(iParam0, *uParam3);
							unk_0x1B2303F9DC2D90D5(iParam0, 1084227584);
							unk_0x4522AD7364B6AA54(iParam0, 10f);
							unk_0x9FABD0AB045A5D6E(iParam0, true, true, 0);
							*uParam6 = unk_0xE3903F59E2F22150();
						}
						else
						{
							vVar0 = { unk_0xCD1EDCB38767B47C(vLocal_61, fLocal_60, vParam7) };
							if (!func_73(vVar0))
							{
								if (!unk_0x73E7A21FD53144AB(vVar0, 2f))
								{
									unk_0x9C47E5CDFB45F474(vVar0, 1.5f, 0);
									unk_0xB7350047030F7672(vVar0, 3f, 0, 0, 0, 0, false, 0);
									unk_0xBEADAF07D2339505(iParam0, vVar0, 1, false, 0, 1);
									unk_0x3C990C409B3845DE(iParam0, fLocal_60);
									unk_0x1B2303F9DC2D90D5(iParam0, 1084227584);
									unk_0x4522AD7364B6AA54(iParam0, 10f);
									unk_0x9FABD0AB045A5D6E(iParam0, true, true, 0);
									*uParam6 = unk_0xE3903F59E2F22150();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0xE3903F59E2F22150();
		}
	}
}

int func_73(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_74(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, false) };
	}
	if (!unk_0xD62C4419A41F106A(iParam1, 0))
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(iParam1, false) };
	}
	return unk_0x16E00F066AFFEA0D(vVar0, vVar1, bParam2);
}

void func_75(int iParam0, var uParam1, var uParam2)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0))
		{
			*uParam1 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
			*uParam2 = unk_0xC472E34C8FBEC678(iParam0);
		}
	}
}

int func_76(int iParam0)
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0))
		{
			if (!unk_0x67FFBB75D2430704(iParam0, -1, 0))
			{
				iVar0 = unk_0x7BDC41A7CA0C77A2(iParam0, -1, 0);
				if (unk_0x765F6FEEFF39224F(iVar0))
				{
					if (!unk_0xD62C4419A41F106A(iVar0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		if (unk_0xBC2FC12AD0FBF72E(*iParam0))
		{
			if (unk_0xE38E3CF1625A4145(*iParam1))
			{
				unk_0x1ABDB383C83A336A(iParam1);
			}
			unk_0x1F45B4626AC4A4C0(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!unk_0xF0D230FB550CD6EB(*iParam0, 0))
			{
			}
			else if (unk_0x765F6FEEFF39224F(*iParam2))
			{
				if (unk_0x91D5C8283D19AF49(*iParam2, 0))
				{
					if (unk_0x10930B9CAD4111C2(*iParam0, *iParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (unk_0x765F6FEEFF39224F(*iParam2))
	{
		if (unk_0x91D5C8283D19AF49(*iParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				unk_0x6FF8EF6DC21D25B9(*iParam2);
				unk_0x251D428435E55081(*iParam2);
				unk_0xA6E32819044BBB6A(*iParam2, 0);
				unk_0x65F544B458249682(iParam2);
				if (unk_0xE38E3CF1625A4145(*iParam3))
				{
					unk_0x1ABDB383C83A336A(iParam3);
				}
			}
		}
		else
		{
			unk_0x6FF8EF6DC21D25B9(*iParam2);
			unk_0x251D428435E55081(*iParam2);
			unk_0xA6E32819044BBB6A(*iParam2, 0);
			unk_0x65F544B458249682(iParam2);
			if (unk_0xE38E3CF1625A4145(*iParam3))
			{
				unk_0x1ABDB383C83A336A(iParam3);
			}
		}
	}
}

int func_78()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (!bLocal_283)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_83[iVar1]))
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_83[iVar1]))
			{
				if (unk_0x335C0645074963FE(iLocal_83[iVar1], unk_0x33CD235DF1E6A94E(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_84[iVar1]))
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_84[iVar1]))
			{
				if (unk_0x335C0645074963FE(iLocal_84[iVar1], unk_0x33CD235DF1E6A94E(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_79()
{
	int iVar0;
	
	if (bLocal_283)
	{
		if (bLocal_110)
		{
		}
		else if (bLocal_107)
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_83[0]) && !unk_0xD62C4419A41F106A(iLocal_86[0], 0))
			{
			}
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_83[1]) && !unk_0xD62C4419A41F106A(iLocal_86[1], 0))
			{
			}
		}
		else
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_84[0]) && !unk_0xD62C4419A41F106A(iLocal_87[0], 0))
			{
			}
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_84[1]) && !unk_0xD62C4419A41F106A(iLocal_87[1], 0))
			{
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0x9DE409EE898C6E2D(iLocal_99[iVar0]);
			if (unk_0xBC2FC12AD0FBF72E(iLocal_83[iVar0]))
			{
				if (unk_0xE38E3CF1625A4145(iLocal_93[iVar0]))
				{
					unk_0x1ABDB383C83A336A(&(iLocal_93[iVar0]));
					iLocal_68++;
				}
			}
			else if (!unk_0xF0D230FB550CD6EB(iLocal_83[iVar0], 0))
			{
				if (!unk_0xE38E3CF1625A4145(iLocal_93[iVar0]))
				{
					iLocal_93[iVar0] = func_70(iLocal_83[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0x9DE409EE898C6E2D(iLocal_99[iVar0]);
			if (unk_0xBC2FC12AD0FBF72E(iLocal_84[iVar0]))
			{
				if (unk_0xE38E3CF1625A4145(iLocal_94[iVar0]))
				{
					unk_0x1ABDB383C83A336A(&(iLocal_94[iVar0]));
					iLocal_69++;
				}
			}
			else if (!unk_0xF0D230FB550CD6EB(iLocal_84[iVar0], 0))
			{
				if (!unk_0xE38E3CF1625A4145(iLocal_94[iVar0]))
				{
					iLocal_94[iVar0] = func_70(iLocal_84[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		if (iLocal_68 >= 4 && iLocal_69 >= 4)
		{
			func_44();
		}
	}
	func_95();
	func_94();
	switch (iLocal_46)
	{
		case 0:
			if (((unk_0x1F79122B6B36420C(unk_0x95B959F18401C09A()) || !unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_100 + Vector(0f, 20f, 0f), 170f, 270f, 50f, false, true, 0)) || unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, false, true, 0)) || unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, false, true, 0))
			{
				if (!bLocal_110)
				{
					if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, false, true, 0) || unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, false, true, 0))
					{
						bLocal_110 = true;
					}
				}
				if (unk_0x8E241517F0F541CC(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), &vLocal_102, 1, 1077936128, 0))
				{
					if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_102, 20f, 20f, 20f, false, true, 0))
					{
						unk_0xA53C1C92EE35EC0E(5, true);
						unk_0xA53C1C92EE35EC0E(3, true);
						settimera(0);
						func_92();
						iLocal_46 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (timera() > 5000 || bLocal_110)
			{
				settimera(0);
				iLocal_46 = 2;
			}
			break;
		
		case 2:
			if (bLocal_110)
			{
				if (timera() > 3500)
				{
					if (((!unk_0xD62C4419A41F106A(iLocal_88[0], 0) && !unk_0xD62C4419A41F106A(iLocal_88[1], 0)) && !unk_0xBC2FC12AD0FBF72E(iLocal_83[0])) && !unk_0xBC2FC12AD0FBF72E(iLocal_83[1]))
					{
						unk_0x094626C0798AE1F8(iLocal_83[0], iLocal_88[0], -1);
						unk_0x094626C0798AE1F8(iLocal_83[1], iLocal_88[1], -1);
						unk_0x28F648743D7DE312(iLocal_83[0], 3, false);
						unk_0x28F648743D7DE312(iLocal_83[1], 3, false);
						unk_0x2B4A2E9ED65D5C93(iLocal_83[0], 0);
						unk_0x2B4A2E9ED65D5C93(iLocal_83[1], 0);
						iLocal_46 = 5;
					}
				}
			}
			if (timera() > 10000)
			{
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					if (!unk_0xEAB9CD768B92B81F(unk_0x33CD235DF1E6A94E(), joaat("rebel")))
					{
						iLocal_46 = 3;
					}
					else
					{
						iLocal_46 = 4;
					}
				}
				else
				{
					iLocal_46 = 3;
				}
			}
			break;
		
		case 3:
			vLocal_103 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
			iLocal_76 = unk_0x9EC3B269A34A2BEE(10, 15);
			if (!unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, false, true, 0))
			{
				if (unk_0xC6CDE40F70F13196(vLocal_103, iLocal_76, &(vLocal_280[0 /*3*/]), 1, 3f, 0f))
				{
					vLocal_280[1 /*3*/] = { vLocal_280[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0x73E7A21FD53144AB(vLocal_280[0 /*3*/], 7f) && !unk_0x73E7A21FD53144AB(vLocal_280[1 /*3*/], 7f))
					{
						if (unk_0x91D5C8283D19AF49(iLocal_86[0], 0))
						{
							unk_0xBEADAF07D2339505(iLocal_86[0], vLocal_280[0 /*3*/], 1, false, 0, 1);
							func_91(iLocal_86[0], iLocal_83[0]);
						}
						if (unk_0x91D5C8283D19AF49(iLocal_86[1], 0))
						{
							unk_0xBEADAF07D2339505(iLocal_86[1], vLocal_280[1 /*3*/], 1, false, 0, 1);
							func_91(iLocal_86[1], iLocal_83[1]);
						}
						if (func_39() == 0)
						{
							func_80(&uLocal_114, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_39() == 1)
						{
							func_80(&uLocal_114, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_39() == 2)
						{
							func_80(&uLocal_114, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_107 = true;
						settimera(0);
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 4:
			vLocal_103 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
			iLocal_76 = unk_0x9EC3B269A34A2BEE(30, 35);
			if (!unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, false, true, 0))
			{
				if (unk_0xC6CDE40F70F13196(vLocal_103, iLocal_76, &(vLocal_280[0 /*3*/]), 1, 3f, 0f))
				{
					vLocal_280[1 /*3*/] = { vLocal_280[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0x73E7A21FD53144AB(vLocal_280[0 /*3*/], 7f) && !unk_0x73E7A21FD53144AB(vLocal_280[1 /*3*/], 7f))
					{
						if (unk_0x91D5C8283D19AF49(iLocal_87[0], 0))
						{
							unk_0xBEADAF07D2339505(iLocal_87[0], vLocal_280[0 /*3*/], 1, false, 0, 1);
							func_91(iLocal_87[0], iLocal_84[0]);
						}
						if (unk_0x91D5C8283D19AF49(iLocal_87[1], 0))
						{
							unk_0xBEADAF07D2339505(iLocal_87[1], vLocal_280[1 /*3*/], 1, false, 0, 1);
							func_91(iLocal_87[1], iLocal_84[1]);
						}
						if (func_39() == 0)
						{
							func_80(&uLocal_114, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_39() == 1)
						{
							func_80(&uLocal_114, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_39() == 2)
						{
							func_80(&uLocal_114, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_108 = true;
						settimera(0);
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 5:
			vLocal_103 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
			iLocal_76 = unk_0x9EC3B269A34A2BEE(5, 10);
			if (unk_0xC6CDE40F70F13196(vLocal_103, iLocal_76, &(vLocal_280[0 /*3*/]), 1, 3f, 0f))
			{
				vLocal_280[1 /*3*/] = { vLocal_280[0 /*3*/] + Vector(0f, 5f, 0f) };
				if (!unk_0x73E7A21FD53144AB(vLocal_280[0 /*3*/], 7f) && !unk_0x73E7A21FD53144AB(vLocal_280[1 /*3*/], 7f))
				{
					if (unk_0x91D5C8283D19AF49(iLocal_88[0], 0))
					{
						unk_0xBEADAF07D2339505(iLocal_88[0], vLocal_280[0 /*3*/], 1, false, 0, 1);
						func_91(iLocal_88[0], iLocal_83[0]);
					}
					if (unk_0x91D5C8283D19AF49(iLocal_88[1], 0))
					{
						unk_0xBEADAF07D2339505(iLocal_88[1], vLocal_280[1 /*3*/], 1, false, 0, 1);
						func_91(iLocal_88[1], iLocal_83[1]);
					}
					if (func_39() == 0)
					{
						func_80(&uLocal_114, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
					}
					else if (func_39() == 1)
					{
						func_80(&uLocal_114, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
					}
					else if (func_39() == 2)
					{
						func_80(&uLocal_114, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
					}
					bLocal_107 = true;
					settimera(0);
					iLocal_46 = 6;
				}
			}
			break;
		
		case 6:
			if (func_66())
			{
				fLocal_64 = unk_0x9562E33C057F7589(1.5f, 2.5f);
				fLocal_65 = unk_0x9562E33C057F7589(2f, 4f);
				fLocal_66 = unk_0x9562E33C057F7589(0.1f, 2f);
				if (iLocal_78 < 5 && iLocal_79 < unk_0xE3903F59E2F22150())
				{
					vLocal_50 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
					unk_0x29A0EDEA74B9E5A2((vLocal_50.x + fLocal_64), (vLocal_50.y + fLocal_65), (vLocal_50.z + fLocal_66), (vLocal_50.x - fLocal_64), (vLocal_50.y - fLocal_65), vLocal_50.z, 10, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
					iLocal_79 = (unk_0xE3903F59E2F22150() + unk_0x9EC3B269A34A2BEE(200, 500));
					iLocal_78++;
				}
			}
			if (iLocal_78 > 4)
			{
				iLocal_46 = 7;
			}
			break;
	}
}

bool func_80(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_90(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_81(sParam2, iParam3, 0);
}

int func_81(char* sParam0, int iParam1, bool bParam2)
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
					func_89();
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
		if (func_88(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_87();
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
				func_86();
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
				if (func_85())
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
			if (func_84())
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
			func_83();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_82();
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
		func_89();
	}
	return 0;
}

void func_82()
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

void func_83()
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

int func_84()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_85()
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

void func_86()
{
	if (func_34(14))
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
		Global_14553 = func_39();
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

void func_87()
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

bool func_88(int iParam0, int iParam1)
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

void func_89()
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

void func_90(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_91(int iParam0, int iParam1)
{
	unk_0xF70578F5CD9822CB(iParam0, false);
	unk_0x1B2303F9DC2D90D5(iParam0, 1084227584);
	vLocal_279 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
	vLocal_281 = { vLocal_103 - vLocal_279 };
	unk_0x3C990C409B3845DE(iParam0, unk_0x174C48E9E544E9A8(vLocal_281.x, vLocal_281.y));
	if (bLocal_110)
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam1))
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				unk_0xF05D68EDE15F4792(iParam1, unk_0x33CD235DF1E6A94E());
				wait(1);
				if (!unk_0xBC2FC12AD0FBF72E(iParam1))
				{
					unk_0x11F57EFDBE28D476(iParam1, 32, 1);
				}
			}
			else
			{
				unk_0x48B8A6610EAA0C89(iParam1, iParam0, unk_0x33CD235DF1E6A94E(), 6, 20f, 786469, -1f, -1f, 1);
			}
			if (!unk_0xD62C4419A41F106A(iParam0, 0))
			{
				unk_0x4522AD7364B6AA54(iParam0, unk_0x8BB475EA09C9A0EB(unk_0x33CD235DF1E6A94E()));
			}
		}
	}
	else if (!unk_0xBC2FC12AD0FBF72E(iParam1))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			unk_0xF05D68EDE15F4792(iParam1, unk_0x33CD235DF1E6A94E());
		}
		else
		{
			unk_0x48B8A6610EAA0C89(iParam1, iParam0, unk_0x33CD235DF1E6A94E(), 2, 100f, 786469, -1f, -1f, 1);
		}
		unk_0x4522AD7364B6AA54(iParam0, unk_0x8BB475EA09C9A0EB(unk_0x33CD235DF1E6A94E()));
	}
}

void func_92()
{
	int iVar0;
	
	iLocal_86[0] = unk_0xC651C43AB13A15E5(joaat("rebel"), -1595.964f, 4732.479f, 0f, 305f, true, true, false);
	unk_0x0D21E1FDE062ED99(iLocal_86[0], true, 0);
	unk_0x9FABD0AB045A5D6E(iLocal_86[0], true, true, 0);
	unk_0x26E0FFDB1AD22AC5(iLocal_86[0], 2);
	unk_0xAD3D24C8070DA056(iLocal_86[0], true);
	unk_0xF70578F5CD9822CB(iLocal_86[0], true);
	unk_0x6F10E9B95245828B(iLocal_86[0], "49GNL112");
	iLocal_86[1] = unk_0xC651C43AB13A15E5(joaat("rebel"), -1570.34f, 4733.755f, 0f, 305f, true, true, false);
	unk_0x0D21E1FDE062ED99(iLocal_86[1], true, 0);
	unk_0x9FABD0AB045A5D6E(iLocal_86[1], true, true, 0);
	unk_0x26E0FFDB1AD22AC5(iLocal_86[1], 2);
	unk_0xAD3D24C8070DA056(iLocal_86[1], true);
	unk_0xF70578F5CD9822CB(iLocal_86[1], true);
	unk_0x6F10E9B95245828B(iLocal_86[1], "47TMS703");
	iLocal_88[0] = unk_0xC651C43AB13A15E5(joaat("sanchez"), Vector(0f, 4732.479f, -1595.964f) + Vector(10f, 10f, 10f), 305f, true, true, false);
	unk_0x0D21E1FDE062ED99(iLocal_88[0], true, 0);
	unk_0x9FABD0AB045A5D6E(iLocal_88[0], true, true, 0);
	unk_0x26E0FFDB1AD22AC5(iLocal_88[0], 2);
	unk_0xAD3D24C8070DA056(iLocal_88[0], true);
	unk_0xF70578F5CD9822CB(iLocal_88[0], true);
	unk_0x6F10E9B95245828B(iLocal_88[0], "49GNL112");
	iLocal_88[1] = unk_0xC651C43AB13A15E5(joaat("sanchez"), Vector(0f, 4733.755f, -1570.34f) + Vector(10f, 10f, 10f), 305f, true, true, false);
	unk_0x0D21E1FDE062ED99(iLocal_88[1], true, 0);
	unk_0x9FABD0AB045A5D6E(iLocal_88[1], true, true, 0);
	unk_0x26E0FFDB1AD22AC5(iLocal_88[1], 2);
	unk_0xAD3D24C8070DA056(iLocal_88[1], true);
	unk_0xF70578F5CD9822CB(iLocal_88[1], true);
	unk_0x6F10E9B95245828B(iLocal_88[1], "47TMS703");
	iLocal_83[0] = unk_0xE196503B36B6194B(iLocal_86[0], 26, joaat("g_m_m_chigoon_02"), -1, 1, true);
	iLocal_83[1] = unk_0xE196503B36B6194B(iLocal_86[1], 26, joaat("g_m_m_chigoon_02"), -1, 1, true);
	if (!bLocal_110)
	{
		iLocal_83[2] = unk_0xE196503B36B6194B(iLocal_86[0], 26, joaat("g_m_m_chigoon_02"), 0, 1, true);
		iLocal_83[3] = unk_0xE196503B36B6194B(iLocal_86[1], 26, joaat("g_m_m_chigoon_02"), 0, 1, true);
	}
	iLocal_87[0] = unk_0xC651C43AB13A15E5(joaat("bobcatxl"), -1356.281f, 5000f, 0f, 125.2811f, true, true, false);
	unk_0x0D21E1FDE062ED99(iLocal_87[0], true, 0);
	unk_0x9FABD0AB045A5D6E(iLocal_87[0], true, true, 0);
	unk_0x26E0FFDB1AD22AC5(iLocal_87[0], 2);
	unk_0xAD3D24C8070DA056(iLocal_87[0], true);
	unk_0xF70578F5CD9822CB(iLocal_87[0], true);
	unk_0x6F10E9B95245828B(iLocal_87[0], "49GNL112");
	iLocal_87[1] = unk_0xC651C43AB13A15E5(joaat("bobcatxl"), -1373.589f, 5000f, 0f, 125.459f, true, true, false);
	unk_0x0D21E1FDE062ED99(iLocal_87[1], true, 0);
	unk_0x9FABD0AB045A5D6E(iLocal_87[1], true, true, 0);
	unk_0x26E0FFDB1AD22AC5(iLocal_87[1], 2);
	unk_0xAD3D24C8070DA056(iLocal_87[1], true);
	unk_0xF70578F5CD9822CB(iLocal_87[1], true);
	unk_0x6F10E9B95245828B(iLocal_87[1], "47TMS703");
	iLocal_84[0] = unk_0xE196503B36B6194B(iLocal_87[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, true);
	iLocal_84[1] = unk_0xE196503B36B6194B(iLocal_87[1], 26, joaat("g_m_y_salvagoon_03"), -1, 1, true);
	iLocal_84[2] = unk_0xE196503B36B6194B(iLocal_87[0], 26, joaat("g_m_y_salvagoon_03"), 0, 1, true);
	iLocal_84[3] = unk_0xE196503B36B6194B(iLocal_87[1], 26, joaat("g_m_y_salvagoon_03"), 0, 1, true);
	unk_0x9315FCF6CFE2AB41("RE_deal1", &iLocal_111);
	unk_0x9315FCF6CFE2AB41("RE_deal2", &iLocal_112);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_83[iVar0]))
		{
			unk_0x0648A75D3F60E864(iLocal_83[iVar0], iLocal_111);
			unk_0x0D21E1FDE062ED99(iLocal_83[iVar0], true, 0);
			if (bLocal_110)
			{
				unk_0x697EBA5CF1A6AB57(iLocal_83[0], joaat("weapon_sawnoffshotgun"), -1, true, true);
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_83[1]))
				{
					unk_0x697EBA5CF1A6AB57(iLocal_83[1], joaat("weapon_pistol"), -1, true, true);
				}
				unk_0xDE9FF07CFD5DC172(iLocal_83[iVar0], 15);
				unk_0x28F648743D7DE312(iLocal_83[iVar0], 3, false);
			}
			else
			{
				unk_0x697EBA5CF1A6AB57(iLocal_83[iVar0], joaat("weapon_pistol"), -1, true, true);
				unk_0xDE9FF07CFD5DC172(iLocal_83[iVar0], 13);
			}
			unk_0x28F648743D7DE312(iLocal_83[iVar0], 13, true);
			unk_0x28F648743D7DE312(iLocal_83[iVar0], 2, true);
			unk_0x28F648743D7DE312(iLocal_83[iVar0], 1, true);
			func_93(&uLocal_114, 4, iLocal_83[iVar0], "REDGWChinese", 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_83[iVar0]))
		{
			unk_0x0648A75D3F60E864(iLocal_84[iVar0], iLocal_112);
			unk_0x0D21E1FDE062ED99(iLocal_84[iVar0], true, 0);
			if (bLocal_110)
			{
				unk_0x697EBA5CF1A6AB57(iLocal_83[0], joaat("weapon_sawnoffshotgun"), -1, true, true);
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_83[1]))
				{
					unk_0x697EBA5CF1A6AB57(iLocal_83[1], joaat("weapon_pistol"), -1, true, true);
				}
				unk_0xDE9FF07CFD5DC172(iLocal_83[iVar0], 15);
				unk_0x28F648743D7DE312(iLocal_83[iVar0], 3, false);
				func_93(&uLocal_114, 4, iLocal_83[iVar0], "REDGWChinese", 0, 1);
			}
			else
			{
				unk_0x697EBA5CF1A6AB57(iLocal_84[iVar0], joaat("weapon_pistol"), -1, true, true);
				unk_0xDE9FF07CFD5DC172(iLocal_84[iVar0], 13);
				func_93(&uLocal_114, 5, iLocal_84[iVar0], "REDGWSalvadoran", 0, 1);
			}
			unk_0x28F648743D7DE312(iLocal_84[iVar0], 13, true);
			unk_0x28F648743D7DE312(iLocal_84[iVar0], 2, true);
			unk_0x28F648743D7DE312(iLocal_84[iVar0], 1, true);
		}
		iVar0++;
	}
	unk_0xD2E80177F27FD43F(3, iLocal_111, iLocal_112);
	unk_0xD2E80177F27FD43F(3, iLocal_112, iLocal_111);
	unk_0xD2E80177F27FD43F(3, iLocal_111, 1862763509);
	unk_0xD2E80177F27FD43F(3, iLocal_112, 1862763509);
	unk_0x71CA80D41E1338B4(joaat("g_m_m_chigoon_02"));
	unk_0x71CA80D41E1338B4(joaat("g_m_y_salvagoon_03"));
	unk_0x71CA80D41E1338B4(joaat("rebel"));
	unk_0x71CA80D41E1338B4(joaat("bobcatxl"));
	unk_0x71CA80D41E1338B4(joaat("sanchez"));
	unk_0x71CA80D41E1338B4(joaat("a_c_rottweiler"));
	bLocal_283 = true;
	iLocal_44 = 1;
}

void func_93(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_94()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iLocal_74)
	{
		case 0:
			if (bLocal_107)
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_83[iVar0]))
					{
						if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_83[iVar0], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_74 = 3;
						}
					}
					iVar0++;
				}
			}
			if (bLocal_108)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_84[iVar1]))
					{
						if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_84[iVar1], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_74 = 3;
						}
					}
					iVar1++;
				}
			}
			break;
		
		case 3:
			unk_0xD2E80177F27FD43F(5, iLocal_111, iLocal_112);
			unk_0xD2E80177F27FD43F(5, iLocal_112, iLocal_111);
			unk_0xD2E80177F27FD43F(5, iLocal_111, 1862763509);
			unk_0xD2E80177F27FD43F(5, iLocal_112, 1862763509);
			if (bLocal_107)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_83[iVar2]))
					{
						if ((!unk_0x71E0DAA57FE7D5C7(iLocal_83[iVar2], 0) && unk_0xD76D6BCC14B95CE1(iLocal_83[iVar2], 579380604) != 1) && unk_0xD76D6BCC14B95CE1(iLocal_83[iVar2], 579380604) != 0)
						{
							unk_0xED68CDDDE25A144E(iLocal_83[iVar2]);
							unk_0x277716E9E7CC0692(iLocal_83[iVar2], unk_0x33CD235DF1E6A94E(), 0, 16);
							unk_0x897EF720254BBEA3(iLocal_83[iVar2], true);
						}
					}
					iVar2++;
				}
				if (func_80(&uLocal_114, "REDGWAU", "REDGW_FIRE_C", 4, 0, 0, 0))
				{
					iLocal_71 = unk_0xE3903F59E2F22150();
					iLocal_74 = 4;
				}
			}
			if (bLocal_108)
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_84[iVar3]))
					{
						if ((!unk_0x71E0DAA57FE7D5C7(iLocal_84[iVar3], 0) && unk_0xD76D6BCC14B95CE1(iLocal_84[iVar3], 579380604) != 1) && unk_0xD76D6BCC14B95CE1(iLocal_84[iVar3], 579380604) != 0)
						{
							unk_0xED68CDDDE25A144E(iLocal_84[iVar3]);
							unk_0x277716E9E7CC0692(iLocal_84[iVar3], unk_0x33CD235DF1E6A94E(), 0, 16);
							unk_0x897EF720254BBEA3(iLocal_84[iVar3], true);
						}
					}
					iVar3++;
				}
				if (func_80(&uLocal_114, "REDGWAU", "REDGW_FIRE_S", 4, 0, 0, 0))
				{
					iLocal_71 = unk_0xE3903F59E2F22150();
					iLocal_74 = 4;
				}
			}
			break;
	}
}

void func_95()
{
	switch (iLocal_72)
	{
		case 0:
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_80))
			{
				if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_101, 7f, 7f, 10f, false, true, 0))
				{
					func_97();
					wait(0);
					func_80(&uLocal_114, "REDGWAU", "REDGW_NTOUCH", 4, 0, 0, 0);
					unk_0xC4A347124F39D998(iLocal_80, unk_0x33CD235DF1E6A94E(), -1, 2048, 2);
					if (!unk_0xE38E3CF1625A4145(iLocal_90))
					{
						iLocal_90 = func_96(iLocal_97);
					}
					iLocal_71 = unk_0xE3903F59E2F22150();
					iLocal_72++;
				}
			}
			else
			{
				iLocal_72++;
			}
			break;
	}
	switch (iLocal_73)
	{
		case 1:
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_80))
			{
				if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_80, 10f, 10f, 6f, 0, 1, 0))
				{
					if (!func_66())
					{
						func_80(&uLocal_114, "REDGWAU", "REDGW_NKILLD", 4, 0, 0, 0);
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_80))
						{
							unk_0xC4A347124F39D998(iLocal_80, unk_0x33CD235DF1E6A94E(), -1, 2048, 2);
							settimerb(0);
							iLocal_73++;
						}
					}
				}
			}
			else
			{
				settimerb(0);
				iLocal_73++;
			}
			break;
		
		case 2:
			if (!func_66() || timerb() > 4000)
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_80))
				{
					unk_0x7FC2040EB34E0E31(iLocal_80, 0, 0);
					unk_0x1ABDB383C83A336A(&iLocal_91);
				}
				if (timerb() > 7000)
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_81[6]))
					{
						unk_0x7FC2040EB34E0E31(iLocal_81[6], 0, 0);
						unk_0x1ABDB383C83A336A(&(iLocal_92[6]));
					}
				}
				if (timerb() > 9000)
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_81[7]))
					{
						unk_0x7FC2040EB34E0E31(iLocal_81[7], 0, 0);
						unk_0x1ABDB383C83A336A(&(iLocal_92[7]));
					}
					iLocal_73++;
				}
			}
			break;
		
		case 3:
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_81[6]))
			{
				unk_0x7FC2040EB34E0E31(iLocal_81[6], 0, 0);
			}
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_81[7]))
			{
				unk_0x7FC2040EB34E0E31(iLocal_81[7], 0, 0);
			}
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_80))
			{
				unk_0x7FC2040EB34E0E31(iLocal_80, 0, 0);
			}
			break;
	}
}

int func_96(int iParam0)
{
	int iVar0;
	
	if (!unk_0xECCFCAB0A094EB5B(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCB795F691042D011(iParam0);
	unk_0xCE5C49921A521962(iVar0, func_69(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
	return iVar0;
}

void func_97()
{
	Global_14732 = 0;
	func_98();
}

void func_98()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(false);
		Global_15866 = 6;
	}
}

void func_99()
{
	int iVar0;
	
	if (unk_0xC52B92C972695208(iLocal_97))
	{
		if (unk_0xE38E3CF1625A4145(iLocal_89))
		{
			unk_0x1ABDB383C83A336A(&iLocal_89);
		}
		if (unk_0xE38E3CF1625A4145(iLocal_90))
		{
			unk_0x1ABDB383C83A336A(&iLocal_90);
		}
		iLocal_73 = 1;
		iLocal_45 = 2;
		iLocal_44 = 0;
	}
	else
	{
		unk_0x4B06B5746CBEC99F(0f);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x765F6FEEFF39224F(iLocal_81[iVar0]))
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_81[iVar0]))
				{
					if (iVar0 == 0)
					{
					}
				}
				else if (unk_0xE38E3CF1625A4145(iLocal_92[iVar0]))
				{
					unk_0x1ABDB383C83A336A(&(iLocal_92[iVar0]));
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_82)
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_82[iVar0]))
			{
			}
			iVar0++;
		}
		if (!func_127())
		{
			if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_48[7 /*3*/], 110f, 95f, 40f, false, true, 0))
			{
				if (unk_0xE38E3CF1625A4145(iLocal_89))
				{
					unk_0x1ABDB383C83A336A(&iLocal_89);
				}
				if ((!unk_0xE38E3CF1625A4145(iLocal_91) && !unk_0xE38E3CF1625A4145(iLocal_92[6])) && !unk_0xE38E3CF1625A4145(iLocal_92[7]))
				{
					iLocal_91 = func_70(iLocal_80, 1, 145);
					iLocal_92[6] = func_70(iLocal_81[6], 1, 145);
					iLocal_92[7] = func_70(iLocal_81[7], 1, 145);
				}
				unk_0x983D75D9630FD905(iLocal_91, false);
				unk_0x983D75D9630FD905(iLocal_92[6], false);
				unk_0x983D75D9630FD905(iLocal_92[7], false);
				func_100(1);
			}
		}
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_81[6]))
		{
			if (((((unk_0xD76D6BCC14B95CE1(iLocal_81[6], 1785177548) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_81[6], 1785177548) != 0) || unk_0x17260B4EA0652E1C(iLocal_81[6])) || unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), iLocal_81[6])) || unk_0x45AD2119A5B580CD(iLocal_81[6])) || unk_0x1145040FA5049E0E(iLocal_81[6]))
			{
				unk_0x7FC2040EB34E0E31(iLocal_81[6], 0, 0);
			}
		}
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_81[7]))
		{
			if (((((unk_0xD76D6BCC14B95CE1(iLocal_81[7], 1785177548) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_81[7], 1785177548) != 0) || unk_0x17260B4EA0652E1C(iLocal_81[7])) || unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), iLocal_81[7])) || unk_0x45AD2119A5B580CD(iLocal_81[7])) || unk_0x1145040FA5049E0E(iLocal_81[7]))
			{
				unk_0x7FC2040EB34E0E31(iLocal_81[7], 0, 0);
			}
		}
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_80))
		{
			if (((((unk_0xD76D6BCC14B95CE1(iLocal_80, 1785177548) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_80, 1785177548) != 0) || unk_0x17260B4EA0652E1C(iLocal_80)) || unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), iLocal_80)) || unk_0x45AD2119A5B580CD(iLocal_80)) || unk_0x1145040FA5049E0E(iLocal_80))
			{
				unk_0x7FC2040EB34E0E31(iLocal_80, 0, 0);
			}
		}
		if (!bLocal_106)
		{
		}
	}
	func_95();
	switch (iLocal_75)
	{
		case 0:
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_81[6]))
			{
				if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), unk_0xFBB1F99A825CAB09(iLocal_81[6], true) + Vector(0f, 2.5f, 0f), 9f, 5f, 5f, false, true, 0) && unk_0xC4BA1231BBAF1161(unk_0x33CD235DF1E6A94E(), iLocal_81[6]))
				{
					unk_0xC4A347124F39D998(iLocal_81[6], unk_0x33CD235DF1E6A94E(), -1, 2048, 2);
					unk_0xC4A347124F39D998(unk_0x33CD235DF1E6A94E(), iLocal_81[6], 4000, 2048, 2);
					func_80(&uLocal_114, "REDGWAU", "REDGW_NDIE", 4, 0, 0, 0);
					iLocal_71 = unk_0xE3903F59E2F22150();
					iLocal_75 = 1;
				}
			}
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_81[7]))
			{
				if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), unk_0xFBB1F99A825CAB09(iLocal_81[7], true) + Vector(0f, 3f, 0f), 9f, 7f, 5f, false, true, 0) && unk_0xC4BA1231BBAF1161(unk_0x33CD235DF1E6A94E(), iLocal_81[7]))
				{
					unk_0xC4A347124F39D998(iLocal_81[7], unk_0x33CD235DF1E6A94E(), -1, 2048, 2);
					unk_0xC4A347124F39D998(unk_0x33CD235DF1E6A94E(), iLocal_81[7], 4000, 2048, 2);
					func_80(&uLocal_114, "REDGWAU", "REDGW_NDIE1", 4, 0, 0, 0);
					iLocal_71 = unk_0xE3903F59E2F22150();
					iLocal_75 = 1;
				}
			}
			if (unk_0xBC2FC12AD0FBF72E(iLocal_81[6]) && unk_0xBC2FC12AD0FBF72E(iLocal_81[7]))
			{
				iLocal_75 = 2;
			}
			break;
		
		case 1:
			if (unk_0xE38E3CF1625A4145(iLocal_91))
			{
				unk_0x983D75D9630FD905(iLocal_91, true);
			}
			if (unk_0xE38E3CF1625A4145(iLocal_92[6]))
			{
				unk_0x983D75D9630FD905(iLocal_92[6], true);
			}
			if (unk_0xE38E3CF1625A4145(iLocal_92[7]))
			{
				unk_0x983D75D9630FD905(iLocal_92[7], true);
			}
			iLocal_70 = unk_0xE3903F59E2F22150();
			if ((iLocal_70 - iLocal_71) > 6000 && !func_66())
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_81[6]))
				{
				}
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_81[7]))
				{
				}
				if (!unk_0xE38E3CF1625A4145(iLocal_90))
				{
					iLocal_90 = func_96(iLocal_97);
				}
				unk_0x4B06B5746CBEC99F(0f);
				if (!func_127())
				{
					func_100(1);
				}
				iLocal_75 = 2;
			}
			break;
	}
}

int func_100(int iParam0)
{
	if (func_104())
	{
		Global_106555 = 1;
		Global_106552 = unk_0xE3903F59E2F22150();
		if (func_54(Global_106554))
		{
			func_101(0);
		}
		unk_0xF72C40745AA793F1(1, "RE_TITLE");
		if (iParam0 && func_54(Global_106554))
		{
			unk_0x0B1FD891620F7745();
		}
		return 1;
	}
	return 0;
}

void func_101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106565.f_24989.f_2 < 3)
			{
				if (!unk_0x6B59932722922B69())
				{
					func_102(func_103(iParam0), -1);
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
					func_102(func_103(iParam0), -1);
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
					func_102(func_103(iParam0), -1);
					Global_106565.f_24989.f_4++;
					unk_0x8950ED5730F62EE8(&Global_106561, 2);
				}
			}
			break;
	}
}

void func_102(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

char* func_103(int iParam0)
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

int func_104()
{
	switch (func_105(&Global_25824, 0, 5, 0, unk_0x8C40DC84EDF05997()))
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

int func_105(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_109(0))
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
		if (!func_107(iParam2))
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
			func_106(uParam0, iParam4);
		}
	}
	return 2;
}

void func_106(var uParam0, int iParam1)
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

bool func_107(int iParam0)
{
	return func_108(iParam0, Global_36425);
}

int func_108(int iParam0, int iParam1)
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

int func_109(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_107(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_110()
{
	int iVar0;
	
	if (!unk_0xD62C4419A41F106A(iLocal_85[0], 0))
	{
		if (unk_0x7BDC41A7CA0C77A2(iLocal_85[0], -1, 0) == iLocal_81[8])
		{
			unk_0xCA6505B7A2F46301(iLocal_85[0], 60000f);
			unk_0xE10A42FD595F1C7C(iLocal_85[0]);
		}
	}
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_80))
	{
		if (unk_0x3AF2B3B68DD52355(iLocal_80))
		{
			unk_0x7FC2040EB34E0E31(iLocal_80, 0, 0);
		}
	}
	else if (unk_0xE38E3CF1625A4145(iLocal_91))
	{
		unk_0x1ABDB383C83A336A(&iLocal_91);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x73E7A21FD53144AB(vLocal_100, 30f) && vdist(func_2(unk_0x95B959F18401C09A()), vLocal_100) > 300f)
		{
			if (unk_0x765F6FEEFF39224F(iLocal_81[iVar0]))
			{
				unk_0x1F45B4626AC4A4C0(&(iLocal_81[iVar0]));
			}
		}
		if (unk_0xBC2FC12AD0FBF72E(iLocal_81[iVar0]))
		{
			if (unk_0xE38E3CF1625A4145(iLocal_92[iVar0]))
			{
				unk_0x1ABDB383C83A336A(&(iLocal_92[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_111()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	unk_0xB815670C37E03CDE(joaat("g_m_m_chigoon_02"));
	unk_0xB815670C37E03CDE(joaat("g_m_y_salvagoon_03"));
	unk_0xB815670C37E03CDE(joaat("rebel"));
	unk_0xB815670C37E03CDE(joaat("bobcatxl"));
	unk_0xB815670C37E03CDE(joaat("sanchez"));
	unk_0xB815670C37E03CDE(joaat("a_c_rottweiler"));
	unk_0xB815670C37E03CDE(joaat("prop_security_case_01"));
	unk_0x0483D0035D6E46FD("random@dealgonewrong");
	unk_0x0483D0035D6E46FD("random@dealgonewrongdead_peds");
	if ((((((((unk_0x5D98D654CDC2165A(joaat("g_m_m_chigoon_02")) && unk_0x5D98D654CDC2165A(joaat("g_m_y_salvagoon_03"))) && unk_0x5D98D654CDC2165A(joaat("rebel"))) && unk_0x5D98D654CDC2165A(joaat("bobcatxl"))) && unk_0x5D98D654CDC2165A(joaat("sanchez"))) && unk_0x5D98D654CDC2165A(joaat("a_c_rottweiler"))) && unk_0x5D98D654CDC2165A(joaat("prop_security_case_01"))) && unk_0xE9CCF312047EBEE0("random@dealgonewrong")) && unk_0xE9CCF312047EBEE0("random@dealgonewrongdead_peds"))
	{
		unk_0x0335D8135051EA56(vLocal_100 - Vector(150f, 150f, 150f), vLocal_100 + Vector(150f, 150f, 150f), 0, 1, 1, 1);
		unk_0x8C4EA5F6857553AE(joaat("bobcatxl"), true);
		unk_0x8C4EA5F6857553AE(joaat("rebel"), true);
		unk_0xA53C1C92EE35EC0E(5, false);
		unk_0xA53C1C92EE35EC0E(3, false);
		iLocal_85[0] = unk_0xC651C43AB13A15E5(joaat("bobcatxl"), -1626.94f, 4729.889f, 51.3463f, 347.1188f, true, true, false);
		unk_0x0D21E1FDE062ED99(iLocal_85[0], true, 0);
		unk_0x1B2303F9DC2D90D5(iLocal_85[0], 1084227584);
		unk_0x9FABD0AB045A5D6E(iLocal_85[0], true, true, 0);
		unk_0x26E0FFDB1AD22AC5(iLocal_85[0], 2);
		unk_0xB81134EAAC434D76(iLocal_85[0], 500f);
		unk_0xFA05791B9B8FA536(iLocal_85[0], 500f);
		unk_0x3A3707C1ECABF993(iLocal_85[0], 1, true);
		unk_0x3B1040723141568E(iLocal_85[0], 0, 0, 1148846080);
		unk_0x2C64D5082D2F968A(iLocal_85[0], 6);
		unk_0xE3040995362DF6F7(iLocal_85[0], "RADIO_06_COUNTRY");
		unk_0x6F10E9B95245828B(iLocal_85[0], "76JON418");
		unk_0xF28F45F667D62218(iLocal_85[0], true);
		iLocal_85[1] = unk_0xC651C43AB13A15E5(joaat("rebel"), -1619.432f, 4747.792f, 52.7502f, 146.6017f, true, true, false);
		unk_0x0D21E1FDE062ED99(iLocal_85[1], true, 0);
		unk_0x1B2303F9DC2D90D5(iLocal_85[1], 1084227584);
		unk_0x9FABD0AB045A5D6E(iLocal_85[1], true, true, 0);
		unk_0x26E0FFDB1AD22AC5(iLocal_85[1], 2);
		unk_0xB81134EAAC434D76(iLocal_85[1], 600f);
		unk_0xFA05791B9B8FA536(iLocal_85[1], 400f);
		unk_0x3A3707C1ECABF993(iLocal_85[1], 1, true);
		unk_0x3A3707C1ECABF993(iLocal_85[1], 2, true);
		unk_0x3A3707C1ECABF993(iLocal_85[1], 3, false);
		unk_0x3A3707C1ECABF993(iLocal_85[1], 4, false);
		unk_0x2C64D5082D2F968A(iLocal_85[1], 6);
		unk_0xE3040995362DF6F7(iLocal_85[1], "RADIO_06_COUNTRY");
		unk_0x6F10E9B95245828B(iLocal_85[1], "79ERK121");
		unk_0xF28F45F667D62218(iLocal_85[1], true);
		unk_0xAE949FBD474D8C74(iLocal_85[1], 1);
		iLocal_85[2] = unk_0xC651C43AB13A15E5(joaat("bobcatxl"), -1636.216f, 4748.061f, 51.5484f, 199.3236f, true, true, false);
		unk_0x6F10E9B95245828B(iLocal_85[2], "83JOH802");
		unk_0x0D21E1FDE062ED99(iLocal_85[2], true, 0);
		unk_0x1B2303F9DC2D90D5(iLocal_85[2], 1084227584);
		unk_0x9FABD0AB045A5D6E(iLocal_85[2], true, true, 0);
		unk_0x26E0FFDB1AD22AC5(iLocal_85[2], 2);
		unk_0xB81134EAAC434D76(iLocal_85[2], 60f);
		unk_0xFA05791B9B8FA536(iLocal_85[2], 1000f);
		unk_0x3A3707C1ECABF993(iLocal_85[2], 1, false);
		unk_0x3B1040723141568E(iLocal_85[2], 1, 0, 1148846080);
		iLocal_85[3] = unk_0xC651C43AB13A15E5(joaat("rebel"), -1641.578f, 4736.783f, 52.5984f, 278.1865f, true, true, false);
		unk_0x6F10E9B95245828B(iLocal_85[3], "85TOR114");
		unk_0x0D21E1FDE062ED99(iLocal_85[3], true, 0);
		unk_0x1B2303F9DC2D90D5(iLocal_85[3], 1084227584);
		unk_0x9FABD0AB045A5D6E(iLocal_85[3], true, true, 0);
		unk_0x26E0FFDB1AD22AC5(iLocal_85[3], 2);
		unk_0xB81134EAAC434D76(iLocal_85[3], 500f);
		unk_0xFA05791B9B8FA536(iLocal_85[3], 500f);
		unk_0x3A3707C1ECABF993(iLocal_85[3], 1, false);
		unk_0x3A3707C1ECABF993(iLocal_85[3], 2, false);
		unk_0x3A3707C1ECABF993(iLocal_85[3], 3, false);
		unk_0x3A3707C1ECABF993(iLocal_85[3], 4, false);
		unk_0x3B1040723141568E(iLocal_85[3], 0, 0, 1148846080);
		unk_0x3B1040723141568E(iLocal_85[3], 5, 0, 1148846080);
		if (!unk_0xECCFCAB0A094EB5B(iLocal_97))
		{
			iVar0 = 0;
			unk_0x8950ED5730F62EE8(&iVar0, 1);
			unk_0x8950ED5730F62EE8(&iVar0, 3);
			unk_0x8950ED5730F62EE8(&iVar0, 4);
			iLocal_97 = unk_0x3B3AEF3A73FB80C9(joaat("pickup_money_case"), vLocal_101, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
			unk_0x71CA80D41E1338B4(joaat("prop_security_case_01"));
		}
		vLocal_104[0 /*3*/] = { -1640.411f, 4740.702f, 52.6218f };
		vLocal_104[1 /*3*/] = { -1624.664f, 4746.569f, 51.541f };
		vLocal_104[2 /*3*/] = { -1626.339f, 4734.232f, 51.6176f };
		vLocal_104[3 /*3*/] = { -1634.297f, 4741.213f, 51.9737f };
		vLocal_104[4 /*3*/] = { -1644.717f, 4736.446f, 52.3014f };
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!unk_0xECCFCAB0A094EB5B(iLocal_98[iVar1]))
			{
				iVar2 = 0;
				unk_0x8950ED5730F62EE8(&iVar2, 3);
				unk_0x8950ED5730F62EE8(&iVar2, 4);
				if (iVar1 < 2)
				{
					iLocal_98[iVar1] = unk_0x6413BF5F9B062200(joaat("pickup_weapon_sawnoffshotgun"), vLocal_104[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
				else if (iVar1 == 4)
				{
					iLocal_98[iVar1] = unk_0x3B3AEF3A73FB80C9(joaat("pickup_weapon_assaultrifle"), vLocal_104[iVar1 /*3*/], 90f, 50f, 0f, 0, 50, 2, 1, 0);
				}
				else
				{
					iLocal_98[iVar1] = unk_0x6413BF5F9B062200(joaat("pickup_weapon_pistol"), vLocal_104[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
			}
			iVar1++;
		}
		vLocal_48[0 /*3*/] = { -1636.535f, 4708.455f, 46.09f };
		fLocal_49[0] = 177.0024f;
		vLocal_48[1 /*3*/] = { -1621.19f, 4744.868f, 52.4254f };
		fLocal_49[1] = 146.9645f;
		vLocal_48[2 /*3*/] = { -1622.795f, 4735.975f, 51.474f };
		fLocal_49[2] = 48.6546f;
		vLocal_48[3 /*3*/] = { -1632.695f, 4742.906f, 51.8604f };
		fLocal_49[3] = 155.0678f;
		vLocal_48[4 /*3*/] = { -1629.544f, 4738.6f, 52.1784f };
		fLocal_49[4] = 278.3085f;
		vLocal_48[5 /*3*/] = { -1634.764f, 4745.188f, 51.3926f };
		fLocal_49[5] = 270.3501f;
		vLocal_48[7 /*3*/] = { -1628.321f, 4731.502f, 51.7644f };
		fLocal_49[7] = 352.9167f;
		vLocal_48[6 /*3*/] = { -1640.311f, 4738.4f, 52.2f };
		fLocal_49[6] = 34.1111f;
		vLocal_63 = { -1641.735f, 4692.13f, 39.394f };
		fLocal_67 = 326.7277f;
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (iVar1 <= 3)
			{
				iLocal_81[iVar1] = unk_0x9BA5CF280376EEA4(22, joaat("g_m_y_salvagoon_03"), vLocal_48[iVar1 /*3*/], fLocal_49[iVar1], 1, true);
				unk_0x5FEE418CE11E6DDE(iLocal_81[iVar1], 227, true);
			}
			else
			{
				iLocal_81[iVar1] = unk_0x9BA5CF280376EEA4(22, joaat("g_m_m_chigoon_02"), vLocal_48[iVar1 /*3*/], fLocal_49[iVar1], 1, true);
			}
			iVar1++;
		}
		iLocal_82[0] = unk_0x9BA5CF280376EEA4(26, joaat("a_c_rottweiler"), -1635.005f, 4737.181f, 53.4995f, 33.4155f, 1, true);
		iLocal_82[1] = unk_0x9BA5CF280376EEA4(26, joaat("a_c_rottweiler"), -1625.215f, 4741.119f, 52.5762f, 316.2733f, 1, true);
		iVar1 = 0;
		while (iVar1 < iLocal_82)
		{
			unk_0xC2A270E9C5578803(iLocal_82[iVar1], 1);
			unk_0x23298AB8A7D0F403(iLocal_82[iVar1], true, 0);
			unk_0x5FEE418CE11E6DDE(iLocal_82[iVar1], 227, true);
			vLocal_50 = { unk_0xFBB1F99A825CAB09(iLocal_82[iVar1], true) };
			vLocal_51 = { vLocal_50.x, (vLocal_50.y - 2f), (vLocal_50.z - 0.5f) };
			vLocal_52 = { vLocal_50.x, (vLocal_50.y + 50f), (vLocal_50.z - 0.5f) };
			unk_0x29A0EDEA74B9E5A2(vLocal_51, vLocal_52, 100, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iVar1++;
		}
		unk_0x548FEB9052C36FFD(iLocal_81[0], "random@dealgonewrongdead_peds", "ped_b", -1635.928f, 4707.941f, 46.383f, -29.25f, 12.25f, 171.75f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x548FEB9052C36FFD(iLocal_81[1], "random@dealgonewrongdead_peds", "ped_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x548FEB9052C36FFD(iLocal_81[2], "random@dealgonewrongdead_peds", "ped_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x548FEB9052C36FFD(iLocal_81[3], "random@dealgonewrongdead_peds", "ped_c", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x548FEB9052C36FFD(iLocal_81[4], "random@dealgonewrongdead_peds", "ped_d", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x548FEB9052C36FFD(iLocal_81[5], "random@dealgonewrongdead_peds", "ped_e", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x548FEB9052C36FFD(iLocal_82[0], "random@dealgonewrongdead_peds", "dog_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x548FEB9052C36FFD(iLocal_82[1], "random@dealgonewrongdead_peds", "dog_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x9B1105BBC773AA14(50f);
		func_113();
		unk_0x9B1105BBC773AA14(1f);
		if (unk_0x91D5C8283D19AF49(iLocal_85[0], 0))
		{
			iLocal_81[8] = unk_0xE196503B36B6194B(iLocal_85[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, true);
			unk_0x0D21E1FDE062ED99(iLocal_81[8], true, 0);
			unk_0x955CDCCD13613323(iLocal_81[8], 1);
			unk_0x7FC2040EB34E0E31(iLocal_81[8], 0, 0);
		}
		if (!unk_0xE38E3CF1625A4145(iLocal_89))
		{
		}
		unk_0x9315FCF6CFE2AB41("re_DealGoneWrong", &iLocal_113);
		iLocal_81[6] = unk_0x9BA5CF280376EEA4(22, joaat("g_m_m_chigoon_02"), vLocal_48[6 /*3*/], fLocal_49[6], 1, true);
		func_93(&uLocal_114, 4, iLocal_81[6], "REDGWChinese", 0, 1);
		unk_0x4A852F02088ECC9D(iLocal_81[6], true);
		unk_0xAD3D24C8070DA056(iLocal_81[6], true);
		unk_0x0648A75D3F60E864(iLocal_81[6], iLocal_113);
		iVar3 = unk_0x38A6890195DD00D1(vLocal_48[6 /*3*/] + Vector(1.05f, 0f, 0f), -7f, 0f, 34.1111f, 0);
		unk_0x08798CBF817BA887(iLocal_81[6], iVar3, "random@dealgonewrong", "base", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0x6359F1F7F5174D4A(iVar3, true);
		unk_0x897EF720254BBEA3(iLocal_81[6], true);
		unk_0x5FEE418CE11E6DDE(iLocal_81[6], 227, true);
		iLocal_81[7] = unk_0x9BA5CF280376EEA4(22, joaat("g_m_y_salvagoon_03"), -1640.311f, 4738.4f, 50.2f, fLocal_49[7], 1, true);
		func_93(&uLocal_114, 5, iLocal_81[7], "REDGWSalvadoran", 0, 1);
		unk_0x4A852F02088ECC9D(iLocal_81[7], true);
		unk_0xAD3D24C8070DA056(iLocal_81[7], true);
		unk_0x0648A75D3F60E864(iLocal_81[7], iLocal_113);
		iVar4 = unk_0x38A6890195DD00D1(vLocal_48[7 /*3*/] + Vector(0.92f, 0.65f, -0.65f), 0f, 0f, 34.1111f, 0);
		unk_0x08798CBF817BA887(iLocal_81[7], iVar4, "random@dealgonewrong", "idle_a", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0x6359F1F7F5174D4A(iVar4, true);
		unk_0xDD450B93C16ACEA7(iVar4, 0.5f);
		unk_0x897EF720254BBEA3(iLocal_81[7], true);
		unk_0x5FEE418CE11E6DDE(iLocal_81[7], 227, true);
		iLocal_80 = unk_0x9BA5CF280376EEA4(22, joaat("g_m_m_chigoon_02"), vLocal_63, fLocal_67, 1, true);
		func_93(&uLocal_114, 4, iLocal_80, "REDGWChinese", 0, 1);
		unk_0x4A852F02088ECC9D(iLocal_80, true);
		unk_0x0648A75D3F60E864(iLocal_80, iLocal_113);
		iVar5 = unk_0x38A6890195DD00D1(vLocal_63, 7.5f, -12.75f, 51.5f, 0);
		unk_0x08798CBF817BA887(iLocal_80, iVar5, "random@dealgonewrong", "idle_b", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0x6359F1F7F5174D4A(iVar5, true);
		unk_0x1C8705F667F673EA(iLocal_80, 4f, 18f, 326.7277f, 0, 1);
		unk_0x897EF720254BBEA3(iLocal_80, true);
		unk_0x5FEE418CE11E6DDE(iLocal_80, 227, true);
		unk_0xD2E80177F27FD43F(5, iLocal_113, 1862763509);
		if (func_39() == 0)
		{
			func_93(&uLocal_114, 0, unk_0x33CD235DF1E6A94E(), "MICHAEL", 0, 1);
		}
		if (func_39() == 1)
		{
			func_93(&uLocal_114, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
		}
		if (func_39() == 2)
		{
			func_93(&uLocal_114, 2, unk_0x33CD235DF1E6A94E(), "TREVOR", 0, 1);
		}
		iLocal_99[0] = unk_0x8B096ED4BB378AA7(1110, -1632.953f, 4745.359f, 51.7876f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[1] = unk_0x8B096ED4BB378AA7(1110, -1634.87f, 4744.458f, 51.8233f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[2] = unk_0x8B096ED4BB378AA7(1110, -1636.971f, 4736.595f, 52.2814f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[3] = unk_0x8B096ED4BB378AA7(1110, -1625.561f, 4741.241f, 51.7102f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[4] = unk_0x8B096ED4BB378AA7(1110, -1621.533f, 4744.576f, 51.9093f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[5] = unk_0x8B096ED4BB378AA7(1110, -1621.963f, 4737.039f, 51.4174f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[6] = unk_0x8B096ED4BB378AA7(1110, -1628.517f, 4736.906f, 51.8207f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[7] = unk_0x8B096ED4BB378AA7(1110, -1629.324f, 4732.146f, 51.6947f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[8] = unk_0x8B096ED4BB378AA7(1110, -1640.287f, 4738.437f, 52.1756f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[9] = unk_0x8B096ED4BB378AA7(1110, -1640.055f, 4701.995f, 41.2428f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[10] = unk_0x8B096ED4BB378AA7(1110, -1641.924f, 4692.236f, 38.3762f, 0f, 0f, -1f, func_112(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (!unk_0xD62C4419A41F106A(iLocal_81[iVar1], 0))
			{
				unk_0xC2A270E9C5578803(iLocal_81[iVar1], 1);
				unk_0x9247930CE6A29BC3(iLocal_81[iVar1], 0, 0.3f, 0.6f, 3);
				unk_0x9247930CE6A29BC3(iLocal_81[iVar1], 0, 0.65f, 0.6f, 3);
				wait(unk_0x9EC3B269A34A2BEE(100, 500));
				if (iVar1 <= 5)
				{
					if (unk_0xE38E3CF1625A4145(iLocal_92[iVar1]))
					{
						unk_0x1ABDB383C83A336A(&(iLocal_92[iVar1]));
					}
				}
			}
			iVar1++;
		}
		if (unk_0x765F6FEEFF39224F(unk_0x8918EC905FC8975D()))
		{
			if (!unk_0x5A04E3BD0B5E7E49(unk_0x8918EC905FC8975D()))
			{
				unk_0x0D21E1FDE062ED99(unk_0x8918EC905FC8975D(), true, 0);
			}
		}
		iLocal_282 = 1;
	}
}

Vector3 func_112(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

void func_113()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		wait(0);
		if (unk_0x765F6FEEFF39224F(iLocal_85[iVar0]))
		{
			vLocal_53 = { unk_0x2CA911E7569D12EA(iLocal_85[iVar0], 0f, 0f, 0.5f) };
		}
		iLocal_77 = 0;
		while (iLocal_77 < 5)
		{
			fLocal_64 = unk_0x9562E33C057F7589(1.5f, 2.5f);
			fLocal_65 = unk_0x9562E33C057F7589(2f, 4f);
			fLocal_66 = unk_0x9562E33C057F7589(0.1f, 2f);
			wait(0);
			vLocal_54 = { (vLocal_53.x - fLocal_64), (vLocal_53.y - fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { (vLocal_53.x + fLocal_64), (vLocal_53.y + fLocal_65), vLocal_53.z };
			unk_0x29A0EDEA74B9E5A2(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			vLocal_54 = { (vLocal_53.x + fLocal_64), (vLocal_53.y + fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { (vLocal_53.x - fLocal_64), (vLocal_53.y - fLocal_65), vLocal_53.z };
			unk_0x29A0EDEA74B9E5A2(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			vLocal_54 = { (vLocal_53.x + fLocal_64), (vLocal_53.y - fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { (vLocal_53.x - fLocal_64), (vLocal_53.y + fLocal_65), vLocal_53.z };
			unk_0x29A0EDEA74B9E5A2(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			vLocal_54 = { (vLocal_53.x - fLocal_64), (vLocal_53.y + fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { (vLocal_53.x + fLocal_64), (vLocal_53.y - fLocal_65), vLocal_53.z };
			unk_0x29A0EDEA74B9E5A2(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			vLocal_54 = { vLocal_53.x, (vLocal_53.y + fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { vLocal_53.x, (vLocal_53.y - fLocal_65), vLocal_53.z };
			unk_0x29A0EDEA74B9E5A2(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iLocal_77++;
		}
		iVar0++;
	}
}

int func_114()
{
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_125())
		{
			return 0;
		}
	}
	if (func_121())
	{
		return 1;
	}
	if (func_115(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_115(float fParam0, bool bParam1)
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
		if (func_41(func_39()))
		{
			iVar5 = func_59();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0x0E4018692D92041D(Global_106565.f_18568[iVar1 /*6*/], 2) && !unk_0x0E4018692D92041D(Global_106565.f_18568[iVar1 /*6*/], 3))
				{
					func_116(iVar1, &Var0);
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

void func_116(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_117(uParam1, "Abigail1", func_119(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 1:
			func_117(uParam1, "Abigail2", func_119(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 2:
			func_117(uParam1, "Barry1", func_119(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 3:
			func_117(uParam1, "Barry2", func_119(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 4:
			func_117(uParam1, "Barry3", func_119(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 5:
			func_117(uParam1, "Barry3A", func_119(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 6:
			func_117(uParam1, "Barry3C", func_119(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 7:
			func_117(uParam1, "Barry4", func_119(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_118(iParam0), 0, 0);
			break;
		
		case 8:
			func_117(uParam1, "Dreyfuss1", func_119(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 9:
			func_117(uParam1, "Epsilon1", func_119(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 10:
			func_117(uParam1, "Epsilon2", func_119(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 11:
			func_117(uParam1, "Epsilon3", func_119(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 12:
			func_117(uParam1, "Epsilon4", func_119(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 13:
			func_117(uParam1, "Epsilon5", func_119(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 14:
			func_117(uParam1, "Epsilon6", func_119(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 15:
			func_117(uParam1, "Epsilon7", func_119(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 16:
			func_117(uParam1, "Epsilon8", func_119(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 17:
			func_117(uParam1, "Extreme1", func_119(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 18:
			func_117(uParam1, "Extreme2", func_119(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 19:
			func_117(uParam1, "Extreme3", func_119(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 20:
			func_117(uParam1, "Extreme4", func_119(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 21:
			func_117(uParam1, "Fanatic1", func_119(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_118(iParam0), 1, 0);
			break;
		
		case 22:
			func_117(uParam1, "Fanatic2", func_119(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_118(iParam0), 1, 0);
			break;
		
		case 23:
			func_117(uParam1, "Fanatic3", func_119(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_118(iParam0), 0, 1);
			break;
		
		case 24:
			func_117(uParam1, "Hao1", func_119(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_118(iParam0), 0, 1);
			break;
		
		case 25:
			func_117(uParam1, "Hunting1", func_119(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 26:
			func_117(uParam1, "Hunting2", func_119(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 27:
			func_117(uParam1, "Josh1", func_119(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 28:
			func_117(uParam1, "Josh2", func_119(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 29:
			func_117(uParam1, "Josh3", func_119(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 30:
			func_117(uParam1, "Josh4", func_119(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 31:
			func_117(uParam1, "Maude1", func_119(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 32:
			func_117(uParam1, "Minute1", func_119(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 33:
			func_117(uParam1, "Minute2", func_119(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 34:
			func_117(uParam1, "Minute3", func_119(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 35:
			func_117(uParam1, "MrsPhilips1", func_119(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 36:
			func_117(uParam1, "MrsPhilips2", func_119(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 37:
			func_117(uParam1, "Nigel1", func_119(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 38:
			func_117(uParam1, "Nigel1A", func_119(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 39:
			func_117(uParam1, "Nigel1B", func_119(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_118(iParam0), 1, 1);
			break;
		
		case 40:
			func_117(uParam1, "Nigel1C", func_119(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_118(iParam0), 1, 1);
			break;
		
		case 41:
			func_117(uParam1, "Nigel1D", func_119(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_118(iParam0), 1, 1);
			break;
		
		case 42:
			func_117(uParam1, "Nigel2", func_119(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 43:
			func_117(uParam1, "Nigel3", func_119(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 44:
			func_117(uParam1, "Omega1", func_119(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 45:
			func_117(uParam1, "Omega2", func_119(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 46:
			func_117(uParam1, "Paparazzo1", func_119(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 47:
			func_117(uParam1, "Paparazzo2", func_119(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 48:
			func_117(uParam1, "Paparazzo3", func_119(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 49:
			func_117(uParam1, "Paparazzo3A", func_119(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 50:
			func_117(uParam1, "Paparazzo3B", func_119(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 51:
			func_117(uParam1, "Paparazzo4", func_119(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 52:
			func_117(uParam1, "Rampage1", func_119(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 54:
			func_117(uParam1, "Rampage3", func_119(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 55:
			func_117(uParam1, "Rampage4", func_119(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 56:
			func_117(uParam1, "Rampage5", func_119(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 53:
			func_117(uParam1, "Rampage2", func_119(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 57:
			func_117(uParam1, "TheLastOne", func_119(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 58:
			func_117(uParam1, "Tonya1", func_119(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 59:
			func_117(uParam1, "Tonya2", func_119(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 60:
			func_117(uParam1, "Tonya3", func_119(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 61:
			func_117(uParam1, "Tonya4", func_119(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 62:
			func_117(uParam1, "Tonya5", func_119(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_117(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_118(int iParam0)
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

struct<2> func_119(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_120(iParam0) };
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

struct<2> func_120(int iParam0)
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

int func_121()
{
	if (func_124() && !func_125())
	{
		return 1;
	}
	if (func_123() && func_122())
	{
		return 1;
	}
	return 0;
}

bool func_122()
{
	return Global_106283 > 0;
}

int func_123()
{
	if (Global_90634 != -1)
	{
		return 1;
	}
	return 0;
}

int func_124()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

int func_125()
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

int func_126()
{
	if (!func_107(5))
	{
		return 1;
	}
	if (func_121())
	{
		return 1;
	}
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_125())
		{
			return 0;
		}
	}
	if (func_115(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_127()
{
	if ((Global_106554 == func_63() && unk_0x40AC0B9EFCB6A65B()) && Global_106555)
	{
		return 1;
	}
	return 0;
}

void func_128(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_63();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_130(iParam0);
	unk_0x88B04627B159D024(0);
	unk_0xDCCE32451D4E5521(1);
	Global_106551 = 0;
	func_129();
}

void func_129()
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

void func_130(int iParam0)
{
	Global_106554 = iParam0;
}

int func_131(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_63();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_172())
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
			if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_125())
			{
				return 0;
			}
		}
		if (!Global_106565.f_9079)
		{
			return 0;
		}
		if (func_47(0))
		{
			return 0;
		}
		if (func_121())
		{
			return 0;
		}
		if (func_171())
		{
			return 0;
		}
		if (Global_106554 != -1)
		{
			return 0;
		}
		if (func_41(func_39()))
		{
			if (func_115(100f, 1) != -1)
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
		if (!func_170(iParam1))
		{
			return 0;
		}
		if (func_41(func_39()))
		{
			if (func_169(func_39()) == 4 || func_169(func_39()) == 5)
			{
				return 0;
			}
		}
		if (func_41(func_39()))
		{
			if (!func_168(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_167(Global_106565.f_24989.f_43[iParam1]))
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
		if (func_166())
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
		if (!func_157(4))
		{
			return 0;
		}
		if (!func_107(5))
		{
			return 0;
		}
		if (func_156(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_156(0, 0))
		{
			return 0;
		}
		if (Global_25911)
		{
			return 0;
		}
		if (func_170(30) && !func_156(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_41(func_39()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_106565.f_2357.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_106565.f_2357.f_539.f_2296[iVar2];
				if (func_155(iVar4))
				{
					if (func_133(iVar2))
					{
						if (!func_132(vVar3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), vVar3) < (210f * 210f))
							{
								if (func_39() != iVar2)
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

bool func_132(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_133(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_106565.f_2357.f_539.f_2296[iParam0];
	return func_134(iVar0);
}

int func_134(int iParam0)
{
	return func_135(iParam0, 1);
}

int func_135(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_155(iParam0))
	{
		return 0;
	}
	func_136(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_136(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_137(func_148(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_137(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_147(iParam0, iParam1))
	{
		iVar0 = func_146(iParam1);
		iVar1 = func_144(iParam0);
		iVar2 = (func_144(iParam0) - func_144(iParam1));
		iVar3 = (func_146(iParam0) - func_146(iParam1));
		iVar4 = (func_143(iParam0) - func_143(iParam1));
		iVar5 = (func_142(iParam0) - func_142(iParam1));
		iVar6 = (func_141(iParam0) - func_141(iParam1));
		iVar7 = (func_140(iParam0) - func_140(iParam1));
	}
	else
	{
		iVar0 = func_146(iParam0);
		iVar1 = func_144(iParam1);
		iVar2 = (func_144(iParam1) - func_144(iParam0));
		iVar3 = (func_146(iParam1) - func_146(iParam0));
		iVar4 = (func_143(iParam1) - func_143(iParam0));
		iVar5 = (func_142(iParam1) - func_142(iParam0));
		iVar6 = (func_141(iParam1) - func_141(iParam0));
		iVar7 = (func_140(iParam1) - func_140(iParam0));
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
		iVar4 = (iVar4 + func_139(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_138(to_float(iVar0 + 1), 0f, 12f));
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

float func_138(float fParam0, float fParam1, float fParam2)
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

int func_139(int iParam0, int iParam1)
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

int func_140(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_141(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_142(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_143(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_144(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_145(unk_0x0E4018692D92041D(iParam0, 31), -1, 1)) + 2011;
}

int func_145(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_146(int iParam0)
{
	return iParam0 & 15;
}

int func_147(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_155(iParam1) || !func_155(iParam0))
	{
		return 1;
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
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_148()
{
	var uVar0;
	
	func_154(&uVar0, unk_0xE6A7CE90720B9037());
	func_153(&uVar0, unk_0x7EA67BD818402745());
	func_152(&uVar0, unk_0x13348E86D5B8A052());
	func_151(&uVar0, unk_0x020A28FAE1C09250());
	func_150(&uVar0, unk_0x2C02CAA9C4127339());
	func_149(&uVar0, unk_0xED3F08F762AAA55A());
	return uVar0;
}

void func_149(var uParam0, int iParam1)
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

void func_150(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_151(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_146(*uParam0);
	iVar1 = func_144(*uParam0);
	if (iParam1 < 1 || iParam1 > func_139(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_152(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_153(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_154(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_155(int iParam0)
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
	iVar0 = func_140(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_141(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_142(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_144(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_146(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_143(iParam0);
	if (iVar5 < 1 || iVar5 > func_139(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_156(int iParam0, int iParam1)
{
	if (unk_0x0E4018692D92041D(Global_106565.f_24989.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)
{
	int iVar0;
	
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				iVar0 = func_39();
				if (!func_41(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_165()) || Global_105612) || Global_25767) || func_164()) || func_88(8, -1)) || func_163()) || func_162()) || func_161()) || func_160()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1) || func_165()) || Global_25767) || func_164()) || func_88(8, -1)) || func_161()) || func_163()) || func_162()) || func_160()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_165()) || Global_105612) || Global_25767) || func_164()) || func_88(8, -1)) || func_161()) || func_163()) || func_162()) || func_160()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_165()) || Global_105612) || Global_25767) || func_164()) || func_88(8, -1)) || func_163()) || func_162()) || func_160()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_165() || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || func_88(8, -1)) || func_160()) || func_159()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_88(8, -1) || func_163()) || func_162()) || func_159()) || func_158())
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
							if ((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_165()) || Global_25767) || func_164()) || func_88(8, -1)) || func_162()) || func_161()) || func_160()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || func_165()) || func_162()) || Global_105612) || Global_25767) || func_164()) || Global_37584) || func_88(8, -1)) || func_161()) || func_159()) || func_160()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0)) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1)) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0x04571D88090E0F77(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_165()) || Global_105612) || Global_25767) || func_164()) || func_88(8, -1)) || func_161()) || func_159()) || func_163()) || func_162()) || func_160())
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

var func_158()
{
	return Global_93721.f_1;
}

int func_159()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_160()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_161()
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

bool func_162()
{
	return Global_93734.f_340 > 0;
}

bool func_163()
{
	return Global_93734.f_339 > 0;
}

var func_164()
{
	return Global_1312867;
}

int func_165()
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_166()
{
	func_86();
	if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_167(int iParam0)
{
	return func_147(func_148(), iParam0);
}

int func_168(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_39();
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

int func_169(int iParam0)
{
	if (!func_41(iParam0))
	{
		return 7;
	}
	return Global_106565.f_7682.f_919[iParam0];
}

bool func_170(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_172())
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

int func_171()
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

int func_172()
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

void func_173()
{
	int iVar0;
	
	if (iLocal_282 && !iLocal_105)
	{
		unk_0x0ADAD7B4709951D1();
		unk_0x4B06B5746CBEC99F(1f);
		if (unk_0xE38E3CF1625A4145(iLocal_89))
		{
			unk_0x1ABDB383C83A336A(&iLocal_89);
		}
		if (unk_0xE38E3CF1625A4145(iLocal_90))
		{
			unk_0x1ABDB383C83A336A(&iLocal_90);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xE38E3CF1625A4145(iLocal_93[iVar0]))
			{
				unk_0x1ABDB383C83A336A(&(iLocal_93[iVar0]));
			}
			if (unk_0xE38E3CF1625A4145(uLocal_95[iVar0]))
			{
				unk_0x1ABDB383C83A336A(&(uLocal_95[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_83[iVar0]))
					{
						if (unk_0x335C0645074963FE(iLocal_83[iVar0], unk_0x33CD235DF1E6A94E(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xE38E3CF1625A4145(iLocal_94[iVar0]))
			{
				unk_0x1ABDB383C83A336A(&(iLocal_94[iVar0]));
			}
			if (unk_0xE38E3CF1625A4145(uLocal_96[iVar0]))
			{
				unk_0x1ABDB383C83A336A(&(uLocal_96[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_84[iVar0]))
					{
						if (unk_0x335C0645074963FE(iLocal_84[iVar0], unk_0x33CD235DF1E6A94E(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_44 >= 1)
		{
			unk_0xA53C1C92EE35EC0E(5, true);
			unk_0xA53C1C92EE35EC0E(3, true);
		}
		if (bLocal_109)
		{
			func_3(func_39(), 1, 25000);
		}
	}
	func_174(-1);
	unk_0x5894DC159447E10A();
}

void func_174(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_63();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_127())
	{
		func_178(iParam0);
		unk_0xF72C40745AA793F1(0, 0);
		Global_106556 = unk_0xE3903F59E2F22150();
		func_177(30000);
		StringCopy(&cVar0, func_176(Global_106554, 1), 64);
		if (func_62(Global_106554) > 0)
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
	func_175(&Global_25824);
	Global_106555 = 0;
	func_130(-1);
}

void func_175(var uParam0)
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

char* func_176(int iParam0, bool bParam1)
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

void func_177(int iParam0)
{
	Global_36976 = (unk_0xE3903F59E2F22150() + iParam0);
}

void func_178(int iParam0)
{
	func_179(iParam0, 0, func_184(iParam0));
}

void func_179(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_148();
	func_182(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_181(iParam0, &uVar0);
	Var1 = { func_180(&uVar0) };
}

struct<16> func_180(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
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
	StringConCat(&Var0, ":", 64);
	iVar1 = func_140(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_143(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_146(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_144(*uParam0), 64);
	return Var0;
}

void func_181(int iParam0, var uParam1)
{
	Global_106565.f_24989.f_43[iParam0] = *uParam1;
}

void func_182(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_144(*uParam0);
	iVar1 = func_146(*uParam0);
	iVar2 = func_143(*uParam0);
	iVar3 = func_142(*uParam0);
	iVar4 = func_141(*uParam0);
	iVar5 = func_140(*uParam0);
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
	iVar6 = func_139(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_139(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_183(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_183(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_154(uParam0, iParam1);
	func_153(uParam0, iParam2);
	func_152(uParam0, iParam3);
	func_150(uParam0, iParam5);
	func_151(uParam0, iParam4);
	func_149(uParam0, iParam6);
}

int func_184(int iParam0)
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

