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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	vector3 vLocal_76 = { 0f, 0f, 0f };
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	char* sLocal_80[3] = { NULL, NULL, NULL };
	char* sLocal_81 = NULL;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	vector3 vLocal_84[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_85[4] = { 0f, 0f, 0f, 0f };
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<4> Local_88 = { 0, 0, 0, 0 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 15;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
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
	var uLocal_148 = 16;
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
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317[5] = { 0, 0, 0, 0, 0 };
	float fLocal_318[5] = { 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_319[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_320[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_321 = 0;
	vector3 vLocal_322 = { 0f, 0f, 0f };
	vector3 vLocal_323 = { 0f, 0f, 0f };
	float fLocal_324 = 0f;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	bool bLocal_327 = 0;
	int iLocal_328 = 0;
	vector3 vLocal_329 = { 0f, 0f, 0f };
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	float fLocal_341 = 0f;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	vector3 vLocal_345 = { 0f, 0f, 0f };
	int iLocal_346 = 0;
	vector3 vLocal_347 = { 0f, 0f, 0f };
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	vector3 vLocal_351 = { 0f, 0f, 0f };
	vector3 vLocal_352 = { 0f, 0f, 0f };
	float fLocal_353 = 0f;
	vector3 vLocal_354 = { 0f, 0f, 0f };
	vector3 vLocal_355 = { 0f, 0f, 0f };
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	vector3 vLocal_358[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	char* sLocal_370 = NULL;
	char* sLocal_371 = NULL;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	struct<2> Local_387 = { 0, 5 } ;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 5;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	iLocal_54 = -1;
	sLocal_81 = "null";
	iLocal_82 = -1;
	iLocal_83 = -1;
	iLocal_94 = 1;
	fLocal_324 = 200f;
	iLocal_343 = unk_0xE3903F59E2F22150();
	iLocal_344 = 10000;
	iLocal_360 = -1;
	iLocal_369 = 1486715695;
	sLocal_370 = "std_ds_open_door_for_chop";
	sLocal_371 = "creatures@rottweiler@in_vehicle@std_car";
	iLocal_379 = unk_0xE3903F59E2F22150();
	iLocal_382 = unk_0xE3903F59E2F22150();
	iLocal_384 = unk_0x8CCC0A0504C52531();
	if (unk_0x9EC5BDC006623C42(3))
	{
		func_179();
	}
	while (!unk_0x73DA1542B2F0C458())
	{
		wait(0);
	}
	iLocal_386 = unk_0x8D255802EBF1DA76();
	vLocal_345 = { ScriptParam_387.f_1[0 /*3*/] };
	if (unk_0x1BCDA92AD0A7835B(unk_0x535C9C52117DA0AD()) > 1)
	{
		func_179();
	}
	if (!func_178(63))
	{
		func_179();
	}
	if (!func_177(5) && !func_177(6))
	{
		func_179();
	}
	if (func_177(6) && func_176(vLocal_345, 1, 0) == 5)
	{
		func_179();
	}
	if (!func_170(1))
	{
		func_179();
	}
	if (Global_25912 == 1)
	{
		func_179();
	}
	if (Global_90632 == 1)
	{
		func_179();
	}
	if (func_167(0))
	{
		if (unk_0x1BCDA92AD0A7835B(joaat("sh_intro_f_hills")) == 0 && unk_0x1BCDA92AD0A7835B(joaat("martin1")) == 0)
		{
			func_179();
		}
	}
	if ((((func_166() == 206 || func_166() == 207) || func_166() == 204) || func_166() == 205) || func_166() == 203)
	{
		iLocal_325 = 1;
	}
	else if (func_166() == 47)
	{
		iLocal_326 = 1;
	}
	else
	{
		if ((unk_0x16E00F066AFFEA0D(vLocal_345, 154.0731f, 765.5721f, 209.6901f, true) <= 50f || unk_0x16E00F066AFFEA0D(vLocal_345, -268.139f, 415.2881f, 109.7258f, true) <= 50f) || unk_0x16E00F066AFFEA0D(vLocal_345, 314.4171f, 965.207f, 208.4024f, true) <= 50f)
		{
			func_179();
		}
		iLocal_325 = 0;
		iLocal_326 = 0;
		if (Global_71588 == 1)
		{
			func_179();
		}
	}
	while (true)
	{
		if (!func_163())
		{
			switch (iLocal_50)
			{
				case 0:
					func_154();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			func_179();
		}
		wait(0);
	}
}

void func_1()
{
	if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		return;
	}
	if (unk_0xBC2FC12AD0FBF72E(iLocal_69))
	{
		return;
	}
	func_152();
	func_151();
	if (iLocal_51 != 11)
	{
		func_150();
		func_149();
		func_129();
		func_128();
		func_126();
	}
	func_2();
}

void func_2()
{
	int iVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	switch (iLocal_51)
	{
		case 11:
			if (iLocal_52 == 0)
			{
				unk_0x0483D0035D6E46FD("creatures@rottweiler@amb@sleep_in_kennel@");
				if (unk_0xE9CCF312047EBEE0("creatures@rottweiler@amb@sleep_in_kennel@"))
				{
					if (func_125(iLocal_69))
					{
						unk_0x108754262311D34F(iLocal_69, "creatures@rottweiler@amb@sleep_in_kennel@", "sleep_in_kennel", 1000f, -8f, -1, 1, 0, 0, 0, 0);
						func_124(iLocal_69, vLocal_329.f_5, vLocal_329.f_8, 0, 1);
					}
					iLocal_336 = unk_0xE3903F59E2F22150();
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_123())
				{
					unk_0x0483D0035D6E46FD("creatures@rottweiler@amb@sleep_in_kennel@");
					if (unk_0xE9CCF312047EBEE0("creatures@rottweiler@amb@sleep_in_kennel@") && func_125(iLocal_69))
					{
						unk_0x108754262311D34F(iLocal_69, "creatures@rottweiler@amb@sleep_in_kennel@", "exit_kennel", 8f, -8f, -1, 0, 0, 0, 0, 0);
						func_122("WHINE");
						iLocal_52++;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (unk_0xD76D6BCC14B95CE1(iLocal_69, -2017877118) == 7)
				{
					unk_0xFF2DEA68E2D3602E("creatures@rottweiler@amb@sleep_in_kennel@");
					func_122("PLAYFUL");
					func_121(1, 1);
				}
			}
			break;
		
		case 1:
			if (iLocal_338 == 0 && func_118(unk_0x33CD235DF1E6A94E(), 1))
			{
				func_121(18, 1);
			}
			else
			{
				func_117();
				func_116();
				func_115();
			}
			break;
		
		case 17:
			func_117();
			func_116();
			if (iLocal_52 == 0)
			{
				unk_0x0483D0035D6E46FD(sLocal_80[0]);
				unk_0x0483D0035D6E46FD(sLocal_80[1]);
				unk_0x0483D0035D6E46FD(sLocal_80[2]);
				if ((unk_0xE9CCF312047EBEE0(sLocal_80[0]) && unk_0xE9CCF312047EBEE0(sLocal_80[1])) && unk_0xE9CCF312047EBEE0(sLocal_80[2]))
				{
					unk_0x108754262311D34F(iLocal_69, sLocal_80[0], "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if ((!func_113(iLocal_69, -2017877118) || (unk_0x1CE8F0A08E65CA6A(iLocal_69, sLocal_80[0], "enter", 3) && unk_0x204DEACC5BECF723(iLocal_69, sLocal_80[0], "enter") > 0.98f)) || (unk_0x1CE8F0A08E65CA6A(iLocal_69, sLocal_80[1], sLocal_81, 3) && unk_0x204DEACC5BECF723(iLocal_69, sLocal_80[1], sLocal_81) > 0.98f))
				{
					if (iLocal_53 == 0)
					{
						if (iLocal_79 == 1)
						{
							unk_0x108754262311D34F(iLocal_69, sLocal_80[1], "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
							sLocal_81 = "base";
							iLocal_52++;
						}
						else
						{
							func_112();
							if (unk_0x9EC3B269A34A2BEE(0, 4) == 0)
							{
								iLocal_52++;
							}
						}
					}
					else
					{
						if (iLocal_53 != 5)
						{
							func_108("CHOP_WAIT", 0);
						}
						unk_0x108754262311D34F(iLocal_69, sLocal_80[2], "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						iLocal_52 = 3;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (!func_113(iLocal_69, -2017877118) || (unk_0x1CE8F0A08E65CA6A(iLocal_69, sLocal_80[1], sLocal_81, 3) && unk_0x204DEACC5BECF723(iLocal_69, sLocal_80[1], sLocal_81) > 0.98f))
				{
					unk_0x108754262311D34F(iLocal_69, sLocal_80[2], "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 3)
			{
				if (!func_113(iLocal_69, -2017877118))
				{
					iLocal_348 = 0;
					if (iLocal_53 == 0)
					{
						func_121(1, 1);
					}
					else
					{
						func_121(iLocal_53, 1);
					}
				}
			}
			break;
		
		case 18:
			func_116();
			if (iLocal_52 == 0)
			{
				unk_0x0483D0035D6E46FD("creatures@rottweiler@amb@world_dog_barking@enter");
				unk_0x0483D0035D6E46FD("creatures@rottweiler@amb@world_dog_barking@idle_a");
				unk_0x0483D0035D6E46FD("creatures@rottweiler@amb@world_dog_barking@exit");
				unk_0x3C0F6044C54799A8(iLocal_69, unk_0x33CD235DF1E6A94E(), 20000, 3f, 1f, 1073741824, 0);
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				if (iLocal_53 == 0)
				{
					if (!func_113(iLocal_69, 1227113341))
					{
						if ((unk_0xE9CCF312047EBEE0("creatures@rottweiler@amb@world_dog_barking@enter") && unk_0xE9CCF312047EBEE0("creatures@rottweiler@amb@world_dog_barking@idle_a")) && unk_0xE9CCF312047EBEE0("creatures@rottweiler@amb@world_dog_barking@exit"))
						{
							unk_0x99414FB2D30425C1(&uLocal_95);
							unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
							unk_0x108754262311D34F(0, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x108754262311D34F(0, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x108754262311D34F(0, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xC734F59A13D39AEF(uLocal_95);
							unk_0x13A2D602CD10CBAC(iLocal_69, uLocal_95);
							unk_0xA7A57E7757ED035E(&uLocal_95);
							iLocal_52++;
						}
					}
				}
				else
				{
					func_121(iLocal_53, 1);
				}
			}
			else if (iLocal_52 == 2)
			{
				if (func_107())
				{
					iLocal_338 = 1;
					if (iLocal_53 == 0)
					{
						func_121(1, 1);
					}
					else
					{
						func_121(iLocal_53, 1);
					}
				}
			}
			break;
		
		case 2:
			func_102();
			if (iLocal_52 == 0)
			{
				if ((func_125(iLocal_69) && !unk_0xF0D230FB550CD6EB(iLocal_69, 0)) && !unk_0xE214B9FCEDF6364A(iLocal_69))
				{
					unk_0xED68CDDDE25A144E(iLocal_69);
				}
				func_100();
				func_99(0, 0, 0);
				func_98(1);
				iLocal_60 = -1;
				iLocal_316 = unk_0xE3903F59E2F22150();
				iLocal_62 = unk_0xE3903F59E2F22150();
				iLocal_63 = (unk_0xE3903F59E2F22150() - 10000);
				vLocal_76 = { unk_0xFBB1F99A825CAB09(iLocal_69, true) };
				unk_0x0483D0035D6E46FD("creatures@rottweiler@melee@streamed_taunts@");
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				func_83();
				func_54();
				func_53();
				func_45();
				func_44();
				func_41();
				func_117();
			}
			break;
		
		case 3:
			if (iLocal_52 == 0)
			{
				func_122("WHINE");
				func_108("CHOP_GOHOME", 0);
				func_40(0);
				unk_0xFF2DEA68E2D3602E("creatures@rottweiler@melee@streamed_taunts@");
				if (func_125(unk_0x33CD235DF1E6A94E()) && unk_0xEAF6E82C7BDE5A4C(unk_0x33CD235DF1E6A94E(), joaat("weapon_ball"), 0))
				{
					unk_0x681FB12989BD5DEA(unk_0x33CD235DF1E6A94E(), joaat("weapon_ball"));
				}
				if (unk_0xE214B9FCEDF6364A(iLocal_69))
				{
					unk_0x5D94F4D6FE7DA516(iLocal_69);
				}
				if (func_118(iLocal_69, 1))
				{
					func_121(1, 1);
				}
				else if (func_39(iLocal_69, vLocal_329, 1) < 100f)
				{
					unk_0xED68CDDDE25A144E(iLocal_69);
					if (func_39(iLocal_69, vLocal_329, 1) < 20f)
					{
						unk_0x7E268975AF5EA74F(iLocal_69, vLocal_329, 1f, 20000, 0.25f, 32, vLocal_329.f_3);
					}
					else
					{
						unk_0x7E268975AF5EA74F(iLocal_69, vLocal_329, 3f, 60000, 0.25f, 32, vLocal_329.f_3);
					}
					iLocal_52++;
				}
				else
				{
					func_121(4, 1);
				}
			}
			else if (iLocal_52 == 1)
			{
				if (unk_0xD76D6BCC14B95CE1(iLocal_69, 713668775) == 7)
				{
					if (unk_0x18FB647D79B09657(iLocal_69, vLocal_329, 2.5f, 2.5f, 4f, 0, true, 0))
					{
						func_121(1, 1);
					}
					else
					{
						func_121(3, 1);
					}
				}
			}
			break;
		
		case 4:
			if (!func_113(iLocal_69, 1805844857))
			{
				unk_0xECCD4FDA45197F97(iLocal_69, unk_0x33CD235DF1E6A94E(), 100f, -1, 0, 0);
			}
			break;
		
		case 5:
			if (iLocal_52 == 0)
			{
				if (func_38())
				{
					if (func_35())
					{
						if (unk_0xE214B9FCEDF6364A(iLocal_69))
						{
							unk_0x5D94F4D6FE7DA516(iLocal_69);
						}
						unk_0xED68CDDDE25A144E(iLocal_69);
						iLocal_56 = unk_0xE3903F59E2F22150();
						iLocal_58 = 1000;
						iLocal_339 = 0;
						iLocal_67 = -1;
						func_34();
						iLocal_52++;
					}
					else
					{
						func_32();
					}
				}
			}
			else if (iLocal_52 == 1)
			{
				if (((!func_24() || (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && !func_22())) || (iLocal_67 > -1 && (unk_0xE3903F59E2F22150() - iLocal_67) > 30000)) || unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_322, 1f, 1f, 1f, 0, true, 0))
				{
					iLocal_52++;
				}
				else if (unk_0x18FB647D79B09657(iLocal_69, vLocal_323, 3f, 3f, 4f, 0, true, 0))
				{
					func_20();
					if (iLocal_67 == -1)
					{
						iLocal_67 = unk_0xE3903F59E2F22150();
					}
				}
				else
				{
					func_18();
					if (func_113(iLocal_69, 713668775))
					{
						iVar0 = unk_0xCAB00E0F9EB1039D(iLocal_69, &uVar2, &uVar1);
						if (iVar0 == 2)
						{
							iLocal_339++;
						}
						else if (iVar0 == 3)
						{
							if (iLocal_339 != 0)
							{
								iLocal_339 = 0;
							}
						}
						if (iLocal_339 > 9)
						{
							func_32();
						}
					}
					else
					{
						unk_0x7E268975AF5EA74F(iLocal_69, vLocal_323, 3f, -1, 3f, 36, 1193033728);
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				unk_0xED68CDDDE25A144E(iLocal_69);
				unk_0xFF2DEA68E2D3602E("creatures@rottweiler@indication@");
				func_121(2, 1);
			}
			func_102();
			break;
		
		case 6:
			if (iLocal_52 == 0)
			{
				if (unk_0xE214B9FCEDF6364A(iLocal_69))
				{
					unk_0x5D94F4D6FE7DA516(iLocal_69);
				}
				unk_0x4A852F02088ECC9D(iLocal_69, 0);
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				if (func_125(unk_0x33CD235DF1E6A94E()))
				{
					if ((!func_113(iLocal_69, 780511057) && !unk_0x71E0DAA57FE7D5C7(iLocal_69, 0)) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
					{
						iLocal_62 = unk_0xE3903F59E2F22150();
						func_121(2, 1);
					}
				}
			}
			func_102();
			break;
		
		case 7:
			if (iLocal_52 == 0)
			{
				unk_0x0483D0035D6E46FD("creatures@rottweiler@tricks@");
				if (unk_0xE9CCF312047EBEE0("creatures@rottweiler@tricks@"))
				{
					unk_0xED68CDDDE25A144E(iLocal_69);
					unk_0x99414FB2D30425C1(&uLocal_95);
					if (!unk_0x910FF514D7BC5674(iLocal_69, unk_0x33CD235DF1E6A94E(), 10f))
					{
						unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
					}
					unk_0x108754262311D34F(0, "creatures@rottweiler@tricks@", "beg_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "creatures@rottweiler@tricks@", "beg_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC734F59A13D39AEF(uLocal_95);
					unk_0x13A2D602CD10CBAC(iLocal_69, uLocal_95);
					unk_0xA7A57E7757ED035E(&uLocal_95);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0);
					unk_0xFF2DEA68E2D3602E("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 8:
			if (iLocal_52 == 0)
			{
				unk_0x0483D0035D6E46FD("creatures@rottweiler@tricks@");
				if (unk_0xE9CCF312047EBEE0("creatures@rottweiler@tricks@"))
				{
					unk_0xED68CDDDE25A144E(iLocal_69);
					unk_0x99414FB2D30425C1(&uLocal_95);
					if (!unk_0x910FF514D7BC5674(iLocal_69, unk_0x33CD235DF1E6A94E(), 10f))
					{
						unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
					}
					unk_0x108754262311D34F(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC734F59A13D39AEF(uLocal_95);
					unk_0x13A2D602CD10CBAC(iLocal_69, uLocal_95);
					unk_0xA7A57E7757ED035E(&uLocal_95);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0);
					unk_0xFF2DEA68E2D3602E("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 9:
			if (iLocal_52 == 0)
			{
				unk_0x0483D0035D6E46FD("creatures@rottweiler@tricks@");
				if (unk_0xE9CCF312047EBEE0("creatures@rottweiler@tricks@"))
				{
					unk_0xED68CDDDE25A144E(iLocal_69);
					unk_0x99414FB2D30425C1(&uLocal_95);
					if (!unk_0x910FF514D7BC5674(iLocal_69, unk_0x33CD235DF1E6A94E(), 10f))
					{
						unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
					}
					unk_0x108754262311D34F(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "creatures@rottweiler@tricks@", "paw_right_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "creatures@rottweiler@tricks@", "paw_right_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC734F59A13D39AEF(uLocal_95);
					unk_0x13A2D602CD10CBAC(iLocal_69, uLocal_95);
					unk_0xA7A57E7757ED035E(&uLocal_95);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0);
					unk_0xFF2DEA68E2D3602E("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 10:
			unk_0x3FD9339AA95E323F(0, 32, 1);
			unk_0x3FD9339AA95E323F(0, 34, 1);
			unk_0x3FD9339AA95E323F(0, 35, 1);
			unk_0x3FD9339AA95E323F(0, 33, 1);
			unk_0x3FD9339AA95E323F(0, 31, 1);
			unk_0x3FD9339AA95E323F(0, 30, 1);
			unk_0x3FD9339AA95E323F(0, 22, 1);
			unk_0x3FD9339AA95E323F(0, 36, 1);
			unk_0x3FD9339AA95E323F(0, 44, 1);
			unk_0x3FD9339AA95E323F(0, 141, 1);
			unk_0x3FD9339AA95E323F(0, 140, 1);
			unk_0x3FD9339AA95E323F(0, 263, 1);
			unk_0x3FD9339AA95E323F(0, 264, 1);
			unk_0x3FD9339AA95E323F(0, 143, 1);
			unk_0x3FD9339AA95E323F(0, 24, 1);
			unk_0x3FD9339AA95E323F(0, 257, 1);
			unk_0x3FD9339AA95E323F(0, 262, 1);
			unk_0x3FD9339AA95E323F(0, 261, 1);
			unk_0x3FD9339AA95E323F(0, 37, 1);
			unk_0x3FD9339AA95E323F(0, 21, 1);
			if (iLocal_52 == 0)
			{
				unk_0x0483D0035D6E46FD("creatures@rottweiler@tricks@");
				unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
				unk_0x11C4AF4137F2A4B5(unk_0x33CD235DF1E6A94E(), iLocal_69, 0);
				iLocal_52++;
			}
			else if (iLocal_52 == 1)
			{
				if (unk_0xD76D6BCC14B95CE1(unk_0x33CD235DF1E6A94E(), -875674219) == 7)
				{
					unk_0xED68CDDDE25A144E(iLocal_69);
					vVar3 = { unk_0x2CA911E7569D12EA(unk_0x33CD235DF1E6A94E(), 0f, 1f, 1f) };
					unk_0x8C1596BAD35D957A(vVar3, &(vVar3.f_2), 0, 0);
					if (func_39(iLocal_69, vVar3, 0) > 0.3f)
					{
						unk_0x7E268975AF5EA74F(iLocal_69, vVar3, 1f, 5000, 1048576000, 0, 1193033728);
					}
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 2)
			{
				if (unk_0xD76D6BCC14B95CE1(iLocal_69, 713668775) == 7 || func_39(iLocal_69, vVar3, 0) < 0.3f)
				{
					if (!unk_0x910FF514D7BC5674(iLocal_69, unk_0x33CD235DF1E6A94E(), 15f))
					{
						unk_0x11C4AF4137F2A4B5(iLocal_69, unk_0x33CD235DF1E6A94E(), 0);
						iLocal_376 = 0;
					}
					else
					{
						iLocal_376 = 1;
					}
					if (!unk_0x910FF514D7BC5674(unk_0x33CD235DF1E6A94E(), iLocal_69, 15f))
					{
						unk_0x11C4AF4137F2A4B5(unk_0x33CD235DF1E6A94E(), iLocal_69, 0);
						iLocal_377 = 0;
					}
					else
					{
						iLocal_377 = 1;
					}
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 3)
			{
				unk_0x0483D0035D6E46FD("creatures@rottweiler@tricks@");
				if (((iLocal_376 == 1 || unk_0xD76D6BCC14B95CE1(iLocal_69, -875674219) == 7) && (iLocal_377 == 1 || unk_0xD76D6BCC14B95CE1(unk_0x33CD235DF1E6A94E(), -875674219) == 7)) && unk_0xE9CCF312047EBEE0("creatures@rottweiler@tricks@"))
				{
					unk_0x108754262311D34F(iLocal_69, "creatures@rottweiler@tricks@", "petting_chop", 8f, -8f, -1, 8, 0, 0, 0, 0);
					unk_0x108754262311D34F(unk_0x33CD235DF1E6A94E(), "creatures@rottweiler@tricks@", "petting_franklin", 8f, -8f, -1, 8, 0, 0, 0, 0);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 4)
			{
				if (unk_0xD76D6BCC14B95CE1(iLocal_69, -2017877118) == 7)
				{
					func_108("CHOP_RETURN1", 0);
					unk_0xFF2DEA68E2D3602E("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 12:
			if (iLocal_52 == 0)
			{
				if (unk_0xE214B9FCEDF6364A(iLocal_69))
				{
					unk_0x5D94F4D6FE7DA516(iLocal_69);
				}
				unk_0x0483D0035D6E46FD("creatures@rottweiler@tricks@");
				if (unk_0xE9CCF312047EBEE0("creatures@rottweiler@tricks@"))
				{
					unk_0xED68CDDDE25A144E(iLocal_69);
					unk_0x99414FB2D30425C1(&uLocal_95);
					unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
					unk_0x108754262311D34F(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4097, 0, 0, 0, 0);
					unk_0xC734F59A13D39AEF(uLocal_95);
					unk_0x13A2D602CD10CBAC(iLocal_69, uLocal_95);
					unk_0xA7A57E7757ED035E(&uLocal_95);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (!func_16())
				{
					unk_0x0483D0035D6E46FD("creatures@rottweiler@tricks@");
					if (unk_0xE9CCF312047EBEE0("creatures@rottweiler@tricks@"))
					{
						unk_0xED68CDDDE25A144E(iLocal_69);
						unk_0x108754262311D34F(iLocal_69, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
						func_108("CHOP_WALK", 0);
						iLocal_52++;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (unk_0xD76D6BCC14B95CE1(iLocal_69, -2017877118) == 7)
				{
					unk_0xFF2DEA68E2D3602E("creatures@rottweiler@tricks@");
					iLocal_62 = unk_0xE3903F59E2F22150();
					func_121(2, 1);
				}
			}
			break;
		
		case 13:
			if (iLocal_52 == 0)
			{
				if (unk_0xE214B9FCEDF6364A(iLocal_69))
				{
					unk_0x5D94F4D6FE7DA516(iLocal_69);
				}
				unk_0x0483D0035D6E46FD("creatures@rottweiler@move");
				unk_0x13157A56158089D8();
				if (unk_0xE9CCF312047EBEE0("creatures@rottweiler@move") && unk_0xD3957903B061A8C8())
				{
					unk_0xED68CDDDE25A144E(iLocal_69);
					unk_0x99414FB2D30425C1(&uLocal_95);
					unk_0x108754262311D34F(0, "creatures@rottweiler@move", "dump_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "creatures@rottweiler@move", "dump_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "creatures@rottweiler@move", "dump_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0xC734F59A13D39AEF(uLocal_95);
					unk_0x13A2D602CD10CBAC(iLocal_69, uLocal_95);
					unk_0xA7A57E7757ED035E(&uLocal_95);
					func_122("AGITATED");
					iLocal_64 = unk_0xE3903F59E2F22150();
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (func_107())
				{
					if (unk_0xC2FDDE313D5A5398(iLocal_77))
					{
						unk_0x91F3E4311D34B364(iLocal_77, 0);
					}
					if (func_118(iLocal_69, 0))
					{
						func_121(1, 1);
					}
					else
					{
						func_121(2, 1);
					}
				}
				else if (!unk_0xC2FDDE313D5A5398(iLocal_77))
				{
					if (iLocal_64 > -1 && (unk_0xE3903F59E2F22150() - iLocal_64) > 4000)
					{
						iLocal_77 = unk_0x36F0667378D07B9C("ent_anim_dog_poo", iLocal_69, 0f, -0.15f, -0.2f, 0f, 0f, 0f, 1f, 0, 0, 0);
					}
				}
				else if ((unk_0xE3903F59E2F22150() - iLocal_64) > 10000)
				{
					unk_0x91F3E4311D34B364(iLocal_77, 0);
					iLocal_64 = -1;
				}
			}
			break;
		
		case 14:
			if (iLocal_52 == 0)
			{
				unk_0x13157A56158089D8();
				if (unk_0xD3957903B061A8C8())
				{
					if (unk_0xE214B9FCEDF6364A(iLocal_69))
					{
						unk_0x5D94F4D6FE7DA516(iLocal_69);
					}
					func_122("AGITATED");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				unk_0x0483D0035D6E46FD("creatures@rottweiler@move");
				if (!func_113(iLocal_69, 713668775))
				{
					unk_0x7E268975AF5EA74F(iLocal_69, unk_0xFBB1F99A825CAB09(iLocal_349, true), 2f, 20000, 0.25f, 36, 1193033728);
				}
				if (func_39(iLocal_69, unk_0xFBB1F99A825CAB09(iLocal_349, true), 1) < 2f)
				{
					if ((!unk_0x0E4018692D92041D(Global_106565.f_10043.f_94, 10) && !unk_0xFAC8F20FBC764F4D()) && !unk_0x71EC91BA8C88BCE0())
					{
						unk_0x8950ED5730F62EE8(&(Global_106565.f_10043.f_94), 10);
						if (bLocal_327 == 0)
						{
							func_15("CHOP_H_BEHAVE", -1);
						}
						else
						{
							func_15("CHOP_H_BEHAVA", -1);
						}
					}
					unk_0xED68CDDDE25A144E(iLocal_69);
					if (unk_0xE9CCF312047EBEE0("creatures@rottweiler@move") && unk_0x8BB475EA09C9A0EB(iLocal_69) < 1f)
					{
						vLocal_351 = { unk_0xFBB1F99A825CAB09(iLocal_69, true) };
						iLocal_350 = unk_0x9EC3B269A34A2BEE(0, 2);
						fLocal_353 = func_14(vLocal_351, unk_0xFBB1F99A825CAB09(iLocal_349, true));
						if (iLocal_350 == 0)
						{
							vLocal_352 = { unk_0xCD1EDCB38767B47C(vLocal_351, fLocal_353, -0.5f, 1f, 0f) };
						}
						else
						{
							vLocal_352 = { unk_0xCD1EDCB38767B47C(vLocal_351, fLocal_353, 0.5f, 1f, 0f) };
						}
						unk_0x99414FB2D30425C1(&uLocal_95);
						unk_0x9F878FE3F23E2C8B(0, vLocal_352, 0);
						if (iLocal_350 == 0)
						{
							unk_0x108754262311D34F(0, "creatures@rottweiler@move", "pee_right_enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x108754262311D34F(0, "creatures@rottweiler@move", "pee_right_idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x108754262311D34F(0, "creatures@rottweiler@move", "pee_right_exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							unk_0x108754262311D34F(0, "creatures@rottweiler@move", "pee_left_enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x108754262311D34F(0, "creatures@rottweiler@move", "pee_left_idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x108754262311D34F(0, "creatures@rottweiler@move", "pee_left_exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						unk_0xC734F59A13D39AEF(uLocal_95);
						unk_0x13A2D602CD10CBAC(iLocal_69, uLocal_95);
						unk_0xA7A57E7757ED035E(&uLocal_95);
						iLocal_64 = unk_0xE3903F59E2F22150();
						iLocal_52++;
					}
				}
			}
			else if (iLocal_52 == 2)
			{
				if (func_107())
				{
					if (unk_0xC2FDDE313D5A5398(iLocal_77))
					{
						unk_0x91F3E4311D34B364(iLocal_77, 0);
					}
					func_122("BARK");
					func_121(2, 1);
				}
				else if (!unk_0xC2FDDE313D5A5398(iLocal_77))
				{
					if (iLocal_64 > -1 && (unk_0xE3903F59E2F22150() - iLocal_64) > 7000)
					{
						if (iLocal_350 == 0)
						{
							iLocal_77 = unk_0x36F0667378D07B9C("ent_anim_dog_peeing", iLocal_69, 0.1f, -0.32f, -0.04f, 0f, 0f, 30f, 1f, 0, 0, 0);
						}
						else
						{
							iLocal_77 = unk_0x36F0667378D07B9C("ent_anim_dog_peeing", iLocal_69, -0.1f, -0.32f, -0.04f, 0f, 0f, 150f, 1f, 0, 0, 0);
						}
					}
				}
				else if ((unk_0xE3903F59E2F22150() - iLocal_64) > 16000)
				{
					unk_0x91F3E4311D34B364(iLocal_77, 0);
					iLocal_64 = -1;
				}
			}
			break;
		
		case 15:
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
			{
				func_40(0);
				iLocal_62 = unk_0xE3903F59E2F22150();
				func_121(2, 1);
			}
			else
			{
				if (iLocal_52 == 0)
				{
					func_40(1);
					if (unk_0x523F36AF20D6C821(unk_0x33CD235DF1E6A94E(), iLocal_367, 50f, &uLocal_362, &iLocal_361, 0))
					{
						func_6(294, 0, 0);
						unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_unarmed"), true);
						iLocal_365 = 0;
						iLocal_366 = 0;
						iLocal_340 = 0;
						if (unk_0xE214B9FCEDF6364A(iLocal_69))
						{
							unk_0x5D94F4D6FE7DA516(iLocal_69);
						}
						iLocal_368 = unk_0xE3903F59E2F22150();
						iLocal_52++;
					}
				}
				else if (iLocal_52 == 1)
				{
					if (unk_0x765F6FEEFF39224F(iLocal_361))
					{
						if (!unk_0x8AE34E8B10270D31(iLocal_361))
						{
							if ((unk_0xE3903F59E2F22150() - iLocal_368) > 500)
							{
								if (func_5())
								{
									unk_0x0483D0035D6E46FD("creatures@rottweiler@move");
									if (unk_0xE9CCF312047EBEE0("creatures@rottweiler@move"))
									{
										unk_0x99414FB2D30425C1(&uLocal_95);
										if (iLocal_367 == joaat("weapon_ball"))
										{
											unk_0x108754262311D34F(0, "creatures@rottweiler@move", "fetch_pickup", 8f, -8f, -1, 49152, 0, 0, 0, 0);
										}
										unk_0x3C0F6044C54799A8(0, unk_0x33CD235DF1E6A94E(), 20000, 4f, 3f, 1073741824, 0);
										unk_0xC734F59A13D39AEF(uLocal_95);
										unk_0x13A2D602CD10CBAC(iLocal_69, uLocal_95);
										unk_0xA7A57E7757ED035E(&uLocal_95);
										if (iLocal_367 == joaat("weapon_ball"))
										{
											iLocal_365 = 1;
										}
										iLocal_52++;
									}
								}
								else if (!func_113(iLocal_69, 1227113341))
								{
									unk_0x3C0F6044C54799A8(iLocal_69, iLocal_361, 30000, 0.5f, 3f, 1073741824, 0);
									iLocal_340++;
									iLocal_339 = 0;
									if (iLocal_340 > 3)
									{
										unk_0x3C0F6044C54799A8(iLocal_69, unk_0x33CD235DF1E6A94E(), 20000, 5f, 3f, 1073741824, 0);
										func_40(1);
										iLocal_52++;
									}
								}
								else
								{
									iVar0 = unk_0xCAB00E0F9EB1039D(iLocal_69, &uVar2, &uVar1);
									if (iVar0 == 2)
									{
										fLocal_341 = unk_0x06EDAF915C19EB69(iLocal_361);
										if (fLocal_341 < 1f)
										{
											iLocal_339++;
										}
									}
									else if (iVar0 == 3)
									{
										if (iLocal_366 == 0)
										{
											func_122("BARK");
											if (iLocal_367 == joaat("weapon_ball"))
											{
												func_108("CHOP_FETCH", 0);
											}
											iLocal_366 = 1;
										}
									}
									if (iLocal_339 > 9)
									{
										unk_0x3C0F6044C54799A8(iLocal_69, unk_0x33CD235DF1E6A94E(), 20000, 5f, 3f, 1073741824, 0);
										func_40(1);
										iLocal_52++;
									}
								}
							}
						}
						else
						{
							unk_0x3C0F6044C54799A8(iLocal_69, unk_0x33CD235DF1E6A94E(), 20000, 5f, 3f, 1073741824, 0);
							iLocal_52++;
						}
					}
					else
					{
						unk_0x3C0F6044C54799A8(iLocal_69, unk_0x33CD235DF1E6A94E(), 20000, 5f, 3f, 1073741824, 0);
						iLocal_52++;
					}
				}
				else if (iLocal_52 == 2)
				{
					if (iLocal_365 == 1)
					{
						if ((unk_0x765F6FEEFF39224F(iLocal_361) && unk_0x1CE8F0A08E65CA6A(iLocal_69, "creatures@rottweiler@move", "fetch_pickup", 3)) && unk_0x204DEACC5BECF723(iLocal_69, "creatures@rottweiler@move", "fetch_pickup") > 0.25f)
						{
							unk_0x2F0A6390D863D337(iLocal_361, iLocal_69, 28, 0.2042f, 0f, -0.0608f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							unk_0xBDD4EE948C7B9BB5("DisableBarks", 1);
							iLocal_52++;
						}
					}
					else
					{
						iLocal_52++;
					}
				}
				else if (iLocal_52 == 3)
				{
					if (func_4(unk_0x33CD235DF1E6A94E(), iLocal_69, 1) < 5f)
					{
						if (iLocal_367 == joaat("weapon_ball"))
						{
							if (iLocal_365 == 1)
							{
								unk_0x0483D0035D6E46FD("creatures@rottweiler@move");
								if (unk_0xE9CCF312047EBEE0("creatures@rottweiler@move"))
								{
									unk_0x99414FB2D30425C1(&uLocal_95);
									unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
									unk_0x108754262311D34F(0, "creatures@rottweiler@move", "fetch_drop", 8f, -8f, -1, 16384, 0, 0, 0, 0);
									unk_0xC734F59A13D39AEF(uLocal_95);
									unk_0x13A2D602CD10CBAC(iLocal_69, uLocal_95);
									unk_0xA7A57E7757ED035E(&uLocal_95);
									func_108("CHOP_RETURN1", 0);
									unk_0xBDD4EE948C7B9BB5("DisableBarks", 0);
									iLocal_52++;
								}
							}
							else
							{
								func_122("BREATH_AGITATED");
								func_108("CHOP_RETURN2", 0);
								func_121(2, 1);
							}
						}
						else
						{
							func_122("BARK_WHINE");
							func_40(1);
							func_121(2, 1);
						}
					}
				}
				else if (iLocal_52 == 4)
				{
					if (!func_113(iLocal_69, 242628503) && !unk_0x765F6FEEFF39224F(iLocal_361))
					{
						if (func_3(0))
						{
							func_99(0, 1, 0);
						}
						else if (unk_0xB813DCBD5002BC42() == 4)
						{
							func_99(0, 1, 1);
						}
						else
						{
							func_99(1, 1, 1);
						}
						iLocal_62 = unk_0xE3903F59E2F22150();
						func_121(2, 1);
					}
					else if (unk_0x765F6FEEFF39224F(iLocal_361))
					{
						if (unk_0x9F4718FD61B07058(iLocal_361))
						{
							if (unk_0x1CE8F0A08E65CA6A(iLocal_69, "creatures@rottweiler@move", "fetch_drop", 3) && unk_0x204DEACC5BECF723(iLocal_69, "creatures@rottweiler@move", "fetch_drop") > 0.4f)
							{
								unk_0x35F11A916FDFCF32(iLocal_361, 1, 1);
							}
						}
						else
						{
							if ((func_4(unk_0x33CD235DF1E6A94E(), iLocal_361, 1) < 1.5f || func_4(unk_0x33CD235DF1E6A94E(), iLocal_361, 1) > 20f) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
							{
								func_40(1);
							}
							if (!func_113(iLocal_69, 242628503))
							{
								func_100();
							}
						}
					}
				}
				func_102();
			}
			break;
		
		case 16:
			if (iLocal_52 == 0)
			{
				unk_0x0483D0035D6E46FD("creatures@rottweiler@in_vehicle@std_car");
				if (unk_0xE9CCF312047EBEE0("creatures@rottweiler@in_vehicle@std_car"))
				{
					if (unk_0xE214B9FCEDF6364A(iLocal_69))
					{
						unk_0x5D94F4D6FE7DA516(iLocal_69);
					}
					unk_0x2F0A6390D863D337(iLocal_69, unk_0xF7E6C8C5BD75E317(unk_0x33CD235DF1E6A94E()), 0, 0f, 0f, -6.1f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
					unk_0x108754262311D34F(iLocal_69, "creatures@rottweiler@in_vehicle@std_car", "sit", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 1)
			{
				if (!unk_0x9F4718FD61B07058(unk_0x33CD235DF1E6A94E()))
				{
					fVar4 = 99999f;
					iVar6 = 0;
					while (iVar6 < 4)
					{
						fVar5 = unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vLocal_84[iVar6 /*3*/], true);
						if (fVar5 < fVar4)
						{
							fVar4 = fVar5;
							iVar7 = iVar6;
						}
						iVar6++;
					}
					if (unk_0x9F4718FD61B07058(iLocal_69))
					{
						unk_0x35F11A916FDFCF32(iLocal_69, 1, 1);
					}
					func_124(iLocal_69, vLocal_84[iVar7 /*3*/], fLocal_85[iVar7], 0, 1);
					unk_0x880B00F3FAE4C022(iLocal_69, 0, 0);
					iLocal_62 = unk_0xE3903F59E2F22150();
					func_121(2, 1);
				}
			}
			break;
	}
}

int func_3(int iParam0)
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

float func_4(int iParam0, int iParam1, bool bParam2)
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

int func_5()
{
	vector3 vVar0;
	float fVar1;
	
	if (func_4(iLocal_69, iLocal_361, 1) < (0.5f + 0.25f))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iLocal_361, true) };
		if (unk_0x8C1596BAD35D957A(vVar0.x, vVar0.y, (vVar0.z + 1f), &fVar1, 0, 0))
		{
			if (unk_0x7EECA16E87982278((vVar0.z - fVar1)) < 0.1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_6(int iParam0, int iParam1, int iParam2)
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
		func_12((891 + iParam0), 1, -1, 1);
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
		Global_106565.f_10188[iParam0 /*12*/].f_10 = iParam1;
		Global_106565.f_10188[iParam0 /*12*/].f_11 = iParam2;
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
		func_7();
	}
}

void func_7()
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
		func_11(13, floor(Global_106565.f_10188.f_3853));
	}
	if (!unk_0xDC17890B0B8B5081())
	{
		if (!Global_71590)
		{
			if (func_10() == 2 == 0 && !unk_0xB331FCEB94EB05C8())
			{
				if (unk_0xB16BC34F6CB4A57A())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_8();
				}
			}
		}
	}
}

int func_8()
{
	if (func_9(0))
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

bool func_9(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

int func_10()
{
	return Global_25765;
}

int func_11(int iParam0, int iParam1)
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

int func_12(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_13();
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

int func_13()
{
	return Global_1312745;
}

float func_14(struct<2> Param0, var uParam1, struct<2> Param2, float fParam3)
{
	return unk_0x174C48E9E544E9A8((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_15(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

bool func_16()
{
	return Global_93734.f_339 > 0;
}

void func_17()
{
	iLocal_62 = unk_0xE3903F59E2F22150();
	if (iLocal_75 == 0)
	{
		func_121(1, 1);
	}
	else
	{
		func_121(2, 1);
	}
}

void func_18()
{
	float fVar0;
	
	if ((unk_0xE3903F59E2F22150() - iLocal_56) > iLocal_58)
	{
		fVar0 = func_39(iLocal_69, vLocal_323, 1);
		if (fVar0 < 10f)
		{
			func_122("BARK_SEQ");
		}
		else
		{
			func_122("BARK");
		}
		iLocal_56 = unk_0xE3903F59E2F22150();
		if (fVar0 < 20f)
		{
			iLocal_58 = unk_0x9EC3B269A34A2BEE(4000, 5000);
		}
		else if (fVar0 < 50f)
		{
			iLocal_58 = unk_0x9EC3B269A34A2BEE(5000, 6000);
		}
		else
		{
			iLocal_58 = unk_0x9EC3B269A34A2BEE(8000, 12000);
		}
		if (((!unk_0xFAC8F20FBC764F4D() && !unk_0x0E4018692D92041D(Global_106565.f_10043.f_94, 1)) && !func_19()) && !unk_0x71EC91BA8C88BCE0())
		{
			unk_0x8950ED5730F62EE8(&(Global_106565.f_10043.f_94), 1);
			func_15("CHOP_H_HUNT", -1);
		}
	}
}

int func_19()
{
	int iVar0;
	
	if (unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iLocal_69) || (iLocal_51 == 10 && unk_0xF1CDE9FD207C4CD8(2, 25)))
	{
		unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar0, 1);
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
	}
	return 0;
}

void func_20()
{
	if (!func_113(iLocal_69, 242628503))
	{
		unk_0x0483D0035D6E46FD("creatures@rottweiler@indication@");
		if (unk_0xE9CCF312047EBEE0("creatures@rottweiler@indication@"))
		{
			unk_0xED68CDDDE25A144E(iLocal_69);
			unk_0x99414FB2D30425C1(&uLocal_95);
			unk_0x9F878FE3F23E2C8B(0, vLocal_322, 0);
			unk_0x108754262311D34F(0, "creatures@rottweiler@indication@", func_21(), 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xC734F59A13D39AEF(uLocal_95);
			unk_0x13A2D602CD10CBAC(iLocal_69, uLocal_95);
			unk_0xA7A57E7757ED035E(&uLocal_95);
		}
	}
}

char* func_21()
{
	char* sVar0;
	vector3 vVar1;
	
	if (func_125(iLocal_69))
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(iLocal_69, true) };
		if ((vVar1.z + 1f) < vLocal_322.z)
		{
			sVar0 = "indicate_high";
		}
		else if ((vVar1.z - 1f) > vLocal_322.z)
		{
			sVar0 = "indicate_low";
		}
		else
		{
			sVar0 = "indicate_ahead";
		}
	}
	return sVar0;
}

int func_22()
{
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && unk_0x91D5C8283D19AF49(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0))
	{
		if (unk_0xA2F0EA9AB6142D97(unk_0x33CD235DF1E6A94E()) || func_23())
		{
			return 1;
		}
	}
	return 0;
}

int func_23()
{
	int iVar0;
	
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
	{
		iVar0 = unk_0x541D5C57194E73C4(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 1));
		if ((((((((((((((((((iVar0 == joaat("caddy") || iVar0 == joaat("caddy2")) || iVar0 == joaat("dune")) || iVar0 == joaat("airtug")) || iVar0 == joaat("blazer")) || iVar0 == joaat("blazer2")) || iVar0 == joaat("bulldozer")) || iVar0 == joaat("cutter")) || iVar0 == joaat("dump")) || iVar0 == joaat("forklift")) || iVar0 == joaat("handler")) || iVar0 == joaat("mower")) || iVar0 == joaat("rhino")) || iVar0 == joaat("tractor")) || iVar0 == joaat("tractor2")) || iVar0 == joaat("tractor3")) || iVar0 == unk_0x36163153849DFDA1("bifta")) || iVar0 == joaat("blazer3")) || iVar0 == joaat("dune2"))
		{
			return 1;
		}
	}
	return 0;
}

int func_24()
{
	switch (iLocal_314)
	{
		case 2:
			if (!func_27(2))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 1:
			if (!func_27(1))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 0:
			if (!func_27(0))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 3:
			if (func_26(iLocal_321))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 4:
			if (func_25(iLocal_321))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
	}
	return 1;
}

bool func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 50)
	{
		return 0;
	}
	if (iParam0 <= 31)
	{
		return unk_0x0E4018692D92041D(Global_106565.f_10043.f_125, iParam0);
	}
	return unk_0x0E4018692D92041D(Global_106565.f_10043.f_125.f_1, (iParam0 - 32));
}

bool func_26(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 50)
	{
		return 0;
	}
	if (iParam0 <= 31)
	{
		return unk_0x0E4018692D92041D(Global_106565.f_10043.f_122, iParam0);
	}
	return unk_0x0E4018692D92041D(Global_106565.f_10043.f_122.f_1, (iParam0 - 32));
}

int func_27(int iParam0)
{
	if (func_31())
	{
		func_30(iParam0, iLocal_321);
	}
	if (func_29())
	{
		if (func_28())
		{
			func_34();
			return 0;
		}
		func_34();
	}
	return 1;
}

bool func_28()
{
	return Global_26009;
}

int func_29()
{
	if (Global_26006 == 2)
	{
		return 1;
	}
	return 0;
}

void func_30(int iParam0, int iParam1)
{
	if (Global_26006 == 0)
	{
		Global_26006 = 1;
		Global_26007 = iParam0;
		Global_26008 = iParam1;
	}
}

int func_31()
{
	if (Global_26006 == 0)
	{
		return 1;
	}
	return 0;
}

void func_32()
{
	vector3 vVar0;
	
	vVar0 = { unk_0xFBB1F99A825CAB09(iLocal_69, true) };
	func_33(vVar0);
	func_122("WHINE");
	func_108("CHOP_NONEAR", 0);
	func_17();
}

void func_33(vector3 vParam0)
{
	if (vdist(vParam0, vParam0) > 1f)
	{
	}
}

void func_34()
{
	Global_26006 = 3;
}

int func_35()
{
	iLocal_321 = -1;
	vLocal_322 = { 0f, 0f, 0f };
	vLocal_323 = { 0f, 0f, 0f };
	func_36(0);
	if (iLocal_321 == -1)
	{
		func_36(1);
	}
	if (iLocal_321 > -1)
	{
		return 1;
	}
	return 0;
}

void func_36(int iParam0)
{
	float fVar0;
	int iVar1;
	
	fVar0 = 9999f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if ((iLocal_317[iVar1] > -1 && fLocal_318[iVar1] < fVar0) && func_37(iParam0, iVar1))
		{
			fVar0 = fLocal_318[iVar1];
			iLocal_321 = iLocal_317[iVar1];
			iLocal_314 = iVar1;
			vLocal_322 = { vLocal_319[iVar1 /*3*/] };
			vLocal_323 = { vLocal_320[iVar1 /*3*/] };
		}
		iVar1++;
	}
}

int func_37(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		return 1;
	}
	if (iParam1 == 1 && unk_0xE80842D7B53F8525(unk_0x33CD235DF1E6A94E()) >= 200)
	{
		return 0;
	}
	if (iParam1 == 0 && unk_0xEB5DD88FB5DFC736(unk_0x33CD235DF1E6A94E()) >= 100)
	{
		return 0;
	}
	return 1;
}

int func_38()
{
	if (iLocal_315 == 5)
	{
		iLocal_315 = 0;
	}
	switch (iLocal_315)
	{
		case 0:
			if (iLocal_317[0] > -1)
			{
				if (func_31())
				{
					func_30(0, iLocal_317[0]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_317[0] = -1;
					}
					func_34();
					iLocal_315 = 1;
				}
			}
			else
			{
				iLocal_315 = 1;
			}
			break;
		
		case 1:
			if (iLocal_317[1] > -1)
			{
				if (func_31())
				{
					func_30(1, iLocal_317[1]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_317[1] = -1;
					}
					func_34();
					iLocal_315 = 2;
				}
			}
			else
			{
				iLocal_315 = 2;
			}
			break;
		
		case 2:
			if (iLocal_317[2] > -1)
			{
				if (func_31())
				{
					func_30(2, iLocal_317[2]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_317[2] = -1;
					}
					func_34();
					iLocal_315 = 3;
				}
			}
			else
			{
				iLocal_315 = 3;
			}
			break;
		
		case 3:
			if (iLocal_317[3] > -1)
			{
				if (func_26(iLocal_317[3]))
				{
					iLocal_317[3] = -1;
				}
			}
			if (iLocal_317[4] > -1)
			{
				if (func_25(iLocal_317[4]))
				{
					iLocal_317[4] = -1;
				}
			}
			iLocal_315 = 5;
			return 1;
			break;
	}
	return 0;
}

float func_39(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, false) };
	}
	return unk_0x16E00F066AFFEA0D(vVar0, vParam1, bParam2);
}

void func_40(int iParam0)
{
	vector3 vVar0;
	
	if (unk_0x765F6FEEFF39224F(iLocal_361))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iLocal_361, true) };
		if (unk_0x47904E0914F5B5C6(iLocal_361))
		{
			unk_0x35F11A916FDFCF32(iLocal_361, 1, 1);
		}
		unk_0x4955686EF8308B47(&iLocal_361);
		if (iParam0 == 1 && iLocal_367 == joaat("weapon_ball"))
		{
			unk_0x9FDF63945C690003(vVar0, 0.1f, 0);
		}
	}
}

void func_41()
{
	vector3 vVar0;
	
	if ((((((func_43() != 1 && (unk_0xE3903F59E2F22150() - iLocal_62) > 10000) && !unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0)) && iLocal_86 == 0) && iLocal_367 != joaat("weapon_ball")) && unk_0x7A607552722EC814(unk_0x33CD235DF1E6A94E(), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 100f) == 0) && unk_0x7A607552722EC814(iLocal_69, unk_0xFBB1F99A825CAB09(iLocal_69, true), 100f) == 0)
	{
		unk_0x13157A56158089D8();
		if (unk_0xD3957903B061A8C8())
		{
			vVar0 = { unk_0xFBB1F99A825CAB09(iLocal_69, true) };
			if (unk_0x16E00F066AFFEA0D(vVar0, vLocal_76, false) < 1f)
			{
				if (unk_0x16E00F066AFFEA0D(vVar0, vLocal_355, false) > 20f)
				{
					func_42(&iLocal_349, 0);
					iLocal_349 = unk_0x68F833BFE3A28FEA(vVar0, 10f, -1063472968, 1, 0, 1);
					if (unk_0x765F6FEEFF39224F(iLocal_349))
					{
						vLocal_355 = { unk_0xFBB1F99A825CAB09(iLocal_349, true) };
						func_121(14, 1);
					}
				}
				else if (unk_0x16E00F066AFFEA0D(vVar0, vLocal_354, false) > 20f)
				{
					vLocal_354 = { vVar0 };
					func_121(13, 1);
				}
			}
			vLocal_76 = { unk_0xFBB1F99A825CAB09(iLocal_69, true) };
			iLocal_62 = unk_0xE3903F59E2F22150();
		}
	}
}

void func_42(int iParam0, bool bParam1)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		if (unk_0x47904E0914F5B5C6(*iParam0))
		{
			unk_0x35F11A916FDFCF32(*iParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x26ABAE1D971CEACD(iParam0);
		}
		else
		{
			unk_0x1FA33938BF46EAE3(*iParam0);
		}
	}
}

int func_43()
{
	if (Global_106565.f_20112.f_254.f_5)
	{
		if (Global_106565.f_20112.f_254 > 66f)
		{
			return 1;
		}
		else if (Global_106565.f_20112.f_254 > 33f)
		{
			return 0;
		}
		else
		{
			return 2;
		}
	}
	return 2;
}

void func_44()
{
	if (((!unk_0x0E4018692D92041D(Global_106565.f_10043.f_94, 7) && !unk_0xFAC8F20FBC764F4D()) && !func_19()) && !unk_0x71EC91BA8C88BCE0())
	{
		unk_0x8950ED5730F62EE8(&(Global_106565.f_10043.f_94), 7);
		func_15("CHOP_H_BALL", -1);
	}
	if (((func_125(unk_0x33CD235DF1E6A94E()) && !unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1)) && func_125(iLocal_69)) && !unk_0xF0D230FB550CD6EB(iLocal_69, 1))
	{
		unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iLocal_367, 1);
		if (((((iLocal_367 == joaat("weapon_ball") || iLocal_367 == joaat("weapon_grenade")) || iLocal_367 == joaat("weapon_smokegrenade")) || iLocal_367 == joaat("weapon_stickybomb")) || iLocal_367 == joaat("weapon_molotov")) || iLocal_367 == joaat("weapon_flare"))
		{
			if (unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))
			{
				func_121(15, 1);
			}
			else if (((unk_0xE3903F59E2F22150() - iLocal_63) > 10000 && unk_0x8BB475EA09C9A0EB(iLocal_69) < 1f) && func_4(unk_0x33CD235DF1E6A94E(), iLocal_69, 1) < 5f)
			{
				unk_0x0483D0035D6E46FD("creatures@rottweiler@amb@world_dog_barking@enter");
				unk_0x0483D0035D6E46FD("creatures@rottweiler@amb@world_dog_barking@idle_a");
				unk_0x0483D0035D6E46FD("creatures@rottweiler@amb@world_dog_barking@exit");
				if ((unk_0xE9CCF312047EBEE0("creatures@rottweiler@amb@world_dog_barking@enter") && unk_0xE9CCF312047EBEE0("creatures@rottweiler@amb@world_dog_barking@idle_a")) && unk_0xE9CCF312047EBEE0("creatures@rottweiler@amb@world_dog_barking@exit"))
				{
					unk_0xED68CDDDE25A144E(iLocal_69);
					unk_0x99414FB2D30425C1(&uLocal_95);
					unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
					unk_0x108754262311D34F(0, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xC734F59A13D39AEF(uLocal_95);
					unk_0x13A2D602CD10CBAC(iLocal_69, uLocal_95);
					unk_0xA7A57E7757ED035E(&uLocal_95);
					iLocal_63 = unk_0xE3903F59E2F22150();
				}
			}
		}
	}
}

void func_45()
{
	if (func_16() && !func_46(4))
	{
		if ((func_125(iLocal_69) && iLocal_86 == 0) && unk_0xE214B9FCEDF6364A(iLocal_69))
		{
			unk_0x5D94F4D6FE7DA516(iLocal_69);
		}
		func_121(12, 1);
	}
}

int func_46(int iParam0)
{
	int iVar0;
	
	if (func_16())
	{
		iVar0 = 0;
		while (iVar0 < 52)
		{
			if (func_52(iVar0) == iParam0)
			{
				if (func_47(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_47(int iParam0)
{
	return func_48(iParam0, 5, 1);
}

int func_48(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0x0E4018692D92041D(Global_93734.f_1350[iParam0], iParam1);
	}
	else if (unk_0xB331FCEB94EB05C8())
	{
		if (func_10() == 0)
		{
			return unk_0x0E4018692D92041D(func_49(func_51(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x0E4018692D92041D(Global_106565.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_50(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
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

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 8917;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 10383;
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
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
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

void func_53()
{
	if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
	{
		if (iLocal_60 == -1)
		{
			iLocal_60 = unk_0xE3903F59E2F22150();
			iLocal_61 = unk_0x9EC3B269A34A2BEE(4000, 6000);
		}
		if ((unk_0xE3903F59E2F22150() - iLocal_60) > iLocal_61)
		{
			func_122("SNARL");
			iLocal_60 = -1;
		}
	}
}

void func_54()
{
	if (func_125(unk_0x33CD235DF1E6A94E()))
	{
		if (iLocal_86 > 1 && iLocal_86 < 8)
		{
			unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 309, 1);
		}
		if (iLocal_93 == 1 && iLocal_86 == 1)
		{
			unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 313, 1);
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
			{
				iLocal_372 = unk_0xE3903F59E2F22150();
				iLocal_65 = -1;
				iLocal_66 = -1;
				iLocal_57 = unk_0xE3903F59E2F22150();
				func_82();
				unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 32, false);
				iLocal_385 = 1;
				iLocal_86 = 1;
			}
			else
			{
				if (iLocal_369 != 0)
				{
					iLocal_369 = 0;
				}
				iLocal_313 = 0;
				iLocal_59 = -1;
				if (func_81())
				{
					func_121(3, 1);
				}
			}
			break;
		
		case 1:
			if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
			{
				iLocal_86 = 15;
			}
			else if (unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
			{
				if (func_80())
				{
					if (unk_0x7BDC41A7CA0C77A2(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), -1, 0) != unk_0x33CD235DF1E6A94E())
					{
						func_121(3, 1);
					}
					else
					{
						if (!func_125(iLocal_78))
						{
							iLocal_78 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
							func_79();
							func_78();
						}
						unk_0x0483D0035D6E46FD(sLocal_371);
						if (unk_0xE9CCF312047EBEE0(sLocal_371) && func_125(iLocal_78))
						{
							if (unk_0xE214B9FCEDF6364A(iLocal_69))
							{
								unk_0x5D94F4D6FE7DA516(iLocal_69);
							}
							if (func_77())
							{
								if (iLocal_65 == -1)
								{
									iLocal_65 = unk_0xE3903F59E2F22150();
								}
								if (func_76())
								{
									func_75(1);
									iLocal_86 = 6;
								}
								else
								{
									func_74();
								}
							}
							else if (unk_0x782B99DB55846C95(unk_0x33CD235DF1E6A94E(), iLocal_78, 0, 0, 0))
							{
								if (unk_0x830B1D24ED3D5F55(iLocal_78, iLocal_94) || unk_0x0ACBA87310ED2513(iLocal_78, 1) > 0.9f)
								{
									iLocal_86 = 4;
								}
								else
								{
									iLocal_86 = 2;
								}
							}
							else
							{
								func_75(1);
								iLocal_86 = 6;
							}
						}
					}
				}
				else if (func_22())
				{
					iLocal_86 = 14;
				}
				else
				{
					if (((!unk_0xFAC8F20FBC764F4D() && !unk_0x0E4018692D92041D(Global_106565.f_10043.f_94, 3)) && !func_19()) && !unk_0x71EC91BA8C88BCE0())
					{
						unk_0x8950ED5730F62EE8(&(Global_106565.f_10043.f_94), 3);
						func_15("CHOP_H_NOVEH", -1);
					}
					func_121(3, 1);
				}
			}
			else
			{
				if (func_80())
				{
					unk_0x0483D0035D6E46FD("misschop_vehicleenter_exit");
					func_74();
				}
				if (iLocal_313 == 0 && unk_0x91D5C8283D19AF49(unk_0x35364EF44BEB123B(unk_0x33CD235DF1E6A94E()), 0))
				{
					unk_0x5FEE418CE11E6DDE(iLocal_69, 185, false);
					if (unk_0x0C2E237744BA0026(unk_0x541D5C57194E73C4(unk_0x35364EF44BEB123B(unk_0x33CD235DF1E6A94E()))) && !func_23())
					{
						if (unk_0x541D5C57194E73C4(unk_0x35364EF44BEB123B(unk_0x33CD235DF1E6A94E())) == joaat("taxi"))
						{
						}
						else if (unk_0xC92AA0DBDDDE8BB8(unk_0x35364EF44BEB123B(unk_0x33CD235DF1E6A94E())) >= 1 && unk_0x67FFBB75D2430704(unk_0x35364EF44BEB123B(unk_0x33CD235DF1E6A94E()), 0, 0))
						{
							if (!func_73())
							{
								func_108("CHOP_RIDE", 0);
							}
						}
					}
					else if (unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(unk_0x35364EF44BEB123B(unk_0x33CD235DF1E6A94E()))) || func_23())
					{
						func_108("CHOP_FOLLOW", 0);
					}
					iLocal_313 = 1;
				}
			}
			break;
		
		case 2:
			func_72();
			if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
			{
				iLocal_86 = 15;
			}
			else
			{
				unk_0x0483D0035D6E46FD("misschop_vehicleenter_exit");
				if (unk_0xE9CCF312047EBEE0("misschop_vehicleenter_exit"))
				{
					func_71();
					iLocal_86 = 3;
				}
			}
			break;
		
		case 3:
			func_72();
			if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
			{
				iLocal_86 = 15;
			}
			else if (func_125(iLocal_78) && func_70())
			{
				if (!unk_0x830B1D24ED3D5F55(iLocal_78, iLocal_94))
				{
					unk_0x4A3BD9D189356B69(iLocal_78, iLocal_94, 0, 0);
				}
				iLocal_383 = unk_0xE3903F59E2F22150();
				iLocal_65 = unk_0xE3903F59E2F22150();
				iLocal_86 = 4;
			}
			break;
		
		case 4:
			if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
			{
				iLocal_86 = 15;
			}
			else
			{
				unk_0x0483D0035D6E46FD(sLocal_371);
				if (func_125(iLocal_78))
				{
					if (!unk_0x830B1D24ED3D5F55(iLocal_78, iLocal_94) && unk_0x0ACBA87310ED2513(iLocal_78, iLocal_94) < 0.95f)
					{
						unk_0x4A3BD9D189356B69(iLocal_78, iLocal_94, 0, 0);
						iLocal_383 = unk_0xE3903F59E2F22150();
					}
					if (func_76() && unk_0xE3903F59E2F22150() >= iLocal_383 + 300)
					{
						if (!func_113(unk_0x33CD235DF1E6A94E(), -2017877118) && unk_0xE9CCF312047EBEE0(sLocal_371))
						{
							func_72();
							func_69(1, 1);
							unk_0x31826EF4A8BC8E9F(iLocal_69);
							iLocal_87 = unk_0x38A6890195DD00D1(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x19CC0F2E313BAF2E(iLocal_87, iLocal_78, unk_0x89DDAAE6EFF42DD9(iLocal_78, "seat_pside_f"));
							unk_0x08798CBF817BA887(iLocal_69, iLocal_87, sLocal_371, "get_in", 1000f, -8f, 4, 0, 1148846080, 0);
							unk_0x880B00F3FAE4C022(iLocal_69, 0, 0);
							iLocal_86 = 5;
						}
					}
					else
					{
						func_74();
					}
				}
			}
			break;
		
		case 5:
			func_72();
			if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				if (unk_0x117DAF3BF7232886(iLocal_380))
				{
					unk_0xCE339CDE5CC9F2EE();
				}
				unk_0x0483D0035D6E46FD(sLocal_371);
				if (((unk_0xE9CCF312047EBEE0(sLocal_371) && unk_0xDB4C79A9697E6A55(iLocal_87)) && unk_0x4EDDCE9AAE0FC976(iLocal_87) > 0.99f) && func_125(iLocal_78))
				{
					func_69(0, 1);
					func_75(0);
					iLocal_86 = 6;
				}
			}
			break;
		
		case 6:
			func_72();
			if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				unk_0x0483D0035D6E46FD("misschop_vehicleenter_exit");
				if (unk_0xE9CCF312047EBEE0("misschop_vehicleenter_exit") && func_125(iLocal_78))
				{
					if ((!unk_0x830B1D24ED3D5F55(iLocal_78, iLocal_94) && unk_0x0ACBA87310ED2513(iLocal_78, 1) > 0.1f) && !func_77())
					{
						func_71();
					}
					iLocal_86 = 7;
				}
			}
			break;
		
		case 7:
			func_72();
			if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else if (func_125(iLocal_78) && func_70())
			{
				if (!unk_0x830B1D24ED3D5F55(iLocal_78, iLocal_94))
				{
					unk_0xB40411FADDCA9CC8(iLocal_78, iLocal_94, 0);
				}
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			func_72();
			func_67(&iLocal_70);
			func_40(1);
			if (iLocal_54 == -1)
			{
				iLocal_54 = unk_0xE3903F59E2F22150();
				iLocal_55 = 7000;
			}
			if (func_125(iLocal_78))
			{
				if (func_66())
				{
					func_68(2f, 0f, 0f, 1);
				}
				else if (unk_0x17260B4EA0652E1C(iLocal_78))
				{
					func_68(2f, 0f, 0f, 1);
				}
				else if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0x8BB475EA09C9A0EB(iLocal_78) < 5f)
					{
						if (!unk_0x830B1D24ED3D5F55(iLocal_78, iLocal_94))
						{
							unk_0x4A3BD9D189356B69(iLocal_78, iLocal_94, 0, 0);
						}
						iLocal_86 = 12;
					}
				}
				else if (unk_0x5EBE50D55314CEAD(2, 75))
				{
					if (unk_0x95BBE5C8D52FE24B(iLocal_78))
					{
						func_68(2f, 0f, 0f, 1);
					}
					else if (func_77())
					{
						iLocal_86 = 9;
					}
					else if (unk_0x782B99DB55846C95(unk_0x33CD235DF1E6A94E(), iLocal_78, 0, 0, 0))
					{
						unk_0xA4DF1E31BCDF9978(iLocal_78, 10f, 1, 0);
						if (unk_0x830B1D24ED3D5F55(iLocal_78, iLocal_94))
						{
							iLocal_86 = 12;
						}
						else
						{
							iLocal_86 = 10;
						}
					}
					else if (unk_0x782B99DB55846C95(unk_0x33CD235DF1E6A94E(), iLocal_78, -1, 0, 0))
					{
						unk_0xA4DF1E31BCDF9978(iLocal_78, 10f, 1, 0);
						func_68(-2f, 0f, 0f, 0);
					}
					else
					{
						unk_0xA4DF1E31BCDF9978(iLocal_78, 10f, 1, 0);
						func_68(0f, -4f, 0f, 0);
					}
				}
				else
				{
					func_65();
					func_63();
					func_62();
					if (((!unk_0xFAC8F20FBC764F4D() && !unk_0x0E4018692D92041D(Global_106565.f_10043.f_94, 2)) && !func_19()) && !unk_0x71EC91BA8C88BCE0())
					{
						unk_0x8950ED5730F62EE8(&(Global_106565.f_10043.f_94), 2);
						func_15("CHOP_H_CAR", -1);
					}
				}
			}
			else
			{
				func_68(2f, 0f, 0f, 1);
			}
			break;
		
		case 9:
			func_72();
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && !func_113(unk_0x33CD235DF1E6A94E(), -828834893))
			{
				unk_0x07C339D4328CA16C(unk_0x33CD235DF1E6A94E(), 0, 0);
			}
			if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
			{
				func_68(2f, 0f, 0f, 1);
			}
			break;
		
		case 10:
			func_72();
			if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				unk_0x0483D0035D6E46FD("misschop_vehicleenter_exit");
				if (unk_0xE9CCF312047EBEE0("misschop_vehicleenter_exit"))
				{
					func_71();
					iLocal_86 = 11;
				}
			}
			break;
		
		case 11:
			func_72();
			if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else if (func_125(iLocal_78) && func_70())
			{
				if (!unk_0x830B1D24ED3D5F55(iLocal_78, iLocal_94))
				{
					unk_0x4A3BD9D189356B69(iLocal_78, iLocal_94, 0, 0);
				}
				iLocal_86 = 12;
			}
			break;
		
		case 12:
			func_72();
			unk_0x0483D0035D6E46FD(sLocal_371);
			if ((!func_113(unk_0x33CD235DF1E6A94E(), -2017877118) && unk_0xE9CCF312047EBEE0(sLocal_371)) && func_125(iLocal_78))
			{
				unk_0x31826EF4A8BC8E9F(iLocal_69);
				iLocal_87 = unk_0x38A6890195DD00D1(0f, 0f, 0f, 0f, 0f, 0f, 2);
				unk_0x19CC0F2E313BAF2E(iLocal_87, iLocal_78, unk_0x89DDAAE6EFF42DD9(iLocal_78, "seat_pside_f"));
				unk_0x08798CBF817BA887(iLocal_69, iLocal_87, sLocal_371, "get_out", 1000f, -8f, 10, 0, 1148846080, 0);
				unk_0x880B00F3FAE4C022(iLocal_69, 0, 0);
				iLocal_86 = 13;
			}
			break;
		
		case 13:
			func_72();
			if ((unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && (unk_0xE3903F59E2F22150() - iLocal_373) > 1500) && !func_113(unk_0x33CD235DF1E6A94E(), -828834893))
			{
				unk_0x07C339D4328CA16C(unk_0x33CD235DF1E6A94E(), 0, 0);
			}
			if (!unk_0xDB4C79A9697E6A55(iLocal_87) || (unk_0xDB4C79A9697E6A55(iLocal_87) && unk_0x4EDDCE9AAE0FC976(iLocal_87) > 0.99f))
			{
				unk_0xDB9204AF4AD363E9(iLocal_69, iLocal_69, 0f, 5f, 0f, 1f, 20000);
				iLocal_86 = 15;
			}
			break;
		
		case 14:
			if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				iLocal_86 = 15;
			}
			else
			{
				func_65();
				if (((!unk_0xFAC8F20FBC764F4D() && !unk_0x0E4018692D92041D(Global_106565.f_10043.f_94, 5)) && !func_19()) && !unk_0x71EC91BA8C88BCE0())
				{
					unk_0x8950ED5730F62EE8(&(Global_106565.f_10043.f_94), 5);
					func_15("CHOP_H_BIKE", -1);
				}
			}
			break;
		
		case 15:
			func_72();
			if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				func_57();
				func_99(0, 0, 0);
				unk_0xFF2DEA68E2D3602E("misschop_vehicleenter_exit");
				unk_0xFF2DEA68E2D3602E(sLocal_371);
				iLocal_62 = unk_0xE3903F59E2F22150();
				func_56();
				func_55(&iLocal_78);
				iLocal_78 = 0;
				iLocal_54 = -1;
				unk_0xED68CDDDE25A144E(iLocal_69);
				unk_0x9611832841071B69(iLocal_69, false);
				unk_0x5FEE418CE11E6DDE(iLocal_69, 185, true);
				unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 32, true);
				func_121(2, 1);
			}
			else if (!func_113(unk_0x33CD235DF1E6A94E(), -828834893))
			{
				unk_0x07C339D4328CA16C(unk_0x33CD235DF1E6A94E(), 0, 0);
			}
			break;
	}
}

void func_55(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		unk_0xD62C4419A41F106A(*iParam0, 0);
		if (unk_0x5A04E3BD0B5E7E49(*iParam0) && unk_0x9E08E12414BD4476(*iParam0, 1))
		{
			unk_0x65F544B458249682(iParam0);
		}
	}
}

void func_56()
{
	if (((iLocal_385 == 1 && func_125(unk_0x6DD92CC717E9E506())) && unk_0xC92AA0DBDDDE8BB8(unk_0x6DD92CC717E9E506()) > 1) && !unk_0x830B1D24ED3D5F55(unk_0x6DD92CC717E9E506(), iLocal_94))
	{
		unk_0x7E67DEA07DB29899(unk_0x6DD92CC717E9E506(), iLocal_94, 0, 1, 0);
	}
}

void func_57()
{
	if ((!unk_0xE38E3CF1625A4145(iLocal_70) && func_125(iLocal_69)) && !unk_0xF0D230FB550CD6EB(iLocal_69, 1))
	{
		if (func_178(126))
		{
			func_61(139, 0, 0);
		}
		else
		{
			func_61(138, 0, 0);
		}
		iLocal_70 = func_58(iLocal_69, 0, 145);
		unk_0xA20C1DE21F2F071C(iLocal_70, 273);
	}
}

int func_58(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_59(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE38E3CF1625A4145(iVar0)) && unk_0xEAF855A7DC28BC8D(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		unk_0x1C95CD840303FC37(iVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_59(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x8848A15CBDADDC60(iParam0);
	if (unk_0x680558231C80291D(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_60(unk_0xB331FCEB94EB05C8(), 1f, 1f));
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
		unk_0xCE5C49921A521962(iVar0, func_60(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
		unk_0xBF11C8A43770C598(iVar0, bParam1);
	}
	else if (unk_0xA3A29DB165882310(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_60(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_60(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_61(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0x0E4018692D92041D(Global_26140[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x0E4018692D92041D(Global_26140[iVar0 /*23*/].f_11, 0))
	{
		unk_0x8950ED5730F62EE8(&(Global_26140[iVar0 /*23*/].f_11), 18);
		if (Global_26137 == 1)
		{
			Global_26138 = 1;
		}
		Global_26137 = 1;
	}
	if (bParam1)
	{
		unk_0x8950ED5730F62EE8(&(Global_26140[iVar0 /*23*/].f_11), 0);
		unk_0x8950ED5730F62EE8(&(Global_26140[iVar0 /*23*/].f_11), 15);
		unk_0x8950ED5730F62EE8(&(Global_26140[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_26140[iVar0 /*23*/].f_11), 0);
		unk_0xCE689A8E8C42ED78(&(Global_26140[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x0E4018692D92041D(Global_26140[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xE38E3CF1625A4145(Global_26140[iVar0 /*23*/].f_19))
		{
			unk_0x1F685E0FB1FEAB13(1);
			unk_0x1ABDB383C83A336A(&(Global_26140[iVar0 /*23*/].f_19));
			unk_0x1F685E0FB1FEAB13(0);
		}
	}
}

void func_62()
{
	if (func_125(iLocal_69) && func_125(iLocal_78))
	{
		if (iLocal_372 > -1)
		{
			if (((unk_0xE3903F59E2F22150() - iLocal_372) > 500 && unk_0x8BB475EA09C9A0EB(iLocal_78) > 5f) && unk_0x0D386FBDF1E8CD84(iLocal_78))
			{
				unk_0x108754262311D34F(iLocal_69, sLocal_371, "shunt_from_back", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x880B00F3FAE4C022(iLocal_69, 0, 0);
				func_122("GROWL");
				iLocal_372 = -1;
				iLocal_57 = unk_0xE3903F59E2F22150();
			}
		}
		else if (!unk_0x1CE8F0A08E65CA6A(iLocal_69, sLocal_371, "shunt_from_back", 3) || (unk_0x1CE8F0A08E65CA6A(iLocal_69, sLocal_371, "shunt_from_back", 3) && unk_0x204DEACC5BECF723(iLocal_69, sLocal_371, "shunt_from_back") > 0.98f))
		{
			unk_0x108754262311D34F(iLocal_69, sLocal_371, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x880B00F3FAE4C022(iLocal_69, 0, 0);
			iLocal_372 = unk_0xE3903F59E2F22150();
			iLocal_57 = unk_0xE3903F59E2F22150();
		}
	}
}

void func_63()
{
	if (iLocal_372 > -1 && (unk_0xE3903F59E2F22150() - iLocal_54) > iLocal_55)
	{
		if (((unk_0x69DA4FCCB5511BA4() == 7 || unk_0x69DA4FCCB5511BA4() == 8) || unk_0x69DA4FCCB5511BA4() == 9) || unk_0x69DA4FCCB5511BA4() == 13)
		{
			func_64();
			iLocal_54 = unk_0xE3903F59E2F22150();
			iLocal_55 = unk_0x9EC3B269A34A2BEE(6000, 8000);
		}
	}
}

void func_64()
{
	if ((unk_0xE3903F59E2F22150() - iLocal_57) > 500)
	{
		iLocal_57 = unk_0xE3903F59E2F22150();
		if (func_125(iLocal_69) && unk_0xF0D230FB550CD6EB(iLocal_69, 0))
		{
			unk_0x99414FB2D30425C1(&uLocal_95);
			unk_0x108754262311D34F(0, sLocal_371, "bark", 4f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x108754262311D34F(0, sLocal_371, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0xC734F59A13D39AEF(uLocal_95);
			unk_0x13A2D602CD10CBAC(iLocal_69, uLocal_95);
			unk_0xA7A57E7757ED035E(&uLocal_95);
			unk_0x880B00F3FAE4C022(iLocal_69, 0, 0);
		}
	}
}

void func_65()
{
	if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0 && bLocal_327 == 1)
	{
		if (iLocal_59 == -1)
		{
			iLocal_59 = unk_0xE3903F59E2F22150();
		}
		if (((unk_0xE3903F59E2F22150() - iLocal_59) > 10000 && iLocal_372 > -1) && func_38())
		{
			if (func_35())
			{
				if (func_125(iLocal_69))
				{
					if (unk_0xF0D230FB550CD6EB(iLocal_69, 0))
					{
						func_64();
					}
					else
					{
						func_122("BARK");
					}
				}
			}
			iLocal_59 = unk_0xE3903F59E2F22150();
		}
	}
}

int func_66()
{
	float fVar0;
	vector3 vVar1;
	
	if (func_125(iLocal_78))
	{
		if (unk_0x8AE34E8B10270D31(iLocal_78))
		{
			vVar1 = { unk_0xFBB1F99A825CAB09(iLocal_78, true) };
			if (iLocal_68 == -1)
			{
				iLocal_68 = unk_0xE3903F59E2F22150();
			}
			if (unk_0x0FB4292281B89A28(vVar1, &fVar0))
			{
				if ((fVar0 - vVar1.z) > 1f)
				{
					return 1;
				}
				else if ((unk_0xE3903F59E2F22150() - iLocal_68) > 3000)
				{
					func_122("AGITATED");
					iLocal_68 = unk_0xE3903F59E2F22150();
				}
			}
		}
		else
		{
			iLocal_68 = -1;
		}
	}
	return 0;
}

void func_67(int iParam0)
{
	if (unk_0xE38E3CF1625A4145(*iParam0))
	{
		unk_0x1C316779E36C1967(*iParam0, false);
		unk_0x1ABDB383C83A336A(iParam0);
	}
}

void func_68(vector3 vParam0, int iParam1)
{
	if (func_125(unk_0x33CD235DF1E6A94E()) && func_125(iLocal_69))
	{
		if (func_125(iLocal_78))
		{
			if ((iParam1 == 1 && !unk_0x830B1D24ED3D5F55(iLocal_78, iLocal_94)) && unk_0x0ACBA87310ED2513(iLocal_78, 1) < 0.9f)
			{
				unk_0x4A3BD9D189356B69(iLocal_78, iLocal_94, 0, 0);
			}
			if (unk_0xDB4C79A9697E6A55(iLocal_87))
			{
				unk_0xC94F9717AA77D4D0(iLocal_87);
			}
			unk_0x31826EF4A8BC8E9F(iLocal_69);
			func_124(iLocal_69, unk_0x2CA911E7569D12EA(iLocal_78, vParam0), unk_0xC472E34C8FBEC678(iLocal_69), 1, 0);
			unk_0x880B00F3FAE4C022(iLocal_69, 0, 0);
			func_69(0, 0);
			iLocal_86 = 15;
		}
		else
		{
			if (unk_0xDB4C79A9697E6A55(iLocal_87))
			{
				unk_0xC94F9717AA77D4D0(iLocal_87);
			}
			unk_0x31826EF4A8BC8E9F(iLocal_69);
			func_124(iLocal_69, unk_0x2CA911E7569D12EA(unk_0x33CD235DF1E6A94E(), (vParam0.x + 1f), vParam0.y, vParam0.z), unk_0xC472E34C8FBEC678(iLocal_69), 1, 0);
			unk_0x880B00F3FAE4C022(iLocal_69, 0, 0);
			func_69(0, 0);
			iLocal_86 = 15;
		}
	}
}

void func_69(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	
	if (iParam0 == 1)
	{
		if (!unk_0x117DAF3BF7232886(iLocal_380) && func_125(iLocal_78))
		{
			iVar2 = unk_0x9EC3B269A34A2BEE(0, 4);
			if (iVar2 == 0)
			{
				vVar0 = { 1.11573f, -1.40338f, 0.555789f };
				vVar1 = { 0.5f, 0f, 0.3f };
			}
			else if (iVar2 == 1)
			{
				vVar0 = { -1.15872f, 1.75252f, 0.761228f };
				vVar1 = { 0f, 0f, 0.3f };
			}
			else if (iVar2 == 2)
			{
				vVar0 = { -1.89975f, 0.339287f, 0.661881f };
				vVar1 = { 0f, 0f, 0.3f };
			}
			else
			{
				vVar0 = { 1.38134f, -0.1248f, 0.580783f };
				vVar1 = { 0f, 0f, 0.3f };
			}
			iLocal_380 = unk_0x00E62F31D05EB2AC("DEFAULT_SCRIPTED_CAMERA", 1);
			vVar3 = { unk_0x2D49816199C51B0C(iLocal_78, unk_0x89DDAAE6EFF42DD9(iLocal_78, "seat_pside_f")) };
			vVar4 = { unk_0x16068053F8800179(iLocal_78, vVar3) };
			vVar5 = { vVar0 + vVar4 };
			unk_0x5A488F57F21B3451(iLocal_380, iLocal_78, vVar5, 1);
			unk_0x1C98D51D7C424A85(iLocal_380, iLocal_78, vVar4 + vVar1, 1);
			unk_0x63B608CD1957089E(iLocal_380, 50f);
			unk_0x083F68B89E3EA476(iLocal_380, "HAND_SHAKE", 0.3f);
			unk_0xE24CCCFCAA2FFAC0(iLocal_380, 0f, 0f, 100000f, 100000f);
			unk_0x63F0B040CE6EDF0F(true, 0, 3000, 1, 0, 0);
		}
	}
	else if (unk_0x117DAF3BF7232886(iLocal_380))
	{
		if (iParam1 == 1)
		{
			unk_0xD6EDA274D82E8678(0f, 1065353216);
			unk_0xC7E6A5D90DED6E0B(0f);
		}
		unk_0x63F0B040CE6EDF0F(false, 0, 3000, 1, 0, 0);
		unk_0xE2AE4E6F010FA5C5(0);
	}
}

int func_70()
{
	if (func_125(iLocal_78))
	{
		if (((unk_0xE3903F59E2F22150() - iLocal_373) > 500 || unk_0x830B1D24ED3D5F55(iLocal_78, iLocal_94)) || func_77())
		{
			return 1;
		}
	}
	return 0;
}

void func_71()
{
	unk_0x108754262311D34F(unk_0x33CD235DF1E6A94E(), "misschop_vehicleenter_exit", sLocal_370, 8f, -8f, -1, 40, 0, 0, 0, 0);
	iLocal_373 = unk_0xE3903F59E2F22150();
}

void func_72()
{
	unk_0x3FD9339AA95E323F(0, 75, 1);
	unk_0x3FD9339AA95E323F(0, 23, 1);
}

int func_73()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

void func_74()
{
	if (!func_113(iLocal_69, 713668775) && func_4(unk_0x33CD235DF1E6A94E(), iLocal_69, 1) > 1f)
	{
		unk_0x7E268975AF5EA74F(iLocal_69, unk_0x2CA911E7569D12EA(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 1), 2f, 0f, 0f), 2f, 20000, 1048576000, 0, 1193033728);
	}
}

void func_75(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD6EDA274D82E8678(0f, 1065353216);
		unk_0xC7E6A5D90DED6E0B(0f);
	}
	func_67(&iLocal_70);
	unk_0x9611832841071B69(iLocal_69, true);
	unk_0x094626C0798AE1F8(iLocal_69, iLocal_78, 0);
	unk_0x108754262311D34F(iLocal_69, sLocal_371, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
	unk_0x880B00F3FAE4C022(iLocal_69, 0, 0);
}

int func_76()
{
	float fVar0;
	
	if (func_125(iLocal_78) && func_125(iLocal_69))
	{
		if (iLocal_66 == -1)
		{
			fVar0 = func_4(iLocal_78, iLocal_69, 1);
			iLocal_66 = floor((fVar0 * 1000f));
			if (iLocal_66 < 5000)
			{
				iLocal_66 = 5000;
			}
		}
		if (((func_39(iLocal_69, unk_0x2CA911E7569D12EA(iLocal_78, 2f, 0f, 0f), 0) < 1f || unk_0xF1CDE9FD207C4CD8(0, 71)) || unk_0xF1CDE9FD207C4CD8(0, 72)) || (iLocal_65 > -1 && (unk_0xE3903F59E2F22150() - iLocal_65) > iLocal_66))
		{
			return 1;
		}
	}
	return 0;
}

int func_77()
{
	int iVar0;
	
	if (func_125(iLocal_78))
	{
		iVar0 = unk_0x541D5C57194E73C4(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 1));
		if (((((((((((((((((((((((iVar0 == joaat("airbus") || iVar0 == joaat("barracks")) || iVar0 == joaat("barracks2")) || iVar0 == joaat("biff")) || iVar0 == joaat("bus")) || iVar0 == joaat("coach")) || iVar0 == joaat("hauler")) || iVar0 == joaat("mixer")) || iVar0 == joaat("mixer2")) || iVar0 == joaat("packer")) || iVar0 == joaat("pbus")) || iVar0 == joaat("phantom")) || iVar0 == joaat("pounder")) || iVar0 == joaat("riot")) || iVar0 == joaat("rubble")) || iVar0 == joaat("scrap")) || iVar0 == joaat("stockade")) || iVar0 == joaat("stockade3")) || iVar0 == joaat("tiptruck")) || iVar0 == joaat("tiptruck2")) || iVar0 == joaat("towtruck")) || iVar0 == joaat("towtruck2")) || iVar0 == unk_0x36163153849DFDA1("monster")) || iVar0 == unk_0x36163153849DFDA1("marshall"))
		{
			return 1;
		}
	}
	return 0;
}

void func_78()
{
	int iVar0;
	
	if (func_125(iLocal_78))
	{
		iVar0 = unk_0x541D5C57194E73C4(iLocal_78);
		if (iVar0 == joaat("coach"))
		{
			iLocal_94 = 0;
		}
		else
		{
			iLocal_94 = 1;
		}
	}
}

void func_79()
{
	if (func_125(iLocal_78))
	{
		iLocal_369 = unk_0x8D51A3997E8F3769(iLocal_78);
		switch (iLocal_369)
		{
			case -1965057835:
			case 919485892:
			case -1838563680:
			case 1768419516:
			case 1576485197:
			case 929009548:
			case -497732145:
			case -1659990386:
			case -662028469:
			case 1939145032:
				sLocal_371 = "creatures@rottweiler@in_vehicle@van";
				sLocal_370 = "van_ds_open_door_for_chop";
				break;
			
			case -2066252141:
			case 1105669833:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -782720499:
			case -1150063973:
			case 1630950849:
			case -463340997:
			case 2033852426:
				sLocal_371 = "creatures@rottweiler@in_vehicle@low_car";
				sLocal_370 = "low_ds_open_door_for_chop";
				break;
			
			case 434478421:
			case 1816176348:
			case 1710903184:
			case 1663892749:
				sLocal_371 = "creatures@rottweiler@in_vehicle@4x4";
				sLocal_370 = "std_ds_open_door_for_chop";
				break;
			
			default:
				sLocal_371 = "creatures@rottweiler@in_vehicle@std_car";
				sLocal_370 = "std_ds_open_door_for_chop";
				break;
		}
		if (unk_0x541D5C57194E73C4(iLocal_78) == joaat("brawler"))
		{
			sLocal_371 = "creatures@rottweiler@in_vehicle@4x4";
			sLocal_370 = "std_ds_open_door_for_chop";
		}
	}
}

int func_80()
{
	if ((((((((unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && unk_0x91D5C8283D19AF49(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0)) && !unk_0xA2F0EA9AB6142D97(unk_0x33CD235DF1E6A94E())) && !unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E())) && !unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E())) && !unk_0x21DE39E28274C4C1(unk_0x33CD235DF1E6A94E())) && unk_0xC92AA0DBDDDE8BB8(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)) >= 1) && unk_0x67FFBB75D2430704(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0, 0)) && !func_23())
	{
		return 1;
	}
	return 0;
}

int func_81()
{
	if (unk_0xDE9B75BB528AC06E(unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E())))
	{
		if (unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == unk_0x90D2E06562D440E1(-14.5f, -1437.2f, 31.1f))
		{
			return 1;
		}
		if (unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == unk_0x90D2E06562D440E1(7.6f, 537.3f, 176f))
		{
			return 1;
		}
		if (unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == unk_0x90D2E06562D440E1(130.2632f, -1295.035f, 28.2695f))
		{
			return 1;
		}
	}
	return 0;
}

void func_82()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
	vVar1 = { unk_0x2CA911E7569D12EA(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 1), 2f, 0f, 0f) };
	vVar3 = { vVar1 - vVar0 };
	vVar2 = { unk_0x2CA911E7569D12EA(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 1), -2f, 0f, 0f) };
	vVar4 = { vVar2 - vVar0 };
	if (vmag(vVar3) < vmag(vVar4))
	{
		iLocal_93 = 1;
	}
	else
	{
		iLocal_93 = 0;
	}
}

void func_83()
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	
	if ((iLocal_315 != 5 || (unk_0xE3903F59E2F22150() - iLocal_316) < 1000) || bLocal_327 == 0)
	{
		return;
	}
	func_97();
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 102)
	{
		if (func_96(iVar2))
		{
			vVar0 = { func_95(iVar2, 1) };
			if (!func_94(vVar0))
			{
				fVar1 = unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iLocal_69, true), vVar0, true);
				if (fVar1 < fLocal_318[2] && fVar1 < fLocal_324)
				{
					iLocal_317[2] = iVar2;
					fLocal_318[2] = fVar1;
					vLocal_319[2 /*3*/] = { func_95(iVar2, 0) };
					vLocal_320[2 /*3*/] = { vVar0 };
				}
			}
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 76)
	{
		if (func_93(iVar2))
		{
			vVar0 = { func_92(iVar2, 1) };
			if (!func_94(vVar0))
			{
				fVar1 = unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iLocal_69, true), vVar0, true);
				if (fVar1 < fLocal_318[1] && fVar1 < fLocal_324)
				{
					iLocal_317[1] = iVar2;
					fLocal_318[1] = fVar1;
					vLocal_319[1 /*3*/] = { func_92(iVar2, 0) };
					vLocal_320[1 /*3*/] = { vVar0 };
				}
			}
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 45)
	{
		if (func_91(iVar2))
		{
			vVar0 = { func_90(iVar2, 1) };
			if (!func_94(vVar0))
			{
				fVar1 = unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iLocal_69, true), vVar0, true);
				if (fVar1 < fLocal_318[0] && fVar1 < fLocal_324)
				{
					iLocal_317[0] = iVar2;
					fLocal_318[0] = fVar1;
					vLocal_319[0 /*3*/] = { func_90(iVar2, 0) };
					vLocal_320[0 /*3*/] = { vVar0 };
				}
			}
		}
		iVar2++;
	}
	if (func_89())
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < 50)
		{
			if (!func_26(iVar2) && func_88(iVar2))
			{
				vVar0 = { func_87(iVar2, 1) };
				if (!func_94(vVar0))
				{
					fVar1 = unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iLocal_69, true), vVar0, true);
					if (fVar1 < fLocal_318[3] && fVar1 < fLocal_324)
					{
						iLocal_317[3] = iVar2;
						fLocal_318[3] = fVar1;
						vLocal_319[3 /*3*/] = { func_87(iVar2, 0) };
						vLocal_320[3 /*3*/] = { vVar0 };
					}
				}
			}
			iVar2++;
		}
	}
	if (func_86())
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < 50)
		{
			if (!func_25(iVar2) && func_85(iVar2))
			{
				vVar0 = { func_84(iVar2, 1) };
				if (!func_94(vVar0))
				{
					fVar1 = unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iLocal_69, true), vVar0, true);
					if (fVar1 < fLocal_318[4] && fVar1 < fLocal_324)
					{
						iLocal_317[4] = iVar2;
						fLocal_318[4] = fVar1;
						vLocal_319[4 /*3*/] = { func_84(iVar2, 0) };
						vLocal_320[4 /*3*/] = { vVar0 };
					}
				}
			}
			iVar2++;
		}
	}
	iLocal_316 = unk_0xE3903F59E2F22150();
}

Vector3 func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1219f, -3495.9f, 12.9448f;
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return 606.8925f, -3250.188f, 5.06951f;
			}
			else
			{
				return 634.5865f, -3232.79f, -16.5774f;
			}
			break;
		
		case 2:
			return 1590.6f, -2810.174f, 3.4494f;
			break;
		
		case 3:
			if (iParam1 == 1)
			{
				return 327.99f, -2757.61f, 4.99f;
			}
			else
			{
				return 338.4039f, -2762.106f, 42.6543f;
			}
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 1134.422f, -2607.024f, 14.77071f;
			}
			else
			{
				return 1133.688f, -2605.073f, 14.9729f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 368.9316f, -2118.533f, 15.40341f;
			}
			else
			{
				return 369.945f, -2116.756f, 16.1688f;
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				return 1741.82f, -1623.85f, 111.41f;
			}
			else
			{
				return 1742.024f, -1618.777f, 111.8313f;
			}
			break;
		
		case 7:
			return 287.7294f, -1444.4f, 45.5095f;
			break;
		
		case 8:
			return 17.5926f, -1213.207f, 28.3678f;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return -910.0172f, -1147.44f, 1.06785f;
			}
			else
			{
				return -900.3597f, -1165.551f, 31.8047f;
			}
			break;
		
		case 10:
			if (iParam1 == 1)
			{
				return 1237.728f, -1099.15f, 37.52579f;
			}
			else
			{
				return 1231.973f, -1102.308f, 34.4289f;
			}
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 87.69075f, 810.3736f, 210.1258f;
			}
			else
			{
				return 81.2213f, 814.0283f, 213.2917f;
			}
			break;
		
		case 12:
			if (iParam1 == 1)
			{
				return -1900.951f, 1389.582f, 218.1509f;
			}
			else
			{
				return -1907.515f, 1388.69f, 217.9728f;
			}
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 467.369f, -730.7552f, 26.36373f;
			}
			else
			{
				return 469.8529f, -730.8f, 26.3985f;
			}
			break;
		
		case 14:
			return 202.1081f, -569.7198f, 128.18f;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 163.0531f, -566.3394f, 21.029f;
			}
			else
			{
				return 159.39f, -563.82f, 21f;
			}
			break;
		
		case 16:
			if (iParam1 == 1)
			{
				return -1183.152f, -518.5386f, 38.53018f;
			}
			else
			{
				return -1182.538f, -525.5859f, 39.9114f;
			}
			break;
		
		case 17:
			return -228.0476f, -236.4184f, 49.1361f;
			break;
		
		case 18:
			return -407.7026f, -151.7918f, 63.5505f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -1169.397f, -56.76701f, 44.45705f;
			}
			else
			{
				return -1175.488f, -65.4649f, 44.6563f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return 1679.056f, 39.44059f, 160.7736f;
			}
			else
			{
				return 1684.664f, 40.7142f, 153.4074f;
			}
			break;
		
		case 21:
			if (iParam1 == 1)
			{
				return 1964.25f, 553.68f, 160.72f;
			}
			else
			{
				return 1965.58f, 555.99f, 160.79f;
			}
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 24.21706f, 637.1212f, 206.3897f;
			}
			else
			{
				return 22.4492f, 638.8155f, 189.6085f;
			}
			break;
		
		case 23:
			return 2901.204f, 796.1192f, 3.3556f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return -1531.895f, 870.3203f, 180.6775f;
			}
			else
			{
				return -1529.722f, 871.4257f, 180.6421f;
			}
			break;
		
		case 25:
			return -404.3191f, 1100.889f, 331.535f;
			break;
		
		case 26:
			return -2809.354f, 1449.643f, 99.928f;
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			else
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			break;
		
		case 28:
			return 815.7574f, 1850.879f, 120.1796f;
			break;
		
		case 29:
			return -1944.24f, 1941.07f, 162.8f;
			break;
		
		case 30:
			if (iParam1 == 1)
			{
				return -1452.23f, 2127.41f, 42.84f;
			}
			else
			{
				return -1436.87f, 2130.22f, 26.78f;
			}
			break;
		
		case 31:
			return 1367.413f, 2180.632f, 96.6914f;
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return 170.1652f, 2217.637f, 89.30811f;
			}
			else
			{
				return 172.1426f, 2220.131f, 89.7842f;
			}
			break;
		
		case 33:
			return 889.3209f, 2870.052f, 55.2834f;
			break;
		
		case 34:
			if (iParam1 == 1)
			{
				return 1980.2f, 2914.79f, 45.48f;
			}
			else
			{
				return 1963.55f, 2922.81f, 57.76f;
			}
			break;
		
		case 35:
			return -390.384f, 2963.26f, 18.2713f;
			break;
		
		case 36:
			return 71.6642f, 3279.368f, 30.3918f;
			break;
		
		case 37:
			return 1924.186f, 3471.256f, 50.3238f;
			break;
		
		case 38:
			return -583.1569f, 3580.375f, 266.2471f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return 2514.302f, 3789.519f, 52.077f;
			}
			else
			{
				return 2516.98f, 3789.35f, 53.79f;
			}
			break;
		
		case 40:
			if (iParam1 == 1)
			{
				return 1517.613f, 3803.926f, 30.95605f;
			}
			else
			{
				return 1486.047f, 3857.217f, 22.2905f;
			}
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -530.2739f, 4474.358f, 59.45993f;
			}
			else
			{
				return -528.8246f, 4440.644f, 31.7384f;
			}
			break;
		
		case 42:
			if (iParam1 == 1)
			{
				return 3815.055f, 4447.343f, 2.06631f;
			}
			else
			{
				return 3820.813f, 4441.683f, 1.8007f;
			}
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return -1946.95f, 4584.36f, 56.06f;
			}
			else
			{
				return -1943.055f, 4585.194f, 46.6362f;
			}
			break;
		
		case 44:
			return 2437.545f, 4779.959f, 33.5101f;
			break;
		
		case 45:
			return -1441.495f, 5414.888f, 23.3f;
			break;
		
		case 46:
			return 2196.251f, 5599.034f, 52.7129f;
			break;
		
		case 47:
			if (iParam1 == 1)
			{
				return -503.95f, 5673.55f, 51.24f;
			}
			else
			{
				return -503.2193f, 5665.61f, 48.8487f;
			}
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return -378.4192f, 6080.782f, 30.44296f;
			}
			else
			{
				return -381.291f, 6086.949f, 38.6147f;
			}
			break;
		
		case 49:
			return 440.9546f, 6459.642f, 27.7432f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 14:
		case 18:
		case 25:
			return 0;
			break;
		
		case 16:
			if (unk_0x0E4018692D92041D(Global_25923, 7))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_86()
{
	return Global_106565.f_10043.f_125.f_2;
}

Vector3 func_87(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 1034.274f, -3026.275f, 4.90197f;
			}
			else
			{
				return 1026.705f, -3026.052f, 13.3323f;
			}
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return -1040.979f, -2743.509f, 12.94983f;
			}
			else
			{
				return -1048.604f, -2734.218f, 12.8895f;
			}
			break;
		
		case 2:
			if (iParam1 == 1)
			{
				return -93.9012f, -2711.314f, 5.01752f;
			}
			else
			{
				return -81.1199f, -2726.511f, 7.74f;
			}
			break;
		
		case 3:
			return -917.6909f, -2527.384f, 22.3218f;
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 746.45f, -2310.32f, 26.03f;
			}
			else
			{
				return 748.922f, -2298.114f, 19.624f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 1509.742f, -2126.038f, 75.21973f;
			}
			else
			{
				return 1509.099f, -2120.551f, 75.61f;
			}
			break;
		
		case 6:
			return 76.0032f, -1970.475f, 20.1302f;
			break;
		
		case 7:
			if (iParam1 == 1)
			{
				return -1.82327f, -1732.614f, 28.29367f;
			}
			else
			{
				return 0.067f, -1734.027f, 30.606f;
			}
			break;
		
		case 8:
			if (iParam1 == 1)
			{
				return -1377.766f, -1409.837f, 4.63205f;
			}
			else
			{
				return -1380.491f, -1404.374f, 1.7273f;
			}
			break;
		
		case 9:
			return 2864.808f, -1372.84f, 1.3151f;
			break;
		
		case 10:
			return -1035.812f, -1273.077f, 0.8919f;
			break;
		
		case 11:
			return -1821.136f, -1201.36f, 18.1698f;
			break;
		
		case 12:
			return 643.0116f, -1035.65f, 35.8891f;
			break;
		
		case 13:
			return -119.0616f, -977.2228f, 303.23f;
			break;
		
		case 14:
			if (iParam1 == 1)
			{
				return -1243.104f, -507.8057f, 30.10775f;
			}
			else
			{
				return -1238.766f, -506.7138f, 37.6019f;
			}
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 83.79993f, -431.9302f, 36.55315f;
			}
			else
			{
				return 86.4f, -433.9f, 36f;
			}
			break;
		
		case 16:
			return 1095.953f, -210.4642f, 54.9477f;
			break;
		
		case 17:
			return -1724.522f, -196f, 57.2387f;
			break;
		
		case 18:
			return 265.374f, -199.546f, 60.795f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -3020.475f, 36.55431f, 9.11777f;
			}
			else
			{
				return -3021.4f, 38f, 10.2945f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return -347.5277f, 53.37161f, 52.97814f;
			}
			else
			{
				return -347.3f, 54.865f, 53.921f;
			}
			break;
		
		case 21:
			return 1052.248f, 167.611f, 87.7406f;
			break;
		
		case 22:
			return -2303.798f, 217.4301f, 166.6017f;
			break;
		
		case 23:
			return -138.9423f, 868.3885f, 231.6956f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return 688.1073f, 1204.671f, 323.3438f;
			}
			else
			{
				return 682.4505f, 1204.928f, 344.3322f;
			}
			break;
		
		case 25:
			return -1548.763f, 1380.173f, 125.3728f;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return -432.14f, 1598.46f, 355.73f;
			}
			else
			{
				return -432.0034f, 1597.129f, 356.613f;
			}
			break;
		
		case 27:
			return 3081.93f, 1648.29f, 2.42f;
			break;
		
		case 28:
			return -594.38f, 2092f, 130.57f;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 3069.213f, 2160.988f, 1.1327f;
			}
			else
			{
				return 3063.583f, 2212.63f, 2.5863f;
			}
			break;
		
		case 30:
			return 180.21f, 2263.83f, 91.87f;
			break;
		
		case 31:
			if (iParam1 == 1)
			{
				return 926.96f, 2445.36f, 49.09f;
			}
			else
			{
				return 929.6946f, 2444.115f, 48.43f;
			}
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return -2380.212f, 2655.176f, 0.832f;
			}
			else
			{
				return -2379.948f, 2656.953f, 1.4906f;
			}
			break;
		
		case 33:
			return -861.38f, 2753.3f, 12.867f;
			break;
		
		case 34:
			return -289.0195f, 2848.853f, 53.331f;
			break;
		
		case 35:
			if (iParam1 == 1)
			{
				return 288.8409f, 2871.912f, 42.6422f;
			}
			else
			{
				return 265.7415f, 2866.416f, 73.19f;
			}
			break;
		
		case 36:
			if (iParam1 == 1)
			{
				return 1297.378f, 2988.71f, 40.11787f;
			}
			else
			{
				return 1294.2f, 3001.9f, 57.7f;
			}
			break;
		
		case 37:
			return 1568.65f, 3572.8f, 32.294f;
			break;
		
		case 38:
			return -1608.62f, 4274.25f, 102.95f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return -3.51812f, 4332.451f, 31.21602f;
			}
			else
			{
				return -1.9585f, 4334.787f, 32.3702f;
			}
			break;
		
		case 40:
			return 1336.737f, 4307.2f, 37.1325f;
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -1007.103f, 4836.936f, 268.5488f;
			}
			else
			{
				return -1001.48f, 4851.322f, 273.6112f;
			}
			break;
		
		case 42:
			return 1877.09f, 5078.98f, 50.49f;
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return 3366.099f, 5182.461f, 0.68317f;
			}
			else
			{
				return 3436.453f, 5176.911f, 6.386f;
			}
			break;
		
		case 44:
			if (iParam1 == 1)
			{
				return -576.12f, 5472.24f, 59.28f;
			}
			else
			{
				return -578.8057f, 5470.164f, 59.0295f;
			}
			break;
		
		case 45:
			return 444.6518f, 5571.781f, 780.1888f;
			break;
		
		case 46:
			return -402.9948f, 6319.279f, 31.2256f;
			break;
		
		case 47:
			return 1439.599f, 6335.208f, 22.9485f;
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return 1466.109f, 6552.266f, 12.95773f;
			}
			else
			{
				return 1469.632f, 6552.174f, 13.6854f;
			}
			break;
		
		case 49:
			if (iParam1 == 1)
			{
				return 66.19278f, 6668.888f, 30.80633f;
			}
			else
			{
				return 66.7136f, 6663.198f, 30.7821f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 9:
		case 10:
		case 13:
		case 27:
		case 38:
			return 0;
			break;
		
		case 14:
			if (unk_0x0E4018692D92041D(Global_25923, 7))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_89()
{
	return Global_106565.f_10043.f_122.f_2;
}

Vector3 func_90(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 473.1829f, -2643.184f, 4.7209f;
			break;
		
		case 1:
			if (bParam1 == 1)
			{
				return 291.41f, -2090.78f, 16.29f;
			}
			else
			{
				return 289.2062f, -2091.221f, 16.0234f;
			}
			break;
		
		case 2:
			if (bParam1 == 1)
			{
				return 1173.839f, -1499.781f, 33.84875f;
			}
			else
			{
				return 1173.566f, -1495.763f, 34.1121f;
			}
			break;
		
		case 3:
			if (bParam1 == 1)
			{
				return -461.7139f, -1699.202f, 17.85122f;
			}
			else
			{
				return -462f, -1701f, 18.8f;
			}
			break;
		
		case 4:
			return -1384.628f, -521.0416f, 30.084f;
			break;
		
		case 5:
			return -521.5692f, -601.7532f, 29.4482f;
			break;
		
		case 6:
			return -664.5f, 165.4552f, 58.3821f;
			break;
		
		case 7:
			return 329.3609f, -190.5986f, 53.2262f;
			break;
		
		case 8:
			if (bParam1 == 1)
			{
				return -477.44f, -1052.99f, 39.81f;
			}
			else
			{
				return -478.7744f, -1051.079f, 40.93f;
			}
			break;
		
		case 9:
			return -1268.071f, -1917.408f, 4.8583f;
			break;
		
		case 10:
			return -1221.908f, -2771.762f, 13.0545f;
			break;
		
		case 11:
			return -3088.668f, 652.9629f, 0.989f;
			break;
		
		case 12:
			if (bParam1 == 1)
			{
				return -629.3048f, 2036.067f, 157.3307f;
			}
			else
			{
				return -627.2166f, 2035.032f, 157.5585f;
			}
			break;
		
		case 13:
			if (bParam1 == 1)
			{
				return -2071.903f, 3411.504f, 30.36414f;
			}
			else
			{
				return -2048.483f, 3406.162f, 31.1504f;
			}
			break;
		
		case 14:
			return -424.0321f, 4012.767f, 80.4744f;
			break;
		
		case 15:
			return 1983.1f, 5174.5f, 47.6f;
			break;
		
		case 16:
			if (bParam1 == 1)
			{
				return 2341.1f, 2576f, 45.7f;
			}
			else
			{
				return 2340.17f, 2573.89f, 45.77f;
			}
			break;
		
		case 17:
			if (bParam1 == 1)
			{
				return 1663.9f, -25.91945f, 172.7747f;
			}
			else
			{
				return 1663.96f, -24.1101f, 172.7747f;
			}
			break;
		
		case 18:
			if (bParam1 == 1)
			{
				return 2614.451f, 1695.127f, 26.59907f;
			}
			else
			{
				return 2617.729f, 1693.417f, 30.8743f;
			}
			break;
		
		case 19:
			if (bParam1 == 1)
			{
				return -187.31f, 1545.16f, 314.07f;
			}
			else
			{
				return -187.0338f, 1555.677f, 321.2431f;
			}
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 859.5025f, 2426.04f, 53.18517f;
			}
			else
			{
				return 868.7573f, 2423.536f, 60.8942f;
			}
			break;
		
		case 21:
			if (bParam1 == 1)
			{
				return -1822.075f, 805.7814f, 137.7265f;
			}
			else
			{
				return -1822.967f, 803.8147f, 138.2005f;
			}
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return -1852.922f, 2054.42f, 139.9841f;
			}
			else
			{
				return -1851.628f, 2053.836f, 139.9841f;
			}
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return -1075.515f, 4898.497f, 213.2767f;
			}
			else
			{
				return -1070.651f, 4898.934f, 213.2752f;
			}
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return 1301.56f, 4306.6f, 36.39f;
			}
			else
			{
				return 1300.1f, 4308.1f, 37.3f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return -436.44f, 5983.5f, 30.49f;
			}
			else
			{
				return -437.94f, 5985.04f, 31.29f;
			}
			break;
		
		case 26:
			if (bParam1 == 1)
			{
				return 1840.569f, 3693.77f, 33.2668f;
			}
			else
			{
				return 1838.577f, 3692.028f, 33.6172f;
			}
			break;
		
		case 27:
			return 533.1f, -23.8f, 70.6f;
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return 445.83f, -986.48f, 29.69f;
			}
			else
			{
				return 446.4f, -988.5f, 29.77f;
			}
			break;
		
		case 29:
			return -1119.498f, -847.3371f, 18.6886f;
			break;
		
		case 30:
			return 391.2f, -1603.9f, 28.38f;
			break;
		
		case 31:
			return -890.8f, -2386.2f, 13.4f;
			break;
		
		case 32:
			if (bParam1 == 1)
			{
				return 282.75f, 953.05f, 209.95f;
			}
			else
			{
				return 284.7f, 954.2f, 210.1514f;
			}
			break;
		
		case 33:
			return -2003.115f, 544.7549f, 114.5077f;
			break;
		
		case 34:
			if (bParam1 == 1)
			{
				return -397.5786f, 1127.353f, 321.7291f;
			}
			else
			{
				return -386.8739f, 1142.42f, 321.5892f;
			}
			break;
		
		case 35:
			return -1521.811f, 1560.201f, 106.9392f;
			break;
		
		case 36:
			return 1391.945f, 3616.655f, 37.9259f;
			break;
		
		case 37:
			if (bParam1 == 1)
			{
				return 45.37f, -1911.45f, 20.79f;
			}
			else
			{
				return 40.5177f, -1910.727f, 20.9706f;
			}
			break;
		
		case 38:
			if (bParam1 == 1)
			{
				return 68.14f, 3749.36f, 38.73f;
			}
			else
			{
				return 70.3786f, 3755.605f, 38.7487f;
			}
			break;
		
		case 39:
			return 119.45f, -755.29f, 258.15f;
			break;
		
		case 40:
			if (bParam1 == 1)
			{
				return 156.35f, -1192.1f, 28.37f;
			}
			else
			{
				return 160.4134f, -1191.7f, 28.87f;
			}
			break;
		
		case 41:
			return 23.9296f, -633.9206f, 6.5084f;
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return 31.67f, 6542.78f, 30.44f;
			}
			else
			{
				return 30.9162f, 6546.791f, 30.4058f;
			}
			break;
		
		case 43:
			if (bParam1)
			{
				return 1333.057f, 4381.278f, 43.3703f;
			}
			else
			{
				return 1331.355f, 4392.887f, 44.012f;
			}
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -1147.31f, 4939.27f, 221.27f;
			}
			else
			{
				return -1149.392f, 4938.771f, 221.3682f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 39:
		case 41:
			return 0;
			break;
	}
	return 1;
}

