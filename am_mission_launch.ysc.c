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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	struct<22> Local_103 = { 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<14> Local_107 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_108[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	struct<2> Local_123 = { 0, 0 } ;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 16;
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
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
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
	char* sLocal_295 = NULL;
	struct<21> Local_296 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	func_387(ScriptParam_296);
	while (true)
	{
		func_386();
		if (func_375() || !func_374(unk_0x95B959F18401C09A(), 0, 1))
		{
			func_372();
		}
		switch (func_371(unk_0x72B85B341ADBE9DE()))
		{
			case 0:
				if (func_370() == 2)
				{
					vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_1 = 2;
				}
				else if (func_370() == 6)
				{
					vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_1 = 5;
				}
				break;
			
			case 2:
				if (func_370() == 2)
				{
					func_363();
					func_54();
				}
				else if (func_370() == 6)
				{
					vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_1 = 5;
				}
				if (((func_51(unk_0x95B959F18401C09A(), 1) || func_48(unk_0x95B959F18401C09A())) || unk_0x0E4018692D92041D(iLocal_111, 8)) || unk_0x0E4018692D92041D(iLocal_111, 16))
				{
					vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_1 = 6;
				}
				break;
			
			case 5:
				func_47(&(Local_103.f_19));
				if (func_46(&(Local_103.f_19)))
				{
					vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_1 = 6;
				}
				break;
			
			case 3:
				vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_1 = 6;
			
			case 6:
				func_372();
				break;
		}
		if (unk_0x06C1EBC003C18F1F())
		{
			switch (func_370())
			{
				case 0:
					func_45(&(Local_103.f_17), 0, 0);
					Local_103.f_1 = 2;
					break;
				
				case 2:
					func_41();
					func_39();
					func_3();
					if (func_1())
					{
						Local_103.f_1 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

bool func_2()
{
	return unk_0x0E4018692D92041D(Local_103, 6);
}

void func_3()
{
	if (unk_0x06C1EBC003C18F1F())
	{
		switch (Local_103.f_2)
		{
			case 0:
				if (!unk_0x0E4018692D92041D(Local_103, 10))
				{
					if (func_38(&(Local_103.f_17), 300000, 0))
					{
						unk_0x8950ED5730F62EE8(&Local_103, 10);
					}
				}
				if (!unk_0x0E4018692D92041D(Local_103, 10))
				{
					if (unk_0x0E4018692D92041D(Local_103, 0))
					{
						Local_103.f_5 = func_37();
						Local_103.f_2 = 1;
						Local_103.f_4 = 0;
					}
				}
				break;
			
			case 1:
				if (func_6())
				{
					unk_0x8950ED5730F62EE8(&Local_103, 3);
					unk_0xCE689A8E8C42ED78(&Local_103, 13);
					func_45(&(Local_103.f_21), 0, 0);
					Local_103.f_2 = 2;
				}
				break;
			
			case 2:
				if (unk_0x0E4018692D92041D(Local_103, 4))
				{
					func_4(Local_103.f_5);
					Local_103.f_2 = 7;
				}
				break;
			
			case 7:
				func_4(Local_103.f_5);
				break;
			}
	}
}

void func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_5(&(Local_103.f_9[0]));
			func_5(&(Local_103.f_12[0]));
			break;
	}
}

void func_5(var uParam0)
{
	int iVar0;
	
	if (unk_0x4F94F07DAD382CDA(*uParam0))
	{
		iVar0 = unk_0xF2D53AA87148ACED(*uParam0);
		unk_0x4955686EF8308B47(&iVar0);
	}
}

int func_6()
{
	if (Local_103.f_5 == 0)
	{
		if (!unk_0x0E4018692D92041D(Local_103, 1))
		{
			iLocal_119 = 0;
			iLocal_120 = unk_0x9EC3B269A34A2BEE(0, 5);
			iLocal_106 = 0;
			Local_103.f_3 = -1;
			Local_103.f_4 = 0;
			unk_0x8950ED5730F62EE8(&Local_103, 1);
		}
		if (!unk_0x0E4018692D92041D(Local_103, 2))
		{
			if (func_36())
			{
				unk_0x8950ED5730F62EE8(&Local_103, 2);
			}
		}
		else if (func_7())
		{
			return 1;
		}
	}
	return 0;
}

int func_7()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	iVar0 = func_35();
	iVar1 = func_34();
	if (!unk_0x4F94F07DAD382CDA(Local_103.f_12[0]))
	{
		if (Local_103.f_15 == 0)
		{
			unk_0x9D34F024713B3952(1);
			Local_103.f_15 = 1;
		}
		if (!unk_0x0E4018692D92041D(Local_103, 13))
		{
			if (unk_0x9907FB1F75C1A914(1))
			{
				if (unk_0xDB7A20748C5E6EF3(1))
				{
					if (func_33(1, 1, 1))
					{
						if (func_27(1, 1, 1))
						{
							unk_0x8950ED5730F62EE8(&Local_103, 13);
						}
					}
				}
			}
		}
		if (unk_0x0E4018692D92041D(Local_103, 13))
		{
			if (func_26(iVar1))
			{
				if (func_26(iVar0))
				{
					if (func_14(&vVar2, &fVar3))
					{
						if (func_11(&(Local_103.f_12[0]), iVar1, vVar2, fVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							unk_0xAD3D24C8070DA056(unk_0xFC00F22E930BFD55(Local_103.f_12[0]), 1);
							if (unk_0x854E8B95CE1C5D29("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x2EBF31F210B945F6(unk_0xFC00F22E930BFD55(Local_103.f_12[0]), "Not_Allow_As_Saved_Veh", 1);
							}
							Local_103.f_15 = 1;
						}
					}
				}
			}
		}
	}
	if (unk_0x4F94F07DAD382CDA(Local_103.f_12[0]))
	{
		if (!unk_0x4F94F07DAD382CDA(Local_103.f_9[0]))
		{
			if (Local_103.f_16 == 0)
			{
				unk_0x4F8CF72358604361(1);
				Local_103.f_16 = 1;
			}
			if (unk_0xDB7A20748C5E6EF3(1))
			{
				if (func_26(iVar0))
				{
					if (func_9(Local_103.f_12[0]))
					{
						if (unk_0x6F3D61B58C7B4025(Local_103.f_12[0]))
						{
							if (func_8(&(Local_103.f_9[0]), Local_103.f_12[0], 26, iVar0, -1, 1, 1, 1))
							{
								unk_0xAD3D24C8070DA056(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), 1);
								unk_0x428C55A965F78103(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), 1, 0);
								unk_0x4A852F02088ECC9D(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), 1);
								unk_0x0648A75D3F60E864(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), Global_1574990);
								unk_0x428C55A965F78103(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), 1, 0);
								unk_0x7FC2040EB34E0E31(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), round((200f * Global_262145.f_153)), 0);
								Local_103.f_16 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!unk_0x4F94F07DAD382CDA(Local_103.f_9[0]) || !unk_0x4F94F07DAD382CDA(Local_103.f_12[0]))
	{
		return 0;
	}
	return 1;
}

int func_8(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xDB7A20748C5E6EF3(1))
	{
		return 0;
	}
	if (!unk_0x22C3124A898FB82A(uParam1))
	{
		return 0;
	}
	if (!unk_0x91D5C8283D19AF49(unk_0xFC00F22E930BFD55(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x50403C3BFA227FE5(unk_0xE196503B36B6194B(unk_0xFC00F22E930BFD55(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x22C3124A898FB82A(*uParam0))
	{
		unk_0xFE8201EFB515D77B(unk_0xBB28786B7F552D0B(*uParam0), iParam7);
		if (unk_0x0371ECBEC27AF4BE(unk_0xBB28786B7F552D0B(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x841CC2A685D6AF3C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_9(var uParam0)
{
	if (unk_0x22C3124A898FB82A(uParam0))
	{
		return !func_10(unk_0xFC00F22E930BFD55(uParam0));
	}
	return 0;
}

int func_10(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0xD62C4419A41F106A(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0xE96A50F1DE6657CB(iParam1))
	{
		return 0;
	}
	if (!unk_0x9907FB1F75C1A914(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0xB7350047030F7672(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0xC651C43AB13A15E5(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0x765F6FEEFF39224F(iVar1))
	{
		*uParam0 = unk_0x0C9AA119B878DDB0(iVar1);
		Global_2528542.f_6212 = iVar1;
		if (unk_0x22C3124A898FB82A(*uParam0))
		{
			if (bParam13)
			{
				unk_0xA6C43DE7267202AC(iVar1, 1);
			}
			unk_0xFE8201EFB515D77B(iVar1, iParam8);
			if (unk_0x0371ECBEC27AF4BE(iVar1))
			{
				if (bParam6)
				{
					unk_0x841CC2A685D6AF3C(*uParam0, 1);
				}
				else
				{
					unk_0x841CC2A685D6AF3C(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x5A48E05E63034C1F(*uParam0, unk_0x95B959F18401C09A(), 1);
				}
			}
			unk_0x2D5A67427544788C(iVar1, bParam7);
			unk_0x720715BA9E55E55A(iVar1, 1);
			if (bParam10)
			{
				unk_0xCBE9DB870BCC6085(iVar1);
				unk_0xF49FF7B4A27C1B94(iVar1, 5, 5, 1f);
			}
			func_12(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_12(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_13(unk_0x95B959F18401C09A(), vParam0, iParam2) > -1)
	{
		if ((Global_2405071.f_2908[1 /*6*/].f_5 == iParam3 && Global_2405071.f_2908[1 /*6*/].f_4 == iParam2) && vdist(Global_2405071.f_2908[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405071.f_2908[iVar0 /*6*/] = { Global_2405071.f_2908[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405071.f_2908[1 /*6*/] = { vParam0 };
		Global_2405071.f_2908[1 /*6*/].f_3 = fParam1;
		Global_2405071.f_2908[1 /*6*/].f_4 = iParam2;
		Global_2405071.f_2908[1 /*6*/].f_5 = iParam3;
	}
}

int func_13(int iParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				vVar2 = { vParam1 };
				if (unk_0x7EECA16E87982278((Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_14(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (!func_25(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_120)
	{
		case 0:
			if (unk_0x0E4018692D92041D(Local_103.f_4, iLocal_120))
			{
				vVar0 = { -1232.842f, -1095.003f, 2.2331f };
				vVar1 = { -1226.248f, -1089.819f, 10.1513f };
				vVar2 = { func_24(0, 0) };
				fVar3 = 19.7853f;
			}
			break;
		
		case 1:
			if (unk_0x0E4018692D92041D(Local_103.f_4, iLocal_120))
			{
				vVar0 = { -622.0966f, 250.3288f, 75.7075f };
				vVar1 = { -614.8635f, 255.2288f, 88.7755f };
				vVar2 = { func_24(0, 1) };
				fVar3 = 266.4686f;
			}
			break;
		
		case 2:
			if (unk_0x0E4018692D92041D(Local_103.f_4, iLocal_120))
			{
				vVar0 = { 794.4784f, -2034.339f, 25.2469f };
				vVar1 = { 798.8026f, -2026.004f, 33.2793f };
				vVar2 = { func_24(0, 2) };
				fVar3 = 355.9428f;
			}
			break;
		
		case 3:
			if (unk_0x0E4018692D92041D(Local_103.f_4, iLocal_120))
			{
				vVar0 = { -1623.919f, 1249.831f, 135.2495f };
				vVar1 = { -1621.554f, 1257.98f, 145.2376f };
				vVar2 = { func_24(0, 3) };
				fVar3 = 353.7463f;
			}
			break;
		
		case 4:
			if (unk_0x0E4018692D92041D(Local_103.f_4, iLocal_120))
			{
				vVar0 = { 1118.077f, 1875.035f, 60.3776f };
				vVar1 = { 1127.638f, 1883.083f, 70.1053f };
				vVar2 = { func_24(0, 4) };
				fVar3 = 201.3967f;
			}
			break;
	}
	if (iLocal_120 < 5)
	{
		if (!func_25(vVar0, 0f, 0f, 0f, 0))
		{
			if (Local_103.f_3 == -1)
			{
				Local_103.f_3 = unk_0xB3D3EE75FE0655B0(vVar0, vVar1);
			}
			else if (unk_0xDBB7D36074C0B9BB(Local_103.f_3))
			{
				if (unk_0xE40EE4752202D0CE(Local_103.f_3))
				{
					if (!unk_0x78AF9E1E56A2B5D5(Local_103.f_3))
					{
						if (!func_15(vVar2, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { vVar2 };
							*uParam1 = fVar3;
							unk_0x0341DAD0128E99C8(Local_103.f_3);
							return 1;
						}
						else
						{
							iLocal_120++;
							unk_0x0341DAD0128E99C8(Local_103.f_3);
							Local_103.f_3 = -1;
						}
					}
					else
					{
						iLocal_120++;
						unk_0x0341DAD0128E99C8(Local_103.f_3);
						Local_103.f_3 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_120++;
		}
	}
	else
	{
		iLocal_120 = 0;
	}
	return 0;
}

int func_15(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_374(unk_0x95B959F18401C09A(), 1, 1))
		{
			if (!unk_0xBB5E373390A5F824())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x16E00F066AFFEA0D(func_20(unk_0x95B959F18401C09A()), vParam0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x73E7A21FD53144AB(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_374(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x95B959F18401C09A()))
				{
					if ((func_16(iVar1) || !bParam8) && !Global_2424047[iVar1 /*416*/].f_259)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x12D3B4C76D4AAB00(iVar1) == -1)
							{
								if (unk_0x12D3B4C76D4AAB00(iVar1) == unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x12D3B4C76D4AAB00(iVar1) != unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()))) || unk_0x12D3B4C76D4AAB00(iVar1) == -1)
							{
								if (unk_0x16E00F066AFFEA0D(func_20(iVar1), vParam0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x0E3238518B355643(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x12D3B4C76D4AAB00(iVar1) != iParam6 || unk_0x12D3B4C76D4AAB00(iVar1) == -1)
						{
							if (unk_0x16E00F066AFFEA0D(func_20(iVar1), vParam0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x0E3238518B355643(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_16(int iParam0)
{
	if (unk_0x0A4B2B44CD064704(unk_0x378BD4B3881338C2(iParam0)) || Global_2424047[iParam0 /*416*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312745;
}

Vector3 func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_23() && Global_1589819[iVar0 /*818*/].f_789) && !func_22(Global_1589819[iVar0 /*818*/].f_790))
	{
		return Global_1589819[iVar0 /*818*/].f_790;
	}
	return func_21(iParam0);
}

Vector3 func_21(int iParam0)
{
	return unk_0xFBB1F99A825CAB09(unk_0x378BD4B3881338C2(iParam0), 0);
}

int func_22(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_23()
{
	return Global_2448756.f_16;
}

Vector3 func_24(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				vVar0 = { -1228.99f, -1092.231f, 7.0465f };
			}
			else if (iParam1 == 1)
			{
				vVar0 = { -618.6293f, 252.6611f, 80.5897f };
			}
			else if (iParam1 == 2)
			{
				vVar0 = { 796.6768f, -2029.602f, 28.1346f };
			}
			else if (iParam1 == 3)
			{
				vVar0 = { -1622.881f, 1253.516f, 139.6713f };
			}
			else if (iParam1 == 4)
			{
				vVar0 = { 1123.27f, 1878.917f, 65.7957f };
			}
			break;
	}
	return vVar0;
}

bool func_25(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_26(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xB815670C37E03CDE(iParam0);
	return unk_0x5D98D654CDC2165A(iParam0);
}

bool func_27(int iParam0, bool bParam1, bool bParam2)
{
	return func_28(0, iParam0, 1, bParam1, bParam2);
}

int func_28(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0E4018692D92041D(Global_1383928, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_32(iParam0) - func_31(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_31(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_32(iParam0) - func_30(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_31(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_32(iParam0) - func_31(iParam0, 1));
		}
		if (!bParam4 && Global_1589819[unk_0x95B959F18401C09A() /*818*/] != 3)
		{
			iVar1 = (iVar1 - func_29(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1383928.f_1;
			break;
		
		case 1:
			return Global_1383928.f_2;
			break;
		
		case 2:
			return Global_1383928.f_3;
			break;
	}
	return 0;
}

int func_31(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x95B959F18401C09A();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xE36862B47CD70685())
			{
				return Global_2424047[iVar0 /*416*/].f_209;
			}
			else
			{
				return unk_0x276149CFFB30EADE(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xE36862B47CD70685())
			{
				return Global_2424047[iVar0 /*416*/].f_210;
			}
			else
			{
				return unk_0x04C948F9025CE510(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xE36862B47CD70685())
			{
				return Global_2424047[iVar0 /*416*/].f_211;
			}
			else
			{
				return unk_0x88CD84C553EF6ED9(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1383936;
			break;
		
		case 1:
			return Global_1383937;
			break;
		
		case 2:
			return Global_1383938;
			break;
	}
	return 0;
}

bool func_33(int iParam0, bool bParam1, bool bParam2)
{
	return func_28(1, iParam0, 1, bParam1, bParam2);
}

int func_34()
{
	return joaat("cavalcade");
}

int func_35()
{
	return joaat("a_m_y_business_03");
}

int func_36()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5;
	
	if (unk_0x0E4018692D92041D(Local_103, 1))
	{
		if (iLocal_106 >= vLocal_108.x)
		{
			if (iLocal_119 < 5)
			{
				iLocal_119++;
			}
			iLocal_106 = 0;
		}
		if (iLocal_106 == 0)
		{
			unk_0x8950ED5730F62EE8(&iLocal_111, 1);
		}
		if (iLocal_119 < 5)
		{
			iVar5 = iLocal_106;
			if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar5)))
			{
				iVar0 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar5));
				if (func_374(iVar0, 1, 1))
				{
					iVar1 = unk_0x378BD4B3881338C2(iVar0);
					if (unk_0x0E4018692D92041D(iLocal_111, 1))
					{
						vVar2 = { func_24(Local_103.f_5, iLocal_119) };
						vVar3 = { unk_0xFBB1F99A825CAB09(iVar1, 0) };
						fVar4 = unk_0x16E00F066AFFEA0D(vVar2, vVar3, 1);
						if (fVar4 < 300f)
						{
							unk_0xCE689A8E8C42ED78(&iLocal_111, 1);
						}
					}
				}
			}
			iLocal_106++;
			if (iLocal_106 == vLocal_108.x)
			{
				if (unk_0x0E4018692D92041D(iLocal_111, 1))
				{
					unk_0x8950ED5730F62EE8(&(Local_103.f_4), iLocal_119);
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_37()
{
	return 0;
}

int func_38(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_45(uParam0, bParam2, 0);
	if (unk_0xB331FCEB94EB05C8() && !bParam2)
	{
		if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0xE3903F59E2F22150(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_39()
{
	if (unk_0x06C1EBC003C18F1F())
	{
		switch (Local_103.f_6)
		{
			case 0:
				if (unk_0x4F94F07DAD382CDA(Local_103.f_9[0]) && unk_0x4F94F07DAD382CDA(Local_103.f_12[0]))
				{
					Local_103.f_6 = 1;
				}
				break;
			
			case 1:
				if (unk_0x4F94F07DAD382CDA(Local_103.f_9[0]))
				{
					if (!func_40(Local_103.f_9[0]))
					{
						if (unk_0x4F94F07DAD382CDA(Local_103.f_12[0]))
						{
							if (func_9(Local_103.f_12[0]))
							{
								if (unk_0xEE984ED4E4A374BE(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), unk_0xFC00F22E930BFD55(Local_103.f_12[0])))
								{
									if (unk_0x0E4018692D92041D(Local_103, 7))
									{
										unk_0x8950ED5730F62EE8(&Local_103, 9);
										Local_103.f_6 = 2;
									}
									else if (unk_0x0E4018692D92041D(Local_103, 14))
									{
										unk_0x8950ED5730F62EE8(&Local_103, 9);
										Local_103.f_6 = 2;
									}
									else if (unk_0x0E4018692D92041D(Local_103, 19))
									{
										Local_103.f_6 = 3;
									}
								}
								else
								{
									Local_103.f_6 = 4;
								}
							}
							else
							{
								Local_103.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0x4F94F07DAD382CDA(Local_103.f_9[0]))
				{
					if (!func_40(Local_103.f_9[0]))
					{
						if (!unk_0x5C415D10D5CBF689(unk_0xBB28786B7F552D0B(Local_103.f_9[0])))
						{
							Local_103.f_6 = 4;
						}
						else if (unk_0x4F94F07DAD382CDA(Local_103.f_12[0]))
						{
							if (!func_9(Local_103.f_12[0]))
							{
								Local_103.f_6 = 3;
							}
							else if (unk_0x0E4018692D92041D(Local_103, 19))
							{
								Local_103.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 3:
				if (unk_0x4F94F07DAD382CDA(Local_103.f_9[0]))
				{
					if (!func_40(Local_103.f_9[0]))
					{
						if (!unk_0xF0D230FB550CD6EB(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), 0))
						{
							Local_103.f_6 = 4;
						}
					}
				}
				break;
			
			case 4:
				break;
			}
	}
}

int func_40(var uParam0)
{
	if (unk_0x22C3124A898FB82A(uParam0))
	{
		return unk_0xBC2FC12AD0FBF72E(unk_0xBB28786B7F552D0B(uParam0));
	}
	return 1;
}

void func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x06C1EBC003C18F1F())
	{
		if (iLocal_105 >= vLocal_108.x)
		{
			iLocal_105 = 0;
			iLocal_118 = 0;
			unk_0xCE689A8E8C42ED78(&iLocal_111, 0);
			unk_0x8950ED5730F62EE8(&iLocal_111, 5);
			unk_0xCE689A8E8C42ED78(&Local_103, 5);
			unk_0xCE689A8E8C42ED78(&Local_103, 17);
			unk_0xCE689A8E8C42ED78(&iLocal_111, 14);
			unk_0xCE689A8E8C42ED78(&iLocal_111, 19);
			if (!unk_0x0E4018692D92041D(Local_103, 16))
			{
				if (unk_0x0E4018692D92041D(Local_103, 18))
				{
					if (!unk_0x0E4018692D92041D(Local_103, 4))
					{
						unk_0x8950ED5730F62EE8(&Local_103, 16);
					}
				}
			}
			if (func_44(&(Local_103.f_21)))
			{
				if (!unk_0x0E4018692D92041D(Local_103, 12))
				{
					if (func_38(&(Local_103.f_21), 360000, 0))
					{
						unk_0x8950ED5730F62EE8(&Local_103, 12);
					}
					if (!unk_0x0E4018692D92041D(Local_103, 15))
					{
						if (func_38(&(Local_103.f_21), 240000, 0))
						{
							unk_0x8950ED5730F62EE8(&Local_103, 15);
						}
					}
				}
				else
				{
					unk_0x8950ED5730F62EE8(&iLocal_111, 9);
				}
			}
		}
		iVar0 = iLocal_105;
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar0)))
		{
			iVar3 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar0));
			iVar2 = iVar3;
			if (unk_0x0E4018692D92041D(iLocal_111, 5))
			{
				if (vLocal_108[iVar0 /*3*/].f_2 < 7)
				{
					unk_0xCE689A8E8C42ED78(&iLocal_111, 5);
				}
			}
			if (!unk_0x0E4018692D92041D(Local_103, 0))
			{
				if (unk_0x0E4018692D92041D(vLocal_108[iVar0 /*3*/], 0))
				{
					iLocal_118++;
				}
			}
			else if (unk_0x0E4018692D92041D(vLocal_108[iVar0 /*3*/], 2))
			{
				if (!unk_0x0E4018692D92041D(Local_103, 17))
				{
					if (!unk_0x0E4018692D92041D(Local_103.f_7, iVar2))
					{
						if (vLocal_108[iVar0 /*3*/].f_2 > 4)
						{
							unk_0x8950ED5730F62EE8(&(Local_103.f_7), iVar2);
							unk_0x8950ED5730F62EE8(&Local_103, 17);
						}
					}
				}
				if (!unk_0x0E4018692D92041D(Local_103, 5))
				{
					unk_0x8950ED5730F62EE8(&Local_103, 5);
				}
				if (!unk_0x0E4018692D92041D(Local_103, 4))
				{
					if (unk_0x0E4018692D92041D(vLocal_108[iVar0 /*3*/], 1))
					{
						Local_103.f_8 = iVar3;
						unk_0x8950ED5730F62EE8(&Local_103, 4);
						unk_0xCE689A8E8C42ED78(&iLocal_111, 15);
						unk_0xCE689A8E8C42ED78(&Local_103, 18);
					}
				}
				if (!unk_0x0E4018692D92041D(Local_103, 4))
				{
					if (!unk_0x0E4018692D92041D(Local_103, 18))
					{
						if (unk_0x0E4018692D92041D(vLocal_108[iVar0 /*3*/], 7))
						{
							unk_0x8950ED5730F62EE8(&Local_103, 18);
						}
					}
				}
				if (unk_0x0E4018692D92041D(iLocal_111, 9))
				{
					if (unk_0x0E4018692D92041D(vLocal_108[iVar0 /*3*/], 5))
					{
						unk_0xCE689A8E8C42ED78(&iLocal_111, 9);
					}
				}
				if (!unk_0x0E4018692D92041D(iLocal_111, 14))
				{
					if (unk_0x0E4018692D92041D(vLocal_108[iVar0 /*3*/], 6))
					{
						unk_0x8950ED5730F62EE8(&iLocal_111, 14);
					}
				}
				if (!unk_0x0E4018692D92041D(iLocal_111, 20))
				{
					if (unk_0x0E4018692D92041D(vLocal_108[iVar0 /*3*/], 8))
					{
						unk_0x8950ED5730F62EE8(&iLocal_111, 20);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar1)))
			{
				func_43(iVar1);
			}
			iVar1++;
		}
		iLocal_105++;
		if (iLocal_105 >= vLocal_108.x)
		{
			if (!unk_0x0E4018692D92041D(Local_103, 16))
			{
				if (unk_0x4F94F07DAD382CDA(Local_103.f_9[0]))
				{
					if (func_40(Local_103.f_9[0]))
					{
						if (!unk_0x0E4018692D92041D(Local_103, 4))
						{
							if (unk_0x0E4018692D92041D(iLocal_111, 15))
							{
								if (!func_44(&uLocal_116))
								{
									func_45(&uLocal_116, 0, 0);
								}
								else if (func_38(&uLocal_116, 2000, 0))
								{
									unk_0x8950ED5730F62EE8(&Local_103, 16);
								}
							}
						}
					}
				}
			}
			unk_0x8950ED5730F62EE8(&iLocal_111, 0);
			if (!unk_0x0E4018692D92041D(Local_103, 0))
			{
				if (iLocal_118 >= 1)
				{
					unk_0x8950ED5730F62EE8(&Local_103, 0);
				}
			}
			if (!unk_0x0E4018692D92041D(Local_103, 14))
			{
				if (unk_0x0E4018692D92041D(iLocal_111, 14))
				{
					unk_0x8950ED5730F62EE8(&Local_103, 14);
				}
			}
			if (!unk_0x0E4018692D92041D(Local_103, 19))
			{
				if (unk_0x0E4018692D92041D(iLocal_111, 20))
				{
					unk_0x8950ED5730F62EE8(&Local_103, 19);
				}
			}
			if (!unk_0x0E4018692D92041D(Local_103, 6))
			{
				if (unk_0x0E4018692D92041D(iLocal_111, 5))
				{
					if (Local_103.f_2 > 1 && Local_103.f_2 <= 7)
					{
						unk_0x8950ED5730F62EE8(&Local_103, 6);
					}
					else if (unk_0x0E4018692D92041D(Local_103, 10))
					{
						unk_0x8950ED5730F62EE8(&Local_103, 6);
					}
				}
			}
			if (unk_0x0E4018692D92041D(Local_103, 17))
			{
				unk_0xCE689A8E8C42ED78(&Local_103, 17);
				unk_0xCE689A8E8C42ED78(&Local_103, 15);
				unk_0xCE689A8E8C42ED78(&Local_103, 12);
				func_42(&(Local_103.f_21));
				func_45(&(Local_103.f_21), 0, 0);
			}
			if (!unk_0x0E4018692D92041D(Local_103, 11))
			{
				if (unk_0x0E4018692D92041D(Local_103, 12))
				{
					if (unk_0x0E4018692D92041D(iLocal_111, 9))
					{
						unk_0x8950ED5730F62EE8(&Local_103, 11);
					}
				}
			}
		}
	}
}

void func_42(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_43(int iParam0)
{
	if (unk_0x06C1EBC003C18F1F())
	{
		if (!unk_0x0E4018692D92041D(Local_103, 7))
		{
			if (unk_0x0E4018692D92041D(vLocal_108[iParam0 /*3*/], 3))
			{
				unk_0x8950ED5730F62EE8(&Local_103, 7);
			}
		}
	}
}

bool func_44(var uParam0)
{
	return uParam0->f_1;
}

void func_45(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xB331FCEB94EB05C8() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x78DCC5D0CB43DEBA();
			}
			else
			{
				*uParam0 = unk_0x765FF3592EC81689();
			}
		}
		else
		{
			*uParam0 = unk_0xE3903F59E2F22150();
		}
		uParam0->f_1 = 1;
	}
}

int func_46(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_47(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x06C1EBC003C18F1F())
		{
			func_45(uParam0, 0, 0);
		}
	}
}

int func_48(int iParam0)
{
	if (func_50(iParam0))
	{
		if (!func_49(iParam0, 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_49(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_208, iParam1);
}

int func_50(int iParam0)
{
	if (Global_2424047[iParam0 /*416*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_51(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_52(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589819[iParam0 /*818*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_52(int iParam0)
{
	return func_53(iParam0);
}

bool func_53(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

void func_54()
{
	func_354();
	func_351();
	if (unk_0x0E4018692D92041D(Local_103, 10))
	{
		if (vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 < 6)
		{
			vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 = 6;
		}
	}
	if (unk_0x0E4018692D92041D(Local_103, 4))
	{
		if (vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 <= 6)
		{
			vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 = 6;
		}
	}
	if (unk_0x0E4018692D92041D(Local_103, 16))
	{
		if (!unk_0x0E4018692D92041D(Local_103, 4))
		{
			if (vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 <= 6)
			{
				vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 = 6;
				Local_107.f_2 = 1282557892;
				func_349(Local_107, func_350(1));
			}
		}
	}
	if (unk_0x0E4018692D92041D(Local_103, 11))
	{
		if (vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 <= 6)
		{
			vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 = 6;
			Local_107.f_2 = 1282557892;
			func_349(Local_107, func_350(1));
		}
	}
	if (vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 > 0)
	{
		if (vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 < 6)
		{
			if ((((func_51(unk_0x95B959F18401C09A(), 1) || func_348()) || func_347() > 0) || func_49(unk_0x95B959F18401C09A(), 1)) || func_346())
			{
				vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 = 6;
			}
		}
	}
	if (vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 > 0)
	{
		if (vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 < 6)
		{
			if (func_344(unk_0x95B959F18401C09A()))
			{
				vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 = 6;
			}
		}
	}
	switch (vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2)
	{
		case 0:
			if (unk_0x0E4018692D92041D(vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/], 0))
			{
				if (unk_0x0E4018692D92041D(Local_103, 3))
				{
					if (!unk_0x0E4018692D92041D(Local_103, 15))
					{
						unk_0x8950ED5730F62EE8(&(vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/]), 2);
						func_343(11, 1);
						vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 = 3;
					}
					else
					{
						vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 = 6;
						unk_0x8950ED5730F62EE8(&iLocal_111, 16);
					}
				}
			}
			break;
		
		case 3:
			if (func_342(Local_103.f_5))
			{
				func_341(Local_103.f_5);
				vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 = 4;
			}
			break;
		
		case 4:
			if (!func_340())
			{
				if (func_229())
				{
					vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 = 5;
					func_227(88, 1);
					func_226();
				}
				else if (unk_0x0E4018692D92041D(iLocal_111, 8))
				{
					vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 = 6;
				}
			}
			else if (func_217())
			{
				vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 = 5;
			}
			else
			{
				if (unk_0x0E4018692D92041D(iLocal_111, 8))
				{
					vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 = 6;
				}
				if (unk_0x0E4018692D92041D(Local_103, 15))
				{
					func_204(12, 116);
					vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 = 6;
					unk_0x8950ED5730F62EE8(&iLocal_111, 16);
				}
			}
			break;
		
		case 5:
			if (Local_103.f_5 == 0)
			{
				func_63();
			}
			break;
		
		case 6:
			vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/] = 0;
			unk_0xCE689A8E8C42ED78(&iLocal_111, 3);
			unk_0xCE689A8E8C42ED78(&iLocal_111, 4);
			iLocal_110 = 0;
			func_204(12, 116);
			if (unk_0xE38E3CF1625A4145(Global_1657044))
			{
				unk_0x1ABDB383C83A336A(&Global_1657044);
			}
			func_62(&Local_123);
			func_55();
			func_343(11, 0);
			vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 = 7;
			break;
		
		case 7:
			if (Local_103.f_2 == 0 && !unk_0x0E4018692D92041D(Local_103, 10))
			{
				vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 = 0;
			}
			break;
	}
}

void func_55()
{
	if (!func_61())
	{
		return;
	}
	if (!unk_0x36163153849DFDA1(unk_0xD178EF744F20B712()) == Global_1312585.f_9)
	{
		return;
	}
	func_56();
}

void func_56()
{
	func_58();
	func_57(0);
}

void func_57(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xB331FCEB94EB05C8();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = unk_0x78DCC5D0CB43DEBA();
		Global_1312585.f_11 = unk_0x78DCC5D0CB43DEBA();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_58()
{
	if (!func_60())
	{
	}
	if (func_61())
	{
		unk_0xA6DAC1F822246DE2(&(Global_1312585.f_12));
		func_59();
		unk_0xFFC12DB0DD7F299E();
	}
}

void func_59()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xE800DC85FDF60F85(Global_1312585.f_52);
			return;
		
		case 2:
			unk_0xE800DC85FDF60F85(Global_1312585.f_52);
			unk_0xE800DC85FDF60F85(Global_1312585.f_53);
			return;
		
		case 3:
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			return;
		
		case 4:
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 5:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			return;
		
		case 6:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			return;
		
		case 7:
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			return;
		
		case 8:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			return;
		
		case 9:
			unk_0x21471CA300278599(&(Global_1312585.f_16));
			return;
		
		case 10:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_32));
			return;
		
		case 12:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 13:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			unk_0x75D3F9044123D4F9(Global_1312585.f_57);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 11:
			unk_0x21471CA300278599(&(Global_1312585.f_16));
			return;
		
		case 14:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 15:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0x75D3F9044123D4F9(Global_1312585.f_57);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 17:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_32));
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_48));
			return;
		
		case 16:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			return;
		
		case 19:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			return;
		
		case 18:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_48));
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_60()
{
	if (!func_61())
	{
		return 0;
	}
	unk_0x1B3E16C485B8DD94(&(Global_1312585.f_12));
	func_59();
	return unk_0xC8F93D36F11F7BE8();
}

int func_61()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

void func_62(int iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xE38E3CF1625A4145(*iParam0))
	{
		unk_0x1ABDB383C83A336A(iParam0);
		bVar0 = true;
	}
	if (unk_0xE38E3CF1625A4145(iParam0->f_1))
	{
		unk_0x1ABDB383C83A336A(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x765F6FEEFF39224F(iParam0->f_7))
	{
		if (!unk_0xD62C4419A41F106A(iParam0->f_7, 0))
		{
			if (unk_0x9FC2A869F7656459(iParam0->f_7))
			{
				unk_0xE7E396453CA1FDA4(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_63()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0x4F94F07DAD382CDA(Local_103.f_9[0]))
	{
		if (!func_40(Local_103.f_9[0]))
		{
			if (unk_0xE38E3CF1625A4145(Global_1657044))
			{
				if (func_202() || func_201())
				{
					unk_0xAE71BEA7BBBFB78F(Global_1657044, 0);
				}
				else
				{
					unk_0xAE71BEA7BBBFB78F(Global_1657044, 4);
				}
			}
			else
			{
				Global_1657044 = unk_0x8848A15CBDADDC60(unk_0xBB28786B7F552D0B(Local_103.f_9[0]));
				unk_0xB9E84A421C105943(Global_1657044, 1);
				unk_0xCE5C49921A521962(Global_1657044, 0f);
			}
			if (unk_0xE38E3CF1625A4145(Local_123))
			{
				if (func_202() || func_201())
				{
					unk_0xAE71BEA7BBBFB78F(Local_123, 0);
				}
				else
				{
					unk_0xAE71BEA7BBBFB78F(Local_123, 4);
				}
				if (!unk_0x0E4018692D92041D(iLocal_111, 10))
				{
					unk_0x1C95CD840303FC37(Local_123, "FM_GDM_BLP");
					unk_0x8950ED5730F62EE8(&iLocal_111, 10);
				}
			}
			if (unk_0xE38E3CF1625A4145(Local_123.f_1))
			{
				if (func_202() || func_201())
				{
					unk_0xAE71BEA7BBBFB78F(Local_123.f_1, 0);
				}
				else
				{
					unk_0xAE71BEA7BBBFB78F(Local_123.f_1, 4);
				}
				if (!unk_0x0E4018692D92041D(iLocal_111, 12))
				{
					unk_0x1C95CD840303FC37(Local_123.f_1, "FM_GDM_BLP");
					unk_0x8950ED5730F62EE8(&iLocal_111, 12);
				}
			}
			if (!unk_0x0E4018692D92041D(iLocal_111, 6))
			{
				if (!unk_0x0E4018692D92041D(Global_2359302, 7) && !func_185(unk_0x95B959F18401C09A(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
				{
					if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
					{
						if (!func_202())
						{
							func_179("FM_GDM_KIL", 0);
						}
						unk_0x8950ED5730F62EE8(&iLocal_111, 6);
					}
				}
			}
			else if (unk_0x0E4018692D92041D(Global_2359302, 7))
			{
				func_55();
				unk_0xCE689A8E8C42ED78(&iLocal_111, 6);
			}
			else if (func_178())
			{
				func_55();
				unk_0xCE689A8E8C42ED78(&iLocal_111, 6);
			}
			else if (func_185(unk_0x95B959F18401C09A(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				func_55();
				unk_0xCE689A8E8C42ED78(&iLocal_111, 6);
			}
		}
		else if (unk_0x0E4018692D92041D(iLocal_111, 6))
		{
			func_55();
			unk_0xCE689A8E8C42ED78(&iLocal_111, 6);
		}
		if (!unk_0x0E4018692D92041D(vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/], 1))
		{
			iVar1 = unk_0xED8CA182944FBFEA(Local_103.f_9[0], &uVar0);
			if (iVar1 == unk_0x95B959F18401C09A())
			{
				unk_0x8950ED5730F62EE8(&(vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/]), 1);
				iVar2 = func_175(func_177(unk_0x95B959F18401C09A(), 1), 1);
				if (iVar2 > 100)
				{
					iVar2 = 100;
				}
				iVar3 = iVar2 * 20;
				iVar3 = round((Global_262145.f_4228 * IntToFloat(iVar3)));
				func_132(2, "XPT_KAIE", -1859646258, 2131309714, iVar3, 1, -1, 0);
				if (Global_262145.f_2422 != 0f)
				{
					iVar4 = round(Global_262145.f_2422);
				}
				else
				{
					iVar4 = 2000;
				}
				if (Global_262145.f_2418 != 0f)
				{
					iVar5 = round(Global_262145.f_2418);
				}
				else
				{
					iVar5 = 8000;
				}
				if (iVar4 >= 100)
				{
					iVar6 = (iVar4 / 100);
				}
				if (iVar5 >= 100)
				{
					iVar7 = (iVar5 / 100);
				}
				iVar8 = unk_0x9EC3B269A34A2BEE(iVar6, iVar7 + 1) * 100;
				iVar8 = func_131(iVar8, 1);
				if (iVar8 > iVar5)
				{
					iVar8 = iVar5;
				}
				func_79(&iVar8, 1);
				if (func_78())
				{
					if (iVar8 > 0)
					{
						func_66(-352356931, iVar8, &iVar9, 0, 0, 0);
						Global_4263509[iVar9 /*84*/] = -1146479277;
					}
				}
				else
				{
					unk_0x82A80EEFBA2EC1BB(iVar8, -1146479277);
				}
				func_65(5, iVar8);
			}
			else if (iVar1 != func_64())
			{
				if (unk_0xC4DEA49C5B465481(iVar1))
				{
					if (!unk_0x0E4018692D92041D(vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/], 7))
					{
						if (!unk_0x982A72D771CF4FE1(iVar1))
						{
							unk_0x8950ED5730F62EE8(&(vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/]), 7);
						}
					}
				}
			}
		}
	}
}

int func_64()
{
	return -1;
}

void func_65(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23355 == 0 || Global_262145.f_23355 == 1)
		{
			if (!unk_0x4CE1DD5CFC1F941E() || Global_262145.f_23355 == 1)
			{
				Global_2528542.f_274 = iParam0;
				if (iParam1 > Global_262145.f_6475)
				{
					iParam1 = Global_262145.f_6475;
				}
				Global_2528542.f_275 = iParam1;
				Global_2528542.f_276 = 0;
			}
		}
	}
}

void func_66(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_78())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0)
			{
				func_67(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_67(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
			if (iParam1 > 0)
			{
				func_67(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -1693570755:
			func_67(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case 1727256317:
		case -2017925037:
			func_67(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_67(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_78())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xB412AA3DEE298A52(func_19()) || unk_0x2832F5CD8A109CD6())
		{
			Global_4264085 = 1;
			return 0;
		}
		if (Global_2459772)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264086 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263509[iVar2 /*84*/].f_65.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x5787B31B4578002B(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x64875ABCC43EF9A8(iVar4))
		{
			*uParam0 = func_74(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263509[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4263509[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4264070 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264084 = 1;
			Global_4264087 = iParam4;
			Global_4264089 = iParam3;
			Global_4264090 = 1;
			Global_4264088 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264087 = iParam4;
			Global_4264089 = iParam3;
			Global_4264090 = 1;
			Global_4264088 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_73(1, iParam4);
			Global_4264084 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_68(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_68(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x8950ED5730F62EE8(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_69(iParam0);
	}
}

void func_69(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_78())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_72(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9CB3557CC6EF3B3E();
			}
		}
		else if (!bVar0)
		{
			unk_0x8ADF905D8AC780D1(Global_4263509[iParam0 /*84*/].f_65);
		}
		func_70(&(Global_4263509[iParam0 /*84*/]));
	}
}

void func_70(var uParam0)
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_71(&(uParam0->f_13));
	func_71(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_71(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_72(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_73(int iParam0, int iParam1)
{
	Global_2460949 = iParam1;
	Global_2460948 = iParam0;
}

int func_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263509[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_78())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263509[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4263509[iVar0 /*84*/].f_65.f_1 = iParam5;
			Global_4263509[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4263509[iVar0 /*84*/].f_65.f_4 = iParam2;
			Global_4263509[iVar0 /*84*/].f_65.f_7 = iParam3;
			Global_4263509[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4263509[iVar0 /*84*/].f_65 = iParam0;
			Global_4263509[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4263509[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4263509[iVar0 /*84*/].f_65.f_10 = iParam7;
			Global_4263509[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4263509[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4263509[iVar0 /*84*/].f_65.f_14 = unk_0xE77FA521699F639C();
			Global_4263509[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4264070 = 0;
			if (bParam6)
			{
				Global_4263509[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_75(Global_4263509[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_75(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 1803946278;
	vVar0.y = unk_0x95B959F18401C09A();
	vVar0.f_2 = { Param0.f_65 };
	vVar0.f_2.f_32 = iParam19;
	iVar1 = func_77(vVar0.y);
	if ((Global_262145.f_23434 && !Global_262145.f_23435) && !Global_262145.f_23436)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_76();
		unk_0x09269A9CFC145847(1, &vVar0, 35, iVar1);
	}
}

void func_76()
{
	unk_0x8F59DE352CFE248B("AM_ARENA_SHP");
}

var func_77(int iParam0)
{
	var uVar0;
	
	unk_0x8950ED5730F62EE8(&uVar0, iParam0);
	return uVar0;
}

int func_78()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		return unk_0xFCAD2CB678396284();
	}
	return 0;
}

void func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_130())
		{
			if (func_129(0))
			{
				if (!func_125(0))
				{
					if (unk_0xC4DEA49C5B465481(func_124()))
					{
						if (func_123() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_123());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_121(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_84("GB_BCUT_TICK1", func_124(), iVar0, 0, 0, 1, 1);
						}
						func_83(20);
						func_80(func_124(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_80(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_374(iParam0, 0, 1))
	{
		Var0 = 614714962;
		Var0.f_1 = unk_0x95B959F18401C09A();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_82(iParam0);
		func_81(&(Var0.f_6), &(Var0.f_7));
		unk_0x09269A9CFC145847(1, &Var0, 8, func_77(iParam0));
	}
}

void func_81(var uParam0, var uParam1)
{
	*uParam0 = Global_1645834.f_9;
	*uParam1 = Global_1645834.f_10;
}

var func_82(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_529;
}

void func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x8950ED5730F62EE8(&(Global_2528542.f_4889.f_7[iVar0]), iVar1);
}

int func_84(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xEEF8394DB3D3DFA1(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xEEF8394DB3D3DFA1(iParam1), 64);
		}
		if (unk_0x786AF4A44E1B5B4B(&Var1))
		{
		}
		unk_0x1F85AD4B26B92795(sParam0);
		unk_0x75D3F9044123D4F9(func_91(iParam1, -2, 1, 0, 0));
		unk_0xD61E5ED1D4E687A5(func_89(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x75D3F9044123D4F9(iParam3);
		}
		unk_0xE800DC85FDF60F85(iParam2);
		iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
		func_85(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_85(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_88() || !unk_0x289064CB38B560AA()) || !func_17(unk_0x95B959F18401C09A(), 0))
	{
		return;
	}
	iVar0 = func_86(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1665914.f_5[iVar0 /*53*/] = iParam0;
		Global_1665914.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1665914.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1665914.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1665914.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1665914.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1665914.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1665914 - 1))
	{
		if (iParam0 > Global_1665914.f_5[iVar0 /*53*/].f_1)
		{
			func_87(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1665914++;
	if (Global_1665914 > 5)
	{
		Global_1665914 = 5;
		return Global_1665914;
	}
	return (Global_1665914 - 1);
}

void func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1665914.f_5[iVar0 /*53*/] = { Global_1665914.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_88()
{
	return unk_0xE9D7B652961D4AA3(-1762644250);
}

var func_89(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_90(&cVar0);
}

var func_90(char[4] cParam0)
{
	return cParam0;
}

int func_91(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_344(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x12D3B4C76D4AAB00(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_133551[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_344(unk_0x95B959F18401C09A()) || (func_120() && func_119())) && !unk_0x0E4018692D92041D(Global_2528542.f_4582, 31)) && !bParam4)
	{
		iVar1 = func_118();
		if (unk_0x765F6FEEFF39224F(iVar1))
		{
			if (unk_0xE09156665EC2D83B(iVar1))
			{
				if (unk_0x5C7617A25D50AAE9(iVar1) != -1)
				{
					if (func_374(unk_0x5C7617A25D50AAE9(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x289064CB38B560AA()) && iParam1 < 4)
						{
							if (Global_4456448.f_133551[iParam1] != -1)
							{
								return func_116(iParam1, iParam0, 0);
							}
							else
							{
								return func_104(iParam0, unk_0x5C7617A25D50AAE9(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_104(iParam0, unk_0x5C7617A25D50AAE9(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x289064CB38B560AA()) && iParam1 < 4)
			{
				if (Global_4456448.f_133551[iParam1] != -1)
				{
					return func_116(iParam1, iParam0, 0);
				}
				else
				{
					return func_92(0, -1, 0);
				}
			}
			else
			{
				return func_92(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x289064CB38B560AA()) && iParam1 < 4)
	{
		if (Global_4456448.f_133551[iParam1] != -1)
		{
			return func_116(iParam1, iParam0, 0);
		}
		else
		{
			return func_104(iParam0, unk_0x95B959F18401C09A(), iParam1, bParam2, bParam3);
		}
	}
	return func_104(iParam0, unk_0x95B959F18401C09A(), iParam1, bParam2, bParam3);
}

int func_92(bool bParam0, int iParam1, bool bParam2)
{
	return func_93(unk_0x95B959F18401C09A(), bParam0, iParam1, bParam2);
}

int func_93(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xC4DEA49C5B465481(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x12D3B4C76D4AAB00(iParam0);
	if ((func_103() || (func_102() && func_100())) && Global_1382745.f_1)
	{
		if (bParam1)
		{
			return func_99(iParam2, iVar0);
		}
		else
		{
			return func_99(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_98(iVar0, iParam2, 0) && !unk_0x0E4018692D92041D(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_97(1);
				}
				else
				{
					return func_97(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x0E4018692D92041D(Global_4456448.f_4, 20))
			{
				return func_94(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_94(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_97(1);
	}
	return func_97(0);
}

int func_94(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_96(iParam0, iParam1, iParam3);
	if (func_95(Global_4456448.f_138474, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_95(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_161209 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8910[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_96(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_98(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_97(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_98(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 0);
				
				case 1:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 1);
				
				case 2:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 2);
				
				case 3:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 4);
				
				case 1:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 5);
				
				case 2:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 6);
				
				case 3:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 8);
				
				case 1:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 9);
				
				case 2:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 10);
				
				case 3:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 12);
				
				case 1:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 13);
				
				case 2:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 14);
				
				case 3:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_99(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_96(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_100()
{
	if (func_101())
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_4456448.f_165254, 4);
}

bool func_101()
{
	return unk_0x0E4018692D92041D(Global_4456448.f_154961, 12);
}

bool func_102()
{
	if (unk_0x289064CB38B560AA())
	{
		return unk_0x0E4018692D92041D(Global_4456448.f_165254, 0);
	}
	return ((unk_0x0E4018692D92041D(Global_4456448.f_165254, 0) || Global_1648547) && unk_0x1BCDA92AD0A7835B(joaat("fm_deathmatch_creator")) > 0);
}

int func_103()
{
	if (func_101() && unk_0x289064CB38B560AA())
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x12D3B4C76D4AAB00(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589819[unk_0x95B959F18401C09A() /*818*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589819[iVar2 /*818*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_113(1))
			{
				iVar3 = func_109(iParam0);
				if (!iVar3 == -1)
				{
					return func_107(iVar3);
				}
			}
			if ((func_106(iParam1, iParam0, iVar0, 0) && !unk_0x0E4018692D92041D(Global_4456448.f_15, 18)) || ((func_98(unk_0x12D3B4C76D4AAB00(iParam1), unk_0x12D3B4C76D4AAB00(iParam0), 0) && unk_0x0E4018692D92041D(Global_4456448.f_15, 23)) && !unk_0x0E4018692D92041D(Global_4456448.f_15, 18)))
			{
				return func_97(1);
			}
			else if (unk_0x0E4018692D92041D(Global_4456448.f_15, 26))
			{
				return func_105(1);
			}
			else
			{
				return func_93(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574400 || Global_1574391) || Global_1589819[iParam0 /*818*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574400 == 1 && Global_1574410 == 0))
			{
				return func_97(1);
			}
			else
			{
				return func_93(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574395 && Global_1573892.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_109(iParam0);
	if (!iVar4 == -1)
	{
		return func_107(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_105(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_106(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x12D3B4C76D4AAB00(iParam0) == -1 && unk_0x12D3B4C76D4AAB00(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x12D3B4C76D4AAB00(iParam0) == unk_0x12D3B4C76D4AAB00(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x12D3B4C76D4AAB00(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x12D3B4C76D4AAB00(iParam0) == iParam2;
	}
	return unk_0x12D3B4C76D4AAB00(iParam0) == iParam2;
}

int func_107(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_108(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_108(int iParam0)
{
	return Global_2417757.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_109(int iParam0)
{
	if (!iParam0 == func_64())
	{
		if (func_111(iParam0, 1))
		{
			return Global_2417757.f_2105.f_11[func_110(iParam0)];
		}
	}
	return -1;
}

int func_110(int iParam0)
{
	if (iParam0 != func_64())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_64();
}

bool func_111(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_112(iParam0))
		{
			return 0;
		}
	}
	return Global_1626536[iParam0 /*603*/].f_11 != func_64();
}

int func_112(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_64())
		{
			return Global_1626536[iParam0 /*603*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_113(int iParam0)
{
	if ((func_115() || func_114()) || (func_23() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_114()
{
	return Global_2448756.f_15;
}

var func_115()
{
	return Global_2448756.f_14;
}

int func_116(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969025.f_13[iParam0];
	if (func_113(1))
	{
		iVar2 = func_109(iParam1);
		if (!iVar2 == -1)
		{
			return func_107(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x0E4018692D92041D(Global_4456448.f_105[iParam0 /*11309*/].f_5586[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_64())
	{
		if (Global_4456448.f_133551[iParam0] != -1 && Global_4456448.f_133551[iParam0] <= 4)
		{
			if (Global_4456448.f_133551[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_133551[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_133551[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_133551[iParam0] == 4)
			{
				if (unk_0x0E4018692D92041D(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_133551[iParam0];
			}
		}
		else
		{
			iVar0 = func_93(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x0E4018692D92041D(Global_4456448.f_21, 13))
		{
			iVar0 = func_117(iParam0);
		}
		if (unk_0x0E4018692D92041D(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x0E4018692D92041D(Global_4456448.f_15, 26) && !func_98(iParam0, unk_0x12D3B4C76D4AAB00(iParam1), 0))
		{
			iVar0 = func_105(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_117(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_161253;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_161254;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_161255;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_161256;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_118()
{
	return Global_2359302.f_2;
}

bool func_119()
{
	return unk_0x0E4018692D92041D(Global_2359302, 4);
}

bool func_120()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
}

void func_121(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_122(1);
	}
	else
	{
		iVar1 = func_122(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_122(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12281;
}

int func_123()
{
	return Global_262145.f_12280;
}

int func_124()
{
	return Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11;
}

bool func_125(bool bParam0)
{
	return func_126(unk_0x95B959F18401C09A(), bParam0);
}

int func_126(int iParam0, bool bParam1)
{
	return func_127(iParam0, bParam1, 1);
}

int func_127(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_64())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_128(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1626536[iParam0 /*603*/].f_11;
	if (iVar0 != func_64() && Global_1626536[iVar0 /*603*/].f_11.f_447 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0, int iParam1)
{
	if (iParam0 != func_64())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_64())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 == iParam0 && Global_1626536[iParam0 /*603*/].f_11.f_447 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_129(bool bParam0)
{
	return func_111(unk_0x95B959F18401C09A(), bParam0);
}

bool func_130()
{
	return func_112(unk_0x95B959F18401C09A());
}

int func_131(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (to_float(iParam0) * Global_262145);
				iParam0 = round(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

var func_132(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_133(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_133(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_134(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_134(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_174(unk_0x95B959F18401C09A()) || func_173(unk_0x95B959F18401C09A()))
	{
		if (Global_262145.f_9526 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9526;
		}
	}
	else if (func_171() || func_167(unk_0x95B959F18401C09A()))
	{
		if (Global_262145.f_22647 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22647;
		}
	}
	else if (Global_262145.f_6526 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6526;
	}
	if (func_166(sParam2))
	{
	}
	if (func_165())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_163(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_162(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_160(0, &iVar1);
					break;
				
				case 3:
					func_160(1, &iVar1);
					break;
				
				case 1:
					func_157(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1680657)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_154(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_145((func_153(unk_0x95B959F18401C09A()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xE62DD6141BEF78D0(iVar1, iParam8, iParam9);
				if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_2 != -1)
				{
					func_154(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_139(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_135((func_137(unk_0x95B959F18401C09A()) + iVar1));
			}
			else
			{
				func_135((func_137(unk_0x95B959F18401C09A()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_135(int iParam0)
{
	if (func_165())
	{
		Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_5 = iParam0;
		func_136(joaat("mpply_globalxp"), iParam0);
	}
}

void func_136(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, 1);
	}
}

int func_137(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_374(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x95B959F18401C09A())
			{
				return func_138(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_5;
			}
		}
		else
		{
			return func_138(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_138(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_139(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_144(unk_0x95B959F18401C09A()) };
	if (unk_0x062B7A5C795CB453())
	{
		if (unk_0x4A5CDD2BE8070A7F(&Var0))
		{
			iVar1 = func_142(func_143(&Var0));
			if (iVar1 == 0)
			{
				func_141(&Global_1382581, iParam0);
				func_140(joaat("mpply_crew_local_xp_0"), Global_1382581);
			}
			else if (iVar1 == 1)
			{
				func_141(&Global_1382582, iParam0);
				func_140(joaat("mpply_crew_local_xp_1"), Global_1382582);
			}
			else if (iVar1 == 2)
			{
				func_141(&Global_1382583, iParam0);
				func_140(joaat("mpply_crew_local_xp_2"), Global_1382583);
			}
			else if (iVar1 == 3)
			{
				func_141(&Global_1382584, iParam0);
				func_140(joaat("mpply_crew_local_xp_3"), Global_1382584);
			}
			else if (iVar1 == 4)
			{
				func_141(&Global_1382585, iParam0);
				func_140(joaat("mpply_crew_local_xp_4"), Global_1382585);
			}
		}
	}
}

void func_140(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1382576 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1382578 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1382578 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1382579 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1382580 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1382581 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1382582 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1382583 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1382584 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1382585 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1382586 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1382587 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1382588 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1382589 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1382590 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1382591 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1382592 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_141(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_142(int iParam0)
{
	if (iParam0 == Global_1382576)
	{
		return 0;
	}
	else if (iParam0 == Global_1382577)
	{
		return 1;
	}
	else if (iParam0 == Global_1382578)
	{
		return 2;
	}
	else if (iParam0 == Global_1382579)
	{
		return 3;
	}
	else if (iParam0 == Global_1382580)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_143(var uParam0)
{
	if (unk_0x062B7A5C795CB453())
	{
		if (unk_0x4A5CDD2BE8070A7F(uParam0))
		{
			return Global_2458541;
		}
	}
	return Global_2458541;
}

struct<13> func_144(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBC1B3D38C4BB38F4(iParam0, &Var0, 13);
	return Var0;
}

void func_145(int iParam0, int iParam1, int iParam2)
{
	if (func_165())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9494 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1382702[func_152(-1)])
				{
					unk_0xE62DD6141BEF78D0(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1382702[func_152(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9493 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xE62DD6141BEF78D0(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9493 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xE62DD6141BEF78D0(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_151(unk_0x95B959F18401C09A()))
		{
			Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_1 = iParam0;
			Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_6 = func_175(iParam0, 1);
		}
		func_150(639, iParam0, -1, 1);
		func_149(640, func_175(iParam0, 1), -1, 1, 0);
		Global_1382702[func_152(-1)] = iParam0;
		func_146(7, 0);
	}
}

void func_146(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_148(iParam0, iParam1))
	{
		iVar0 = func_147();
		Global_2458506[iVar0] = iParam0;
	}
}

int func_147()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458506[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_148(int iParam0, var uParam1)
{
	if (Global_1312855)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312867) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_149(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_152(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

void func_150(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2539502[iParam0 /*3*/][func_152(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1382642[func_152(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1382648[func_152(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1382654[func_152(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1382660[func_152(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1382618[func_152(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1382624[func_152(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1382630[func_152(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1382636[func_152(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1382594[func_152(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1382600[func_152(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1382606[func_152(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1382612[func_152(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1382666[func_152(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1382672[func_152(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1382678[func_152(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1382684[func_152(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1382690[func_152(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1382696[func_152(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1382702[func_152(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1382708[func_152(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2573513[0 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2573513[1 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2573513[2 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2573513[3 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 8956:
			Global_2573644[func_152(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1382714[func_152(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1382720[func_152(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1382726[func_152(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1382732[func_152(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2573577[0 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2573577[1 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2573577[2 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2573577[3 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2573577[4 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2573647[0 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2573647[1 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2573647[2 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2573647[3 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2573647[4 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2573663[0 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2573663[1 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2573663[2 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2573663[3 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2573663[4 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2573577[5 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2573513[4 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2573679[func_152(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2573688[func_152(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2573682[func_152(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2573691[func_152(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2573685[func_152(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2573694[func_152(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2573697[func_152(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2573577[6 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2573513[5 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2573577[7 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2573513[6 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2573577[8 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2573513[7 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2573577[9 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2573513[8 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2573577[10 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2573513[9 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2573577[11 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2573513[10 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2573577[12 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2573513[11 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2573577[13 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2573513[12 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2573577[14 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2573513[13 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2573577[15 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2573513[14 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2573577[16 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2573513[15 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2573577[17 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2573513[16 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2573513[17 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2573513[18 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2573513[19 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2573513[20 /*3*/][func_152(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2573700[func_152(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2573703[func_152(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2573706[func_152(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2573709[func_152(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2573712[func_152(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2573715[func_152(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2573718[func_152(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2573721[func_152(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2573724[func_152(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2573727[func_152(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2573730[func_152(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2573733[func_152(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2573736[func_152(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_151(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x0E4018692D92041D(Global_2437364.f_1, iParam0);
	}
	return 1;
}

int func_152(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_153(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x95B959F18401C09A())
			{
				return Global_1382702[func_152(-1)];
			}
			else if (func_151(iParam0))
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1382702[func_152(-1)];
	}
	return 0;
}

void func_154(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_156(iParam0, func_152(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_155(iParam0))
	{
		func_149(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_150(iParam0, iVar0, iParam2, 1);
	}
}

int func_155(int iParam0)
{
	if (Global_1382575)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 8956:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
				return 1;
				break;
			}
	}
	return 0;
}

int func_156(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_152(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_157(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A());
	iVar0 = 0;
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		iVar4 = unk_0xDD4FFAA17341D382(iVar0);
		if (unk_0x1B094AC15936B3DB(iVar4))
		{
			iVar5 = unk_0xEB9DC13235C0B345(iVar4);
			if (unk_0x12D3B4C76D4AAB00(iVar5) != -1)
			{
				if (unk_0x12D3B4C76D4AAB00(iVar5) == iVar1 || func_98(unk_0x12D3B4C76D4AAB00(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x95B959F18401C09A())
					{
						if (func_159(unk_0x95B959F18401C09A(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_158(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_158(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_158(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_159(int iParam0, int iParam1)
{
	if (unk_0x062B7A5C795CB453())
	{
		Global_2505680 = { func_144(iParam0) };
		Global_2505693 = { func_144(iParam1) };
		if (unk_0x4A5CDD2BE8070A7F(&Global_2505680))
		{
			if (unk_0x4A5CDD2BE8070A7F(&Global_2505693))
			{
				unk_0xDD530AC51A578470(&Global_2505610, 35, &Global_2505680);
				unk_0xDD530AC51A578470(&Global_2505645, 35, &Global_2505693);
				if (Global_2505610 == Global_2505645)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_160(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0xF839A4FC3E76D324())
		{
			iVar3 = iVar0;
			if (unk_0x1B094AC15936B3DB(iVar3))
			{
				iVar4 = unk_0xEB9DC13235C0B345(iVar3);
				if (func_374(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x95B959F18401C09A())
					{
						iVar1++;
						if (func_159(unk_0x95B959F18401C09A(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_374(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x95B959F18401C09A())
				{
					if (func_161(unk_0x95B959F18401C09A(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_159(unk_0x95B959F18401C09A(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_158(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_158(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_161(int iParam0, int iParam1)
{
	return vdist(func_21(iParam0), func_21(iParam1));
	return 0f;
}

int func_162(int iParam0)
{
	int iVar0;
	
	if (unk_0x39DF7EBBDAD69F4B() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_158(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_163(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xEE14D9A9F531ADDC(iParam0) > func_153(unk_0x95B959F18401C09A()))
		{
			iParam0 = -func_153(unk_0x95B959F18401C09A());
		}
	}
	if (func_164(8000, 0, 0) > 0)
	{
		if (func_164(8000, 0, 0) < (iParam0 + func_153(unk_0x95B959F18401C09A())))
		{
			iParam0 = (func_164(8000, 0, 0) - func_153(unk_0x95B959F18401C09A()));
		}
	}
	return iParam0;
}

int func_164(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_289559[iParam0];
}

int func_165()
{
	return 1;
}

int func_166(char* sParam0)
{
	if (unk_0x6D2E2622CA149402(sParam0))
	{
		return 1;
	}
	else if (unk_0xCE3CFF625BEBAA04(sParam0, "") || unk_0xCE3CFF625BEBAA04(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_167(int iParam0)
{
	return func_168(func_169(iParam0));
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_169(int iParam0)
{
	if (func_170(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_170(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_171()
{
	if (unk_0x289064CB38B560AA())
	{
		return func_23();
	}
	return func_172(Global_4456448.f_138474);
}

int func_172(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5003[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_173(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
}

bool func_174(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
}

int func_175(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_176(iParam0, 0);
}

int func_176(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_289559[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_289559[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_177(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_153(iParam0);
}

bool func_178()
{
	return Global_68807;
}

void func_179(char* sParam0, bool bParam1)
{
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return;
	}
	if (unk_0x85731B98C6C759D5(sParam0) > 23)
	{
		return;
	}
	if (func_183(sParam0))
	{
		return;
	}
	func_56();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), unk_0xD178EF744F20B712(), 32);
	Global_1312585.f_9 = unk_0x36163153849DFDA1(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_182();
	func_181(bParam1);
	func_180();
}

void func_180()
{
	unk_0x8950ED5730F62EE8(&(Global_1312585.f_59), 1);
}

void func_181(bool bParam0)
{
	if (bParam0)
	{
		unk_0x8950ED5730F62EE8(&(Global_1312585.f_59), 0);
		return;
	}
	unk_0xCE689A8E8C42ED78(&(Global_1312585.f_59), 0);
}

void func_182()
{
	Global_1312585.f_10 = unk_0x6985FC3098CCA0EB(unk_0x78DCC5D0CB43DEBA(), 86400000);
	Global_1312585.f_11 = unk_0x78DCC5D0CB43DEBA();
}

bool func_183(char* sParam0)
{
	if (!func_61())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_184(sParam0);
	}
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	return unk_0x36163153849DFDA1(sParam0) == unk_0x36163153849DFDA1(&(Global_1312585.f_12));
}

bool func_184(char* sParam0)
{
	if (!func_61())
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	return unk_0x36163153849DFDA1(sParam0) == unk_0x36163153849DFDA1(&(Global_1312585.f_16));
}

int func_185(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	if (Global_1589819[iParam0 /*818*/].f_273.f_25 > 0)
	{
		if (bParam1)
		{
			if (unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_200(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_199(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_198(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_197(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_196(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_195(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_194(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_193(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_192(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_191(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_190(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_189(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_188(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_186(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_186(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_374(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_187(Global_2424047[iParam0 /*416*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
	}
	return -1;
}

int func_188(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_374(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_187(Global_2424047[iParam0 /*416*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_189(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_374(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_187(Global_2424047[iParam0 /*416*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_190(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_374(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_187(Global_2424047[iParam0 /*416*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_191(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x541D5C57194E73C4(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_64())
	{
		if (func_374(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_64())
			{
				return func_187(Global_2424047[iParam0 /*416*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_192(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_374(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_187(Global_2424047[iParam0 /*416*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_193(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_374(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_187(Global_2424047[iParam0 /*416*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_194(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_374(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_64())
			{
				return func_187(Global_2424047[iParam0 /*416*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_195(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_374(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_187(Global_2424047[iParam0 /*416*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_196(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_374(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_187(Global_2424047[iParam0 /*416*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_197(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_374(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_187(Global_2424047[iParam0 /*416*/].f_309.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_198(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_374(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_187(Global_2424047[iParam0 /*416*/].f_309.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_199(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_374(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_187(Global_2424047[iParam0 /*416*/].f_309.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_200(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_374(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_187(Global_2424047[iParam0 /*416*/].f_309.f_5) == 0;
			}
		}
	}
	return 0;
}

var func_201()
{
	return Global_2416063.f_1690;
}

int func_202()
{
	if (func_203(18))
	{
		return 1;
	}
	if (func_203(0))
	{
		return 1;
	}
	return 0;
}

bool func_203(int iParam0)
{
	int iVar0;
	
	iVar0 = func_156(2480, -1, 0);
	return unk_0x0E4018692D92041D(iVar0, iParam0);
}

void func_204(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_216(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!iParam1 == Global_2394180[iVar0 /*46*/].f_8)
	{
		return;
	}
	if (!Global_2394180[iVar0 /*46*/].f_4 && Global_2394180[iVar0 /*46*/])
	{
		Global_2394180[iVar0 /*46*/].f_4 = 1;
		func_208();
	}
	func_205(iVar0);
}

void func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= Global_1382407)
	{
		return;
	}
	if (Global_2394180[iParam0 /*46*/].f_26 != -1)
	{
		unk_0x98E765CB9E761233(Global_2394180[iParam0 /*46*/].f_26);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_1382407)
	{
		Global_2394180[iVar0 /*46*/] = { Global_2394180[iVar1 /*46*/] };
		Global_2394180[iVar0 /*46*/] = { Global_2394180[iVar1 /*46*/] };
		iVar0++;
		iVar1++;
	}
	func_207(iVar0);
	Global_1382407 = (Global_1382407 - 1);
	if (Global_1382378)
	{
		if (Global_1382376 > 0)
		{
			func_206();
		}
	}
}

void func_206()
{
	Global_1382378 = 0;
}

void func_207(int iParam0)
{
	Global_2394180[iParam0 /*46*/] = 0;
	Global_2394180[iParam0 /*46*/].f_2 = 0;
	Global_2394180[iParam0 /*46*/].f_3 = 0;
	Global_2394180[iParam0 /*46*/].f_4 = 0;
	Global_2394180[iParam0 /*46*/].f_5 = func_64();
	Global_2394180[iParam0 /*46*/].f_6 = 145;
	Global_2394180[iParam0 /*46*/].f_7 = 1;
	Global_2394180[iParam0 /*46*/].f_8 = -1;
	Global_2394180[iParam0 /*46*/].f_9 = -1;
	StringCopy(&(Global_2394180[iParam0 /*46*/].f_10), "", 64);
	Global_2394180[iParam0 /*46*/].f_26 = -1;
	StringCopy(&(Global_2394180[iParam0 /*46*/].f_27), "", 32);
	Global_2394180[iParam0 /*46*/].f_35 = -1;
	Global_2394180[iParam0 /*46*/].f_36 = -1;
	Global_2394180[iParam0 /*46*/].f_37 = 0;
	Global_2394180[iParam0 /*46*/].f_39 = 0;
	Global_2394180[iParam0 /*46*/].f_40 = -1;
	Global_2394180[iParam0 /*46*/].f_41 = 0;
	Global_2394180[iParam0 /*46*/].f_42 = 0;
	Global_2394180[iParam0 /*46*/].f_43 = 0;
	Global_2394180[iParam0 /*46*/].f_45 = 0;
	if (unk_0xB331FCEB94EB05C8())
	{
		Global_2394180[iParam0 /*46*/].f_38 = unk_0x78DCC5D0CB43DEBA();
	}
}

void func_208()
{
	Global_16929 = (Global_16929 - 1);
	if (Global_16929 < 0)
	{
		func_215("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_209();
}

void func_209()
{
	if (!Global_14726)
	{
		if (Global_14553.f_1 == 6)
		{
			func_214(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_210(1);
			func_214(Global_14534, "DISPLAY_VIEW", 1f, to_float(Global_14533), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_210(int iParam0)
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
	
	Global_16934 = 0;
	Global_3028 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2992[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_213(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x0E4018692D92041D(Global_2424, 3))
								{
									iVar2 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14729 = 0;
								}
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_212(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(iVar2);
								unk_0x818901B332D5541D();
							}
							if (Global_2458608)
							{
								if (iVar1 == 14)
								{
									func_211(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2992[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_106565.f_14135[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_106565.f_14135[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_106565.f_14135[iVar3 /*104*/].f_99[Global_14553] == 1)
											{
												Global_16934++;
											}
										}
									}
									iVar3++;
								}
								func_211(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(Global_16934), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_71590)
								{
									iVar4 = 0;
									iVar4 = Global_4268042;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268043[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268043[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268043[iVar5 /*104*/].f_99[Global_14553] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_211(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14553)
									{
										case 0:
											iVar6 = Global_37589;
											break;
										
										case 1:
											iVar6 = Global_37590;
											break;
										
										case 2:
											iVar6 = Global_37591;
											break;
										
										default:
											break;
									}
									func_211(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_211(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_212(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(Global_2429);
								unk_0x818901B332D5541D();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x0E4018692D92041D(Global_2424, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_212(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(iVar7);
								unk_0x818901B332D5541D();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x0E4018692D92041D(Global_2424, 3))
								{
									iVar8 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14729 = 0;
								}
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_212(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(iVar8);
								unk_0x818901B332D5541D();
							}
							else if (iVar1 == 8)
							{
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_212(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(42);
								unk_0x818901B332D5541D();
							}
							else if ((iVar1 == 23 && unk_0xCE3CFF625BEBAA04(&(Global_2430[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x0E4018692D92041D(Global_2424, 6))
							{
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_212(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(42);
								unk_0x818901B332D5541D();
							}
							else if (Global_2430[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1625180.f_1;
								func_211(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_211(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2992[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_211(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xBB698266C5FDF0A7(uParam0, sParam1);
	unk_0x4D9DA18AB3C2A466(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam6));
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam7))
	{
		func_212(sParam7);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam8))
	{
		func_212(sParam8);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam9))
	{
		func_212(sParam9);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam10))
	{
		func_212(sParam10);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam11))
	{
		func_212(sParam11);
	}
	unk_0x818901B332D5541D();
}

void func_212(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

bool func_213(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_214(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xBB698266C5FDF0A7(uParam0, sParam1);
	unk_0x4D9DA18AB3C2A466(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam6));
	}
	unk_0x818901B332D5541D();
}

void func_215(char* sParam0)
{
	if (Global_16929 != 0)
	{
		if (!unk_0x786AF4A44E1B5B4B(sParam0))
		{
		}
		Global_16929 = 0;
	}
}

int func_216(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1382407)
	{
		if (!Global_2394180[iVar0 /*46*/].f_7)
		{
			if (Global_2394180[iVar0 /*46*/].f_6 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_217()
{
	if (!unk_0x0E4018692D92041D(iLocal_111, 17))
	{
		func_219(12, 116, "", 1, 0, 1, 0);
		unk_0x8950ED5730F62EE8(&iLocal_111, 17);
	}
	else if (!unk_0x0E4018692D92041D(iLocal_111, 18))
	{
		if (func_218(12, 116))
		{
			unk_0x8950ED5730F62EE8(&iLocal_111, 18);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_216(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!iParam1 == Global_2394180[iVar0 /*46*/].f_8)
	{
		return 0;
	}
	if (!Global_2394180[iVar0 /*46*/].f_2)
	{
		return 0;
	}
	func_205(iVar0);
	Global_2395345 = unk_0xE3903F59E2F22150() + 1500;
	return 1;
}

void func_219(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_216(iParam0);
	if (bParam5)
	{
		if (iVar0 != -1)
		{
			func_205(iVar0);
		}
	}
	iVar1 = iParam0;
	bVar2 = false;
	StringCopy(&Var3, "", 32);
	func_220(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, -1, -1, -1, iParam4, iParam6);
}

void func_220(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8, var uParam9, var uParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<46> Var5;
	bool bVar6;
	struct<13> Var7;
	int iVar8;
	
	iVar0 = func_64();
	iVar1 = 145;
	if (bParam2)
	{
		iVar0 = unk_0x7C1C88877E8AAA50(iParam1);
	}
	else
	{
		iVar1 = iParam1;
	}
	if (bParam2)
	{
		if (func_225())
		{
			return;
		}
	}
	iVar2 = Global_1382407;
	if (iVar2 >= 12)
	{
		iVar2 = (iVar2 - 1);
	}
	iVar3 = (iVar2 - 1);
	while (iVar3 >= 0)
	{
		Global_2394180[iVar2 /*46*/] = { Global_2394180[iVar3 /*46*/] };
		iVar2 = (iVar2 - 1);
		iVar3 = (iVar3 - 1);
	}
	Global_1382407++;
	if (Global_1382407 > 12)
	{
		Global_1382407 = 12;
	}
	iVar4 = 0;
	if (Global_2394180[1 /*46*/].f_1)
	{
		Global_2394180[0 /*46*/] = { Global_2394180[1 /*46*/] };
		Global_2394180[1 /*46*/] = { Var5 };
		iVar4 = 1;
	}
	if (iVar4 == 0)
	{
		Global_2394180[iVar4 /*46*/].f_1 = uParam10;
	}
	else
	{
		Global_2394180[iVar4 /*46*/].f_1 = 0;
	}
	Global_2394180[iVar4 /*46*/] = 0;
	Global_2394180[iVar4 /*46*/].f_2 = 0;
	Global_2394180[iVar4 /*46*/].f_3 = 0;
	Global_2394180[iVar4 /*46*/].f_4 = 0;
	Global_2394180[iVar4 /*46*/].f_5 = iVar0;
	Global_2394180[iVar4 /*46*/].f_6 = iVar1;
	Global_2394180[iVar4 /*46*/].f_7 = bParam2;
	Global_2394180[iVar4 /*46*/].f_8 = iParam0;
	Global_2394180[iVar4 /*46*/].f_9 = -1;
	StringCopy(&(Global_2394180[iVar4 /*46*/].f_10), sParam3, 64);
	Global_2394180[iVar4 /*46*/].f_26 = -1;
	StringCopy(&(Global_2394180[iVar4 /*46*/].f_27), sParam4, 32);
	Global_2394180[iVar4 /*46*/].f_35 = iParam6;
	Global_2394180[iVar4 /*46*/].f_36 = iParam7;
	Global_2394180[iVar4 /*46*/].f_37 = 0;
	Global_2394180[iVar4 /*46*/].f_38 = unk_0x78DCC5D0CB43DEBA();
	Global_2394180[iVar4 /*46*/].f_39 = uParam5;
	Global_2394180[iVar4 /*46*/].f_40 = Global_2395344;
	Global_2394180[iVar4 /*46*/].f_44 = iParam8;
	Global_2394180[iVar4 /*46*/].f_45 = uParam9;
	if (iParam0 == 123 || iParam0 == 234)
	{
		Global_2394180[iVar4 /*46*/].f_9 = func_222();
	}
	Global_2395344++;
	func_221();
	Global_2394180[iVar4 /*46*/].f_41 = 0;
	Global_2394180[iVar4 /*46*/].f_42 = 0;
	Global_2394180[iVar4 /*46*/].f_43 = 0;
	if (unk_0xDB36A8F522CBC12D())
	{
		if (bParam2)
		{
			bVar6 = true;
			if (bVar6)
			{
				Var7 = { func_144(iVar0) };
				iVar8 = unk_0xEDDFB29174C308E3(&Var7);
				if (iVar8 != -1)
				{
					Global_2394180[iVar4 /*46*/].f_41 = iVar8;
					Global_2394180[iVar4 /*46*/].f_42 = 1;
					Global_2394180[iVar4 /*46*/].f_43 = 0;
				}
			}
		}
	}
}

void func_221()
{
	Global_1382380 = unk_0x6985FC3098CCA0EB(unk_0x78DCC5D0CB43DEBA(), 30000);
}

int func_222()
{
	vector3 vVar0[24];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	StringCopy(&cVar0, "", 24);
	cVar0 = { func_224() };
	if (unk_0x786AF4A44E1B5B4B(&cVar0) || unk_0xCE3CFF625BEBAA04(".", &cVar0))
	{
		return -1;
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		switch (iVar1)
		{
			case 0:
				StringCopy(&cVar0, func_223(53, -1), 24);
				break;
			
			case 1:
				StringCopy(&cVar0, func_223(54, -1), 24);
				break;
			
			case 2:
				StringCopy(&cVar0, func_223(55, -1), 24);
				break;
			
			case 3:
				StringCopy(&cVar0, func_223(56, -1), 24);
				break;
			
			case 4:
				StringCopy(&cVar0, func_223(57, -1), 24);
				break;
			
			case 5:
				StringCopy(&cVar0, func_223(58, -1), 24);
				break;
			
			case 6:
				StringCopy(&cVar0, func_223(59, -1), 24);
				break;
			
			default:
				StringCopy(&cVar0, "", 24);
				break;
		}
		if (!unk_0x786AF4A44E1B5B4B(&cVar0) && !unk_0xCE3CFF625BEBAA04(".", &cVar0))
		{
			iVar2++;
		}
		iVar1++;
	}
	if (iVar2 == 0)
	{
		return -1;
	}
	iVar3 = func_156(8473, -1, 0);
	iVar4 = 0;
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar4 = iVar1 * 3;
		if (iVar4 != -1)
		{
			if (!unk_0x0E4018692D92041D(iVar3, iVar4))
			{
				return 7;
			}
		}
		iVar1++;
	}
	return 1;
}

char* func_223(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_2572505[iParam0 /*3*/][func_152(iParam1)];
	return unk_0x62D28A6E47CC0F1F(uVar0, -1);
}

struct<6> func_224()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	
	if (unk_0x786AF4A44E1B5B4B(&(Global_1663123.f_10)))
	{
		iVar2 = func_156(8474, -1, 0);
		if (iVar2 == 0)
		{
			StringCopy(&Var0, ".", 24);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 1218)
			{
				if ((Global_794709.f_4[iVar1 /*88*/].f_65 == 0 && Global_794709.f_4[iVar1 /*88*/].f_68 == 1) && unk_0x0E4018692D92041D(Global_794709.f_4[iVar1 /*88*/].f_76, 13))
				{
					if (Global_794709.f_107189[iVar1 /*13*/].f_1 == iVar2)
					{
						Var0 = { Global_794709.f_123037[Global_794709.f_107189[iVar1 /*13*/].f_10 /*6*/] };
						iVar1 = 1218;
					}
				}
				iVar1++;
			}
			if (unk_0x786AF4A44E1B5B4B(&Var0))
			{
			}
		}
		Global_1663123.f_10 = { Var0 };
		return Var0;
	}
	return Global_1663123.f_10;
}

bool func_225()
{
	return Global_1312827 == 10;
}

void func_226()
{
	int iVar0;
	
	iVar0 = Global_1382690[func_152(-1)];
	unk_0x8950ED5730F62EE8(&iVar0, 8);
	func_150(1303, iVar0, -1, 1);
}

void func_227(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_228() /*10778*/].f_6165.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_228() /*10778*/].f_6165.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_228() /*10778*/].f_6165.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_228() /*10778*/].f_6165.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_228() /*10778*/].f_6165.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_228() /*10778*/].f_6165.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_228() /*10778*/].f_6165.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_228() /*10778*/].f_6165.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_228() /*10778*/].f_6165.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_228() /*10778*/].f_6165.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_228() /*10778*/].f_6165.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_228() /*10778*/].f_6165.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_228() /*10778*/].f_6165.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_228() /*10778*/].f_6165.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_228() /*10778*/].f_6165.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_228() /*10778*/].f_6165.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_228() /*10778*/].f_6165.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_228() /*10778*/].f_6165.f_30 = iVar0;
			break;
	}
}

int func_228()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_229()
{
	if (!unk_0x0E4018692D92041D(iLocal_111, 4))
	{
		if (!unk_0x0E4018692D92041D(iLocal_111, 8) || (unk_0x0E4018692D92041D(iLocal_111, 8) && func_38(&uLocal_114, 600000, 0)))
		{
			if (func_235(Local_103.f_5))
			{
				unk_0x8950ED5730F62EE8(&iLocal_111, 4);
				unk_0xCE689A8E8C42ED78(&iLocal_111, 8);
			}
		}
	}
	else if (!func_234())
	{
		if (!unk_0x0E4018692D92041D(iLocal_111, 19))
		{
			if (func_233())
			{
				unk_0x8950ED5730F62EE8(&iLocal_111, 19);
			}
			else if (!func_232() && !func_230())
			{
				unk_0x8950ED5730F62EE8(&iLocal_111, 8);
				unk_0xCE689A8E8C42ED78(&iLocal_111, 4);
				func_45(&uLocal_114, 0, 0);
				iLocal_110 = 0;
			}
		}
		else if (!func_230())
		{
			if (func_232())
			{
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	else
	{
		unk_0x8950ED5730F62EE8(&iLocal_111, 8);
		unk_0xCE689A8E8C42ED78(&iLocal_111, 4);
		func_45(&uLocal_114, 0, 0);
		iLocal_110 = 0;
	}
	return 0;
}

bool func_230()
{
	return func_231();
}

bool func_231()
{
	return Global_1365424.f_40 == 3;
}

bool func_232()
{
	return Global_1365424.f_57.f_1;
}

int func_233()
{
	if (Global_15866 == 4)
	{
		if (unk_0xA30F14B621E3269D())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_234()
{
	if (Global_16882)
	{
		return 1;
	}
	return 0;
}

int func_235(int iParam0)
{
	int iVar0;
	
	switch (iLocal_110)
	{
		case 0:
			if (func_333(0, 1, 1, 1))
			{
				if (!func_332(12, -1))
				{
					func_328(iParam0);
					iLocal_110++;
				}
			}
			break;
		
		case 1:
			iVar0 = func_327(iParam0);
			func_326(iParam0);
			if (func_236(&uLocal_130, iVar0, "FM_1AU", sLocal_295, 0, 0))
			{
				unk_0xCE689A8E8C42ED78(&iLocal_111, 11);
				iLocal_110++;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_236(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_324())
	{
		return 0;
	}
	if (func_323())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_237(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_237(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x786AF4A44E1B5B4B(sParam2))
	{
		return 0;
	}
	if (unk_0x85731B98C6C759D5(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam3))
	{
		return 0;
	}
	if (unk_0x85731B98C6C759D5(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x36163153849DFDA1(unk_0xD178EF744F20B712());
	iVar1 = func_322(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x786AF4A44E1B5B4B(sParam7))
	{
		iVar2 = unk_0x36163153849DFDA1(sParam7);
	}
	if (func_321(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_316(iParam6))
	{
		return 0;
	}
	if (func_313(iVar0, iVar1, iVar2))
	{
		if (func_312())
		{
			return 0;
		}
		func_311();
		return func_244(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_243(iParam4))
	{
		return 0;
	}
	func_238(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_238(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1365424.f_40.f_1 = iParam0;
	Global_1365424.f_40.f_2 = iParam1;
	Global_1365424.f_40.f_3 = iParam2;
	StringCopy(&(Global_1365424.f_40.f_4), sParam3, 16);
	Global_1365424.f_40.f_8 = iParam4;
	Global_1365424.f_40.f_9 = iParam5;
	Global_1365424.f_40.f_14 = iParam6;
	func_239(iParam4);
	func_311();
	Global_1365424.f_40.f_13 = unk_0x6985FC3098CCA0EB(unk_0x78DCC5D0CB43DEBA(), 7000);
}

void func_239(int iParam0)
{
	if (func_242(iParam0))
	{
		func_241();
		return;
	}
	func_240();
}

void func_240()
{
	Global_1365424.f_40.f_10 = 0;
}

void func_241()
{
	Global_1365424.f_40.f_10 = 1;
}

int func_242(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_243(int iParam0)
{
	return iParam0 > Global_1365424.f_40.f_8;
}

int func_244(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_310();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_307(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_304(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_307(uParam0, sParam3, sParam4);
		}
		return func_288(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_287(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_277(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_276(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_245(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_245(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_275();
	bVar0 = true;
	if (func_247(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_246(120000);
		return 1;
	}
	return 0;
}

void func_246(int iParam0)
{
	Global_1365424.f_40.f_11 = unk_0x6985FC3098CCA0EB(unk_0x78DCC5D0CB43DEBA(), iParam0);
	Global_1365424.f_40.f_12 = 1;
}

int func_247(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_64();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xEEF8394DB3D3DFA1(iVar0);
		iVar1 = func_269(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xB09BA22C73228B8C(unk_0x78DCC5D0CB43DEBA(), Global_1365424.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_268(sParam5, bParam6, &iVar3);
	uVar5 = func_266(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x786AF4A44E1B5B4B(sParam8))
	{
		iVar6++;
		if (!unk_0x786AF4A44E1B5B4B(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xCE3CFF625BEBAA04(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x0E4018692D92041D(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x0E4018692D92041D(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x786AF4A44E1B5B4B(sVar2))
	{
		bVar12 = func_265(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_251(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(iParam4, 0))
	{
		func_250();
	}
	func_275();
	func_249();
	func_248();
	return 1;
}

void func_248()
{
	Global_1365424.f_57 = 0;
	Global_1365424.f_57.f_1 = 0;
}

void func_249()
{
	Global_1365424.f_40 = 3;
}

void func_250()
{
	unk_0x8950ED5730F62EE8(&Global_2423, 8);
}

int func_251(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_252(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3130 = iParam6;
			unk_0x8950ED5730F62EE8(&Global_4269308, 0);
		}
		return 1;
	}
	return 0;
}

int func_252(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xCE3CFF625BEBAA04(sParam14, sParam15))
	{
	}
	func_259();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14553 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14553 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14553 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			if (unk_0x60F5B36347629584(unk_0x33CD235DF1E6A94E()))
			{
				return 0;
			}
		}
		if (Global_4269293 == 1)
		{
			return 0;
		}
		if (unk_0x1BCDA92AD0A7835B(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x1BCDA92AD0A7835B(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_258() == 0)
	{
		func_256();
		return 0;
	}
	func_255(Global_4269292);
	StringCopy(&(Global_4268043[Global_4269292 /*104*/]), sParam1, 64);
	Global_4268043[Global_4269292 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4268043[Global_4269292 /*104*/].f_24 = iParam2;
	}
	Global_4268043[Global_4269292 /*104*/].f_25 = iParam7;
	Global_4268043[Global_4269292 /*104*/].f_26 = uParam8;
	Global_4268043[Global_4269292 /*104*/].f_29 = uParam9;
	Global_4268043[Global_4269292 /*104*/].f_30 = uParam12;
	Global_4268043[Global_4269292 /*104*/].f_31 = uParam11;
	Global_4268043[Global_4269292 /*104*/].f_28 = 0;
	Global_4268043[Global_4269292 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4268043[Global_4269292 /*104*/].f_33), sParam4, 64);
	Global_4268043[Global_4269292 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4268043[Global_4269292 /*104*/].f_50), sParam5, 64);
	Global_4268043[Global_4269292 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4268043[Global_4269292 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4268043[Global_4269292 /*104*/].f_83), sParam15, 64);
	func_259();
	switch (iParam16)
	{
		case 3:
			Global_4268043[Global_4269292 /*104*/].f_99[Global_14553] = 1;
			break;
		
		case 0:
			Global_4268043[Global_4269292 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4268043[Global_4269292 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4268043[Global_4269292 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14553)
		{
			case 0:
				func_254(0);
				break;
			
			case 1:
				func_254(1);
				break;
			
			case 2:
				func_254(2);
				break;
			
			case 3:
				func_254(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4269293 = 1;
				break;
			
			case 0:
				Global_4269293 = 1;
				break;
			
			case 2:
				Global_4269293 = 1;
				break;
			
			case 1:
				Global_4269293 = 1;
				break;
			}
	}
	Global_16935[Global_4269292] = 0;
	if (bParam10)
	{
		func_259();
		if (Global_14496)
		{
			StringCopy(&Global_14542, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14553)
			{
				case 0:
					StringCopy(&Global_14542, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14542, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14542, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14542, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_253())
			{
				unk_0x0F8EAEEC97DDBCB3(-1, "Text_Arrive_Tone", &Global_14542, 1);
			}
		}
	}
	if (!Global_14726)
	{
		if (Global_14553.f_1 == 6)
		{
			func_214(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_210(1);
			func_214(Global_14534, "DISPLAY_VIEW", 1f, to_float(Global_14533), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

bool func_253()
{
	return Global_1312867;
}

void func_254(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_106565.f_14045[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_255(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0xE6A7CE90720B9037();
	iVar1 = unk_0x7EA67BD818402745();
	iVar2 = unk_0x13348E86D5B8A052();
	iVar3 = unk_0x020A28FAE1C09250();
	uVar4 = unk_0x2C02CAA9C4127339() + 1;
	iVar5 = unk_0xED3F08F762AAA55A();
	Global_4268043[iParam0 /*104*/].f_18 = iVar0;
	Global_4268043[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4268043[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4268043[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4268043[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4268043[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_256()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4269292 = 11;
	Global_4268043[Global_4269292 /*104*/].f_18 = -1;
	Global_4268043[Global_4269292 /*104*/].f_18.f_1 = 0;
	Global_4268043[Global_4269292 /*104*/].f_18.f_2 = 0;
	Global_4268043[Global_4269292 /*104*/].f_18.f_3 = 0;
	Global_4268043[Global_4269292 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_257(Global_4268043[iVar2 /*104*/].f_18, Global_4268043[Global_4269292 /*104*/].f_18))
		{
			Global_4269292 = iVar2;
		}
		iVar2++;
	}
	Global_4268043[Global_4269292 /*104*/].f_24 = 1;
}

int func_257(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_258()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4268043[iVar2 /*104*/].f_24 == 0)
		{
			Global_4269292 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4269292 = 11;
	Global_4268043[Global_4269292 /*104*/].f_18 = -1;
	Global_4268043[Global_4269292 /*104*/].f_18.f_1 = 0;
	Global_4268043[Global_4269292 /*104*/].f_18.f_2 = 0;
	Global_4268043[Global_4269292 /*104*/].f_18.f_3 = 0;
	Global_4268043[Global_4269292 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4268043[iVar2 /*104*/].f_24 == 0 || Global_4268043[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_257(Global_4268043[iVar2 /*104*/].f_18, Global_4268043[Global_4269292 /*104*/].f_18))
			{
				Global_4269292 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4269292 == 11)
	{
		return 0;
	}
	Global_4268043[Global_4269292 /*104*/].f_99[0] = 0;
	Global_4268043[Global_4269292 /*104*/].f_99[1] = 0;
	Global_4268043[Global_4269292 /*104*/].f_99[2] = 0;
	return 1;
}

void func_259()
{
	if (func_213(14))
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
		Global_14553 = func_260();
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

var func_260()
{
	func_261();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_261()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_264(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_263(unk_0x33CD235DF1E6A94E());
			if (func_262(iVar0) && (!func_213(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_262(Global_106565.f_2357.f_539.f_4321))
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

bool func_262(int iParam0)
{
	return iParam0 < 3;
}

int func_263(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_264(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_264(int iParam0)
{
	if (func_262(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_265(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_252(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3130 = iParam10;
			unk_0x8950ED5730F62EE8(&Global_4269308, 0);
		}
		return 1;
	}
	return 0;
}

int func_266(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_267(2, iParam1);
	return iParam0;
}

void func_267(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_268(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0xCE3CFF625BEBAA04(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_267(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x434854E9CAE13C4A(sParam0);
}

int func_269(int iParam0)
{
	int iVar0;
	
	iVar0 = func_272(iParam0);
	if (iVar0 == -1)
	{
		func_270(iParam0, 1);
		return 0;
	}
	Global_1383710[iVar0 /*5*/].f_4 = 1;
	return Global_1383710[iVar0 /*5*/].f_2;
}

void func_270(int iParam0, bool bParam1)
{
	if (!func_374(iParam0, 0, 1))
	{
		return;
	}
	if (func_272(iParam0) != -1)
	{
		return;
	}
	if (Global_1383873)
	{
		if (iParam0 == Global_1383873.f_1)
		{
			return;
		}
	}
	if (func_271(iParam0))
	{
		return;
	}
	if (Global_1383911 >= 32)
	{
		return;
	}
	Global_1383878[Global_1383911] = iParam0;
	Global_1383911++;
	if (bParam1)
	{
	}
}

int func_271(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1383911)
	{
		if (Global_1383878[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_272(int iParam0)
{
	int iVar0;
	
	if (!func_374(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1383871 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1383871)
	{
		if (Global_1383710[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x5E83461198335D9B(Global_1383710[iVar0 /*5*/].f_2) && unk_0x47CD6BA404AEE035(Global_1383710[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_273(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_273(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1383871)
	{
		return;
	}
	if (unk_0x5E83461198335D9B(Global_1383710[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1383710[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0xD9A84B163D46BD9B(Global_1383710[iParam0 /*5*/].f_2), 64);
			unk_0x4F9021F32A32F422(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x381D44C2F0113354(Global_1383710[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1383871)
	{
		Global_1383710[iVar2 /*5*/] = { Global_1383710[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_274(&(Global_1383710[iVar2 /*5*/]));
	Global_1383871 = (Global_1383871 - 1);
}

void func_274(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_64();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xB331FCEB94EB05C8())
	{
		uParam0->f_3 = unk_0x78DCC5D0CB43DEBA();
	}
}

void func_275()
{
	Global_1365424.f_40.f_9 = 4;
}

int func_276(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_275();
	bVar0 = false;
	return func_247(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_277(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_278(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_278(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_64();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xEEF8394DB3D3DFA1(iVar0);
		iVar1 = func_269(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xB09BA22C73228B8C(unk_0x78DCC5D0CB43DEBA(), Global_1365424.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16927 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_268(sParam5, bParam6, &iVar3);
	uVar5 = func_266(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x786AF4A44E1B5B4B(sParam8))
	{
		iVar6++;
		if (!unk_0x786AF4A44E1B5B4B(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xCE3CFF625BEBAA04(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x0E4018692D92041D(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x0E4018692D92041D(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x786AF4A44E1B5B4B(sVar2))
	{
		bVar12 = func_286(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_280(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(iParam4, 0))
	{
		func_250();
	}
	func_279();
	func_249();
	func_248();
	return 1;
}

void func_279()
{
	Global_1365424.f_40.f_9 = 3;
}

int func_280(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xCE689A8E8C42ED78(&Global_2423, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_281(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3130 = iParam6;
			Global_3033[3 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
			Global_3110 = iParam0;
			unk_0x8950ED5730F62EE8(&Global_2423, 1);
			unk_0x8950ED5730F62EE8(&Global_2423, 7);
		}
		return 1;
	}
	return 0;
}

int func_281(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xCE3CFF625BEBAA04(sParam14, sParam15))
	{
	}
	func_259();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14553 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14553 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14553 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			if (unk_0x60F5B36347629584(unk_0x33CD235DF1E6A94E()))
			{
				return 0;
			}
		}
		if (Global_106565.f_14045[Global_14553 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x1BCDA92AD0A7835B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x1BCDA92AD0A7835B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_285() == 0)
	{
		func_283();
		return 0;
	}
	func_282(Global_16933);
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/]), sParam1, 64);
	Global_106565.f_14135[Global_16933 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_106565.f_14135[Global_16933 /*104*/].f_24 = iParam2;
	}
	Global_106565.f_14135[Global_16933 /*104*/].f_25 = iParam7;
	Global_106565.f_14135[Global_16933 /*104*/].f_26 = uParam8;
	Global_106565.f_14135[Global_16933 /*104*/].f_29 = uParam9;
	Global_106565.f_14135[Global_16933 /*104*/].f_30 = uParam12;
	Global_106565.f_14135[Global_16933 /*104*/].f_31 = uParam11;
	Global_106565.f_14135[Global_16933 /*104*/].f_28 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_33), sParam4, 64);
	Global_106565.f_14135[Global_16933 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_50), sParam5, 64);
	Global_106565.f_14135[Global_16933 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_83), sParam15, 64);
	if (unk_0x0E4018692D92041D(Global_2423, 10))
	{
		Global_106565.f_14135[Global_16933 /*104*/].f_99[0] = 1;
		Global_106565.f_14135[Global_16933 /*104*/].f_99[1] = 1;
		Global_106565.f_14135[Global_16933 /*104*/].f_99[2] = 1;
		Global_3129 = 4;
		func_254(0);
		func_254(2);
		func_254(1);
	}
	else
	{
		func_259();
		switch (iParam16)
		{
			case 3:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[Global_14553] = 1;
				break;
			
			case 0:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14553)
			{
				case 0:
					func_254(0);
					Global_3129 = 0;
					break;
				
				case 1:
					func_254(1);
					Global_3129 = 1;
					break;
				
				case 2:
					func_254(2);
					Global_3129 = 2;
					break;
				
				case 3:
					func_254(3);
					Global_3129 = 3;
					break;
				
				default:
					Global_3129 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x0E4018692D92041D(Global_2423, 10))
		{
			Global_106565.f_14045[0 /*20*/].f_17 = 1;
			Global_106565.f_14045[1 /*20*/].f_17 = 1;
			Global_106565.f_14045[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_106565.f_14045[Global_14553 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_106565.f_14045[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_106565.f_14045[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_106565.f_14045[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16935[Global_16933] = 0;
	if (bParam10)
	{
		func_259();
		if (Global_14496)
		{
			StringCopy(&Global_14542, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14553)
			{
				case 0:
					StringCopy(&Global_14542, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14542, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14542, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14542, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_253())
			{
				unk_0x0F8EAEEC97DDBCB3(-1, "Text_Arrive_Tone", &Global_14542, 1);
			}
		}
	}
	if (!Global_14726)
	{
		if (Global_14553.f_1 == 6)
		{
			func_214(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_210(1);
			func_214(Global_14534, "DISPLAY_VIEW", 1f, to_float(Global_14533), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_282(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0xE6A7CE90720B9037();
	iVar1 = unk_0x7EA67BD818402745();
	iVar2 = unk_0x13348E86D5B8A052();
	iVar3 = unk_0x020A28FAE1C09250();
	uVar4 = unk_0x2C02CAA9C4127339() + 1;
	iVar5 = unk_0xED3F08F762AAA55A();
	Global_106565.f_14135[iParam0 /*104*/].f_18 = iVar0;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_283()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71590)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16933 = 34;
	Global_106565.f_14135[Global_16933 /*104*/].f_18 = -1;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_1 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_2 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_3 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_284(Global_106565.f_14135[iVar2 /*104*/].f_18, Global_106565.f_14135[Global_16933 /*104*/].f_18))
		{
			Global_16933 = iVar2;
		}
		iVar2++;
	}
	Global_106565.f_14135[Global_16933 /*104*/].f_24 = 1;
}

int func_284(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_285()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71590)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_106565.f_14135[iVar2 /*104*/].f_24 == 0)
		{
			Global_16933 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16933 = 34;
	Global_106565.f_14135[Global_16933 /*104*/].f_18 = -1;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_1 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_2 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_3 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_106565.f_14135[iVar2 /*104*/].f_24 == 0 || Global_106565.f_14135[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_284(Global_106565.f_14135[iVar2 /*104*/].f_18, Global_106565.f_14135[Global_16933 /*104*/].f_18))
			{
				Global_16933 = iVar2;
			}
		}
		if (Global_106565.f_14135[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16933 == 34)
	{
		return 0;
	}
	Global_106565.f_14135[Global_16933 /*104*/].f_99[0] = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_99[1] = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_99[2] = 0;
	return 1;
}

int func_286(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0xCE689A8E8C42ED78(&Global_2423, 10);
	iVar0 = 3;
	if (func_281(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3130 = iParam10;
			Global_3033[3 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
			Global_3110 = iParam0;
			StringCopy(&Global_3111, sParam5, 64);
			unk_0x8950ED5730F62EE8(&Global_2423, 1);
			unk_0x8950ED5730F62EE8(&Global_2423, 7);
		}
		return 1;
	}
	return 0;
}

int func_287(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
	}
	if (unk_0xC90E2CD6BFE5CC33(unk_0x33CD235DF1E6A94E()))
	{
		return 0;
	}
	func_279();
	bVar0 = true;
	if (func_278(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_246(120000);
		return 1;
	}
	return 0;
}

int func_288(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xC90E2CD6BFE5CC33(unk_0x33CD235DF1E6A94E()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x0E4018692D92041D(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x0E4018692D92041D(iParam4, 4))
	{
		bVar0 = func_303(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_294(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x0E4018692D92041D(iParam4, 3))
		{
			func_293(1);
		}
		if (unk_0x0E4018692D92041D(iParam4, 5))
		{
			func_292(1);
		}
		func_291();
		func_249();
		func_290();
		func_289();
		return 1;
	}
	return 0;
}

void func_289()
{
	Global_2537642 = 0;
}

void func_290()
{
	Global_1365424.f_57 = 1;
	Global_1365424.f_57.f_1 = 0;
}

void func_291()
{
	Global_1365424.f_40.f_9 = 1;
}

void func_292(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2425, 0);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2425, 0);
	}
}

void func_293(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2423, 20);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 20);
	}
}

int func_294(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_302(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15914 = 0;
	Global_15873 = 1;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_15871 = 0;
	Global_15918 = 0;
	Global_15920 = 0;
	Global_2621441 = 0;
	return func_295(sParam3, iParam4, bParam7);
}

int func_295(char* sParam0, int iParam1, bool bParam2)
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
					func_301();
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
		if (func_332(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_300();
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
				func_259();
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
				if (func_299())
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
			if (func_298())
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
			func_297();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_296();
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
		func_301();
	}
	return 0;
}

void func_296()
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

void func_297()
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

int func_298()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_299()
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

void func_300()
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

void func_301()
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

void func_302(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = iParam5;
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

int func_303(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_302(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15914 = 1;
	Global_15873 = 1;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_15871 = 0;
	Global_15918 = 0;
	Global_15920 = 0;
	Global_2621441 = 0;
	return func_295(sParam3, iParam4, bParam7);
}

int func_304(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
	}
	if (unk_0xC90E2CD6BFE5CC33(unk_0x33CD235DF1E6A94E()))
	{
		return 0;
	}
	if (func_306(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_305();
		func_291();
		func_249();
		func_290();
		func_289();
		return 1;
	}
	return 0;
}

void func_305()
{
	Global_16884 = 0;
}

bool func_306(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_302(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15914 = 0;
	Global_15873 = 1;
	Global_15880 = 0;
	Global_15875 = 1;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_15871 = 0;
	Global_15918 = 1;
	Global_15920 = 0;
	StringCopy(&Global_16014, sParam5, 24);
	Global_2621441 = 0;
	return func_295(sParam3, iParam4, bParam8);
}

int func_307(var uParam0, char* sParam1, char* sParam2)
{
	if (func_309(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_308();
		func_249();
		func_290();
		return 1;
	}
	return 0;
}

void func_308()
{
	Global_1365424.f_40.f_9 = 2;
}

bool func_309(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_302(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_295(sParam2, iParam3, 0);
}

void func_310()
{
	Global_1365424.f_55 = Global_1365424.f_40.f_1;
	Global_1365424.f_55.f_1 = Global_1365424.f_40.f_10;
}

void func_311()
{
	Global_1365424.f_40 = 1;
}

bool func_312()
{
	return Global_1365424.f_40 == 1;
}

int func_313(int iParam0, int iParam1, int iParam2)
{
	if (!func_314(iParam0))
	{
		return 0;
	}
	if (Global_1365424.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1365424.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_314(int iParam0)
{
	if (!func_315())
	{
		return 0;
	}
	if (!Global_1365424.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_315()
{
	if (Global_1365424.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_316(int iParam0)
{
	if (func_320())
	{
		return 0;
	}
	if (func_231())
	{
		return 0;
	}
	if (func_319(0))
	{
		return 0;
	}
	if (Global_1312467.f_18 != 0)
	{
		return 0;
	}
	if (Global_1657075 || func_318())
	{
		return 0;
	}
	if (!unk_0x0E4018692D92041D(iParam0, 6))
	{
		if (func_317())
		{
			return 0;
		}
	}
	return 1;
}

bool func_317()
{
	return unk_0xB09BA22C73228B8C(unk_0x78DCC5D0CB43DEBA(), Global_1382380);
}

int func_318()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_319(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (unk_0x0E4018692D92041D(Global_2423, 14))
			{
				return 1;
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
	if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_320()
{
	return func_298();
}

int func_321(int iParam0, int iParam1, int iParam2)
{
	if (!func_231())
	{
		return 0;
	}
	return func_313(iParam0, iParam1, iParam2);
}

int func_322(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x36163153849DFDA1(&cVar0);
}

bool func_323()
{
	return Global_2534821.f_1;
}

int func_324()
{
	if (Global_1365612.f_2)
	{
		return 1;
	}
	return func_325();
}

bool func_325()
{
	return func_320();
}

void func_326(int iParam0)
{
	if (!unk_0x0E4018692D92041D(iLocal_111, 11))
	{
		switch (iParam0)
		{
			case 0:
				sLocal_295 = "FMA_KIL1";
				unk_0x8950ED5730F62EE8(&iLocal_111, 11);
				break;
			}
	}
}

int func_327(int iParam0)
{
	int iVar0;
	
	iVar0 = 144;
	switch (iParam0)
	{
		case 0:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

void func_328(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_330(12, 3, 0);
			func_329(&uLocal_130, 1, 0, "Lester", 0, 1);
			break;
	}
}

void func_329(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_330(int iParam0, int iParam1, bool bParam2)
{
	Global_3109 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 147)
	{
		func_259();
		if (iParam1 == 4)
		{
			Global_106565.f_28044[iParam0 /*29*/].f_12[0] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_12[1] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_12[2] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_24[0] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_24[1] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_106565.f_28044[iParam0 /*29*/].f_12[iParam1] == 1 && Global_106565.f_28044[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_106565.f_28044[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_71590)
			{
				if (iParam1 != 4)
				{
					if (Global_14553 != iParam1)
					{
						Global_3082[iParam1 /*4*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
						Global_3099[iParam1] = 1;
						Global_3104[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14553)
					{
					}
					else
					{
						Global_3033[1 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
						Global_3033[1 /*6*/].f_5 = iParam1;
						func_331();
					}
				}
				else
				{
					Global_3033[1 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
					Global_3033[1 /*6*/].f_5 = iParam1;
					func_331();
				}
			}
			else
			{
				Global_3033[1 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
				Global_3033[1 /*6*/].f_5 = iParam1;
				func_331();
			}
		}
	}
}

void func_331()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[Global_3109 /*29*/].f_7)), 64);
	if (Global_3128 == 0)
	{
		unk_0x1F85AD4B26B92795("");
		StringCopy(&cVar1, unk_0x434854E9CAE13C4A(&(Global_3033[1 /*6*/])), 64);
		sVar2 = unk_0x434854E9CAE13C4A("CELL_253");
		unk_0xDE1BA36E3BACF7C1(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0x1F85AD4B26B92795("CELL_255");
		unk_0xFA6BEE2B1507FF1E(&(Global_3033[1 /*6*/]));
		unk_0xDE1BA36E3BACF7C1(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xCE689A8E8C42ED78(&Global_2423, 0);
}

bool func_332(int iParam0, int iParam1)
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

int func_333(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xFAC8F20FBC764F4D())
	{
		return 0;
	}
	if (func_339())
	{
		return 0;
	}
	if (!unk_0x73DA1542B2F0C458())
	{
		return 0;
	}
	if (func_338())
	{
		return 0;
	}
	if (func_348())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_51(unk_0x95B959F18401C09A(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_50(unk_0x95B959F18401C09A()))
		{
			return 0;
		}
	}
	if (func_337())
	{
		return 0;
	}
	if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		return 0;
	}
	if (unk_0xD9C92B0885A075F8())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
		{
			return 0;
		}
	}
	if (Global_1574174)
	{
		return 0;
	}
	if (func_336())
	{
		return 0;
	}
	if (func_335())
	{
		return 0;
	}
	if (func_346())
	{
		return 0;
	}
	if (Global_68807)
	{
		return 0;
	}
	if (Global_2538126)
	{
		return 0;
	}
	if (func_334(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

int func_334(int iParam0)
{
	int iVar0;
	
	if (!unk_0xB331FCEB94EB05C8())
	{
		return 0;
	}
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		return Global_2506343;
	}
	else
	{
		iVar0 = unk_0x541D5C57194E73C4(unk_0x378BD4B3881338C2(iParam0));
		if (iVar0 == joaat("mp_m_freemode_01") || iVar0 == joaat("mp_f_freemode_01"))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_335()
{
	return Global_2448756.f_579;
}

bool func_336()
{
	return Global_2448756.f_732;
}

bool func_337()
{
	return Global_2437364.f_3032.f_578;
}

bool func_338()
{
	return unk_0xE3903F59E2F22150() <= Global_17411.f_5878 + 100;
}

int func_339()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

int func_340()
{
	int iVar0;
	
	iVar0 = Global_1382690[func_152(-1)];
	if (unk_0x0E4018692D92041D(iVar0, 8))
	{
		return 1;
	}
	return 0;
}

void func_341(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x4F94F07DAD382CDA(Local_103.f_12[0]))
			{
				Global_2437364.f_3751.f_1[0] = unk_0xFC00F22E930BFD55(Local_103.f_12[0]);
			}
			if (unk_0x4F94F07DAD382CDA(Local_103.f_9[0]))
			{
				Global_2437364.f_3751.f_4[0] = unk_0xBB28786B7F552D0B(Local_103.f_9[0]);
			}
			break;
	}
}

int func_342(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x4F94F07DAD382CDA(Local_103.f_12[0]) && unk_0x4F94F07DAD382CDA(Local_103.f_9[0]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_343(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_208, iParam0))
		{
			unk_0x8950ED5730F62EE8(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_208), iParam0);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_208, iParam0))
	{
		unk_0xCE689A8E8C42ED78(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_208), iParam0);
	}
}

int func_344(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_345())
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

bool func_345()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

bool func_346()
{
	return Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_196 != 0;
}

int func_347()
{
	return Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_197;
}

bool func_348()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 0);
}

void func_349(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 111286607;
	Param0.f_1 = unk_0x95B959F18401C09A();
	if (!iParam13 == 0)
	{
		unk_0x09269A9CFC145847(1, &Param0, 14, iParam13);
	}
}

int func_350(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xF839A4FC3E76D324())
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar1)))
		{
			iVar2 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar1));
			if (func_374(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x95B959F18401C09A() || iParam0)
				{
					unk_0x8950ED5730F62EE8(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_351()
{
	if (vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 >= 5 && vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 < 6)
	{
		if (unk_0x0E4018692D92041D(Local_103, 4))
		{
			if (!unk_0x0E4018692D92041D(iLocal_111, 3))
			{
				if (func_374(Local_103.f_8, 0, 1))
				{
					func_352("FM_TGDM_KIL", Local_103.f_8, 0, 0, 0, 1, 1, 0);
				}
				unk_0x8950ED5730F62EE8(&iLocal_111, 3);
			}
		}
	}
}

int func_352(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = unk_0x12D3B4C76D4AAB00(iParam1);
	if (unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0xEEF8394DB3D3DFA1(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0xEEF8394DB3D3DFA1(iParam1), 64);
		}
		if (unk_0x786AF4A44E1B5B4B(&Var2))
		{
		}
		unk_0x1F85AD4B26B92795(sParam0);
		if ((iVar1 != -1 && unk_0x289064CB38B560AA()) && iVar1 < 4)
		{
			if (Global_4456448.f_133551[iVar1] != -1)
			{
				unk_0x75D3F9044123D4F9(func_116(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x75D3F9044123D4F9(func_91(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0x75D3F9044123D4F9(func_91(iParam1, -2, 1, 0, 0));
		}
		unk_0xD61E5ED1D4E687A5(func_89(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
		}
		else
		{
			Global_2505680 = { func_144(iParam1) };
			if (unk_0xDD530AC51A578470(&Global_2505610, 35, &Global_2505680))
			{
				iVar3 = 0;
				if (unk_0xCE3CFF625BEBAA04(&(Global_2505610.f_22), "Leader") && Global_2505610.f_30 == 0)
				{
					iVar3 = 1;
				}
				if (Global_2505610.f_21 > 0)
				{
					iVar4 = 0;
				}
				else
				{
					iVar4 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var2 = { func_353(&Var2) };
					}
					iVar0 = unk_0xFB9D4E6534D32F54(iVar4, unk_0x068AEB9AB0499A8A(&Global_2505610, 35), &(Global_2505610.f_17), Global_2505610.f_30, iVar3, 0, Global_2505610, &Var2, Global_1314024, Global_1314025, Global_1314026);
				}
				else
				{
					iVar0 = unk_0x1F65EC88D1B3CAAD(iVar4, unk_0x068AEB9AB0499A8A(&Global_2505610, 35), &(Global_2505610.f_17), Global_2505610.f_30, iVar3, 0, Global_2505610, Global_1314024, Global_1314025, Global_1314026);
				}
			}
			else
			{
				iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
			}
		}
		func_85(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_353(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_354()
{
	int iVar0;
	
	iVar0 = unk_0x72B85B341ADBE9DE();
	if (iLocal_121 != Local_103.f_15)
	{
		iLocal_121 = Local_103.f_15;
		unk_0x9D34F024713B3952(iLocal_121);
	}
	if (iLocal_122 != Local_103.f_16)
	{
		iLocal_122 = Local_103.f_16;
		unk_0x4F8CF72358604361(iLocal_122);
	}
	if (func_374(unk_0x95B959F18401C09A(), 0, 1))
	{
		if (!unk_0x0E4018692D92041D(vLocal_108[iVar0 /*3*/], 0))
		{
			if (vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 == 0)
			{
				if (func_347() == 0)
				{
					unk_0x8950ED5730F62EE8(&(vLocal_108[iVar0 /*3*/]), 0);
				}
			}
		}
		else if (unk_0x0E4018692D92041D(vLocal_108[iVar0 /*3*/], 0))
		{
			if ((func_51(unk_0x95B959F18401C09A(), 1) || func_48(unk_0x95B959F18401C09A())) || func_347() > 0)
			{
				func_42(&uLocal_112);
				unk_0xCE689A8E8C42ED78(&(vLocal_108[iVar0 /*3*/]), 0);
			}
			else if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (!unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
				{
					if (!unk_0x0E4018692D92041D(iLocal_111, 7))
					{
						unk_0x8950ED5730F62EE8(&iLocal_111, 7);
						func_362();
					}
				}
				else if (unk_0x0E4018692D92041D(iLocal_111, 7))
				{
					unk_0xCE689A8E8C42ED78(&iLocal_111, 7);
					if (!func_49(unk_0x95B959F18401C09A(), 0))
					{
						func_360();
					}
				}
			}
		}
		if (!unk_0x0E4018692D92041D(vLocal_108[iVar0 /*3*/], 3))
		{
			if (vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 > 3 && vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 < 6)
			{
				if (unk_0x0E4018692D92041D(Global_2437364.f_3751, 1))
				{
					unk_0x8950ED5730F62EE8(&(vLocal_108[iVar0 /*3*/]), 3);
				}
			}
		}
		if (vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 > 3)
		{
			if (!unk_0x0E4018692D92041D(vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/], 5))
			{
				if (func_359(Local_103.f_5))
				{
					unk_0x8950ED5730F62EE8(&(vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/]), 5);
				}
			}
			else if (!func_359(Local_103.f_5))
			{
				unk_0xCE689A8E8C42ED78(&(vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/]), 5);
			}
			if (!unk_0x0E4018692D92041D(vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/], 6))
			{
				if (func_356(Local_103.f_5))
				{
					unk_0x8950ED5730F62EE8(&(vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/]), 6);
				}
			}
			if (!unk_0x0E4018692D92041D(vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/], 8))
			{
				if (func_355())
				{
					unk_0x8950ED5730F62EE8(&(vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/]), 8);
				}
			}
		}
		if (!unk_0x0E4018692D92041D(iLocal_111, 13))
		{
			if (unk_0x4F94F07DAD382CDA(Local_103.f_9[0]))
			{
				if (!func_40(Local_103.f_9[0]))
				{
					unk_0x428C55A965F78103(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), 1, 0);
					unk_0x8950ED5730F62EE8(&iLocal_111, 13);
				}
			}
		}
	}
}

int func_355()
{
	if (unk_0x4F94F07DAD382CDA(Local_103.f_12[0]))
	{
		if (func_9(Local_103.f_12[0]))
		{
			if (unk_0x67001C5CC88C66A8(unk_0xFC00F22E930BFD55(Local_103.f_12[0]), 0, 7000) || unk_0x67001C5CC88C66A8(unk_0xFC00F22E930BFD55(Local_103.f_12[0]), 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x4F94F07DAD382CDA(Local_103.f_9[0]))
			{
				if (!func_40(Local_103.f_9[0]))
				{
					if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
					{
						if (func_357(unk_0xBB28786B7F552D0B(Local_103.f_9[0])))
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_357(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iParam0))
	{
		return 1;
	}
	if (unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iParam0))
	{
		return 1;
	}
	if (func_358())
	{
		if (unk_0xDFD0ACB809AD97C9(unk_0x95B959F18401C09A(), &iVar0))
		{
			if (unk_0x068481DAF84B9654(iVar0))
			{
				iVar1 = unk_0x22B02EC53152632C(iVar0);
				if (unk_0x765F6FEEFF39224F(iVar1))
				{
					if (!unk_0xD62C4419A41F106A(iVar1, 0))
					{
						if (unk_0xF0D230FB550CD6EB(iVar1, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_358()
{
	return Global_1574394;
}

int func_359(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x4F94F07DAD382CDA(Local_103.f_9[0]))
			{
				if (!func_40(Local_103.f_9[0]))
				{
					if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
					{
						if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), unk_0xFBB1F99A825CAB09(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), 1)) < 40000f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

void func_360()
{
	if (!Global_1312575)
	{
		return;
	}
	func_361();
}

void func_361()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

void func_362()
{
	Global_1312575 = 1;
	StringCopy(&(Global_1312575.f_1), unk_0xD178EF744F20B712(), 32);
	Global_1312575.f_9 = unk_0x36163153849DFDA1(&(Global_1312575.f_1));
}

void func_363()
{
	switch (Local_103.f_6)
	{
		case 1:
			if (unk_0x06C1EBC003C18F1F())
			{
				if (unk_0x4F94F07DAD382CDA(Local_103.f_12[0]))
				{
					if (func_9(Local_103.f_12[0]))
					{
						if (!func_40(Local_103.f_9[0]))
						{
							if (unk_0xEE984ED4E4A374BE(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), unk_0xFC00F22E930BFD55(Local_103.f_12[0])))
							{
								if (unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), -258271821) != 1 && unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), -258271821) != 0)
								{
									unk_0x21D56A8927F5A92A(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), unk_0xFC00F22E930BFD55(Local_103.f_12[0]), 20f, 786603);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x06C1EBC003C18F1F())
			{
				if (unk_0x4F94F07DAD382CDA(Local_103.f_12[0]))
				{
					if (unk_0x4F94F07DAD382CDA(Local_103.f_9[0]))
					{
						if (func_9(Local_103.f_12[0]))
						{
							if (!func_40(Local_103.f_9[0]))
							{
								if (unk_0xEE984ED4E4A374BE(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), unk_0xFC00F22E930BFD55(Local_103.f_12[0])))
								{
									if ((unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), -258271821) != 1 && unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), -258271821) != 0) || unk_0x0E4018692D92041D(Local_103, 9))
									{
										unk_0x21D56A8927F5A92A(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), unk_0xFC00F22E930BFD55(Local_103.f_12[0]), 30f, 786469);
										if (unk_0x0E4018692D92041D(Local_103, 9))
										{
											unk_0xCE689A8E8C42ED78(&Local_103, 9);
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x4F94F07DAD382CDA(Local_103.f_9[0]))
			{
				if (!func_40(Local_103.f_9[0]))
				{
					if (unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), -828834893) != 1 && unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), -828834893) != 0)
					{
						if (func_367(Local_103.f_9[0]))
						{
							if (unk_0x6F3D61B58C7B4025(Local_103.f_9[0]))
							{
								unk_0x07C339D4328CA16C(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), 0, 0);
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x4F94F07DAD382CDA(Local_103.f_9[0]))
			{
				if (!func_40(Local_103.f_9[0]))
				{
					if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
					{
						if (unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), 1805844857) != 1 && unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), 1805844857) != 0)
						{
							if (func_367(Local_103.f_9[0]))
							{
								if (unk_0x6F3D61B58C7B4025(Local_103.f_9[0]))
								{
									unk_0xECCD4FDA45197F97(unk_0xBB28786B7F552D0B(Local_103.f_9[0]), unk_0x33CD235DF1E6A94E(), 500f, -1, 0, 1);
								}
							}
						}
					}
				}
			}
			break;
	}
	if (unk_0x4F94F07DAD382CDA(Local_103.f_9[0]))
	{
		if ((vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 >= 5 && vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/].f_2 < 6) && !func_185(unk_0x95B959F18401C09A(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			func_364(Local_103.f_9[0], &Local_123, -1082130432, 0, 1, 0, 0, -1, -1, 1);
		}
		else
		{
			func_62(&Local_123);
		}
	}
}

void func_364(var uParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x22C3124A898FB82A(uParam0))
	{
		if (func_366())
		{
			Global_2437364 = unk_0x95B959F18401C09A();
		}
		if (bParam3)
		{
			func_365(unk_0xBB28786B7F552D0B(uParam0), iParam1, 1, Global_2437364, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_365(unk_0xBB28786B7F552D0B(uParam0), iParam1, -1, Global_2437364, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xE38E3CF1625A4145(*iParam1))
	{
		func_62(iParam1);
	}
}

int func_365(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x3EE1295CEFBEFED4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (!unk_0x9FC2A869F7656459(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xE7E396453CA1FDA4(iParam0, 1);
			}
			else
			{
				unk_0x90CC3AC0A82D3ACE(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xD8E6A14E9458A3BD(iParam0, iParam2);
			unk_0xCA42EF25F6E69D76(iParam0, fParam6);
			if (unk_0xE38E3CF1625A4145(*uParam1))
			{
				unk_0xC51C58C963968740(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x1DFC768C95CA77C0(iParam0, iParam9);
		}
		unk_0xDEEEBBCE424E6F55(iParam0, iParam4);
		unk_0x0514F49E17636419(iParam0, iParam5);
		*uParam1 = unk_0x4C87FF5632A97BE5(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xE38E3CF1625A4145(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xB9E84A421C105943(*uParam1, iParam8);
				}
				if (!unk_0x786AF4A44E1B5B4B(sParam7))
				{
					unk_0xC6A42001AF5FDE0E("STRING");
					if (bParam10)
					{
						unk_0xD61E5ED1D4E687A5(sParam7);
					}
					else
					{
						unk_0xFA6BEE2B1507FF1E(sParam7);
					}
					unk_0xC35DA253230B9F05(*uParam1);
				}
				unk_0xC51C58C963968740(*uParam1, 7);
			}
		}
		if (!unk_0x0E4018692D92041D(uParam1->f_6, 2))
		{
			if (unk_0xE38E3CF1625A4145(*uParam1))
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xF0D230FB550CD6EB(iParam0, 0))
		{
			uParam1->f_1 = unk_0xD8E87EF121DF74DA(iParam0);
			if (!unk_0x0E4018692D92041D(uParam1->f_6, 3))
			{
				if (unk_0xE38E3CF1625A4145(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0xB9E84A421C105943(uParam1->f_1, iParam8);
					}
					if (!unk_0x786AF4A44E1B5B4B(sParam7))
					{
						unk_0xC6A42001AF5FDE0E("STRING");
						if (bParam10)
						{
							unk_0xD61E5ED1D4E687A5(sParam7);
						}
						else
						{
							unk_0xFA6BEE2B1507FF1E(sParam7);
						}
						unk_0xC35DA253230B9F05(uParam1->f_1);
					}
					unk_0xC51C58C963968740(uParam1->f_1, 7);
					unk_0x8950ED5730F62EE8(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xE38E3CF1625A4145(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xCE689A8E8C42ED78(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xE38E3CF1625A4145(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xCE689A8E8C42ED78(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_366()
{
	return Global_1312844;
}

int func_367(var uParam0)
{
	if (unk_0x5E2784BB00B20E8E(uParam0))
	{
		return 1;
	}
	if (func_368(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_368(var uParam0)
{
	if (!unk_0x06C1EBC003C18F1F())
	{
		return 0;
	}
	if (!unk_0x4F94F07DAD382CDA(uParam0))
	{
		return 0;
	}
	if (func_369(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_369(var uParam0)
{
	if (unk_0x22C3124A898FB82A(uParam0))
	{
		unk_0x254D3936DA813A55(uParam0);
		return unk_0x6F3D61B58C7B4025(uParam0);
	}
	return 0;
}

int func_370()
{
	return Local_103.f_1;
}

int func_371(int iParam0)
{
	return vLocal_108[iParam0 /*3*/].f_1;
}

void func_372()
{
	func_55();
	func_343(11, 0);
	func_204(12, 116);
	unk_0xCE689A8E8C42ED78(&(Global_2437364.f_3751), 0);
	unk_0xCE689A8E8C42ED78(&(Global_2437364.f_3751), 1);
	if (unk_0xB331FCEB94EB05C8())
	{
		if (unk_0x72B85B341ADBE9DE() > -1)
		{
			vLocal_108[unk_0x72B85B341ADBE9DE() /*3*/] = 0;
		}
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		if (unk_0x06C1EBC003C18F1F())
		{
			if (unk_0xDBB7D36074C0B9BB(Local_103.f_3))
			{
				unk_0x0341DAD0128E99C8(Local_103.f_3);
			}
			Local_103.f_3 = -1;
		}
	}
	if (unk_0xE38E3CF1625A4145(Global_1657044))
	{
		unk_0x1ABDB383C83A336A(&Global_1657044);
	}
	unk_0xCE689A8E8C42ED78(&iLocal_111, 3);
	unk_0xCE689A8E8C42ED78(&iLocal_111, 4);
	iLocal_110 = 0;
	if (unk_0xE38E3CF1625A4145(Local_123))
	{
		unk_0x1ABDB383C83A336A(&Local_123);
	}
	func_373();
}

void func_373()
{
	unk_0x5894DC159447E10A();
}

int func_374(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xF272A2699B521CE6(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437364.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_375()
{
	var uVar0;
	
	func_383(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_382())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_381())
	{
		return 1;
	}
	if (func_380(157))
	{
		if (!func_379())
		{
			return 1;
		}
	}
	if (func_380(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_376() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_376()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_376()
{
	switch (func_378())
	{
		case 0:
			return func_377();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_377()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_378()
{
	return Global_25765;
}

bool func_379()
{
	return Global_2448756.f_586;
}

int func_380(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_381()
{
	return Global_2458613;
}

bool func_382()
{
	return Global_2448756.f_581;
}

void func_383(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x77BABFD1D75AA582(1))
	{
		iVar1 = unk_0x5487531DB7DA4AB5(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x286A5F0670063839(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -275425152:
					func_384(iVar0);
					break;
				
				case -42615386:
					unk_0x286A5F0670063839(1, iVar0, &vVar3, 4);
					if (vVar3.z == 1267052711)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_384(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x286A5F0670063839(1, iParam0, &vVar0, 3))
	{
		if (func_374(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x378BD4B3881338C2(vVar0.y);
			if (unk_0x765F6FEEFF39224F(iVar1))
			{
				if (unk_0xF0D230FB550CD6EB(iVar1, 0))
				{
					iVar2 = unk_0xF2C96862595654B4(iVar1, 0);
					if (unk_0x8F6C3DD0BB146CA3(iVar2, vVar0.z) && unk_0xE36862B47CD70685())
					{
						if (func_385(iVar2, &bVar3))
						{
							unk_0xD4A76B5E6C175542(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x65F544B458249682(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_385(int iParam0, var uParam1)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0x5A04E3BD0B5E7E49(iParam0))
		{
			if (unk_0xFB2062B880AF8075(iParam0))
			{
				if (!unk_0xFFB467183FEE27C4(unk_0x541D5C57194E73C4(iParam0)))
				{
					unk_0x0D21E1FDE062ED99(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9E08E12414BD4476(iParam0, 0))
		{
			if (unk_0x0A81FE3D92AE2AC9(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_386()
{
	wait(0);
}

void func_387(struct<21> Param0)
{
	func_390(func_391(Param0), Param0);
	func_389(0, -1, 0);
	unk_0x7643BB59992A9E6E(&Local_103, 23);
	unk_0x568D314D73140729(&vLocal_108, 97);
	unk_0x9980AE643A60F372(0);
	if (!func_388())
	{
		func_372();
	}
	unk_0x8950ED5730F62EE8(&(Global_2437364.f_3751), 0);
	unk_0xCE689A8E8C42ED78(&(Global_2437364.f_3751), 1);
}

int func_388()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 0;
		}
		if (unk_0x4BA2474DB2034FF1())
		{
			return 1;
		}
		if (func_382())
		{
			return 0;
		}
		if (func_380(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_389(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x52119E312E15DB07();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_373();
			}
			else
			{
				return 0;
			}
		}
		if (!func_366())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xB331FCEB94EB05C8())
				{
					if (!bParam2)
					{
						func_373();
					}
					else
					{
						return 0;
					}
				}
				if (func_382())
				{
					if (!bParam2)
					{
						func_373();
					}
					else
					{
						return 0;
					}
				}
				if (func_380(155))
				{
					if (!bParam2)
					{
						func_373();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x295BEA3FE13E5C3D())
			{
				if (!bParam2)
				{
					func_373();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0x52119E312E15DB07();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			if (!bParam2)
			{
				func_373();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x295BEA3FE13E5C3D())
	{
		if (!bParam2)
		{
			func_373();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_390(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		func_373();
	}
	unk_0x210E46A190FB3CB3(iParam0, 0, Param1.f_16);
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 137:
			return 32;
		
		case 138:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 132:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 133:
			return 32;
		
		case 134:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 2;
		
		case 148:
			return 1;
		
		case 144:
			return 2;
		
		case 145:
			return 4;
		
		case 146:
			return 2;
		
		case 147:
			return 2;
		
		case 129:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
			return 0;
		
		case 163:
			return 1;
		
		case 156:
			return 4;
		
		case 159:
			return 4;
		
		case 160:
			return 1;
		
		case 161:
			return 8;
		
		case 162:
			return 8;
		
		case 157:
			return 16;
		
		case 158:
			return 32;
		
		default:
	}
	return 0;
}