Vector3 func_92(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 131.2f, 6920.1f, 20.8f;
			break;
		
		case 1:
			if (bParam1 == 1)
			{
				return -1048.569f, 4917.414f, 208.4216f;
			}
			else
			{
				return -1046.277f, 4918.739f, 211.5379f;
			}
			break;
		
		case 2:
			return -2358.46f, 3251.397f, 100.5504f;
			break;
		
		case 3:
			if (bParam1 == 1)
			{
				return -247.6219f, 6331.341f, 31.42602f;
			}
			else
			{
				return -249.9504f, 6331.219f, 32.7262f;
			}
			break;
		
		case 4:
			if (bParam1 == 1)
			{
				return -140.9f, -2491.45f, 43.45f;
			}
			else
			{
				return -141.0976f, -2498.239f, 40.0124f;
			}
			break;
		
		case 5:
			if (bParam1 == 1)
			{
				return -2924.697f, 46.50282f, 10.60369f;
			}
			else
			{
				return -2925.7f, 47.4f, 11.6f;
			}
			break;
		
		case 6:
			return -793.1981f, -726.4421f, 26.28f;
			break;
		
		case 7:
			if (bParam1 == 1)
			{
				return 124.0092f, -673.0096f, 41.02729f;
			}
			else
			{
				return 123.5196f, -674.2917f, 41.4945f;
			}
			break;
		
		case 8:
			if (bParam1 == 1)
			{
				return 1195.737f, -1481.694f, 33.8595f;
			}
			else
			{
				return 1194.709f, -1482.472f, 33.9594f;
			}
			break;
		
		case 9:
			if (bParam1 == 1)
			{
				return -35.88743f, 1945.738f, 189.1868f;
			}
			else
			{
				return -35.5254f, 1947.289f, 189.186f;
			}
			break;
		
		case 10:
			if (bParam1)
			{
				return 753.4579f, 4174.996f, 39.8011f;
			}
			else
			{
				return 751.72f, 4175.14f, 40.95f;
			}
			break;
		
		case 11:
			if (bParam1 == 1)
			{
				return 1791.256f, 4592.383f, 36.68283f;
			}
			else
			{
				return 1789.8f, 4592.4f, 36.78f;
			}
			break;
		
		case 12:
			return 341.311f, 2618.918f, 43.5124f;
			break;
		
		case 13:
			return 442.3755f, -223.602f, 55.0215f;
			break;
		
		case 14:
			if (bParam1 == 1)
			{
				return 1291.02f, -1760.94f, 51.05f;
			}
			else
			{
				return 1286.5f, -1754.4f, 52f;
			}
			break;
		
		case 15:
			if (bParam1 == 1)
			{
				return 1659.438f, 5.4271f, 165.1176f;
			}
			else
			{
				return 1658.621f, 6.7752f, 166.1676f;
			}
			break;
		
		case 16:
			if (bParam1 == 1)
			{
				return 1645.91f, 4866.72f, 40.98f;
			}
			else
			{
				return 1647.399f, 4865.839f, 41f;
			}
			break;
		
		case 17:
			return -1144.589f, -2004.452f, 12.3803f;
			break;
		
		case 18:
			if (bParam1 == 1)
			{
				return -1047.3f, -520.6f, 35f;
			}
			else
			{
				return -1048.32f, -521.2f, 35.14f;
			}
			break;
		
		case 19:
			if (bParam1 == 1)
			{
				return -1576.046f, -587.8257f, 33.97909f;
			}
			else
			{
				return -1576.817f, -586.3887f, 34.8528f;
			}
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 953.44f, -123.42f, 73.35f;
			}
			else
			{
				return 954.5f, -121.34f, 74.18f;
			}
			break;
		
		case 21:
			if (bParam1 == 1)
			{
				return 1134.201f, -665.9413f, 56.08261f;
			}
			else
			{
				return 1135.401f, -663.7875f, 56.088f;
			}
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return -2196.198f, 248.9123f, 173.612f;
			}
			else
			{
				return -2195.029f, 250.4256f, 173.6017f;
			}
			break;
		
		case 23:
			return 29.2f, 3635.4f, 39.8f;
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return 1724.429f, 3299.023f, 40.2235f;
			}
			else
			{
				return 1721.96f, 3300.464f, 40.3835f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 2617.321f, 3659.452f, 100.3867f;
			}
			else
			{
				return 2612.712f, 3662.564f, 101.1074f;
			}
			break;
		
		case 26:
			return -459.9625f, 1101.076f, 328.0211f;
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 2432.607f, 4994.333f, 45.25828f;
			}
			else
			{
				return 2430.906f, 4995.561f, 45.2685f;
			}
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return 3722.456f, 4521.837f, 20.39456f;
			}
			else
			{
				return 3724.5f, 4524.5f, 21.6f;
			}
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return -446.9024f, 5997.598f, 30.3407f;
			}
			else
			{
				return -446.045f, 6000.882f, 31.9163f;
			}
			break;
		
		case 30:
			return 3291.4f, 5192.5f, 18.4f;
			break;
		
		case 31:
			if (bParam1 == 1)
			{
				return 390.81f, -1436.07f, 28.45f;
			}
			else
			{
				return 388.7f, -1434.3f, 29.8f;
			}
			break;
		
		case 32:
			return -445.26f, -442.49f, 32.26f;
			break;
		
		case 33:
			if (bParam1)
			{
				return -1501.46f, 858.17f, 180.59f;
			}
			else
			{
				return -1500.08f, 857.59f, 180.59f;
			}
			break;
		
		case 34:
			return 2822.2f, -741.4f, 1.8f;
			break;
		
		case 35:
			if (bParam1 == 1)
			{
				return -3166.978f, 1102.622f, 19.80827f;
			}
			else
			{
				return -3165.613f, 1102.24f, 19.8928f;
			}
			break;
		
		case 36:
			if (bParam1 == 1)
			{
				return 1842.882f, 3670.457f, 32.68f;
			}
			else
			{
				return 1841.114f, 3675.253f, 34.086f;
			}
			break;
		
		case 37:
			if (bParam1 == 1)
			{
				return 1828.794f, 2605.504f, 44.61582f;
			}
			else
			{
				return 1830.535f, 2603.828f, 45.7491f;
			}
			break;
		
		case 38:
			if (bParam1 == 1)
			{
				return -32.61f, -1089.67f, 25.42f;
			}
			else
			{
				return -40.0528f, -1084.016f, 26.6224f;
			}
			break;
		
		case 39:
			if (bParam1 == 1)
			{
				return 1439.012f, 6336.812f, 22.96477f;
			}
			else
			{
				return 1445.544f, 6334.057f, 23.975f;
			}
			break;
		
		case 40:
			if (bParam1 == 1)
			{
				return -782.5126f, -1352.245f, 8.0001f;
			}
			else
			{
				return -784.4851f, -1351.364f, 8.1001f;
			}
			break;
		
		case 41:
			if (bParam1 == 1)
			{
				return 962.8806f, -1826.419f, 30.07195f;
			}
			else
			{
				return 963.1673f, -1831.149f, 36.2055f;
			}
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return -1246.155f, -1531.647f, 3.2962f;
			}
			else
			{
				return -1246.494f, -1533.677f, 4.5262f;
			}
			break;
		
		case 43:
			if (bParam1 == 1)
			{
				return -765.5466f, 698.8101f, 143.3693f;
			}
			else
			{
				return -761.1058f, 701.9452f, 145.05f;
			}
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -512.1094f, 28.86313f, 43.6153f;
			}
			else
			{
				return -513.4391f, 30.9069f, 43.9018f;
			}
			break;
		
		case 45:
			if (bParam1 == 1)
			{
				return 781.3839f, 1292.073f, 359.2997f;
			}
			else
			{
				return 780.3879f, 1295.705f, 361.6941f;
			}
			break;
		
		case 46:
			return 208.69f, 337.76f, 104.64f;
			break;
		
		case 47:
			if (bParam1 == 1)
			{
				return -1889.99f, 2078.38f, 140f;
			}
			else
			{
				return -1890.24f, 2073.26f, 140.11f;
			}
			break;
		
		case 48:
			return 153.6156f, -3073.998f, 4.8962f;
			break;
		
		case 49:
			if (bParam1)
			{
				return -306.2449f, -1180.538f, 22.711f;
			}
			else
			{
				return -304.0894f, -1180.886f, 23.9493f;
			}
			break;
		
		case 50:
			return -2006.987f, -556.4998f, 11.8813f;
			break;
		
		case 51:
			if (bParam1 == 1)
			{
				return -590.2079f, -289.8196f, 40.68631f;
			}
			else
			{
				return -588.1934f, -290.4782f, 43.7101f;
			}
			break;
		
		case 52:
			return -1795.826f, -855.7111f, 8.2048f;
			break;
		
		case 53:
			return -1557.108f, -1155.246f, 2.9158f;
			break;
		
		case 54:
			if (bParam1 == 1)
			{
				return -1470.71f, -1389.33f, 1.58f;
			}
			else
			{
				return -1467.483f, -1387.507f, 3.1432f;
			}
			break;
		
		case 55:
			return -684.8126f, -180.648f, 48.02f;
			break;
		
		case 56:
			if (bParam1 == 1)
			{
				return -1311.413f, 640.1154f, 136.9244f;
			}
			else
			{
				return -1307.062f, 641.4211f, 138.0582f;
			}
			break;
		
		case 57:
			return 2493.686f, 4963.541f, 43.7358f;
			break;
		
		case 58:
			if (bParam1 == 1)
			{
				return 1392.76f, 3602.94f, 33.98f;
			}
			else
			{
				return 1392.609f, 3605.799f, 34.9939f;
			}
			break;
		
		case 59:
			if (bParam1 == 1)
			{
				return -527.33f, 5295.7f, 73.17f;
			}
			else
			{
				return -535.4436f, 5297.496f, 76.3891f;
			}
			break;
		
		case 60:
			if (bParam1 == 1)
			{
				return -564.26f, 5353.13f, 69.23f;
			}
			else
			{
				return -551.5837f, 5349.404f, 75.253f;
			}
			break;
		
		case 61:
			if (bParam1 == 1)
			{
				return 3.18f, -1827.1f, 24.22f;
			}
			else
			{
				return 0.1911f, -1825.905f, 24.3295f;
			}
			break;
		
		case 62:
			if (bParam1 == 1)
			{
				return 62.25f, 3681.06f, 38.84f;
			}
			else
			{
				return 63.8867f, 3683.49f, 39.1543f;
			}
			break;
		
		case 63:
			return 155.384f, -741.179f, 258.6519f;
			break;
		
		case 64:
			if (bParam1 == 1)
			{
				return 126.61f, -1206.29f, 28.3f;
			}
			else
			{
				return 124.265f, -1205.882f, 28.2951f;
			}
			break;
		
		case 65:
			return 27.449f, -625.31f, 15.462f;
			break;
		
		case 66:
			if (bParam1 == 1)
			{
				return -129.04f, -662.04f, 39.51f;
			}
			else
			{
				return -129.0374f, -659.2689f, 41.0016f;
			}
			break;
		
		case 67:
			if (bParam1)
			{
				return 1138.62f, -1598.56f, 33.69f;
			}
			else
			{
				return 1138.63f, -1596.61f, 35.07f;
			}
			break;
		
		case 68:
			if (bParam1)
			{
				return 1149.68f, -1525.56f, 33.84f;
			}
			else
			{
				return 1147.55f, -1527.83f, 36.01f;
			}
			break;
		
		case 69:
			if (bParam1)
			{
				return 297.48f, -1448.79f, 28.97f;
			}
			else
			{
				return 296.44f, -1450.75f, 30.4f;
			}
			break;
		
		case 70:
			if (bParam1)
			{
				return 324.21f, -1392.68f, 31.51f;
			}
			else
			{
				return 322.27f, -1393.75f, 32.79f;
			}
			break;
		
		case 71:
			if (bParam1)
			{
				return 293.2f, -597.92f, 42.28f;
			}
			else
			{
				return 294.3f, -598.1f, 43.73f;
			}
			break;
		
		case 72:
			if (bParam1)
			{
				return 358f, -592.66f, 27.79f;
			}
			else
			{
				return 357.07f, -590.63f, 29.08f;
			}
			break;
		
		case 73:
			if (bParam1)
			{
				return -495.45f, -326.18f, 33.5f;
			}
			else
			{
				return -496.4f, -324.7f, 34.75f;
			}
			break;
		
		case 74:
			if (bParam1)
			{
				return -450.91f, -351.93f, 33.5f;
			}
			else
			{
				return -449.82f, -353.49f, 34.75f;
			}
			break;
		
		case 75:
			return -2258.833f, 323.9413f, 184.9015f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 17:
		case 55:
		case 63:
		case 65:
			return 0;
			break;
	}
	return 1;
}

int func_94(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_95(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1 == 1)
			{
				return -1760.36f, 428.6f, 126.31f;
			}
			else
			{
				return -1756.974f, 427.531f, 126.7f;
			}
			break;
		
		case 1:
			return -1595.742f, 2799.371f, 16.0205f;
			break;
		
		case 2:
			if (bParam1 == 1)
			{
				return -197.1486f, 1482.685f, 288.253f;
			}
			else
			{
				return -200.0114f, 1481.697f, 289.4303f;
			}
			break;
		
		case 3:
			return 256.77f, 2841.047f, 42.6599f;
			break;
		
		case 4:
			return -1360.223f, 4435.751f, 27.7754f;
			break;
		
		case 5:
			return 64.63f, 7051.253f, 15.8272f;
			break;
		
		case 6:
			return -456.2838f, 1593.799f, 358.0119f;
			break;
		
		case 7:
			if (bParam1 == 1)
			{
				return -3114.617f, 749.8445f, 11.59352f;
			}
			else
			{
				return -3111.614f, 749.2816f, 12.6285f;
			}
			break;
		
		case 8:
			return 713.6797f, 4095.969f, 33.765f;
			break;
		
		case 9:
			return 255.2671f, 2586.281f, 43.9619f;
			break;
		
		case 10:
			return -1292.64f, -3345.82f, 23.27f;
			break;
		
		case 11:
			return 3111.531f, 2214.848f, -8.6457f;
			break;
		
		case 12:
			if (bParam1 == 1)
			{
				return 555.82f, -839.05f, 39.84f;
			}
			else
			{
				return 555f, -837.81f, 55.08f;
			}
			break;
		
		case 13:
			return -2360f, 3245f, 91.9f;
			break;
		
		case 14:
			return 1691.152f, 2640.859f, 54.0693f;
			break;
		
		case 15:
			return 1982.37f, 6203.64f, 41.15f;
			break;
		
		case 16:
			return -2979f, 1588f, 23.3f;
			break;
		
		case 17:
			return 963.5308f, -1824.04f, 30.0708f;
			break;
		
		case 18:
			return -295.4187f, 6188.786f, 30.48932f;
			break;
		
		case 19:
			return -1778f, 124f, 67.9f;
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 157.5759f, 3133.994f, 42.45733f;
			}
			else
			{
				return 161.2925f, 3131.854f, 42.5892f;
			}
			break;
		
		case 21:
			return -888f, 5406f, 30.5f;
			break;
		
		case 22:
			return -1840f, 793f, 138.7f;
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return -495.8039f, -1750.207f, 17.42509f;
			}
			else
			{
				return -495.9968f, -1747.231f, 18.5194f;
			}
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return -1764.695f, -265.5809f, 47.6187f;
			}
			else
			{
				return -1763.359f, -263.2062f, 47.1481f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 548.0715f, -1642.451f, 27.2033f;
			}
			else
			{
				return 548.5943f, -1642.603f, 27.4425f;
			}
			break;
		
		case 26:
			return 736.0563f, 2595.556f, 72.9165f;
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 701.0009f, -1179.702f, 23.28737f;
			}
			else
			{
				return 699.2748f, -1181.671f, 33.2608f;
			}
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return -1146.74f, 4938.93f, 221.27f;
			}
			else
			{
				return -1149.437f, 4940.362f, 221.3282f;
			}
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return 2543.91f, -432.76f, 93.12f;
			}
			else
			{
				return 2513.535f, -442.8484f, 113.0888f;
			}
			break;
		
		case 30:
			return -553.1764f, -2239.877f, 121.3704f;
			break;
		
		case 31:
			if (bParam1 == 1)
			{
				return 987.16f, -108.02f, 73.3f;
			}
			else
			{
				return 987.15f, -105.88f, 74.13f;
			}
			break;
		
		case 32:
			return -1048f, -836f, 10.5f;
			break;
		
		case 33:
			return 312.6026f, 6606.896f, 27.8835f;
			break;
		
		case 34:
			return -37.21f, 2871.26f, 58.61f;
			break;
		
		case 35:
			if (bParam1 == 1)
			{
				return 61.91f, 3690.51f, 38.83f;
			}
			else
			{
				return 59f, 3692f, 38.92f;
			}
			break;
		
		case 36:
			if (bParam1 == 1)
			{
				return 2933.33f, 4617.07f, 47.72f;
			}
			else
			{
				return 2934.499f, 4617.067f, 47.736f;
			}
			break;
		
		case 37:
			return 57.8219f, -1932.121f, 20.4939f;
			break;
		
		case 38:
			return 378.26f, -334.3f, 45.63f;
			break;
		
		case 39:
			if (bParam1 == 1)
			{
				return 2673.662f, 2793.702f, 31.8124f;
			}
			else
			{
				return 2676.045f, 2793.249f, 39.5934f;
			}
			break;
		
		case 40:
			return -1582.278f, 770.3486f, 188.1942f;
			break;
		
		case 41:
			if (bParam1 == 1)
			{
				return -1641.139f, -1032.815f, 4.63165f;
			}
			else
			{
				return -1640.546f, -1034.129f, 4.6074f;
			}
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return -151.09f, -214.36f, 44.73f;
			}
			else
			{
				return -159.7137f, -209.1721f, 48.938f;
			}
			break;
		
		case 43:
			return -1276.986f, -2451.886f, 72.0481f;
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -403.5827f, 1056.212f, 322.8414f;
			}
			else
			{
				return -402f, 1053f, 323f;
			}
			break;
		
		case 45:
			return 2728.987f, 1576.382f, 65.5818f;
			break;
		
		case 46:
			if (bParam1 == 1)
			{
				return -221.27f, 6133.62f, 30.48f;
			}
			else
			{
				return -215.9002f, 6125.27f, 56.278f;
			}
			break;
		
		case 47:
			return 2092.225f, 2492.302f, 89.4046f;
			break;
		
		case 48:
			return -1124.666f, -967.1614f, 5.6319f;
			break;
		
		case 49:
			if (bParam1 == 1)
			{
				return -405.5299f, 323.4063f, 107.7227f;
			}
			else
			{
				return -405f, 325f, 108.7f;
			}
			break;
		
		case 50:
			return -1087.31f, -2429.3f, 13f;
			break;
		
		case 51:
			return -1042.645f, 879.7763f, 160.2144f;
			break;
		
		case 52:
			if (bParam1 == 1)
			{
				return -1081.229f, 678.9454f, 141.8056f;
			}
			else
			{
				return -1078.35f, 682.2944f, 144.904f;
			}
			break;
		
		case 53:
			return -402.0679f, 1355.062f, 329.8384f;
			break;
		
		case 54:
			return 153.3876f, 713.6584f, 207.2551f;
			break;
		
		case 55:
			return 186.9f, 243.0269f, 140.55f;
			break;
		
		case 56:
			if (bParam1 == 1)
			{
				return 302.01f, -3254.45f, 4.8f;
			}
			else
			{
				return 304f, -3259f, 5f;
			}
			break;
		
		case 57:
			if (bParam1 == 1)
			{
				return -398.57f, -1883.96f, 20.54f;
			}
			else
			{
				return -397f, -1885f, 21.5f;
			}
			break;
		
		case 58:
			return 780.7208f, -211.0616f, 65.1143f;
			break;
		
		case 59:
			return -1755.011f, 184.3929f, 63.3711f;
			break;
		
		case 60:
			if (bParam1 == 1)
			{
				return 788.84f, 2164.06f, 52.1f;
			}
			else
			{
				return 786.0139f, 2164.951f, 52.0981f;
			}
			break;
		
		case 61:
			return 1707.228f, 4920.156f, 41.0637f;
			break;
		
		case 62:
			return -684.9417f, 5793.045f, 16.331f;
			break;
		
		case 63:
			return -2188f, 4251f, 48f;
			break;
		
		case 64:
			if (bParam1 == 1)
			{
				return -1099.08f, 2711.35f, 18.11f;
			}
			else
			{
				return -1103f, 2715f, 19f;
			}
			break;
		
		case 65:
			return 581f, -2805f, 5.5f;
			break;
		
		case 66:
			if (bParam1 == 1)
			{
				return -663.95f, -1998.85f, 6.1f;
			}
			else
			{
				return -665.4316f, -2002.04f, 7.5968f;
			}
			break;
		
		case 67:
			return 1442.905f, -1479.759f, 62.2245f;
			break;
		
		case 68:
			if (bParam1 == 1)
			{
				return -361.92f, -141.76f, 37.58f;
			}
			else
			{
				return -356.5324f, -145.0359f, 41.7413f;
			}
			break;
		
		case 69:
			return 624.0116f, 558.6531f, 129.2455f;
			break;
		
		case 70:
			return 2833f, 2807f, 56.3785f;
			break;
		
		case 71:
			if (bParam1 == 1)
			{
				return 92.14449f, 6360.182f, 30.37612f;
			}
			else
			{
				return 94.0769f, 6356.961f, 30.3761f;
			}
			break;
		
		case 72:
			return -2231.514f, 3477.792f, 29.3291f;
			break;
		
		case 73:
			return 377f, 3582f, 32.5f;
			break;
		
		case 74:
			if (bParam1 == 1)
			{
				return -2947.47f, 445.6f, 14.29f;
			}
			else
			{
				return -2948f, 441f, 15f;
			}
			break;
		
		case 75:
			if (bParam1 == 1)
			{
				return 1292.88f, -3341.78f, 4.9f;
			}
			else
			{
				return 1296f, -3348f, 5.2f;
			}
			break;
		
		case 76:
			if (bParam1 == 1)
			{
				return -1165.46f, -2054.09f, 13.2f;
			}
			else
			{
				return -1165.883f, -2051.026f, 13.2268f;
			}
			break;
		
		case 77:
			if (bParam1 == 1)
			{
				return 1235.57f, -452.01f, 65.7f;
			}
			else
			{
				return 1235f, -450f, 66.5f;
			}
			break;
		
		case 78:
			return -467.0458f, -934.8019f, 46.9844f;
			break;
		
		case 79:
			return 226.7f, -1761f, 28.5f;
			break;
		
		case 80:
			if (bParam1 == 1)
			{
				return 1218.07f, 1898.69f, 76.87f;
			}
			else
			{
				return 1221f, 1898f, 77.4f;
			}
			break;
		
		case 81:
			if (bParam1 == 1)
			{
				return 1545.99f, 3802.7f, 32.42f;
			}
			else
			{
				return 1535.829f, 3798.217f, 33.4563f;
			}
			break;
		
		case 82:
			return 756.8601f, 6462.329f, 30.4229f;
			break;
		
		case 83:
			return -2319f, 4124f, 26f;
			break;
		
		case 84:
			return -3185f, 1053f, 20.2f;
			break;
		
		case 85:
			return 818.9215f, -3188.167f, 4.9007f;
			break;
		
		case 86:
			if (bParam1 == 1)
			{
				return -451.05f, -2264.24f, 6.61f;
			}
			else
			{
				return -457.3656f, -2262.646f, 7.5212f;
			}
			break;
		
		case 87:
			if (bParam1 == 1)
			{
				return 1409.86f, -757.22f, 65.8f;
			}
			else
			{
				return 1410.091f, -752.1061f, 66.2362f;
			}
			break;
		
		case 88:
			return 8.4875f, -441.2103f, 44.5639f;
			break;
		
		case 89:
			if (bParam1 == 1)
			{
				return -935.04f, 387.39f, 76.62f;
			}
			else
			{
				return -937.0176f, 391.544f, 80.2377f;
			}
			break;
		
		case 90:
			if (bParam1 == 1)
			{
				return 2748.49f, 3463.02f, 54.77f;
			}
			else
			{
				return 2746.554f, 3463.525f, 54.7144f;
			}
			break;
		
		case 91:
			return 1898.896f, 4921.975f, 47.8088f;
			break;
		
		case 92:
			if (bParam1 == 1)
			{
				return -315.51f, 6310.89f, 31.37f;
			}
			else
			{
				return -315.9772f, 6307.385f, 31.4906f;
			}
			break;
		
		case 93:
			return -1171f, 4927f, 224f;
			break;
		
		case 94:
			return -281.1712f, 2528.012f, 73.6376f;
			break;
		
		case 95:
			if (bParam1 == 1)
			{
				return 68.45f, 3756.27f, 38.74f;
			}
			else
			{
				return 68.453f, 3758.967f, 38.7395f;
			}
			break;
		
		case 96:
			return 25.2888f, -634.2637f, 6.5084f;
			break;
		
		case 97:
			if (bParam1 == 1)
			{
				return -1146.67f, 4939.11f, 221.27f;
			}
			else
			{
				return -1145.283f, 4940.286f, 221.3038f;
			}
			break;
		
		case 98:
			return 441.64f, 5570.38f, 780.45f;
			break;
		
		case 99:
			if (bParam1)
			{
				return 1353.152f, 4377.223f, 43.3416f;
			}
			else
			{
				return 1357.209f, 4388.445f, 43.872f;
			}
			break;
		
		case 100:
			return -102.0671f, -968.1538f, 295.5635f;
			break;
		
		case 101:
			return 2492.69f, 4963.014f, 43.6478f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 11:
		case 13:
		case 14:
		case 30:
		case 34:
		case 43:
		case 45:
		case 50:
		case 55:
		case 88:
		case 96:
		case 98:
		case 100:
			return 0;
			break;
	}
	return 1;
}

void func_97()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_317[iVar0] = -1;
		fLocal_318[iVar0] = 999999f;
		vLocal_319[iVar0 /*3*/] = { 0f, 0f, 0f };
		vLocal_320[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

void func_98(int iParam0)
{
	unk_0xE44D3FEE07A9EF2C(joaat("a_c_retriever"), iParam0);
	unk_0xE44D3FEE07A9EF2C(joaat("a_c_rottweiler"), iParam0);
	unk_0xE44D3FEE07A9EF2C(joaat("a_c_boar"), iParam0);
	unk_0xE44D3FEE07A9EF2C(joaat("a_c_coyote"), iParam0);
	unk_0xE44D3FEE07A9EF2C(joaat("a_c_deer"), iParam0);
	unk_0xE44D3FEE07A9EF2C(joaat("a_c_mtlion"), iParam0);
	unk_0xE44D3FEE07A9EF2C(joaat("a_c_pig"), iParam0);
}

void func_99(bool bParam0, int iParam1, bool bParam2)
{
	if (!unk_0xEAF6E82C7BDE5A4C(unk_0x33CD235DF1E6A94E(), joaat("weapon_ball"), 0) || unk_0xFAF00EC53D4815FE(unk_0x33CD235DF1E6A94E(), joaat("weapon_ball")) == 0)
	{
		unk_0x697EBA5CF1A6AB57(unk_0x33CD235DF1E6A94E(), joaat("weapon_ball"), 1, bParam0, bParam2);
		unk_0x5B6554A003E467E5(joaat("weapon_ball"));
		if (iParam1 == 1)
		{
			unk_0x0F8EAEEC97DDBCB3(iLocal_384, "PICKUP_WEAPON_BALL", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", 1);
		}
	}
}

void func_100()
{
	if (!unk_0xE214B9FCEDF6364A(iLocal_69))
	{
		unk_0x140D4A6561E11695(iLocal_69, unk_0xD73AC2F2DBBB17E5(unk_0x33CD235DF1E6A94E()));
	}
	if (unk_0xE214B9FCEDF6364A(iLocal_69))
	{
		unk_0xDD02EC6C22FD1487(iLocal_69, 1);
		unk_0x7143409DBD96942C(func_101(), 1f, 0.9f, 3f);
		unk_0xFF29BDA0B69FFAAD(iLocal_69, unk_0xD73AC2F2DBBB17E5(unk_0x33CD235DF1E6A94E()), 1);
	}
}

var func_101()
{
	return unk_0x733DE09777D47CD6(unk_0x3EE1295CEFBEFED4());
}

void func_102()
{
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && !unk_0x8AE34E8B10270D31(unk_0x33CD235DF1E6A94E()))
	{
		if (func_106(unk_0x33CD235DF1E6A94E(), iLocal_69) > 10f || func_105("CHOP_H_WHIS"))
		{
			if ((unk_0xE3903F59E2F22150() - iLocal_342) > 4000 && unk_0x833B1A3D9F713E03(2, 47))
			{
				iLocal_342 = unk_0xE3903F59E2F22150();
				func_103(unk_0x33CD235DF1E6A94E(), "CALL_CHOP", 3);
				if (func_105("CHOP_H_WHIS"))
				{
					unk_0xEDF90B96BED57BCE(1);
				}
				if (iLocal_51 == 15 && iLocal_52 > 1)
				{
				}
				else
				{
					func_40(0);
					if (iLocal_51 == 2)
					{
						func_121(2, 0);
					}
					else
					{
						func_121(2, 1);
					}
				}
			}
			if (((!unk_0x0E4018692D92041D(Global_106565.f_10043.f_94, 8) && !unk_0xFAC8F20FBC764F4D()) && !func_19()) && !unk_0x71EC91BA8C88BCE0())
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_10043.f_94), 8);
				func_15("CHOP_H_WHIS", -1);
			}
		}
	}
}

void func_103(int iParam0, char* sParam1, int iParam2)
{
	unk_0xAEED0213982928AC(iParam0, sParam1, func_104(iParam2), 1);
}

int func_104(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_105(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

float func_106(int iParam0, int iParam1)
{
	return func_4(iParam0, iParam1, 1);
}

int func_107()
{
	if ((unk_0xD76D6BCC14B95CE1(iLocal_69, 242628503) == 7 || unk_0x3AF2B3B68DD52355(iLocal_69)) || unk_0x45AD2119A5B580CD(iLocal_69))
	{
		unk_0xFB54EA4E40BD5E6B(iLocal_69);
		return 1;
	}
	return 0;
}

void func_108(char* sParam0, int iParam1)
{
	func_111(&uLocal_148, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
	func_109(&uLocal_148, "CHOP_AU", sParam0, 3, iParam1, 0);
}

void func_109(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_110(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x8950ED5730F62EE8(&Global_14732, 0);
	Global_15869 = iParam3;
	StringCopy(&Global_15856, sParam2, 24);
}

void func_110(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_111(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_112()
{
	int iVar0;
	
	iVar0 = unk_0x9EC3B269A34A2BEE(0, 6);
	if (iVar0 == 0)
	{
		unk_0x108754262311D34F(iLocal_69, sLocal_80[1], "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_81 = "idle_a";
	}
	else if (iVar0 == 1)
	{
		unk_0x108754262311D34F(iLocal_69, sLocal_80[1], "idle_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_81 = "idle_c";
	}
	else
	{
		unk_0x108754262311D34F(iLocal_69, sLocal_80[1], "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_81 = "idle_b";
	}
}

int func_113(int iParam0, int iParam1)
{
	if (func_114(iParam0))
	{
		if (unk_0xD76D6BCC14B95CE1(iParam0, iParam1) == 1 || unk_0xD76D6BCC14B95CE1(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_114(int iParam0)
{
	if (func_125(iParam0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_115()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_359 == 0)
	{
		iVar0 = unk_0x9EC3B269A34A2BEE(0, 8);
		if (!unk_0x18FB647D79B09657(iLocal_69, vLocal_358[iVar0 /*3*/], 2f, 2f, 4f, 0, true, 0) && !unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_358[iVar0 /*3*/], 2f, 2f, 4f, 0, true, 0))
		{
			unk_0x7E268975AF5EA74F(iLocal_69, vLocal_358[iVar0 /*3*/], 1f, 20000, 0.25f, 8192, 1193033728);
			iLocal_359 = 1;
		}
	}
	else if (!func_113(iLocal_69, 713668775))
	{
		if (func_43() == 2)
		{
			iVar1 = 15;
		}
		else if (func_43() == 0)
		{
			iVar1 = 10;
		}
		else
		{
			iVar1 = -1;
		}
		iVar2 = unk_0x9EC3B269A34A2BEE(0, 100);
		if (iVar2 < iVar1 && iLocal_348 == 0)
		{
			iLocal_348 = 1;
			func_121(13, 1);
		}
		else if (iVar2 < 50)
		{
			iLocal_79 = 1;
			sLocal_80[0] = "creatures@rottweiler@amb@world_dog_barking@enter";
			sLocal_80[1] = "creatures@rottweiler@amb@world_dog_barking@base";
			sLocal_80[2] = "creatures@rottweiler@amb@world_dog_barking@exit";
			func_121(17, 1);
		}
		else
		{
			iLocal_79 = 0;
			sLocal_80[0] = "creatures@rottweiler@amb@world_dog_sitting@enter";
			sLocal_80[1] = "creatures@rottweiler@amb@world_dog_sitting@idle_a";
			sLocal_80[2] = "creatures@rottweiler@amb@world_dog_sitting@exit";
			func_121(17, 1);
		}
	}
}

void func_116()
{
	if (((unk_0xE3903F59E2F22150() - iLocal_378) > 2000 && func_125(iLocal_69)) && unk_0x416C37C19CCE0077(unk_0xFBB1F99A825CAB09(iLocal_69, true), 5f, 1))
	{
		func_122("WHINE");
		iLocal_378 = unk_0xE3903F59E2F22150();
	}
}

void func_117()
{
	if (func_43() == 2 && (unk_0xE3903F59E2F22150() - iLocal_343) > iLocal_344)
	{
		iLocal_343 = unk_0xE3903F59E2F22150();
		iLocal_344 = unk_0x9EC3B269A34A2BEE(10000, 15000);
		func_122("WHINE");
	}
}

int func_118(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if ((func_125(iLocal_69) && func_125(unk_0x33CD235DF1E6A94E())) && func_120(iParam0, vLocal_329, 30f))
	{
		if (iParam1 == 1)
		{
			if (func_119(&uLocal_96, unk_0xFBB1F99A825CAB09(iParam0, true)))
			{
				vVar0 = { unk_0xFBB1F99A825CAB09(iLocal_69, true) };
				vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
				if (unk_0x7EECA16E87982278((vVar0.z - vVar1.z)) < 2.5f)
				{
					return 1;
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

bool func_119(var uParam0, struct<2> Param1, float fParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

bool func_120(int iParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
	vVar1 = { vParam1 - vVar0 };
	return ((vVar1.x * vVar1.x) + (vVar1.y * vVar1.y)) <= (fParam2 * fParam2);
}

void func_121(int iParam0, int iParam1)
{
	iLocal_86 = 0;
	if (func_125(iLocal_69))
	{
		unk_0x4A852F02088ECC9D(iLocal_69, 1);
		unk_0xFB54EA4E40BD5E6B(iLocal_69);
		if (!unk_0xF0D230FB550CD6EB(iLocal_69, 0))
		{
			if (iParam1 == 1)
			{
				unk_0xED68CDDDE25A144E(iLocal_69);
			}
			unk_0x9611832841071B69(iLocal_69, false);
		}
	}
	iLocal_51 = iParam0;
	iLocal_53 = 0;
	iLocal_52 = 0;
	iLocal_321 = -1;
	vLocal_322 = { 0f, 0f, 0f };
	vLocal_323 = { 0f, 0f, 0f };
	iLocal_315 = 5;
	func_34();
	iLocal_359 = 0;
	iLocal_357 = 0;
	iLocal_378 = unk_0xE3903F59E2F22150();
	unk_0xBDD4EE948C7B9BB5("DisableBarks", 0);
}

void func_122(char* sParam0)
{
	unk_0x5031E50F85092948(iLocal_69, 3, sParam0);
}

int func_123()
{
	if (func_118(unk_0x33CD235DF1E6A94E(), 1))
	{
		if ((unk_0xE3903F59E2F22150() - iLocal_336) > iLocal_337)
		{
			return 1;
		}
		if (func_39(unk_0x33CD235DF1E6A94E(), vLocal_329.f_5, 1) < 8f)
		{
			func_108("CHOP_KENNEL", 0);
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0, vector3 vParam1, float fParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_125(iParam0))
	{
		if (bParam3 == 1)
		{
			fVar1 = 0f;
			bVar0 = unk_0x8C1596BAD35D957A(vParam1, &fVar1, 0, 0);
			if (bVar0)
			{
				vParam1.z = fVar1;
			}
		}
		unk_0xBEADAF07D2339505(iParam0, vParam1, 1, 0, 0, iParam4);
		unk_0x3C990C409B3845DE(iParam0, fParam2);
		if (bParam3)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

int func_125(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_126()
{
	if ((unk_0xE3903F59E2F22150() - iLocal_382) > 60000)
	{
		iLocal_382 = unk_0xE3903F59E2F22150();
		if ((iLocal_51 == 2 || iLocal_51 == 5) || iLocal_51 == 15)
		{
			if (func_43() == 1)
			{
				func_127(115, 1);
			}
			else
			{
				func_127(116, 1);
			}
		}
	}
}

void func_127(int iParam0, int iParam1)
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

void func_128()
{
	if ((unk_0xE3903F59E2F22150() - iLocal_379) > 500)
	{
		iLocal_379 = unk_0xE3903F59E2F22150();
		if (iLocal_51 != 15 && unk_0x523F36AF20D6C821(unk_0x33CD235DF1E6A94E(), joaat("weapon_ball"), 1.5f, &uLocal_362, &iLocal_361, 0))
		{
			func_40(1);
		}
	}
}

void func_129()
{
	int iVar0;
	
	if (((((((((((func_144() && func_143()) && !func_142()) && iLocal_53 == 0) && iLocal_51 != 6) && func_19()) && !unk_0x71EC91BA8C88BCE0()) && !unk_0x71E0DAA57FE7D5C7(iLocal_69, 0)) && !func_81()) && !func_16()) && !func_3(0)) && !func_141())
	{
		unk_0x3FD9339AA95E323F(0, 19, 1);
		unk_0x3FD9339AA95E323F(0, 44, 1);
		unk_0x3FD9339AA95E323F(0, 262, 1);
		unk_0x3FD9339AA95E323F(0, 261, 1);
		unk_0x3FD9339AA95E323F(0, 37, 1);
		if (iLocal_328 == 0)
		{
			func_138(floor(Global_106565.f_20112.f_254), 100, "CHOP_H_HAPPY", 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1);
		}
		else
		{
			func_138(100, 100, "CHOP_H_HAPPY", 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1);
		}
		if (func_137())
		{
			if (Global_25911 == 0)
			{
				Global_25911 = 1;
			}
			if (unk_0x8D255802EBF1DA76())
			{
				unk_0xA020E766C7AAFB77(1);
			}
			else
			{
				unk_0xC94CF61BF93818C8(iLocal_69, 0f, 0f, 0f, 1, -1, 1000, 1000, 193150208);
				iLocal_386 = 0;
			}
			unk_0x144904D2EAA84341(func_136(), func_135(0));
			unk_0x144904D2EAA84341(func_136(), func_135(1));
			unk_0x144904D2EAA84341(func_136(), func_135(2));
			unk_0x144904D2EAA84341(func_136(), func_135(3));
			unk_0x144904D2EAA84341(func_136(), func_135(4));
			unk_0x144904D2EAA84341(func_136(), func_135(5));
			if (unk_0x5D79F3D06EB318A0(0))
			{
				unk_0x3FD9339AA95E323F(func_136(), func_135(0), 1);
				unk_0x3FD9339AA95E323F(func_136(), func_135(1), 1);
				unk_0x3FD9339AA95E323F(func_136(), func_135(2), 1);
				unk_0x3FD9339AA95E323F(func_136(), func_135(3), 1);
				unk_0x3FD9339AA95E323F(func_136(), func_135(4), 1);
				unk_0x3FD9339AA95E323F(func_136(), func_135(5), 1);
			}
			unk_0xAE4810E427AD9203(0, 25, 1);
			if (unk_0xC6FADCE8D6467372(func_136(), func_135(0)) && func_134())
			{
				switch (iLocal_51)
				{
					case 1:
					case 3:
					case 4:
						iLocal_75 = 1;
						func_133(0);
						func_122("PLAYFUL");
						func_108("CHOP_WALK", 0);
						func_121(2, 1);
						break;
					
					case 2:
					case 5:
					case 15:
						iLocal_75 = 0;
						func_133(0);
						func_121(3, 1);
						break;
					
					case 17:
					case 18:
						iLocal_75 = 1;
						func_133(0);
						func_108("CHOP_WALK", 0);
						iLocal_53 = 2;
						break;
				}
				if (iLocal_75 == 1 && unk_0x75D54ED6C1AD1642(joaat("sp_chop_walk_done"), &iLocal_381, -1))
				{
					iLocal_381++;
					unk_0x12B6E23F244DDB0F(joaat("sp_chop_walk_done"), iLocal_381, 1);
				}
			}
			if (bLocal_327 == 1)
			{
				if (unk_0x5EBE50D55314CEAD(func_136(), func_135(1)) && func_134())
				{
					if (iLocal_51 == 17 || iLocal_51 == 18)
					{
						iLocal_53 = 5;
					}
					else
					{
						func_121(5, 1);
					}
				}
				if (func_43() == 2 && iLocal_328 == 0)
				{
					if (func_132() >= 1)
					{
						if (unk_0x5EBE50D55314CEAD(func_136(), func_135(2)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 2)
					{
						if (unk_0x5EBE50D55314CEAD(func_136(), func_135(3)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 3)
					{
						if (unk_0x5EBE50D55314CEAD(func_136(), func_135(4)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 4)
					{
						if (unk_0x5EBE50D55314CEAD(func_136(), func_135(5)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
				}
				else
				{
					if (func_132() >= 1)
					{
						if (unk_0x5EBE50D55314CEAD(func_136(), func_135(2)) && func_134())
						{
							func_108("CHOP_SIT", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 8;
							}
							else
							{
								func_121(8, 1);
							}
						}
					}
					if (func_132() >= 2)
					{
						if (unk_0x5EBE50D55314CEAD(func_136(), func_135(3)) && func_134())
						{
							func_108("CHOP_PAW", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 9;
							}
							else
							{
								func_121(9, 1);
							}
						}
					}
					if (func_132() >= 3)
					{
						if (unk_0x5EBE50D55314CEAD(func_136(), func_135(4)) && func_134())
						{
							func_108("CHOP_BEG", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 7;
							}
							else
							{
								func_121(7, 1);
							}
						}
					}
					if (func_132() >= 4)
					{
						if (unk_0x5EBE50D55314CEAD(func_136(), func_135(5)) && func_134())
						{
							func_108("CHOP_PET", 0);
							if (iLocal_51 == 17 || iLocal_51 == 18)
							{
								iLocal_53 = 10;
							}
							else
							{
								func_121(10, 1);
							}
						}
					}
				}
			}
		}
		else
		{
			unk_0xEDF90B96BED57BCE(1);
			if (!unk_0x0E4018692D92041D(Global_106565.f_10043.f_94, 0))
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_10043.f_94), 0);
			}
			if (bLocal_327 == 0)
			{
				bLocal_327 = func_131();
			}
			if (bLocal_327 == 1)
			{
				iVar0 = func_132();
				if (iVar0 > 4)
				{
					iVar0 = 4;
				}
				if ((((iLocal_51 == 1 || iLocal_51 == 17) || iLocal_51 == 18) || iLocal_51 == 3) || iLocal_51 == 4)
				{
					if ((func_43() == 2 && iLocal_328 == 0) && iVar0 > 0)
					{
						StringCopy(&Local_88, "CHOP_H_WAIT_H", 32);
					}
					else
					{
						StringCopy(&Local_88, "CHOP_H_WAIT_", 32);
					}
					StringIntConCat(&Local_88, iVar0, 32);
					if (unk_0x5D79F3D06EB318A0(0))
					{
						StringConCat(&Local_88, "_KM", 32);
					}
				}
				else if (iLocal_51 == 2 || iLocal_51 == 15)
				{
					if ((func_43() == 2 && iLocal_328 == 0) && iVar0 > 0)
					{
						StringCopy(&Local_88, "CHOP_H_WALK_H", 32);
					}
					else
					{
						StringCopy(&Local_88, "CHOP_H_WALK_", 32);
					}
					StringIntConCat(&Local_88, iVar0, 32);
					if (unk_0x5D79F3D06EB318A0(0))
					{
						StringConCat(&Local_88, "_KM", 32);
					}
				}
				func_130(&Local_88);
			}
			else if (iLocal_51 == 2 || iLocal_51 == 15)
			{
				if (unk_0x5D79F3D06EB318A0(0))
				{
					func_130("CHOP_H_HOME_KM");
				}
				else
				{
					func_130("CHOP_H_HOME");
				}
			}
			else if (unk_0x5D79F3D06EB318A0(0))
			{
				func_130("CHOP_H_NOAPP_KM");
			}
			else
			{
				func_130("CHOP_H_NOAPP");
			}
		}
	}
	else
	{
		func_133(1);
	}
}

void func_130(char* sParam0)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 1, true, -1);
}

int func_131()
{
	if (Global_106565.f_20112.f_263)
	{
		return 1;
	}
	return 0;
}

int func_132()
{
	return Global_106565.f_20112.f_254.f_3;
}

void func_133(int iParam0)
{
	if (func_137())
	{
		unk_0xEDF90B96BED57BCE(1);
	}
	if (iParam0 == 1 && unk_0x8D255802EBF1DA76())
	{
		unk_0x3754CDF254D9F523(0);
	}
}

int func_134()
{
	if (((iLocal_51 == 8 || iLocal_51 == 7) || iLocal_51 == 9) || iLocal_51 == 10)
	{
		return 0;
	}
	return 1;
}

int func_135(int iParam0)
{
	if (unk_0x5D79F3D06EB318A0(0))
	{
		switch (iParam0)
		{
			case 0:
				return 24;
			
			case 1:
				return 22;
			
			case 2:
				return 44;
			
			case 3:
				return 45;
			
			case 4:
				return 51;
			
			case 5:
				return 23;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 227;
			
			case 1:
				return 229;
			
			case 2:
				return 224;
			
			case 3:
				return 225;
			
			case 4:
				return 223;
			
			case 5:
				return 222;
			}
		
		default:
	}
	return 0;
}

int func_136()
{
	if (unk_0x5D79F3D06EB318A0(0))
	{
		return 0;
	}
	return 2;
}

int func_137()
{
	if (unk_0xFAC8F20FBC764F4D())
	{
		if (((((((((((((((((((func_105("CHOP_H_WAIT_0") || func_105("CHOP_H_WAIT_1")) || func_105("CHOP_H_WAIT_2")) || func_105("CHOP_H_WAIT_3")) || func_105("CHOP_H_WAIT_4")) || func_105("CHOP_H_WAIT_H1")) || func_105("CHOP_H_WAIT_H2")) || func_105("CHOP_H_WAIT_H3")) || func_105("CHOP_H_WAIT_H4")) || func_105("CHOP_H_HOME")) || func_105("CHOP_H_WALK_0")) || func_105("CHOP_H_WALK_1")) || func_105("CHOP_H_WALK_2")) || func_105("CHOP_H_WALK_3")) || func_105("CHOP_H_WALK_4")) || func_105("CHOP_H_WALK_H1")) || func_105("CHOP_H_WALK_H2")) || func_105("CHOP_H_WALK_H3")) || func_105("CHOP_H_WALK_H4")) || func_105("CHOP_H_NOAPP"))
		{
			return 1;
		}
	}
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0xFAC8F20FBC764F4D())
		{
			if (((((((((((((((((((func_105("CHOP_H_WAIT_0_KM") || func_105("CHOP_H_WAIT_1_KM")) || func_105("CHOP_H_WAIT_2_KM")) || func_105("CHOP_H_WAIT_3_KM")) || func_105("CHOP_H_WAIT_4_KM")) || func_105("CHOP_H_WAIT_H1_KM")) || func_105("CHOP_H_WAIT_H2_KM")) || func_105("CHOP_H_WAIT_H3_KM")) || func_105("CHOP_H_WAIT_H4_KM")) || func_105("CHOP_H_HOME_KM")) || func_105("CHOP_H_WALK_0_KM")) || func_105("CHOP_H_WALK_1_KM")) || func_105("CHOP_H_WALK_2_KM")) || func_105("CHOP_H_WALK_3_KM")) || func_105("CHOP_H_WALK_4_KM")) || func_105("CHOP_H_WALK_H1_KM")) || func_105("CHOP_H_WALK_H2_KM")) || func_105("CHOP_H_WALK_H3_KM")) || func_105("CHOP_H_WALK_H4_KM")) || func_105("CHOP_H_NOAPP_KM"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_138(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_140(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_139(0, iVar0);
		Global_1373453.f_1114[iVar0] = iParam0;
		Global_1373453.f_1114.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1373453.f_1114.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1373453.f_1114.f_194[iVar0] = iParam3;
		Global_1373453.f_1114.f_183[iVar0] = iParam4;
		Global_1373453.f_1114.f_216[iVar0] = iParam5;
		Global_1373453.f_1114.f_227[iVar0 /*3*/] = fParam6;
		Global_1373453.f_1114.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1373453.f_1114.f_258[iVar0] = iParam8;
		Global_1373453.f_1114.f_269[iVar0] = iParam9;
		Global_1373453.f_1114.f_312[iVar0] = iParam10;
		Global_1373453.f_1114.f_323[iVar0] = iParam11;
		Global_1373453.f_1114.f_334[iVar0] = iParam12;
		Global_1373453.f_1114.f_345[iVar0] = iParam13;
		Global_1373453.f_1109 = 1;
		Global_1373453.f_1114.f_356[iVar0] = iParam14;
		Global_1373453.f_1114.f_367[iVar0] = iParam15;
		Global_1373453.f_1114.f_378[iVar0] = iParam16;
		Global_1373453.f_1114.f_389[iVar0] = iParam17;
		Global_1373453.f_1114.f_400[iVar0] = iParam18;
		Global_1373453.f_1114.f_411[iVar0] = iParam19;
		Global_1373453.f_1114.f_422[iVar0] = iParam20;
		Global_1373453.f_1114.f_433[iVar0] = iParam21;
		Global_1373453.f_1114.f_444[iVar0] = iParam22;
		Global_1373453.f_1114.f_455[iVar0] = iParam23;
		Global_1373453.f_1114.f_466[iVar0] = iParam24;
		Global_1373453.f_1114.f_205[iVar0] = iParam25;
	}
}

void func_139(int iParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(&(Global_1373453.f_6184[iParam0]), iParam1);
}

bool func_140(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1373453.f_6184[iParam0], iParam1);
}

bool func_141()
{
	return Global_68807;
}

bool func_142()
{
	return unk_0xE3903F59E2F22150() <= Global_17411.f_5878 + 100;
}

int func_143()
{
	if (iLocal_51 == 12)
	{
		return 0;
	}
	if (iLocal_51 == 13 || (iLocal_51 == 14 && func_113(iLocal_69, 242628503)))
	{
		if (iLocal_357 == 0 && unk_0xF1CDE9FD207C4CD8(2, 228))
		{
			func_108("CHOP_BUSY", 0);
			iLocal_357 = 1;
		}
		return 0;
	}
	return 1;
}

int func_144()
{
	if (func_106(unk_0x33CD235DF1E6A94E(), iLocal_69) < 10f)
	{
		if (iLocal_51 == 15 && iLocal_52 < 4)
		{
		}
		else if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
		{
			func_148(0);
			func_147(0);
			return 0;
		}
		else
		{
			func_145();
			func_148(1);
			func_147(1);
			return 1;
		}
	}
	func_148(0);
	func_147(0);
	if (func_105("CHOP_H_INTRO") || (unk_0x4CE1DD5CFC1F941E() && func_105("CHOP_H_INTRO_KM")))
	{
		unk_0xEDF90B96BED57BCE(1);
	}
	return 0;
}

void func_145()
{
	if ((((((((!unk_0x0E4018692D92041D(Global_106565.f_10043.f_94, 0) && !(func_105("CHOP_H_INTRO") || (unk_0x4CE1DD5CFC1F941E() && func_105("CHOP_H_INTRO_KM")))) && !func_105("PW_HELP_1")) && !func_105("PW_HELP_2")) && !func_146()) && !unk_0x71EC91BA8C88BCE0()) && !func_3(0)) && !func_142()) && !func_141())
	{
		if ((iLocal_51 == 1 || iLocal_51 == 17) || iLocal_51 == 18)
		{
			if (func_118(unk_0x33CD235DF1E6A94E(), 1))
			{
				unk_0xEDF90B96BED57BCE(1);
				if (unk_0x5D79F3D06EB318A0(0))
				{
					func_130("CHOP_H_INTRO_KM");
				}
				else
				{
					func_130("CHOP_H_INTRO");
				}
			}
		}
	}
	if ((unk_0x4CE1DD5CFC1F941E() && func_105("CHOP_H_INTRO_KM")) || func_105("CHOP_H_INTRO"))
	{
		if ((((func_146() || unk_0x71EC91BA8C88BCE0()) || func_3(0)) || func_142()) || func_141())
		{
			unk_0xEDF90B96BED57BCE(1);
		}
	}
}

int func_146()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_147(int iParam0)
{
	if (iParam0 == 1)
	{
		if (func_125(iLocal_69))
		{
			unk_0xC4A347124F39D998(unk_0x33CD235DF1E6A94E(), iLocal_69, -1, 48, 2);
			iLocal_73 = 1;
		}
	}
	else if (iLocal_73 == 1 && func_125(unk_0x33CD235DF1E6A94E()))
	{
		unk_0xE0DAC4ABE9900D9A(unk_0x33CD235DF1E6A94E());
		iLocal_73 = 0;
	}
}

void func_148(int iParam0)
{
	int iVar0;
	
	unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar0, 1);
	if (iLocal_74 == 1 && iVar0 != joaat("weapon_unarmed"))
	{
		iParam0 = 0;
	}
	if (iParam0 == 1)
	{
		if (iLocal_74 == 0 && iVar0 == joaat("weapon_unarmed"))
		{
			unk_0xF0BE7CB40DE62A2F(iLocal_69, true);
			unk_0x428C55A965F78103(iLocal_69, 1, 0);
			unk_0x7A392EEBA7436663(iLocal_69, 1);
			unk_0x2F13877185728A69(iLocal_69, 1);
			iLocal_74 = 1;
		}
	}
	else if (iLocal_74 == 1)
	{
		unk_0xF0BE7CB40DE62A2F(iLocal_69, false);
		unk_0x428C55A965F78103(iLocal_69, 0, 0);
		unk_0x7A392EEBA7436663(iLocal_69, 0);
		iLocal_74 = 0;
	}
}

void func_149()
{
	int iVar0;
	var uVar1[5];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if ((iLocal_51 != 6 && iLocal_86 == 0) && !unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
	{
		if (((iLocal_51 == 2 || iLocal_51 == 5) || iLocal_51 == 15) || (iLocal_51 == 14 && !func_113(iLocal_69, 242628503)))
		{
			if (unk_0x7A607552722EC814(unk_0x33CD235DF1E6A94E(), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 100f) > 0 || unk_0x7A607552722EC814(iLocal_69, unk_0xFBB1F99A825CAB09(iLocal_69, true), 100f) > 0)
			{
				unk_0x0483D0035D6E46FD("creatures@rottweiler@melee@streamed_taunts@");
				iVar0 = 0;
				while (iVar0 < unk_0xB62DA19846051096(unk_0x33CD235DF1E6A94E(), &uVar1, -1))
				{
					if ((((!func_125(iVar2) && func_125(uVar1[iVar0])) && (unk_0x71E0DAA57FE7D5C7(uVar1[iVar0], unk_0x33CD235DF1E6A94E()) || unk_0x71E0DAA57FE7D5C7(uVar1[iVar0], iLocal_69))) && !unk_0xF0D230FB550CD6EB(uVar1[iVar0], 0)) && uVar1[iVar0] != iLocal_69)
					{
						iVar2 = uVar1[iVar0];
					}
					iVar0++;
				}
				if (func_125(iVar2))
				{
					unk_0x277716E9E7CC0692(iLocal_69, iVar2, 0, 16);
					func_108("CHOP_ATTACK2", 0);
					if (((!unk_0xFAC8F20FBC764F4D() && !unk_0x0E4018692D92041D(Global_106565.f_10043.f_94, 6)) && !func_19()) && !unk_0x71EC91BA8C88BCE0())
					{
						unk_0x8950ED5730F62EE8(&(Global_106565.f_10043.f_94), 6);
						func_15("CHOP_H_ATTACK", -1);
					}
					func_40(0);
					func_121(6, 0);
				}
			}
			else
			{
				unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar3, 1);
				if (iVar3 != joaat("weapon_ball") && !(iLocal_51 == 15 && iLocal_52 == 1))
				{
					if (unk_0xC2BBC4DBB5D99F40(unk_0x95B959F18401C09A(), &iVar4) || unk_0xDFD0ACB809AD97C9(unk_0x95B959F18401C09A(), &iVar4))
					{
						if (unk_0x068481DAF84B9654(iVar4))
						{
							iVar5 = unk_0x22B02EC53152632C(iVar4);
							if (((!unk_0xBC2FC12AD0FBF72E(iVar5) && iVar5 != iLocal_69) && !unk_0xF0D230FB550CD6EB(iVar5, 0)) && func_4(unk_0x33CD235DF1E6A94E(), iVar5, 1) < 50f)
							{
								unk_0x277716E9E7CC0692(iLocal_69, iVar5, 0, 16);
								iLocal_374++;
								if (iLocal_374 >= 3)
								{
									unk_0xE2E9548B5EE8D23C(unk_0x95B959F18401C09A(), 0f);
									unk_0x563D94E1BFFD5CC6(unk_0x95B959F18401C09A(), 2, 0);
								}
								func_108("CHOP_ATTACK1", 0);
								if (((!unk_0xFAC8F20FBC764F4D() && !unk_0x0E4018692D92041D(Global_106565.f_10043.f_94, 11)) && !func_19()) && !unk_0x71EC91BA8C88BCE0())
								{
									unk_0x8950ED5730F62EE8(&(Global_106565.f_10043.f_94), 11);
									func_15("CHOP_H_AIM", -1);
								}
								func_40(0);
								func_121(6, 0);
							}
						}
					}
				}
			}
		}
	}
	if ((unk_0xE3903F59E2F22150() - iLocal_375) > 60000)
	{
		iLocal_375 = unk_0xE3903F59E2F22150();
		if (iLocal_374 > 0)
		{
			iLocal_374 = (iLocal_374 - 1);
		}
	}
}

void func_150()
{
	if ((iLocal_51 != 16 && Global_25770 == 1) && unk_0x8248367EE2A51F1D(unk_0x33CD235DF1E6A94E()))
	{
		func_121(16, 1);
	}
}

void func_151()
{
	if (iLocal_356 == 0)
	{
		if (func_118(unk_0x33CD235DF1E6A94E(), 1))
		{
			func_108("CHOP_DUMP", 0);
			iLocal_356 = 1;
		}
	}
}

void func_152()
{
	if (iLocal_360 != func_153() && func_125(iLocal_69))
	{
		if (func_131())
		{
			iLocal_360 = func_153();
			unk_0x93AA93DA1B137032(iLocal_69, 3, 0, iLocal_360, 0);
		}
		else if (iLocal_360 != 4)
		{
			iLocal_360 = 4;
			unk_0x93AA93DA1B137032(iLocal_69, 3, 0, iLocal_360, 0);
		}
	}
}

int func_153()
{
	return Global_106565.f_20112.f_254.f_4;
}

void func_154()
{
	int iVar0;
	
	Global_25911 = 0;
	unk_0xB815670C37E03CDE(func_162());
	if (!unk_0x5D98D654CDC2165A(func_162()))
	{
		return;
	}
	if (func_177(6))
	{
		vLocal_329.f_4 = 6;
		vLocal_329 = { 18.1531f, 535.2469f, 169.6324f };
		vLocal_329.f_3 = 204.8112f;
		vLocal_329.f_5 = { 19.52771f, 537.436f, 170.143f };
		vLocal_329.f_8 = 151.3064f;
		vLocal_347 = { 19.45963f, 535.7817f, 169.6277f };
		vLocal_358[0 /*3*/] = { 17.36033f, 528.8973f, 169.6277f };
		vLocal_358[1 /*3*/] = { 19.46877f, 529.1785f, 169.6277f };
		vLocal_358[2 /*3*/] = { 20.82979f, 531.5168f, 169.6277f };
		vLocal_358[3 /*3*/] = { 22.83555f, 532.3281f, 169.6277f };
		vLocal_358[4 /*3*/] = { 20.79285f, 535.001f, 169.6277f };
		vLocal_358[5 /*3*/] = { 18.05178f, 535.6321f, 169.6277f };
		vLocal_358[6 /*3*/] = { 18.92047f, 534.0938f, 169.6277f };
		vLocal_358[7 /*3*/] = { 17.51333f, 533.4775f, 169.6277f };
		func_161(&uLocal_96);
		func_160(&uLocal_96, 12.41124f, 535.5469f, 169.6277f);
		func_160(&uLocal_96, 19.04497f, 538.5729f, 169.6277f);
		func_160(&uLocal_96, 25.00015f, 534.4414f, 169.6277f);
		func_160(&uLocal_96, 28.0998f, 527.7639f, 169.4277f);
		func_160(&uLocal_96, 17.75896f, 523.3129f, 169.2277f);
		func_159(&uLocal_96);
	}
	else
	{
		vLocal_329.f_4 = 5;
		vLocal_329 = { -10.25168f, -1422.907f, 29.67775f };
		vLocal_329.f_3 = 157.9037f;
		vLocal_329.f_5 = { -9.73f, -1421.55f, 30.1f };
		vLocal_329.f_8 = 148.26f;
		vLocal_347 = { -10.6379f, -1424.561f, 29.67365f };
		vLocal_358[0 /*3*/] = { -10.03643f, -1423.529f, 29.67602f };
		vLocal_358[1 /*3*/] = { -10.78779f, -1425.306f, 29.70937f };
		vLocal_358[2 /*3*/] = { -12.7048f, -1424.748f, 29.72222f };
		vLocal_358[3 /*3*/] = { -12.47465f, -1422.485f, 29.74699f };
		vLocal_358[4 /*3*/] = { -14.26666f, -1424.855f, 29.71964f };
		vLocal_358[5 /*3*/] = { -14.55816f, -1423.048f, 29.78372f };
		vLocal_358[6 /*3*/] = { -16.13293f, -1424.489f, 29.76139f };
		vLocal_358[7 /*3*/] = { -16.25662f, -1423.325f, 29.81294f };
		func_161(&uLocal_96);
		func_160(&uLocal_96, -7.26821f, -1427.065f, 29.67468f);
		func_160(&uLocal_96, -7.39631f, -1418.851f, 29.5858f);
		func_160(&uLocal_96, -14.27201f, -1421.59f, 29.76819f);
		func_160(&uLocal_96, -22.85347f, -1423.173f, 29.74042f);
		func_160(&uLocal_96, -22.77974f, -1427.168f, 29.65953f);
		func_159(&uLocal_96);
	}
	bLocal_327 = func_131();
	func_156();
	if (func_43() == 2)
	{
		unk_0xBAE549A63F38DAE8(vLocal_347, 2f, 2);
		unk_0xB815670C37E03CDE(joaat("prop_big_shit_02"));
		while (!unk_0x5D98D654CDC2165A(joaat("prop_big_shit_02")))
		{
			wait(0);
		}
		iLocal_346 = unk_0x7CA67831169E8AA6(joaat("prop_big_shit_02"), vLocal_347, 1, true, 0);
		unk_0x71CA80D41E1338B4(joaat("prop_big_shit_02"));
		iLocal_356 = 0;
	}
	else
	{
		iLocal_356 = 1;
	}
	iLocal_348 = 0;
	if (unk_0x9EC3B269A34A2BEE(0, 2) == 0)
	{
		iLocal_337 = -1;
	}
	else
	{
		iLocal_337 = unk_0x9EC3B269A34A2BEE(20000, 30000);
	}
	if (iLocal_325 == 1)
	{
		iLocal_51 = 7;
		iLocal_75 = 1;
	}
	else if (iLocal_326 == 1)
	{
		iLocal_51 = 2;
	}
	else if (iLocal_337 > -1)
	{
		iLocal_51 = 11;
		iLocal_75 = 0;
	}
	else
	{
		iLocal_51 = 1;
		iLocal_75 = 0;
	}
	iLocal_82 = unk_0x6E6EB18FDAB9A074(11.23f, 515.4f, 168f, 9f, 21f, 4f, func_155(113f), 0, 7);
	iLocal_83 = unk_0x6E6EB18FDAB9A074(24f, 528f, 168f, 5f, 5f, 4f, func_155(113f), 0, 7);
	vLocal_84[0 /*3*/] = { 444.1685f, 5569.016f, 780.1895f };
	vLocal_84[1 /*3*/] = { 443.8968f, 5574.931f, 780.1895f };
	vLocal_84[2 /*3*/] = { -739.1624f, 5596.784f, 40.6594f };
	vLocal_84[3 /*3*/] = { -738.8002f, 5593.269f, 40.6594f };
	fLocal_85[0] = 270f;
	fLocal_85[1] = 270f;
	fLocal_85[2] = 95f;
	fLocal_85[3] = 95f;
	func_97();
	iLocal_73 = 0;
	iLocal_338 = 0;
	iLocal_342 = unk_0xE3903F59E2F22150();
	iVar0 = func_132();
	if (iVar0 > 4)
	{
		iVar0 = 4;
	}
	StringCopy(&Local_88, "CHOP_H_WAIT_", 32);
	StringIntConCat(&Local_88, iVar0, 32);
	if (unk_0x5D79F3D06EB318A0(0))
	{
		StringConCat(&Local_88, "_KM", 32);
	}
	Global_25913 = 0;
	iLocal_50 = 1;
}

float func_155(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

void func_156()
{
	if (iLocal_325 == 1)
	{
		if (func_158())
		{
			unk_0x0D21E1FDE062ED99(iLocal_69, true, 1);
			unk_0xED68CDDDE25A144E(iLocal_69);
			func_152();
			while (func_146())
			{
				wait(0);
			}
		}
	}
	else if (iLocal_326 == 1)
	{
		if (func_125(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				iLocal_78 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
				func_79();
				func_78();
				func_157(&iLocal_69, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 0, 1);
				if (func_125(iLocal_69))
				{
					unk_0x4A852F02088ECC9D(iLocal_69, 1);
					unk_0x6E43353A90D535E1(iLocal_69, 1);
					unk_0x990A34F9DA8E506D(iLocal_69, 0);
					unk_0xCBDEE923F851F500(iLocal_69, 0);
					func_100();
					unk_0x9611832841071B69(iLocal_69, true);
					unk_0x094626C0798AE1F8(iLocal_69, iLocal_78, 0);
					iLocal_86 = 8;
					func_152();
					unk_0x880B00F3FAE4C022(iLocal_69, 0, 0);
				}
				while (func_146())
				{
					if (func_125(iLocal_69) && !func_113(iLocal_69, -2017877118))
					{
						unk_0x0483D0035D6E46FD(sLocal_371);
						if (unk_0xE9CCF312047EBEE0(sLocal_371))
						{
							unk_0x108754262311D34F(iLocal_69, sLocal_371, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
						}
					}
					wait(0);
				}
			}
		}
	}
	if (!unk_0x765F6FEEFF39224F(iLocal_69))
	{
		func_157(&iLocal_69, vLocal_329, vLocal_329.f_3, 1);
	}
	if (func_125(iLocal_69))
	{
		unk_0x9315FCF6CFE2AB41("rel_group_chop", &iLocal_71);
		iLocal_72 = 1;
		unk_0xD2E80177F27FD43F(1, 1862763509, iLocal_71);
		unk_0xD2E80177F27FD43F(1, iLocal_71, 1862763509);
		unk_0xD2E80177F27FD43F(3, 1157867945, iLocal_71);
		unk_0xD2E80177F27FD43F(3, iLocal_71, 1157867945);
		unk_0x0648A75D3F60E864(iLocal_69, iLocal_71);
		unk_0x4A852F02088ECC9D(iLocal_69, 1);
		unk_0x6E43353A90D535E1(iLocal_69, 1);
		unk_0x5FEE418CE11E6DDE(iLocal_69, 185, true);
		unk_0x5FEE418CE11E6DDE(iLocal_69, 26, true);
		unk_0x5FEE418CE11E6DDE(iLocal_69, 32, false);
		unk_0x5FEE418CE11E6DDE(iLocal_69, 29, false);
		unk_0x5FEE418CE11E6DDE(iLocal_69, 116, false);
		unk_0x5FEE418CE11E6DDE(iLocal_69, 118, true);
		unk_0x5FEE418CE11E6DDE(iLocal_69, 132, true);
		unk_0x5FEE418CE11E6DDE(iLocal_69, 268, false);
		unk_0x5FEE418CE11E6DDE(iLocal_69, 107, true);
		unk_0x5FEE418CE11E6DDE(iLocal_69, 281, true);
		unk_0x5FEE418CE11E6DDE(iLocal_69, 137, true);
		unk_0x5FEE418CE11E6DDE(iLocal_69, 146, true);
		unk_0x5FEE418CE11E6DDE(iLocal_69, 157, false);
		unk_0x5FEE418CE11E6DDE(iLocal_69, 45, true);
		unk_0x5FEE418CE11E6DDE(iLocal_69, 167, true);
		unk_0x990A34F9DA8E506D(iLocal_69, 0);
		unk_0xCBDEE923F851F500(iLocal_69, 0);
		unk_0x697EBA5CF1A6AB57(iLocal_69, joaat("weapon_animal"), 1, true, true);
		unk_0x28F648743D7DE312(iLocal_69, 5, true);
		unk_0x28F648743D7DE312(iLocal_69, 0, false);
		unk_0x28F648743D7DE312(iLocal_69, 46, true);
		unk_0x5F9955D3E93BCC84(iLocal_69, 100f);
		unk_0x18E5E2B41CD6CE17(iLocal_69, 100f);
		unk_0x33F6BE48E356DA27(iLocal_69, 512, true);
		unk_0xE9220325B81B2901(iLocal_69, 0);
		unk_0x493912B04EA384EB(iLocal_69, 800);
		unk_0x7FC2040EB34E0E31(iLocal_69, 800, 0);
		unk_0x3D258435016D9F74(iLocal_69, 200);
		if (!unk_0xF0D230FB550CD6EB(iLocal_69, 0))
		{
			func_57();
		}
		func_111(&uLocal_148, 3, iLocal_69, "CHOP", 0, 1);
		unk_0xF0BE7CB40DE62A2F(iLocal_69, false);
		unk_0x428C55A965F78103(iLocal_69, 0, 0);
		unk_0x7A392EEBA7436663(iLocal_69, 0);
		iLocal_74 = 0;
		Global_25910 = 0;
		iLocal_374 = 0;
		iLocal_375 = unk_0xE3903F59E2F22150();
	}
}

int func_157(int iParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_162();
	unk_0xB815670C37E03CDE(iVar0);
	if (unk_0x5D98D654CDC2165A(iVar0))
	{
		if (unk_0x765F6FEEFF39224F(*iParam0))
		{
			unk_0x4B8B69DAE5BAC592(iParam0);
		}
		*iParam0 = unk_0x9BA5CF280376EEA4(26, iVar0, vParam1, fParam2, 0, false);
		unk_0x93AA93DA1B137032(*iParam0, 0, 0, 0, 0);
		unk_0x93AA93DA1B137032(*iParam0, 1, 0, 0, 0);
		unk_0x93AA93DA1B137032(*iParam0, 2, 0, 0, 0);
		if (Global_106565.f_20112.f_263)
		{
			unk_0x93AA93DA1B137032(*iParam0, 3, 0, Global_106565.f_20112.f_254.f_4, 0);
		}
		else
		{
			unk_0x93AA93DA1B137032(*iParam0, 3, 0, 4, 0);
		}
		unk_0x93AA93DA1B137032(*iParam0, 4, 0, 0, 0);
		unk_0x93AA93DA1B137032(*iParam0, 5, 0, 0, 0);
		unk_0x93AA93DA1B137032(*iParam0, 6, 0, 0, 0);
		unk_0x93AA93DA1B137032(*iParam0, 7, 0, 0, 0);
		unk_0x93AA93DA1B137032(*iParam0, 8, 0, 0, 0);
		unk_0x93AA93DA1B137032(*iParam0, 9, 0, 0, 0);
		unk_0x93AA93DA1B137032(*iParam0, 10, 0, 0, 0);
		unk_0x93AA93DA1B137032(*iParam0, 11, 0, 0, 0);
		unk_0xF52BF9A82ABDA815(*iParam0);
		if (bParam3)
		{
			unk_0x71CA80D41E1338B4(iVar0);
		}
		return 1;
	}
	return 0;
}

int func_158()
{
	var uVar0[10];
	int iVar1;
	int iVar2;
	
	if (func_125(Global_93403) && unk_0x3234E15469EA77BB(Global_93403, func_162()))
	{
		iLocal_69 = Global_93403;
		return 1;
	}
	iVar1 = unk_0xB62DA19846051096(unk_0x33CD235DF1E6A94E(), &uVar0, -1);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if ((uVar0[iVar2] != 0 && func_125(uVar0[iVar2])) && unk_0x541D5C57194E73C4(uVar0[iVar2]) == func_162())
		{
			iLocal_69 = uVar0[iVar2];
			return 1;
		}
		iVar2++;
	}
	return 0;
}

void func_159(var uParam0)
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(to_float(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = vdist2(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = sqrt(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_160(var uParam0, vector3 vParam1)
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*(uParam0[uParam0->f_46 /*3*/]) = { vParam1 };
	uParam0->f_46++;
}

void func_161(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

int func_162()
{
	return joaat("a_c_chop");
}

int func_163()
{
	float fVar0;
	vector3 vVar1;
	float fVar2;
	
	if (iLocal_50 > 0)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_69))
		{
			if (func_167(0) && Global_25770 == 0)
			{
				return 1;
			}
			if (!func_170(1))
			{
				return 1;
			}
			if (Global_106555 == 1)
			{
				return 1;
			}
			if (((((((((((Global_71588 == 1 && Global_25770 == 0) && Global_2427 == 0) && Global_26017 == 0) && Global_26018 == 0) && Global_26019 == 0) && Global_53675 == 0) && !func_146()) && !func_16()) && Global_95762 == 0) && func_125(unk_0x33CD235DF1E6A94E())) && !func_165())
			{
				return 1;
			}
			if (Global_90632 == 1)
			{
				return 1;
			}
			if (unk_0xD62C4419A41F106A(iLocal_69, 0))
			{
				if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) && unk_0x91BBD269506D61D2(iLocal_69, unk_0x33CD235DF1E6A94E(), 1))
				{
					Global_25910 = 1;
					if (!unk_0x0E4018692D92041D(Global_106565.f_10043.f_94, 9) && !unk_0x71EC91BA8C88BCE0())
					{
						unk_0x8950ED5730F62EE8(&(Global_106565.f_10043.f_94), 9);
						func_15("CHOP_H_DEAD", -1);
					}
				}
				else if (!unk_0x0E4018692D92041D(Global_106565.f_10043.f_94, 12) && !unk_0x71EC91BA8C88BCE0())
				{
					unk_0x8950ED5730F62EE8(&(Global_106565.f_10043.f_94), 12);
					func_15("CHOP_H_DEAD2", -1);
				}
				return 1;
			}
			else
			{
				if (unk_0x71EC91BA8C88BCE0())
				{
					func_164();
				}
				else
				{
					if ((iLocal_51 == 2 || iLocal_51 == 5) || iLocal_51 == 15)
					{
						fVar0 = 200f;
					}
					else
					{
						fVar0 = 100f;
					}
					if (func_4(unk_0x33CD235DF1E6A94E(), iLocal_69, 1) > fVar0)
					{
						if ((!unk_0x0E4018692D92041D(Global_106565.f_10043.f_94, 4) && unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A())) && !unk_0x71EC91BA8C88BCE0())
						{
							if (((((iLocal_51 == 1 || iLocal_51 == 17) || iLocal_51 == 11) || iLocal_51 == 4) || iLocal_51 == 3) || iLocal_51 == 13)
							{
							}
							else
							{
								unk_0x8950ED5730F62EE8(&(Global_106565.f_10043.f_94), 4);
								func_15("CHOP_H_RANGE", -1);
							}
						}
						return 1;
					}
				}
				if (!unk_0xF0D230FB550CD6EB(iLocal_69, 0) && unk_0xE80842D7B53F8525(iLocal_69) > 0)
				{
					if (unk_0x8AE34E8B10270D31(iLocal_69))
					{
						vVar1 = { unk_0xFBB1F99A825CAB09(iLocal_69, true) };
						if (unk_0x0FB4292281B89A28(vVar1, &fVar2))
						{
							if ((fVar2 - vVar1.z) > 0.1f)
							{
								unk_0x7FC2040EB34E0E31(iLocal_69, 0, 0);
							}
						}
					}
					if (unk_0x17260B4EA0652E1C(iLocal_69))
					{
						unk_0x7FC2040EB34E0E31(iLocal_69, 0, 0);
					}
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

void func_164()
{
	if (unk_0xFAC8F20FBC764F4D())
	{
		if ((((((((((((((((((((((((((((((func_105("CHOP_H_INTRO") || func_105("CHOP_H_WAIT_0")) || func_105("CHOP_H_WAIT_1")) || func_105("CHOP_H_WAIT_2")) || func_105("CHOP_H_WAIT_3")) || func_105("CHOP_H_WAIT_4")) || func_105("CHOP_H_WAIT_H1")) || func_105("CHOP_H_WAIT_H2")) || func_105("CHOP_H_WAIT_H3")) || func_105("CHOP_H_WAIT_H4")) || func_105("CHOP_H_HOME")) || func_105("CHOP_H_WALK_0")) || func_105("CHOP_H_WALK_1")) || func_105("CHOP_H_WALK_2")) || func_105("CHOP_H_WALK_3")) || func_105("CHOP_H_WALK_4")) || func_105("CHOP_H_WALK_H1")) || func_105("CHOP_H_WALK_H2")) || func_105("CHOP_H_WALK_H3")) || func_105("CHOP_H_WALK_H4")) || func_105("CHOP_H_HUNT")) || func_105("CHOP_H_NOVEH")) || func_105("CHOP_H_CAR")) || func_105("CHOP_H_BIKE")) || func_105("CHOP_H_ATTACK")) || func_105("CHOP_H_BALL")) || func_105("CHOP_H_WHIS")) || func_105("CHOP_H_NOAPP")) || func_105("CHOP_H_BEHAVE")) || func_105("CHOP_H_BEHAVA")) || func_105("CHOP_H_AIM"))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
	}
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0xFAC8F20FBC764F4D())
		{
			if ((((((((((((((((((((func_105("CHOP_H_INTRO_KM") || func_105("CHOP_H_WAIT_0_KM")) || func_105("CHOP_H_WAIT_1_KM")) || func_105("CHOP_H_WAIT_2_KM")) || func_105("CHOP_H_WAIT_3_KM")) || func_105("CHOP_H_WAIT_4_KM")) || func_105("CHOP_H_WAIT_H1_KM")) || func_105("CHOP_H_WAIT_H2_KM")) || func_105("CHOP_H_WAIT_H3_KM")) || func_105("CHOP_H_WAIT_H4_KM")) || func_105("CHOP_H_HOME_KM")) || func_105("CHOP_H_WALK_0_KM")) || func_105("CHOP_H_WALK_1_KM")) || func_105("CHOP_H_WALK_2_KM")) || func_105("CHOP_H_WALK_3_KM")) || func_105("CHOP_H_WALK_4_KM")) || func_105("CHOP_H_WALK_H1_KM")) || func_105("CHOP_H_WALK_H2_KM")) || func_105("CHOP_H_WALK_H3_KM")) || func_105("CHOP_H_WALK_H4_KM")) || func_105("CHOP_H_NOAPP_KM"))
			{
				unk_0xEDF90B96BED57BCE(1);
			}
		}
	}
}

bool func_165()
{
	return Global_91021;
}

int func_166()
{
	if (unk_0x71EC91BA8C88BCE0())
	{
		return Global_91792;
	}
	if (func_146())
	{
		return Global_91792;
	}
	return 318;
}

int func_167(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_168(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_168(int iParam0)
{
	return func_169(iParam0, Global_36425);
}

int func_169(int iParam0, int iParam1)
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

bool func_170(int iParam0)
{
	func_171();
	return iParam0 == Global_106565.f_2357.f_539.f_4321;
}

void func_171()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_175(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_174(unk_0x33CD235DF1E6A94E());
			if (func_173(iVar0) && (!func_172(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_173(Global_106565.f_2357.f_539.f_4321))
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

bool func_172(int iParam0)
{
	return Global_36425 == iParam0;
}

bool func_173(int iParam0)
{
	return iParam0 < 3;
}

int func_174(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_175(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_175(int iParam0)
{
	if (func_173(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_176(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_88750[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_88750[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_177(iVar0) || iParam2 == 0)
				{
					fVar1 = unk_0x16E00F066AFFEA0D(vParam0, Global_88750[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_177(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_106565.f_7223[iParam0], 0);
}

int func_178(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_99.f_58[iParam0];
}

void func_179()
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0x1BCDA92AD0A7835B(unk_0x535C9C52117DA0AD()) > 1)
	{
	}
	else
	{
		Global_25911 = 0;
		func_147(0);
		if (unk_0x8D255802EBF1DA76() && !iLocal_386)
		{
			unk_0x3754CDF254D9F523(0);
		}
		func_67(&iLocal_70);
		if (func_178(63))
		{
			if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
			{
				if (func_178(126))
				{
					if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 19.3f, 528.24f, 169.63f, true) > 50f)
					{
						func_61(139, 1, 0);
					}
				}
				else if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), -11.15f, -1425.56f, 29.67f, true) > 50f)
				{
					func_61(138, 1, 0);
				}
			}
		}
		func_40(1);
		func_42(&iLocal_346, 0);
		func_42(&iLocal_349, 0);
		if (unk_0xC2FDDE313D5A5398(iLocal_77))
		{
			unk_0x91F3E4311D34B364(iLocal_77, 0);
		}
		unk_0xAEF90BD69E5087CF();
		if (unk_0xEAF6E82C7BDE5A4C(unk_0x33CD235DF1E6A94E(), joaat("weapon_ball"), 0))
		{
			unk_0x681FB12989BD5DEA(unk_0x33CD235DF1E6A94E(), joaat("weapon_ball"));
		}
		if (func_125(unk_0x33CD235DF1E6A94E()) && !func_172(0))
		{
			unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 32, true);
		}
		if (unk_0x765F6FEEFF39224F(iLocal_69))
		{
			if (func_187())
			{
				func_186(&iLocal_69);
			}
			else
			{
				if (!unk_0xD62C4419A41F106A(iLocal_69, 0) && func_125(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0xE214B9FCEDF6364A(iLocal_69))
					{
						unk_0x5D94F4D6FE7DA516(iLocal_69);
					}
					if (unk_0xDB4C79A9697E6A55(iLocal_87) || unk_0xF0D230FB550CD6EB(iLocal_69, 0))
					{
						if (func_125(iLocal_78))
						{
							bVar0 = false;
							while (!bVar0)
							{
								wait(0);
								if (!func_185() || func_183(iLocal_78, 1093140480, 1, 1056964608, 0, 1, 0))
								{
									bVar0 = true;
								}
							}
							if (func_185())
							{
								if (!unk_0x830B1D24ED3D5F55(iLocal_78, iLocal_94))
								{
									unk_0x4A3BD9D189356B69(iLocal_78, iLocal_94, 0, 0);
								}
								unk_0x0483D0035D6E46FD(sLocal_371);
								while (!unk_0xE9CCF312047EBEE0(sLocal_371))
								{
									wait(0);
								}
							}
							if (func_185())
							{
								iLocal_87 = unk_0x38A6890195DD00D1(0f, 0f, 0f, 0f, 0f, 0f, 2);
								unk_0x19CC0F2E313BAF2E(iLocal_87, iLocal_78, unk_0x89DDAAE6EFF42DD9(iLocal_78, "seat_pside_f"));
								unk_0x31826EF4A8BC8E9F(iLocal_69);
								unk_0x08798CBF817BA887(iLocal_69, iLocal_87, sLocal_371, "get_out", 1000f, -8f, 10, 0, 1148846080, 0);
								unk_0x880B00F3FAE4C022(iLocal_69, 0, 0);
								bVar1 = false;
								while (!bVar1)
								{
									wait(0);
									if (!func_185() || (unk_0xDB4C79A9697E6A55(iLocal_87) && unk_0x4EDDCE9AAE0FC976(iLocal_87) > 0.99f))
									{
										bVar1 = true;
									}
								}
								wait(0);
								if (func_185() && !unk_0x830B1D24ED3D5F55(iLocal_78, iLocal_94))
								{
									unk_0xB40411FADDCA9CC8(iLocal_78, iLocal_94, 0);
								}
							}
						}
						else if (func_182() == 1)
						{
							if (iLocal_51 == 2 || iLocal_51 == 15)
							{
								unk_0x31826EF4A8BC8E9F(iLocal_69);
								func_124(iLocal_69, unk_0x2CA911E7569D12EA(unk_0x33CD235DF1E6A94E(), 1.75f, 0f, 0f), unk_0xC472E34C8FBEC678(iLocal_69), 1, 1);
								unk_0x880B00F3FAE4C022(iLocal_69, 0, 0);
							}
						}
					}
					if (func_125(iLocal_69))
					{
						unk_0x897EF720254BBEA3(iLocal_69, true);
						unk_0xECCD4FDA45197F97(iLocal_69, unk_0x33CD235DF1E6A94E(), 100f, -1, 0, 0);
					}
				}
				func_181(&iLocal_69, 1, 0, 1);
			}
		}
		func_56();
		func_55(&iLocal_78);
		func_98(0);
		unk_0xFF2DEA68E2D3602E("creatures@rottweiler@move");
		unk_0xFF2DEA68E2D3602E("creatures@rottweiler@amb@world_dog_barking@enter");
		unk_0xFF2DEA68E2D3602E("creatures@rottweiler@amb@world_dog_barking@base");
		unk_0xFF2DEA68E2D3602E("creatures@rottweiler@amb@world_dog_barking@idle_a");
		unk_0xFF2DEA68E2D3602E("creatures@rottweiler@amb@world_dog_barking@exit");
		unk_0xFF2DEA68E2D3602E("creatures@rottweiler@in_vehicle@4x4");
		unk_0xFF2DEA68E2D3602E("creatures@rottweiler@in_vehicle@low_car");
		unk_0xFF2DEA68E2D3602E("creatures@rottweiler@in_vehicle@std_car");
		unk_0xFF2DEA68E2D3602E("creatures@rottweiler@in_vehicle@van");
		unk_0xFF2DEA68E2D3602E("creatures@rottweiler@amb@world_dog_sitting@enter");
		unk_0xFF2DEA68E2D3602E("creatures@rottweiler@amb@world_dog_sitting@idle_a");
		unk_0xFF2DEA68E2D3602E("creatures@rottweiler@amb@world_dog_sitting@exit");
		unk_0xFF2DEA68E2D3602E("creatures@rottweiler@tricks@");
		unk_0xFF2DEA68E2D3602E("creatures@rottweiler@amb@sleep_in_kennel@");
		unk_0xFF2DEA68E2D3602E("creatures@rottweiler@indication@");
		unk_0xFF2DEA68E2D3602E("misschop_vehicleenter_exit");
		unk_0xFF2DEA68E2D3602E("creatures@rottweiler@melee@streamed_taunts@");
		func_180(&uLocal_148, 1);
		func_180(&uLocal_148, 3);
		func_164();
		unk_0xE2AE4E6F010FA5C5(0);
		if (iLocal_82 > -1)
		{
			unk_0xF4BF002874250DB7(iLocal_82);
		}
		if (iLocal_83 > -1)
		{
			unk_0xF4BF002874250DB7(iLocal_83);
		}
		if (iLocal_72 == 1)
		{
			unk_0xCEE359851F3C8198(iLocal_71);
		}
		unk_0xCBE6AF58552C63B2(iLocal_384);
	}
	unk_0x5894DC159447E10A();
}

void func_180(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_181(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(*iParam0))
		{
			unk_0x43D47AD82DA3C6EC(*iParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x05AB47B112CF24AE(*iParam0);
			}
			unk_0x897EF720254BBEA3(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x4A852F02088ECC9D(*iParam0, 0);
			}
		}
		unk_0x1F45B4626AC4A4C0(iParam0);
	}
}

int func_182()
{
	func_171();
	return Global_106565.f_2357.f_539.f_4321;
}

int func_183(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x3FD9339AA95E323F(0, 71, 1);
	unk_0x3FD9339AA95E323F(0, 72, 1);
	unk_0x3FD9339AA95E323F(0, 76, 1);
	unk_0x3FD9339AA95E323F(0, 73, 1);
	unk_0x3FD9339AA95E323F(0, 59, 1);
	unk_0x3FD9339AA95E323F(0, 60, 1);
	if (bParam5)
	{
		unk_0x3FD9339AA95E323F(0, 75, 1);
	}
	unk_0x3FD9339AA95E323F(0, 80, 1);
	if (!bParam6)
	{
		unk_0x3FD9339AA95E323F(0, 69, 1);
		unk_0x3FD9339AA95E323F(0, 70, 1);
		unk_0x3FD9339AA95E323F(0, 68, 1);
	}
	unk_0x3FD9339AA95E323F(0, 74, 1);
	unk_0x3FD9339AA95E323F(0, 86, 1);
	unk_0x3FD9339AA95E323F(0, 81, 1);
	unk_0x3FD9339AA95E323F(0, 82, 1);
	unk_0x3FD9339AA95E323F(0, 138, 1);
	unk_0x3FD9339AA95E323F(0, 136, 1);
	unk_0x3FD9339AA95E323F(0, 114, 1);
	unk_0x3FD9339AA95E323F(0, 107, 1);
	unk_0x3FD9339AA95E323F(0, 110, 1);
	unk_0x3FD9339AA95E323F(0, 89, 1);
	unk_0x3FD9339AA95E323F(0, 89, 1);
	unk_0x3FD9339AA95E323F(0, 87, 1);
	unk_0x3FD9339AA95E323F(0, 88, 1);
	unk_0x3FD9339AA95E323F(0, 113, 1);
	unk_0x3FD9339AA95E323F(0, 115, 1);
	unk_0x3FD9339AA95E323F(0, 116, 1);
	unk_0x3FD9339AA95E323F(0, 117, 1);
	unk_0x3FD9339AA95E323F(0, 118, 1);
	unk_0x3FD9339AA95E323F(0, 119, 1);
	unk_0x3FD9339AA95E323F(0, 131, 1);
	unk_0x3FD9339AA95E323F(0, 132, 1);
	unk_0x3FD9339AA95E323F(0, 123, 1);
	unk_0x3FD9339AA95E323F(0, 126, 1);
	unk_0x3FD9339AA95E323F(0, 129, 1);
	unk_0x3FD9339AA95E323F(0, 130, 1);
	unk_0x3FD9339AA95E323F(0, 133, 1);
	unk_0x3FD9339AA95E323F(0, 134, 1);
	unk_0xCD3A495F8C74A0B6();
	func_184(iParam0);
	if ((unk_0xE3903F59E2F22150() - Global_29) > 500)
	{
		unk_0xA4DF1E31BCDF9978(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xE3903F59E2F22150();
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x7EECA16E87982278(unk_0x8BB475EA09C9A0EB(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_184(int iParam0)
{
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x3A337D69D2D7C0FF(iParam0))
		{
			if (unk_0x3677406194B5F225(iParam0))
			{
				unk_0x5D1C3DFAF9A33FD4(iParam0, 0);
			}
		}
	}
}

int func_185()
{
	if ((func_125(unk_0x33CD235DF1E6A94E()) && func_125(iLocal_78)) && func_125(iLocal_69))
	{
		return 1;
	}
	return 0;
}

void func_186(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		if (!unk_0xD62C4419A41F106A(*iParam0, 0))
		{
			unk_0x43D47AD82DA3C6EC(*iParam0, 0, 1);
		}
		if (!unk_0x5A04E3BD0B5E7E49(*iParam0))
		{
			unk_0x0D21E1FDE062ED99(*iParam0, true, 0);
		}
		unk_0x4B8B69DAE5BAC592(iParam0);
	}
}

int func_187()
{
	if (unk_0x71EC91BA8C88BCE0() && func_125(iLocal_69))
	{
		if (unk_0xDB4C79A9697E6A55(iLocal_87) || unk_0xF0D230FB550CD6EB(iLocal_69, 0))
		{
			return 1;
		}
	}
	if (Global_25912 == 1)
	{
		return 1;
	}
	if (Global_25913 == 1)
	{
		Global_25913 = 0;
		return 1;
	}
	if (func_125(iLocal_69))
	{
		if (iLocal_51 == 11 && unk_0xC30D5C4DCAC8020A(iLocal_69))
		{
			return 1;
		}
		if (func_188(unk_0xFBB1F99A825CAB09(iLocal_69, false), 1f, 1120403456))
		{
			return 0;
		}
	}
	if (!func_167(0))
	{
		return 0;
	}
	if (func_172(6) || func_172(2))
	{
		return 0;
	}
	return 1;
}

int func_188(vector3 vParam0, float fParam1, float fParam2)
{
	if (unk_0x73E7A21FD53144AB(vParam0, fParam1))
	{
		if (!unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vParam0, fParam2, fParam2, fParam2, 0, false, 0))
		{
			return 0;
		}
		else if (unk_0xBB5E373390A5F824())
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

