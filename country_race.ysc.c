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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	struct<8> Local_46 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<55> Local_47 = { 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9 } ;
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
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	vector3 vLocal_66 = { 0f, 0f, 0f };
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	char* sLocal_69 = NULL;
	char* sLocal_70 = NULL;
	char* sLocal_71 = NULL;
	char* sLocal_72 = NULL;
	int iLocal_73 = 0;
	bool bLocal_74 = 0;
	var uLocal_75 = 30;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	char* sLocal_113 = NULL;
	vector3 vLocal_114 = { 0f, 0f, 0f };
	vector3 vLocal_115 = { 0f, 0f, 0f };
	vector3 vLocal_116 = { 0f, 0f, 0f };
	vector3 vLocal_117 = { 0f, 0f, 0f };
	vector3 vLocal_118 = { 0f, 0f, 0f };
	struct<50> Local_119[8];
	struct<50> Local_120[23];
	struct<12> Local_121[8];
	struct<11> Local_122[1];
	int iLocal_123 = 0;
	var uLocal_124 = 3;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 1092616192;
	var uLocal_131 = 1101004800;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 3;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 10;
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
	struct<20> Local_209 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_210 = { 0, 0, 0, 0, 0, 0, 0, 21, 6, 0, 0 } ;
	var uLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	struct<2> Local_215 = { 0, 0 } ;
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
	var uLocal_229 = 8;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 4;
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
	var uLocal_248 = 4;
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
	var uLocal_263 = 4;
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
	var uLocal_278 = 4;
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
	var uLocal_293 = 4;
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
	var uLocal_308 = 4;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 4;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 4;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
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
	var uLocal_403 = 3;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 1;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 2;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 13;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 13;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 13;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 13;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 13;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 13;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 13;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	int iLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 8;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 4;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 4;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 4;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 4;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 4;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 4;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 4;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 4;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	bool bLocal_1072 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	vLocal_66 = { 1967.042f, 3116.005f, 45.8901f };
	vLocal_67 = { 1967.042f, 3116.005f, 45.8901f };
	vLocal_68 = { 1967.042f, 3116.005f, 45.8901f };
	sLocal_69 = "Stage Setup";
	sLocal_70 = "Race";
	sLocal_71 = "Complete";
	sLocal_72 = "";
	vLocal_114 = { 8.669f, -5.9084f, 0.0428f };
	iLocal_363 = unk_0x33CD235DF1E6A94E();
	unk_0xC48A4BABDFAAB2B9(1);
	if (unk_0x9EC5BDC006623C42(3))
	{
		func_350(1, 0, 1, 0);
	}
	func_340();
	func_331();
	while (true)
	{
		if (iLocal_212 != 3)
		{
			func_284();
		}
		switch (iLocal_212)
		{
			case 0:
				func_260();
				break;
			
			case 1:
				func_225();
				break;
			
			case 2:
				func_58();
				break;
			
			case 3:
				func_1();
				break;
		}
		wait(0);
	}
}

void func_1()
{
	unk_0x3FD9339AA95E323F(0, 80, 1);
	func_52(0);
	switch (iLocal_107)
	{
		case 0:
			unk_0x052830EE89C97404(0);
			iLocal_107++;
			break;
		
		case 1:
			if (func_25(&uLocal_356, &uLocal_217, "CRACEFAIL", sLocal_113, &bLocal_74, 78, 7, 1, 1097859072, 1))
			{
				if (bLocal_74)
				{
					unk_0x0F8EAEEC97DDBCB3(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_2(1, 0);
				}
				else
				{
					unk_0x0F8EAEEC97DDBCB3(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					unk_0x7EDEAEAED85BEE4F(500);
					settimera(0);
					iLocal_107++;
				}
			}
			break;
		
		case 2:
			if (timera() > 1500)
			{
				func_350(1, 1, 0, 0);
			}
			break;
	}
}

void func_2(int iParam0, int iParam1)
{
	unk_0x7EDEAEAED85BEE4F(500);
	while (!unk_0xBB5E373390A5F824())
	{
		unk_0xC5565C10067F0E40(0f);
		unk_0x453924F2AAE93AD9(0f);
		unk_0x2E6EC0FAB080C550(0f, 0f);
		wait(0);
	}
	func_24();
	func_350(0, 1, iParam1, 0);
	func_331();
	switch (iParam0)
	{
		case 0:
			func_23(iLocal_363, vLocal_66, 103.4f, 1, 1);
			func_22();
			break;
		
		case 1:
			func_23(iLocal_363, vLocal_67, 103.4f, 1, 1);
			func_7();
			break;
		
		case 2:
			func_23(iLocal_363, vLocal_68, 103.4f, 1, 1);
			func_6();
			break;
	}
	func_4(unk_0xFBB1F99A825CAB09(iLocal_363, true), 1112014848, 12, 5000, 0, 0);
	unk_0xC7E6A5D90DED6E0B(0f);
	unk_0xD6EDA274D82E8678(0f, 1065353216);
	func_3(500);
}

void func_3(int iParam0)
{
	if (unk_0xBB5E373390A5F824() || unk_0x75A50A9E5219C397())
	{
		if (!unk_0xD33DAC8D0D70A78C())
		{
			unk_0xACCDA78123DB57B0(iParam0);
		}
	}
	while (!unk_0x73DA1542B2F0C458())
	{
		unk_0xC5565C10067F0E40(0f);
		unk_0x453924F2AAE93AD9(0f);
		unk_0x2E6EC0FAB080C550(0f, 0f);
		wait(0);
	}
}

void func_4(vector3 vParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x4382260282C96ECD(vParam0, iParam1, iParam2, 127);
	if (unk_0xBC9F465E12815B03(uVar0))
	{
		iVar1 = (unk_0xE3903F59E2F22150() + iParam3);
		while (!unk_0xD007040030F44ED2(uVar0) && unk_0xE3903F59E2F22150() < iVar1)
		{
			if (bParam5)
			{
				func_52(0);
			}
			if (bParam4)
			{
				func_5();
			}
			wait(0);
		}
		if (unk_0xE3903F59E2F22150() < iVar1)
		{
		}
		unk_0x6BFA9158A12CC006(uVar0);
	}
}

void func_5()
{
	Global_17272.f_6 = 1;
}

void func_6()
{
	Local_46.f_6 = 1;
	unk_0xBC6AA949398C551E(Local_47.f_64);
	while (!unk_0xB6596C29F3179D0C(Local_47.f_64))
	{
		wait(0);
	}
	if (unk_0x765F6FEEFF39224F(unk_0x8918EC905FC8975D()))
	{
		iLocal_365 = unk_0x8918EC905FC8975D();
		unk_0x0D21E1FDE062ED99(iLocal_365, true, 0);
	}
	else
	{
		unk_0xB815670C37E03CDE(joaat("gauntlet"));
		while (!unk_0x5D98D654CDC2165A(joaat("gauntlet")))
		{
			wait(0);
		}
		iLocal_365 = unk_0xC651C43AB13A15E5(joaat("gauntlet"), Local_47[5 /*3*/], Local_47.f_54[8], 1, 1, 0);
		unk_0x71CA80D41E1338B4(joaat("gauntlet"));
		unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iLocal_365, -1);
	}
	func_23(unk_0x8918EC905FC8975D(), Local_47[5 /*3*/], Local_47.f_54[1], 0, 1);
	unk_0x4522AD7364B6AA54(unk_0x8918EC905FC8975D(), 30f);
	iLocal_212 = 2;
}

void func_7()
{
	int iVar0;
	
	func_21(&Local_46);
	while (!func_20(&Local_46))
	{
		wait(0);
	}
	func_12(197, 1, 0, 1, 0);
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		func_9(&(Local_119[iVar0 /*50*/]), 1, 0);
		iVar0++;
	}
	if (!func_8(iLocal_365))
	{
		if (unk_0x765F6FEEFF39224F(unk_0x8918EC905FC8975D()))
		{
			iLocal_365 = unk_0x8918EC905FC8975D();
			unk_0x0D21E1FDE062ED99(iLocal_365, true, 0);
		}
		else
		{
			unk_0xB815670C37E03CDE(joaat("gauntlet"));
			while (!unk_0x5D98D654CDC2165A(joaat("gauntlet")))
			{
				wait(0);
			}
			iLocal_365 = unk_0xC651C43AB13A15E5(joaat("gauntlet"), Local_47.f_26[8 /*3*/], Local_47.f_54[8], 1, 1, 0);
			unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iLocal_365, -1);
		}
	}
	else
	{
		func_23(iLocal_365, Local_47.f_26[8 /*3*/], Local_47.f_54[8], 0, 1);
		unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iLocal_365, -1);
	}
	unk_0x1A56D9C73BA20091(iLocal_365);
	unk_0xD303E20CB0AE4AD0(iLocal_365, 4);
	unk_0x2EE596932F00971D(iLocal_365, 1);
	unk_0xBC6AA949398C551E(Local_47.f_64);
	while (!unk_0xB6596C29F3179D0C(Local_47.f_64))
	{
		wait(0);
	}
	func_23(iLocal_365, Local_47.f_26[8 /*3*/], Local_47.f_54[8], 0, 1);
	iLocal_212 = 1;
}

int func_8(int iParam0)
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

void func_9(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!uParam0->f_41)
	{
		unk_0xB815670C37E03CDE(uParam0->f_3);
		if (bParam1)
		{
			while (!unk_0x5D98D654CDC2165A(uParam0->f_3))
			{
				wait(0);
			}
		}
		unk_0xB815670C37E03CDE(uParam0->f_5.f_2);
		if (bParam1)
		{
			while (!unk_0x5D98D654CDC2165A(uParam0->f_5.f_2))
			{
				wait(0);
			}
		}
		iVar0 = 0;
		if (unk_0x5D98D654CDC2165A(uParam0->f_3) && unk_0x5D98D654CDC2165A(uParam0->f_5.f_2))
		{
			iVar0 = 1;
		}
		if (iVar0 && (iParam2 == 0 || (iParam2 == 1 && !unk_0x73E7A21FD53144AB(uParam0->f_37, 2f))))
		{
			uParam0->f_5.f_3 = { uParam0->f_37 };
			uParam0->f_5.f_6 = uParam0->f_40;
			uParam0->f_5 = unk_0xC651C43AB13A15E5(uParam0->f_5.f_2, uParam0->f_37, uParam0->f_40, 1, 1, 0);
			unk_0x71CA80D41E1338B4(uParam0->f_5.f_2);
			unk_0x9FABD0AB045A5D6E(uParam0->f_5, true, 1, 0);
			uParam0->f_5.f_7 = 1;
			*uParam0 = unk_0xE196503B36B6194B(uParam0->f_5, 26, uParam0->f_3, -1, 1, true);
			func_11(uParam0);
			unk_0xC75E929AA37719DF(uParam0->f_5, 1);
			if (unk_0x765F6FEEFF39224F(*uParam0))
			{
				unk_0xDE9FF07CFD5DC172(*uParam0, 20);
				unk_0x3309862CD9166E87(*uParam0, 3);
				unk_0x52F5AAAD4824B17E(*uParam0, 2);
				unk_0x28F648743D7DE312(*uParam0, 42, true);
				unk_0x28F648743D7DE312(*uParam0, 28, true);
				unk_0x28F648743D7DE312(*uParam0, 52, true);
				unk_0x28F648743D7DE312(*uParam0, 35, true);
				unk_0x28F648743D7DE312(*uParam0, 14, true);
				unk_0x28F648743D7DE312(*uParam0, 29, true);
				unk_0x34A51926277F67BC(*uParam0, 1);
				unk_0x5FEE418CE11E6DDE(*uParam0, 281, true);
				unk_0x5FEE418CE11E6DDE(*uParam0, 132, true);
				unk_0x5FEE418CE11E6DDE(*uParam0, 188, true);
				unk_0x262617DE7F70A56D(*uParam0, true);
				unk_0x897EF720254BBEA3(*uParam0, true);
				unk_0xC6CDB5F78F0E3592(*uParam0, &(uParam0->f_46));
				unk_0x0648A75D3F60E864(*uParam0, uParam0->f_4);
				unk_0x4A852F02088ECC9D(*uParam0, 1);
				uParam0->f_42 = 0;
				uParam0->f_41 = 1;
				uParam0->f_44 = 0;
				if (uParam0->f_17.f_11 == 1)
				{
					func_10(*uParam0);
				}
				unk_0x71CA80D41E1338B4(uParam0->f_3);
			}
		}
	}
}

void func_10(int iParam0)
{
	switch (Global_106565.f_25067)
	{
		case 0:
			unk_0x93AA93DA1B137032(iParam0, 0, 0, 0, 0);
			unk_0x93AA93DA1B137032(iParam0, 3, 0, 0, 0);
			unk_0x93AA93DA1B137032(iParam0, 4, 0, 0, 0);
			unk_0x93AA93DA1B137032(iParam0, 6, 0, 0, 0);
			unk_0x93AA93DA1B137032(iParam0, 10, 0, 0, 0);
			break;
		
		case 1:
			unk_0x93AA93DA1B137032(iParam0, 0, 1, 1, 0);
			unk_0x93AA93DA1B137032(iParam0, 3, 0, 7, 0);
			unk_0x93AA93DA1B137032(iParam0, 4, 0, 1, 0);
			unk_0x93AA93DA1B137032(iParam0, 6, 0, 4, 0);
			unk_0x93AA93DA1B137032(iParam0, 10, 0, 1, 0);
			break;
		
		case 2:
			unk_0x93AA93DA1B137032(iParam0, 0, 1, 2, 0);
			unk_0x93AA93DA1B137032(iParam0, 3, 0, 5, 0);
			unk_0x93AA93DA1B137032(iParam0, 4, 0, 0, 0);
			unk_0x93AA93DA1B137032(iParam0, 6, 0, 1, 0);
			unk_0x93AA93DA1B137032(iParam0, 10, 0, 2, 0);
			break;
		
		case 3:
			unk_0x93AA93DA1B137032(iParam0, 0, 1, 0, 0);
			unk_0x93AA93DA1B137032(iParam0, 3, 0, 2, 0);
			unk_0x93AA93DA1B137032(iParam0, 4, 0, 1, 0);
			unk_0x93AA93DA1B137032(iParam0, 6, 0, 3, 0);
			unk_0x93AA93DA1B137032(iParam0, 10, 0, 0, 0);
			break;
		
		case 4:
			unk_0x93AA93DA1B137032(iParam0, 0, 0, 1, 0);
			unk_0x93AA93DA1B137032(iParam0, 3, 0, 6, 0);
			unk_0x93AA93DA1B137032(iParam0, 4, 0, 0, 0);
			unk_0x93AA93DA1B137032(iParam0, 6, 0, 3, 0);
			unk_0x93AA93DA1B137032(iParam0, 10, 0, 0, 0);
			break;
	}
}

void func_11(var uParam0)
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
	int iVar21;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	iVar5 = -1;
	iVar6 = -1;
	iVar7 = -1;
	iVar8 = -1;
	iVar9 = -1;
	iVar10 = -1;
	iVar11 = -1;
	iVar12 = -1;
	iVar13 = 3;
	iVar14 = 2;
	iVar15 = 2;
	iVar16 = 3;
	iVar17 = -1;
	iVar18 = -1;
	iVar19 = -1;
	iVar20 = -1;
	iVar21 = -1;
	switch (Global_106565.f_25067)
	{
		case 0:
			switch (uParam0->f_17.f_11)
			{
				case 0:
					iVar0 = 6;
					iVar1 = 1;
					iVar2 = -1;
					iVar3 = 0;
					iVar4 = 1;
					iVar5 = -1;
					iVar6 = -1;
					iVar7 = -1;
					iVar8 = 0;
					iVar9 = 3;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = 0;
					iVar13 = 3;
					iVar14 = 2;
					iVar15 = 2;
					iVar16 = 3;
					iVar17 = 6;
					iVar18 = 0;
					iVar19 = 27;
					iVar20 = 0;
					iVar21 = 120;
					break;
				
				case 2:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = -1;
					iVar3 = 2;
					iVar4 = 0;
					iVar5 = -1;
					iVar6 = 0;
					iVar7 = 1;
					iVar8 = 0;
					iVar9 = -1;
					iVar10 = 0;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 3;
					iVar14 = 2;
					iVar15 = 2;
					iVar16 = -1;
					iVar17 = 1;
					iVar18 = 24;
					iVar19 = 0;
					iVar20 = 0;
					iVar21 = 132;
					unk_0x651E809B08AC55E2(uParam0->f_5, 0);
					break;
				
				case 3:
					iVar0 = 0;
					iVar1 = 1;
					iVar2 = -1;
					iVar3 = 0;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = 0;
					iVar7 = -1;
					iVar8 = -1;
					iVar9 = 0;
					iVar10 = 1;
					iVar11 = 0;
					iVar12 = -1;
					iVar13 = 2;
					iVar14 = 2;
					iVar15 = 2;
					iVar16 = -1;
					iVar17 = 10;
					iVar18 = 147;
					iVar19 = 16;
					iVar20 = 20;
					iVar21 = 119;
					break;
				
				case 4:
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 1;
					iVar3 = 0;
					iVar4 = 0;
					iVar5 = -1;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = 0;
					iVar9 = 3;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 2;
					iVar14 = 1;
					iVar15 = 1;
					iVar16 = -1;
					iVar17 = 8;
					iVar18 = 60;
					iVar19 = 113;
					iVar20 = 19;
					iVar21 = 113;
					break;
				
				case 5:
					iVar0 = 10;
					iVar1 = 2;
					iVar2 = 1;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = 0;
					iVar7 = -1;
					iVar8 = -1;
					iVar9 = 0;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = 0;
					iVar13 = 2;
					iVar14 = 1;
					iVar15 = 1;
					iVar16 = 2;
					iVar17 = 11;
					iVar18 = 138;
					iVar19 = 0;
					iVar20 = 1;
					iVar21 = 138;
					break;
				
				case 6:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 3;
					iVar3 = 1;
					iVar4 = 0;
					iVar5 = 1;
					iVar6 = 3;
					iVar7 = 0;
					iVar8 = 2;
					iVar9 = 1;
					iVar10 = 1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 2;
					iVar14 = 0;
					iVar15 = 2;
					iVar16 = 1;
					iVar17 = 23;
					iVar18 = 64;
					iVar19 = 13;
					iVar20 = 13;
					iVar21 = 67;
					break;
				
				case 7:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = -1;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = 2;
					iVar9 = 2;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 2;
					iVar14 = 1;
					iVar15 = 2;
					iVar16 = 1;
					iVar17 = 11;
					iVar18 = 39;
					iVar19 = 107;
					iVar20 = 0;
					iVar21 = 156;
					break;
			}
			break;
		
		case 1:
			switch (uParam0->f_17.f_11)
			{
				case 0:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 0;
					iVar5 = 0;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = -1;
					iVar9 = 0;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = 2;
					iVar13 = 1;
					iVar14 = 0;
					iVar15 = 0;
					iVar16 = -1;
					iVar17 = 14;
					iVar18 = 11;
					iVar19 = 36;
					iVar20 = 0;
					iVar21 = 36;
					break;
				
				case 2:
					iVar0 = 0;
					iVar1 = 4;
					iVar2 = 0;
					iVar3 = 3;
					iVar4 = 0;
					iVar5 = -1;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = 1;
					iVar9 = 1;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 2;
					iVar14 = 2;
					iVar15 = 0;
					iVar16 = 3;
					iVar17 = 12;
					iVar18 = 24;
					iVar19 = 64;
					iVar20 = 0;
					iVar21 = 24;
					break;
				
				case 3:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 0;
					iVar5 = 0;
					iVar6 = 0;
					iVar7 = -1;
					iVar8 = -1;
					iVar9 = -1;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 3;
					iVar14 = 2;
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 23;
					iVar18 = 120;
					iVar19 = 120;
					iVar20 = 120;
					iVar21 = 120;
					break;
				
				case 4:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 3;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = 3;
					iVar7 = -1;
					iVar8 = -1;
					iVar9 = 1;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 2;
					iVar14 = 1;
					iVar15 = 2;
					iVar16 = 2;
					iVar17 = 3;
					iVar18 = 40;
					iVar19 = 42;
					iVar20 = 7;
					iVar21 = 156;
					break;
				
				case 5:
					iVar0 = 7;
					iVar1 = 0;
					iVar2 = -1;
					iVar3 = 0;
					iVar4 = 1;
					iVar5 = -1;
					iVar6 = 1;
					iVar7 = 0;
					iVar8 = -1;
					iVar9 = 0;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 1;
					iVar14 = 2;
					iVar15 = 0;
					iVar16 = -1;
					iVar17 = 22;
					iVar18 = 62;
					iVar19 = 91;
					iVar20 = 6;
					iVar21 = 156;
					unk_0x651E809B08AC55E2(uParam0->f_5, 1);
					break;
				
				case 6:
					iVar0 = 0;
					iVar1 = 1;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = 1;
					iVar7 = 1;
					iVar8 = -1;
					iVar9 = 2;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = 0;
					iVar13 = 2;
					iVar14 = 1;
					iVar15 = 0;
					iVar16 = 1;
					iVar17 = 11;
					iVar18 = 50;
					iVar19 = 120;
					iVar20 = 134;
					iVar21 = 156;
					break;
				
				case 7:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 1;
					iVar3 = 1;
					iVar4 = -1;
					iVar5 = 0;
					iVar6 = 0;
					iVar7 = -1;
					iVar8 = 0;
					iVar9 = 1;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 3;
					iVar14 = 2;
					iVar15 = 0;
					iVar16 = 3;
					iVar17 = 8;
					iVar18 = 36;
					iVar19 = 25;
					iVar20 = 6;
					iVar21 = 156;
					break;
			}
			break;
		
		case 2:
			switch (uParam0->f_17.f_11)
			{
				case 0:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 0;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = 1;
					iVar7 = -1;
					iVar8 = -1;
					iVar9 = 0;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 3;
					iVar14 = 2;
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 7;
					iVar18 = 64;
					iVar19 = 2;
					iVar20 = 6;
					iVar21 = 2;
					break;
				
				case 2:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 2;
					iVar3 = 1;
					iVar4 = 2;
					iVar5 = 0;
					iVar6 = 2;
					iVar7 = 0;
					iVar8 = 1;
					iVar9 = -1;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = 0;
					iVar13 = 2;
					iVar14 = 2;
					iVar15 = 1;
					iVar16 = 3;
					iVar17 = 5;
					iVar18 = 52;
					iVar19 = 5;
					iVar20 = 26;
					iVar21 = 106;
					break;
				
				case 3:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 0;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = -1;
					iVar7 = 0;
					iVar8 = -1;
					iVar9 = 0;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 2;
					iVar14 = 0;
					iVar15 = 0;
					iVar16 = 1;
					iVar17 = 15;
					iVar18 = 72;
					iVar19 = 38;
					iVar20 = 46;
					iVar21 = 156;
					break;
				
				case 4:
					iVar0 = 0;
					iVar1 = 1;
					iVar2 = 1;
					iVar3 = 1;
					iVar4 = 0;
					iVar5 = 0;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = -1;
					iVar9 = 0;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = 0;
					iVar13 = 0;
					iVar14 = 0;
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 10;
					iVar18 = 62;
					iVar19 = 126;
					iVar20 = 15;
					iVar21 = 126;
					break;
				
				case 5:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = 1;
					iVar7 = -1;
					iVar8 = -1;
					iVar9 = 2;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = 0;
					iVar13 = 1;
					iVar14 = 1;
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 11;
					iVar18 = 29;
					iVar19 = 9;
					iVar20 = 6;
					iVar21 = 9;
					break;
				
				case 6:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 0;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = 0;
					iVar7 = -1;
					iVar8 = -1;
					iVar9 = 3;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 1;
					iVar14 = 0;
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 15;
					iVar18 = 143;
					iVar19 = 8;
					iVar20 = 1;
					iVar21 = 143;
					break;
				
				case 7:
					iVar0 = 0;
					iVar1 = -1;
					iVar2 = 0;
					iVar3 = 2;
					iVar4 = 0;
					iVar5 = -1;
					iVar6 = 1;
					iVar7 = 0;
					iVar8 = -1;
					iVar9 = 0;
					iVar10 = -1;
					iVar11 = -1;
					iVar12 = -1;
					iVar13 = 1;
					iVar14 = 0;
					iVar15 = 0;
					iVar16 = 3;
					iVar17 = 4;
					iVar18 = 15;
					iVar19 = 120;
					iVar20 = 120;
					iVar21 = 120;
					break;
			}
			break;
		
		case 3:
			switch (uParam0->f_17.f_11)
			{
				case 0:
					iVar0 = -1;
					iVar2 = -1;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = -1;
					iVar7 = -1;
					iVar8 = -1;
					iVar12 = -1;
					iVar9 = -1;
					iVar13 = -1;
					iVar14 = -1;
					iVar15 = -1;
					iVar16 = -1;
					iVar18 = 140;
					iVar19 = 122;
					iVar20 = 58;
					iVar21 = 17;
					break;
				
				case 2:
					iVar0 = -1;
					iVar2 = -1;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = -1;
					iVar7 = -1;
					iVar8 = -1;
					iVar12 = -1;
					iVar9 = -1;
					iVar13 = -1;
					iVar14 = -1;
					iVar15 = -1;
					iVar16 = -1;
					iVar18 = 149;
					iVar19 = 122;
					iVar20 = 114;
					iVar21 = 92;
					break;
				
				case 3:
					iVar0 = -1;
					iVar2 = 1;
					iVar3 = 0;
					iVar4 = 0;
					iVar5 = 0;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = 0;
					iVar12 = 2;
					iVar9 = 0;
					iVar13 = -1;
					iVar14 = -1;
					iVar15 = -1;
					iVar16 = -1;
					iVar18 = 27;
					iVar19 = 134;
					iVar20 = 28;
					iVar21 = 126;
					break;
				
				case 4:
					iVar0 = -1;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 0;
					iVar5 = 0;
					iVar6 = 0;
					iVar7 = -1;
					iVar8 = -1;
					iVar12 = 0;
					iVar9 = -1;
					iVar13 = -1;
					iVar14 = -1;
					iVar15 = -1;
					iVar16 = -1;
					break;
				
				case 5:
					iVar0 = -1;
					iVar2 = -1;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = -1;
					iVar7 = -1;
					iVar8 = -1;
					iVar12 = -1;
					iVar9 = -1;
					iVar13 = -1;
					iVar14 = -1;
					iVar15 = -1;
					iVar16 = -1;
					iVar18 = 88;
					iVar19 = 40;
					iVar20 = 14;
					iVar21 = 123;
					break;
				
				case 6:
					iVar0 = -1;
					iVar2 = -1;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = -1;
					iVar7 = -1;
					iVar8 = -1;
					iVar12 = -1;
					iVar9 = -1;
					iVar13 = -1;
					iVar14 = -1;
					iVar15 = -1;
					iVar16 = -1;
					iVar18 = 55;
					iVar19 = 40;
					iVar20 = 14;
					iVar21 = 0;
					break;
				
				case 7:
					iVar0 = -1;
					iVar2 = -1;
					iVar3 = -1;
					iVar4 = -1;
					iVar5 = -1;
					iVar6 = -1;
					iVar7 = -1;
					iVar8 = -1;
					iVar12 = -1;
					iVar9 = -1;
					iVar18 = 38;
					iVar19 = 121;
					iVar20 = 123;
					iVar21 = 132;
					break;
			}
			break;
		
		case 4:
			switch (uParam0->f_17.f_11)
			{
				case 0:
					iVar18 = 140;
					iVar19 = 124;
					iVar20 = 134;
					iVar21 = 89;
					break;
				
				case 1:
					iVar18 = 135;
					iVar19 = 134;
					iVar20 = 134;
					iVar21 = 121;
					break;
				
				case 2:
					break;
				
				case 3:
					iVar18 = 0;
					iVar19 = 134;
					iVar20 = 134;
					iVar21 = 0;
					break;
				
				case 4:
					iVar18 = 57;
					iVar19 = 134;
					iVar20 = 134;
					iVar21 = 67;
					break;
				
				case 5:
					break;
				
				case 6:
					iVar18 = 141;
					iVar19 = 134;
					iVar20 = 134;
					iVar21 = 127;
					break;
				
				case 7:
					iVar18 = 39;
					iVar19 = 95;
					iVar20 = 124;
					iVar21 = 88;
					break;
			}
			break;
	}
	if (uParam0->f_17.f_11 == 1)
	{
		iVar16 = 3;
	}
	iVar13 = (unk_0x3DE306309922F8D1(uParam0->f_5, 11) - 1);
	iVar14 = (unk_0x3DE306309922F8D1(uParam0->f_5, 12) - 1);
	iVar15 = (unk_0x3DE306309922F8D1(uParam0->f_5, 13) - 1);
	if (func_8(uParam0->f_5))
	{
		if (unk_0xCD2E94F6C3101AFC(uParam0->f_5) > 0)
		{
			unk_0x520614EF43727019(uParam0->f_5, 0);
			if (iVar0 != -1)
			{
				if (iVar0 < unk_0x19E990CDD7AE5C79(uParam0->f_5))
				{
					unk_0xD6D2420F0051065A(uParam0->f_5, iVar0);
				}
			}
			if (iVar18 != -1 || iVar19 != -1)
			{
				unk_0x65EA11CF317FE4FA(uParam0->f_5, iVar18, iVar19);
			}
			if (iVar20 != -1 || iVar21 != -1)
			{
				unk_0x4A7AB87632044178(uParam0->f_5, iVar20, iVar21);
			}
			if (iVar1 != -1)
			{
				unk_0xBF98CE54BD141AFF(uParam0->f_5, iVar1);
			}
			if (iVar2 != -1)
			{
				if (unk_0x3DE306309922F8D1(uParam0->f_5, 0) > iVar2)
				{
					unk_0xB4B3AEABE432069B(uParam0->f_5, 0, iVar2, false);
				}
			}
			if (iVar3 != -1)
			{
				if (unk_0x3DE306309922F8D1(uParam0->f_5, 1) > iVar3)
				{
					unk_0xB4B3AEABE432069B(uParam0->f_5, 1, iVar3, false);
				}
			}
			if (iVar4 != -1)
			{
				if (unk_0x3DE306309922F8D1(uParam0->f_5, 2) > iVar4)
				{
					unk_0xB4B3AEABE432069B(uParam0->f_5, 2, iVar4, false);
				}
			}
			if (iVar5 != -1)
			{
				if (unk_0x3DE306309922F8D1(uParam0->f_5, 3) > iVar5)
				{
					unk_0xB4B3AEABE432069B(uParam0->f_5, 3, iVar5, false);
				}
			}
			if (iVar6 != -1)
			{
				if (unk_0x3DE306309922F8D1(uParam0->f_5, 4) > iVar6)
				{
					unk_0xB4B3AEABE432069B(uParam0->f_5, 4, iVar6, false);
				}
			}
			if (iVar7 != -1)
			{
				if (unk_0x3DE306309922F8D1(uParam0->f_5, 5) > iVar7)
				{
					unk_0xB4B3AEABE432069B(uParam0->f_5, 5, iVar7, false);
				}
			}
			if (iVar8 != -1)
			{
				if (unk_0x3DE306309922F8D1(uParam0->f_5, 6) > iVar8)
				{
					unk_0xB4B3AEABE432069B(uParam0->f_5, 6, iVar8, false);
				}
			}
			if (iVar9 != -1)
			{
				if (unk_0x3DE306309922F8D1(uParam0->f_5, 7) > iVar9)
				{
					unk_0xB4B3AEABE432069B(uParam0->f_5, 7, iVar9, false);
				}
			}
			if (iVar10 != -1)
			{
				if (unk_0x3DE306309922F8D1(uParam0->f_5, 8) > iVar10)
				{
					unk_0xB4B3AEABE432069B(uParam0->f_5, 8, iVar10, false);
				}
			}
			if (iVar11 != -1)
			{
				if (unk_0x3DE306309922F8D1(uParam0->f_5, 9) > iVar11)
				{
					unk_0xB4B3AEABE432069B(uParam0->f_5, 9, iVar11, false);
				}
			}
			if (iVar12 != -1)
			{
				if (unk_0x3DE306309922F8D1(uParam0->f_5, 10) > iVar12)
				{
					unk_0xB4B3AEABE432069B(uParam0->f_5, 10, iVar12, false);
				}
			}
			if (iVar13 != -1)
			{
				if (unk_0x3DE306309922F8D1(uParam0->f_5, 11) > iVar13)
				{
					unk_0xB4B3AEABE432069B(uParam0->f_5, 11, iVar13, false);
				}
			}
			if (iVar14 != -1)
			{
				if (unk_0x3DE306309922F8D1(uParam0->f_5, 12) > iVar14)
				{
					unk_0xB4B3AEABE432069B(uParam0->f_5, 12, iVar14, false);
				}
			}
			if (iVar15 != -1)
			{
				if (unk_0x3DE306309922F8D1(uParam0->f_5, 13) > iVar15)
				{
					unk_0xB4B3AEABE432069B(uParam0->f_5, 13, iVar15, false);
				}
			}
			if (iVar16 != -1)
			{
				if (unk_0x3DE306309922F8D1(uParam0->f_5, 15) > iVar16)
				{
					unk_0xB4B3AEABE432069B(uParam0->f_5, 15, iVar16, false);
				}
			}
			if (iVar17 != -1)
			{
				if (unk_0x3DE306309922F8D1(uParam0->f_5, 23) > iVar17)
				{
					unk_0xB4B3AEABE432069B(uParam0->f_5, 23, iVar17, false);
				}
			}
			unk_0xBCD21D2535E4A2C9(uParam0->f_5, 18, true);
			unk_0xBCD21D2535E4A2C9(uParam0->f_5, 17, true);
			unk_0xBCD21D2535E4A2C9(uParam0->f_5, 22, true);
		}
		if (unk_0x8D9FD90A001D447C(uParam0->f_5, 0))
		{
			unk_0x651E809B08AC55E2(uParam0->f_5, 1);
		}
	}
}

void func_12(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_71590)
		{
			Global_2437364.f_75.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_106565.f_7255.f_227[iParam0] = iParam1;
		}
		Global_33392[iParam0] = iParam2;
		Global_33591[iParam0] = 1;
		func_15(iParam0, bParam3, iParam4, 0);
		func_13(iParam0, iParam1);
	}
}

void func_13(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0x5F70D43CDB987564("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0x5F70D43CDB987564("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0x71CD86755B8F5322("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0x71CD86755B8F5322("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_14(0, 0);
			}
			else
			{
				func_14(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0x5F70D43CDB987564("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0x5F70D43CDB987564("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0x5DED13D62A972414("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0x37C9B4B0237ED18F("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0x37C9B4B0237ED18F("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0x37C9B4B0237ED18F("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0x37C9B4B0237ED18F("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_14(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x8950ED5730F62EE8(&Global_105203, iParam0);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_105203, iParam0);
	}
	Global_105202 = 1;
}

bool func_15(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	Global_1647687 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_19(&Var3, iParam0);
	if (func_16())
	{
		iVar1 = Global_106565.f_7255.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2437364.f_75.f_227[iParam0];
	}
	iVar2 = Global_33790[iParam0];
	if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !bParam3)
	{
		Global_1647687 = 1;
	}
	else
	{
		bVar5 = true;
		if (unk_0x36163153849DFDA1(unk_0xD178EF744F20B712()) != unk_0x36163153849DFDA1("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_33392[iParam0] && unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), Var3, true) < 200f)
				{
					bVar5 = false;
					Global_1647687 = 1;
				}
				if (!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) || unk_0xA7772238DA986E33(unk_0x33CD235DF1E6A94E()))
				{
					if (!unk_0xBB5E373390A5F824())
					{
						bVar5 = false;
						Global_1647687 = 1;
					}
				}
			}
		}
		if (unk_0xE980BAFD70E8A4B3() && (!unk_0x71EC91BA8C88BCE0() || unk_0x469BF85808505E83() != 5))
		{
			bVar5 = false;
			Global_1647687 = 1;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0x1BFBC1E2615E22FC(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0x17D569F7C0516CDF(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_34986[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0x36163153849DFDA1(&(Var3.f_8[1 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[1 /*8*/])) != unk_0x36163153849DFDA1(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x00771EA747B50636(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xCA569B59B8B12D63(&(Var3.f_8[1 /*8*/]));
								Global_1647687 = 1;
							}
						}
						if ((unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("REMOVE_ALL_STATES")) && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x00771EA747B50636(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xCA569B59B8B12D63(&(Var3.f_8[2 /*8*/]));
								Global_1647687 = 1;
							}
						}
						if (unk_0x36163153849DFDA1(&(Var3.f_8[0 /*8*/])) != unk_0x36163153849DFDA1(""))
						{
							if (!unk_0x00771EA747B50636(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x7E3B06742E797067(&(Var3.f_8[0 /*8*/]));
								Global_1647687 = 1;
							}
						}
						if (unk_0x36163153849DFDA1(&(Var3.f_34)) != unk_0x36163153849DFDA1(""))
						{
							if (!unk_0x00771EA747B50636(&(Var3.f_34)))
							{
								unk_0x7E3B06742E797067(&(Var3.f_34));
								Global_1647687 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0x36163153849DFDA1(&(Var3.f_34)) != unk_0x36163153849DFDA1(""))
						{
							if (unk_0x00771EA747B50636(&(Var3.f_34)))
							{
								unk_0xCA569B59B8B12D63(&(Var3.f_34));
							}
						}
						if (unk_0x36163153849DFDA1(&(Var3.f_8[0 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[0 /*8*/])) != unk_0x36163153849DFDA1(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x00771EA747B50636(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xCA569B59B8B12D63(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("REMOVE_ALL_STATES")) && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x00771EA747B50636(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xCA569B59B8B12D63(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x36163153849DFDA1(&(Var3.f_8[1 /*8*/])) != unk_0x36163153849DFDA1(""))
						{
							if (!unk_0x00771EA747B50636(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x7E3B06742E797067(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0x36163153849DFDA1(&(Var3.f_34)) != unk_0x36163153849DFDA1(""))
						{
							if (unk_0x00771EA747B50636(&(Var3.f_34)))
							{
								unk_0xCA569B59B8B12D63(&(Var3.f_34));
							}
						}
						if (unk_0x36163153849DFDA1(&(Var3.f_8[0 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[0 /*8*/])) != unk_0x36163153849DFDA1(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x00771EA747B50636(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xCA569B59B8B12D63(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x36163153849DFDA1(&(Var3.f_8[1 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[1 /*8*/])) != unk_0x36163153849DFDA1(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x00771EA747B50636(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xCA569B59B8B12D63(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("REMOVE_ALL_STATES"))
						{
							if (!unk_0x00771EA747B50636(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x7E3B06742E797067(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_34787[iParam0] = 1;
					Global_34986[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar6 = unk_0x30B9FCF52BAAEB11(Var3, &(Var3.f_42));
					if (iVar6 != 0)
					{
						if (unk_0x36163153849DFDA1(&(Var3.f_50)) != unk_0x36163153849DFDA1(""))
						{
							if (unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_50)))
							{
								unk_0x74D5C2C6E4D82BF7(iVar6, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0x36163153849DFDA1(&(Var3.f_8[1 /*8*/])) != unk_0x36163153849DFDA1(""))
							{
								if (unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x74D5C2C6E4D82BF7(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("REMOVE_ALL_STATES")) && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x74D5C2C6E4D82BF7(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x36163153849DFDA1(&(Var3.f_8[0 /*8*/])) != unk_0x36163153849DFDA1(""))
							{
								if (!unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xAFF9058FF075CFD5(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0x36163153849DFDA1(&(Var3.f_8[0 /*8*/])) != unk_0x36163153849DFDA1(""))
							{
								if (unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x74D5C2C6E4D82BF7(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("REMOVE_ALL_STATES")) && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x74D5C2C6E4D82BF7(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x36163153849DFDA1(&(Var3.f_8[1 /*8*/])) != unk_0x36163153849DFDA1(""))
							{
								if (!unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xAFF9058FF075CFD5(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0x36163153849DFDA1(&(Var3.f_8[0 /*8*/])) != unk_0x36163153849DFDA1(""))
							{
								if (unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x74D5C2C6E4D82BF7(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0x36163153849DFDA1(&(Var3.f_8[1 /*8*/])) != unk_0x36163153849DFDA1(""))
							{
								if (unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x74D5C2C6E4D82BF7(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("") && unk_0x36163153849DFDA1(&(Var3.f_8[2 /*8*/])) != unk_0x36163153849DFDA1("REMOVE_ALL_STATES"))
							{
								if (!unk_0x802F1160A12FDAC3(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xAFF9058FF075CFD5(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0x7749193AF003DC67(iVar6);
						}
					}
					Global_34986[iParam0] = 1;
					Global_34787[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0x16E00F066AFFEA0D(Var3, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), true) < 250f)
					{
						uVar4 = unk_0x4ACCC545ABA180AC(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0xC0832B9258378F00(uVar4))
						{
							if (iVar1 == 0)
							{
								unk_0xED0F188B4F015CBB(uVar4, 3);
								Global_34986[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0x59AECBDFE1CC0576(uVar4) != 6 && unk_0x59AECBDFE1CC0576(uVar4) != 7) && unk_0x59AECBDFE1CC0576(uVar4) != 8)
								{
									unk_0xED0F188B4F015CBB(uVar4, 10);
									Global_34986[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0x85F91F38AF4DED49(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0xCE689A8E8C42ED78(&(Global_33138[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x6A71A9A295C36777(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0x8950ED5730F62EE8(&(Global_33138[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_33591[iParam0] = 0;
				Global_33790[iParam0] = iVar1;
				if (!func_16())
				{
					if (!Global_34387[iParam0])
					{
						Global_34387[iParam0] = 1;
						Global_34586++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_16()
{
	if ((func_18() == -1 || func_18() == 999) && !func_17() == 0)
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	return Global_25766;
}

int func_18()
{
	return Global_25765;
}

int func_19(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -186270611;
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

bool func_20(var uParam0)
{
	return (unk_0x11AE7F6A404414C9(*uParam0) && unk_0x3C05A6D663EA1B6A("HUD_321_GO", false, -1));
}

void func_21(var uParam0)
{
	*uParam0 = unk_0x199B24FF79A52CCF("COUNTDOWN");
	unk_0x3C05A6D663EA1B6A("HUD_321_GO", false, -1);
}

void func_22()
{
	if (!func_8(iLocal_365))
	{
		if (unk_0x765F6FEEFF39224F(unk_0x8918EC905FC8975D()))
		{
			iLocal_365 = unk_0x8918EC905FC8975D();
			unk_0x0D21E1FDE062ED99(iLocal_365, true, 0);
		}
		else
		{
			unk_0xB815670C37E03CDE(joaat("gauntlet"));
			while (!unk_0x5D98D654CDC2165A(joaat("gauntlet")))
			{
				wait(0);
			}
			iLocal_365 = unk_0xC651C43AB13A15E5(joaat("gauntlet"), Local_47.f_26[8 /*3*/] + vLocal_114, Local_47.f_54[8], 1, 1, 0);
			unk_0x71CA80D41E1338B4(joaat("gauntlet"));
			unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iLocal_365, -1);
		}
	}
	else
	{
		func_23(iLocal_365, Local_47.f_26[8 /*3*/] + vLocal_114, Local_47.f_54[8], 0, 1);
		unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iLocal_365, -1);
	}
	func_23(iLocal_365, Local_47.f_26[8 /*3*/] + vLocal_114, Local_47.f_54[8], 0, 1);
	iLocal_212 = 0;
}

int func_23(int iParam0, vector3 vParam1, float fParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_8(iParam0))
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

void func_24()
{
	vector3 vVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
			unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), vVar0.x, vVar0.y, (vVar0.z + 1f), 1, 0, 0, 1);
		}
	}
}

int func_25(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0xBB5E373390A5F824() || unk_0x75A50A9E5219C397())
			{
				unk_0x7EDEAEAED85BEE4F(2500);
				unk_0x818D1850BE9E44A9();
			}
			if (bParam9)
			{
				unk_0x05CFB4D665C2A88D(true);
			}
			unk_0xCBDC8BC7A589C76E(0.2f);
			if (func_51(iParam5, 4))
			{
				if (unk_0x3C05A6D663EA1B6A("generic_failed", false, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			unk_0xBB698266C5FDF0A7(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x713FEBE56D2BD403("STRING");
			unk_0x75D3F9044123D4F9(6);
			unk_0xFA6BEE2B1507FF1E(iParam2);
			unk_0x36F3AA9FFAAF8606();
			func_50(sParam3);
			unk_0x4D9DA18AB3C2A466(100);
			unk_0x295B86DE57A0721D(true);
			unk_0x614EE52A69097A4C();
			if (func_51(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xBB698266C5FDF0A7(*uParam0, "TRANSITION_UP");
					unk_0x8DAB5B12D7B9AD29(uParam1->f_134);
					unk_0x818901B332D5541D();
					uParam1->f_136 = 1;
				}
			}
			if (!func_51(iParam5, 1))
			{
				unk_0x6241DAE4CB0BE8A6(0);
			}
			func_49(&(uParam1->f_10), 0, 1, 1, 1);
			func_48(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_48(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_51(iParam5, 4))
			{
				unk_0x0F8EAEEC97DDBCB3(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_51(iParam5, 8))
			{
				switch (func_42())
				{
					case 0:
						unk_0x0B1F8038F56C12B7("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0x0B1F8038F56C12B7("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0x0B1F8038F56C12B7("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_41(&(uParam1->f_1)))
			{
				func_40(&(uParam1->f_1));
			}
			if (func_51(iParam5, 2))
			{
				if (!func_41(&(uParam1->f_4)))
				{
					func_40(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0x58355301CBA19400();
			if (func_51(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xBB698266C5FDF0A7(*uParam0, "TRANSITION_UP");
					unk_0x8DAB5B12D7B9AD29(uParam1->f_134);
					unk_0x818901B332D5541D();
					uParam1->f_136 = 1;
				}
			}
			unk_0x5C58D0ADA22491FA(iParam6);
			func_38(uParam0, 0, 0);
			if (!func_51(iParam5, 16) && (func_36(&(uParam1->f_1)) >= uParam1->f_135 || unk_0xBB5E373390A5F824()))
			{
				func_30(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0x0817B4F2C156A62D();
				if (unk_0x1771F6BAF60B44FA(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0x0F8EAEEC97DDBCB3(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_51(iParam5, 1))
					{
						unk_0xDBF747FF76D31C20(0);
					}
					func_29(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x1771F6BAF60B44FA(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0x0F8EAEEC97DDBCB3(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_51(iParam5, 1))
					{
						unk_0xDBF747FF76D31C20(0);
					}
					func_29(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_51(iParam5, 2))
			{
				if (func_36(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0x0F8EAEEC97DDBCB3(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_51(iParam5, 1))
					{
						unk_0xDBF747FF76D31C20(0);
					}
					func_29(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_38(uParam0, 0, 0);
			unk_0xCBDC8BC7A589C76E(1f);
			if (uParam1->f_138 || !((unk_0xCE3CFF625BEBAA04("stunt_plane_races", unk_0xD178EF744F20B712()) || unk_0xCE3CFF625BEBAA04("pilot_school", unk_0xD178EF744F20B712())) || (unk_0xCE3CFF625BEBAA04("bj", unk_0xD178EF744F20B712()) && unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))))
			{
				unk_0xACCDA78123DB57B0(2500);
			}
			if (func_51(iParam5, 64) && uParam1->f_138)
			{
				unk_0x7EDEAEAED85BEE4F(500);
			}
			func_26(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x05CFB4D665C2A88D(false);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_36(&(uParam1->f_4)) <= 0.1f)
			{
				func_38(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_26(int iParam0)
{
	func_27(iParam0, 0f);
}

void func_27(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_28(unk_0x0E4018692D92041D(*iParam0, 4)) - fParam1);
	unk_0x8950ED5730F62EE8(iParam0, 1);
	unk_0xCE689A8E8C42ED78(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_28(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(unk_0xE3903F59E2F22150());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		iVar2 = unk_0x78DCC5D0CB43DEBA();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0xE3903F59E2F22150()) / 1000f);
}

void func_29(int iParam0)
{
	if (*iParam0 != 0)
	{
		unk_0x83A1D480DB0B52CC(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
}

void func_30(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((unk_0x75A50A9E5219C397() || unk_0xD33DAC8D0D70A78C()) || unk_0xBB5E373390A5F824()) || unk_0x90346DACE0A79A81())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_35(uParam0))
	{
		return;
	}
	unk_0x58355301CBA19400();
	unk_0x5C58D0ADA22491FA(iParam2);
	if (!func_51(uParam0->f_1, 256) || (func_51(uParam0->f_1, 8192) && unk_0xEABBA3F8727C0FE7(2)))
	{
		unk_0xBB698266C5FDF0A7(*uParam0, "SET_CLEAR_SPACE");
		unk_0x8DAB5B12D7B9AD29(fParam1);
		unk_0x818901B332D5541D();
		unk_0xBB698266C5FDF0A7(*uParam0, "SET_MAX_WIDTH");
		unk_0x8DAB5B12D7B9AD29(fParam5);
		unk_0x818901B332D5541D();
		unk_0xBB698266C5FDF0A7(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x818901B332D5541D();
		if (unk_0x4CE1DD5CFC1F941E())
		{
			unk_0xBB698266C5FDF0A7(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x295B86DE57A0721D(func_51(uParam0->f_1, 4096));
			unk_0x818901B332D5541D();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0x5D79F3D06EB318A0(2);
					break;
				
				case 2:
					bVar4 = !unk_0x5D79F3D06EB318A0(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0xBB698266C5FDF0A7(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x4D9DA18AB3C2A466(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0x0E4018692D92041D(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0x0E4018692D92041D(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							sVar3 = unk_0x4464D5595CEED843(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0xF745CA12DC8836EB(iVar0, iVar1, bVar2);
						}
						if (!unk_0x786AF4A44E1B5B4B(sVar3))
						{
							func_34(sVar3);
						}
						iVar7++;
					}
					if (!unk_0x786AF4A44E1B5B4B(uParam0->f_2[iVar6 /*15*/]))
					{
						func_50(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x4CE1DD5CFC1F941E())
					{
						if (func_51(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x295B86DE57A0721D(true);
								unk_0x4D9DA18AB3C2A466(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x295B86DE57A0721D(false);
								unk_0x4D9DA18AB3C2A466(-1);
							}
						}
					}
					unk_0x818901B332D5541D();
				}
			}
			iVar6++;
		}
		fVar8 = func_33(bParam4, func_33(func_51(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0xBB698266C5FDF0A7(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x8DAB5B12D7B9AD29(fVar8);
		unk_0x818901B332D5541D();
		unk_0xBB698266C5FDF0A7(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x8DAB5B12D7B9AD29(0f);
		unk_0x8DAB5B12D7B9AD29(0f);
		unk_0x8DAB5B12D7B9AD29(0f);
		unk_0x8DAB5B12D7B9AD29(80f);
		unk_0x818901B332D5541D();
		func_32(&(uParam0->f_1), 256);
		func_31(&(uParam0->f_1), 128);
	}
	unk_0xFF524AE40FB6301A(*uParam0, 255, 255, 255, 0, 0);
}

void func_31(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_32(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_33(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_34(char* sParam0)
{
	unk_0x3EFC6497702202D6(sParam0);
}

int func_35(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x11AE7F6A404414C9(*uParam0))
		{
			func_32(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_36(var uParam0)
{
	if (func_41(uParam0))
	{
		if (func_37(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_28(unk_0x0E4018692D92041D(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_37(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 2);
}

int func_38(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_41(&(uParam0->f_2)))
	{
		func_26(&(uParam0->f_2));
	}
	unk_0x581AE7724ACAD410(14);
	if (!bParam2)
	{
		unk_0xFF524AE40FB6301A(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0xFF524AE40FB6301A(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0xF1CDE9FD207C4CD8(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_36(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		func_39(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_39(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_40(int iParam0)
{
	if (!func_41(iParam0))
	{
		func_26(iParam0);
	}
}

bool func_41(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 1);
}

int func_42()
{
	func_43();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_43()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_47(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_46(unk_0x33CD235DF1E6A94E());
			if (func_45(iVar0) && (!func_44(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_45(Global_106565.f_2357.f_539.f_4321))
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

bool func_44(int iParam0)
{
	return Global_36425 == iParam0;
}

bool func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_48(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0x8950ED5730F62EE8(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_49(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x9E4935AAC82732AB("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_32(&(uParam0->f_1), 32);
	}
	if (unk_0x11AE7F6A404414C9(*uParam0))
	{
		func_32(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x294D14EE061A66FD(*uParam0, 1);
		}
	}
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (bParam3)
		{
			func_32(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_32(&(uParam0->f_1), 8192);
	}
}

void func_50(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

bool func_51(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_52(int iParam0)
{
	if (func_57())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_56(0))
		{
			func_53(iParam0);
		}
		unk_0x8950ED5730F62EE8(&Global_2424, 2);
	}
}

void func_53(int iParam0)
{
	if (func_57())
	{
		return;
	}
	if (Global_14725)
	{
		func_55(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		unk_0x8950ED5730F62EE8(&Global_2424, 16);
	}
	if (unk_0xA30F14B621E3269D())
	{
		unk_0xD92171BC6C48DB90(false);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2423, 30);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 30);
	}
	if (!func_54())
	{
		Global_14553.f_1 = 3;
	}
}

int func_54()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_55(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_56(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				unk_0x4951EE4BB7B6B4F7(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			unk_0x727F454F1D40BAE4(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			unk_0x727F454F1D40BAE4(Global_14490);
		}
		else
		{
			unk_0x727F454F1D40BAE4(Global_14481);
		}
	}
}

int func_56(int iParam0)
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

bool func_57()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

void func_58()
{
	int iVar0;
	
	switch (iLocal_107)
	{
		case 0:
			func_147(2, sLocal_71, 1, 1, 0, 1);
			unk_0xDEFB5E2E5CBD460A("STREET_RACE_OUTRO");
			iLocal_107++;
			break;
		
		case 1:
			iLocal_361 = unk_0xB1A92B63D6757EEF(26379945, 1954.776f, 3149.146f, 47.0701f, 4.9054f, -0.0416f, -158.4057f, 52.4461f, 0, 2);
			iLocal_362 = unk_0xB1A92B63D6757EEF(26379945, 1954.776f, 3150.146f, 47.0701f, 4.9054f, -0.0416f, -158.4057f, 52.4461f, 0, 2);
			unk_0x189377BFBDC9127F(iLocal_361, true);
			unk_0x8EB023915CEEDB99(iLocal_362, iLocal_361, 2000, 0, 1);
			switch (func_42())
			{
				case 0:
					unk_0x0B1F8038F56C12B7("MinigameEndMichael", 0, 0);
					break;
				
				case 1:
					unk_0x0B1F8038F56C12B7("MinigameEndFranklin", 0, 0);
					break;
				
				case 2:
					unk_0x0B1F8038F56C12B7("MinigameEndTrevor", 0, 0);
					break;
			}
			unk_0x0F8EAEEC97DDBCB3(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			unk_0xD6EDA274D82E8678(0f, 1065353216);
			unk_0xC7E6A5D90DED6E0B(0f);
			func_135(1, 0, 0, 2000, 1, 0);
			unk_0x65389DD6E97B2939(0);
			unk_0x083F68B89E3EA476(iLocal_362, "HAND_SHAKE", 0.3f);
			unk_0xF606706197A2C3A5(iLocal_363, unk_0xF2C96862595654B4(iLocal_363, 0), Local_47.f_64, 786468, 0, 28, -1, 30f, 1, 1073741824);
			if (Local_209.f_7 == 1)
			{
				unk_0xB815670C37E03CDE(func_134());
			}
			iLocal_107++;
			break;
		
		case 2:
			if (unk_0x117DAF3BF7232886(iLocal_362))
			{
				if (!unk_0x6010B3CAC53496C3(iLocal_362))
				{
					unk_0x2F8A4DF7D0DFF0A8(iLocal_361, 0);
					iLocal_361 = unk_0xB1A92B63D6757EEF(26379945, 1954.776f, 3149.146f, 47.0701f, 89.5011f, -0.0416f, -158.4057f, 30f, 0, 2);
					unk_0x8EB023915CEEDB99(iLocal_361, iLocal_362, 600, 1, 1);
					unk_0x0CF60966E9FE84CB(iLocal_361, 1f);
					unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
					unk_0xA4DF1E31BCDF9978(unk_0xF2C96862595654B4(iLocal_363, 0), 10f, 1, 0);
					switch (func_42())
					{
						case 0:
							unk_0xA94473FEE1796AED("MinigameEndMichael");
							break;
						
						case 1:
							unk_0xA94473FEE1796AED("MinigameEndFranklin");
							break;
						
						case 2:
							unk_0xA94473FEE1796AED("MinigameEndTrevor");
							break;
					}
					unk_0x0B1F8038F56C12B7("MinigameTransitionIn", 0, 1);
					unk_0x0F8EAEEC97DDBCB3(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					unk_0x2F8A4DF7D0DFF0A8(iLocal_362, 0);
					iLocal_65 = 0;
					iLocal_107++;
				}
			}
			break;
		
		case 3:
			if (unk_0x117DAF3BF7232886(iLocal_361))
			{
				if (!unk_0x6010B3CAC53496C3(iLocal_361))
				{
					iVar0 = 0;
					while (iVar0 <= 7)
					{
						func_133(&(Local_119[iVar0 /*50*/].f_1));
						func_131(&(Local_119[iVar0 /*50*/]), 1);
						func_130(&(Local_119[iVar0 /*50*/].f_5), 1);
						iVar0++;
					}
					func_12(197, 0, 0, 1, 0);
					iVar0 = 0;
					while (iVar0 < Local_120)
					{
						func_131(&(Local_120[iVar0 /*50*/]), 1);
						iVar0++;
					}
				}
			}
			if (func_88(Local_209, &uLocal_371, &iLocal_948, &bLocal_1072))
			{
				if (!bLocal_1072)
				{
					if (Local_209.f_7 > 1)
					{
						iLocal_107 = 10;
					}
					else
					{
						iLocal_366 = unk_0xC651C43AB13A15E5(func_134(), func_87(), func_86(), 1, 1, 0);
						unk_0x71CA80D41E1338B4(func_134());
						if (Global_106565.f_25067 == 4)
						{
							unk_0x40DFA7AAEFC8F34C(iLocal_366, 0);
							unk_0x65EA11CF317FE4FA(iLocal_366, 44, 83);
							unk_0x4A7AB87632044178(iLocal_366, 111, 111);
						}
						iLocal_107++;
					}
				}
				else
				{
					func_2(1, 0);
				}
			}
			break;
		
		case 4:
			unk_0xE2AE4E6F010FA5C5(0);
			iLocal_361 = unk_0xB1A92B63D6757EEF(26379945, 1971.382f, 3108.135f, 47.2013f, 89.4758f, 0.0478f, 53.1639f, 53.3742f, 0, 2);
			unk_0x189377BFBDC9127F(iLocal_361, true);
			iLocal_362 = unk_0xB1A92B63D6757EEF(26379945, 1971.382f, 3108.135f, 47.2013f, 0.4758f, 0.0478f, 53.1639f, 53.3742f, 0, 2);
			unk_0x8EB023915CEEDB99(iLocal_362, iLocal_361, 600, 1, 1);
			unk_0xA94473FEE1796AED("MinigameTransitionIn");
			unk_0x0F8EAEEC97DDBCB3(-1, "Short_Transition_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			unk_0x0CF60966E9FE84CB(iLocal_361, 1f);
			unk_0x083F68B89E3EA476(iLocal_361, "HAND_SHAKE", 0.3f);
			unk_0x0CF60966E9FE84CB(iLocal_362, 1f);
			unk_0x083F68B89E3EA476(iLocal_362, "HAND_SHAKE", 0.3f);
			func_23(iLocal_365, 1967.471f, 3124.583f, 46.0038f, 186.2056f, 1, 1);
			unk_0x6ED1018181C54CFB(unk_0x33CD235DF1E6A94E(), iLocal_365, 1968.5f, 3113.2f, 45.9001f, 4, 2f, 786469, 1f, -1f, 1);
			unk_0xC6FB169E3887184D();
			unk_0x0B1F8038F56C12B7("MinigameTransitionOut", 0, 0);
			unk_0xCE04CE961AF41AB9(func_85(), 100f, 1, 0, 0, false);
			iLocal_107++;
			break;
		
		case 5:
			if (unk_0x117DAF3BF7232886(iLocal_362))
			{
				if (!unk_0x6010B3CAC53496C3(iLocal_362))
				{
					unk_0x2F8A4DF7D0DFF0A8(iLocal_361, 0);
					iLocal_361 = unk_0xB1A92B63D6757EEF(26379945, 1971.637f, 3108.429f, 47.201f, 0.1839f, 0.0478f, 40.5043f, 40f, 0, 2);
					unk_0x8EB023915CEEDB99(iLocal_361, iLocal_362, 5000, 1, 1);
					unk_0x083F68B89E3EA476(iLocal_361, "HAND_SHAKE", 1f);
					settimera(0);
					iLocal_107++;
				}
			}
			break;
		
		case 6:
			if (timera() > 4700)
			{
				if (unk_0xCB75C331DD5DDCCC(0) == 4 || unk_0xCB75C331DD5DDCCC(1) == 4)
				{
					unk_0x0B1F8038F56C12B7("CamPushInNeutral", 0, 0);
					unk_0x0F8EAEEC97DDBCB3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				iLocal_107++;
			}
			break;
		
		case 7:
			if (unk_0x117DAF3BF7232886(iLocal_361))
			{
				if (!unk_0x6010B3CAC53496C3(iLocal_361))
				{
					unk_0x07C339D4328CA16C(unk_0x33CD235DF1E6A94E(), 0, 0);
					if (unk_0xCB75C331DD5DDCCC(0) != 4 && unk_0xCB75C331DD5DDCCC(1) != 4)
					{
						unk_0xC7E6A5D90DED6E0B(-69.3229f);
						unk_0xD6EDA274D82E8678(-10.5361f, 1065353216);
					}
					func_135(0, 0, 0, 2000, 1, 0);
					settimera(0);
					iLocal_107++;
				}
			}
			break;
		
		case 8:
			unk_0xC6FB169E3887184D();
			func_61(iLocal_366, 145);
			func_60();
			unk_0x7CED302277C0F3D3("STREET_RACE_OUTRO");
			func_350(1, 0, 1, 0);
			break;
		
		case 10:
			unk_0xE2AE4E6F010FA5C5(0);
			iLocal_361 = unk_0xB1A92B63D6757EEF(26379945, 1953.31f, 3139.005f, 48.1762f, 89.5003f, -0.0032f, 52.2429f, 25.3742f, 0, 2);
			unk_0x189377BFBDC9127F(iLocal_361, true);
			iLocal_362 = unk_0xB1A92B63D6757EEF(26379945, 1953.31f, 3139.005f, 48.1762f, -7.3963f, -0.0058f, 52.1179f, 45f, 0, 2);
			unk_0x8EB023915CEEDB99(iLocal_362, iLocal_361, 800, 1, 1);
			unk_0xA94473FEE1796AED("MinigameTransitionIn");
			unk_0x0F8EAEEC97DDBCB3(-1, "Short_Transition_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			unk_0x0CF60966E9FE84CB(iLocal_361, 1f);
			unk_0x083F68B89E3EA476(iLocal_361, "HAND_SHAKE", 0.3f);
			unk_0x0CF60966E9FE84CB(iLocal_362, 1f);
			unk_0x083F68B89E3EA476(iLocal_362, "HAND_SHAKE", 0.3f);
			func_23(iLocal_365, 1948.257f, 3142.936f, 45.8642f, 51.7219f, 1, 1);
			unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
			unk_0x0B1F8038F56C12B7("MinigameTransitionOut", 0, 0);
			unk_0xCE04CE961AF41AB9(func_85(), 100f, 1, 0, 0, false);
			settimera(0);
			iLocal_107++;
			break;
		
		case 11:
			if (timera() > 500)
			{
				if (unk_0xCB75C331DD5DDCCC(1) == 4)
				{
					if (func_8(iLocal_365))
					{
						unk_0x9700629998A577D7(unk_0x541D5C57194E73C4(iLocal_365));
					}
					unk_0x0B1F8038F56C12B7("CamPushInNeutral", 0, 0);
					unk_0x0F8EAEEC97DDBCB3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				iLocal_107++;
			}
			break;
		
		case 12:
			if (timera() > 790)
			{
				unk_0xC7E6A5D90DED6E0B(0f);
				unk_0xD6EDA274D82E8678(0f, 1065353216);
				if (func_8(iLocal_365))
				{
					unk_0x9700629998A577D7(unk_0x541D5C57194E73C4(iLocal_365));
				}
				func_135(0, 0, 1, 2000, 1, 0);
				settimera(0);
				iLocal_107++;
			}
			break;
		
		case 13:
			if (timera() > 2000)
			{
				unk_0xC6FB169E3887184D();
				func_59();
				unk_0x7CED302277C0F3D3("STREET_RACE_OUTRO");
				func_350(1, 0, 1, 0);
			}
			break;
	}
}

void func_59()
{
	Global_106562 = 0;
}

void func_60()
{
	Global_106562 = 1;
}

void func_61(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_67(iParam0))
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
	func_62(iParam0, &(Global_106565.f_32743.f_5510));
}

void func_62(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		func_66(uParam1);
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
		if (uParam1->f_65 == -1 && !func_65(uParam1->f_66))
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
		func_64(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x34B1602009421B58(iParam0, iVar0 + 1))
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_77), func_63(iVar0 + 1));
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

int func_63(int iParam0)
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

int func_64(int iParam0, var uParam1, var uParam2)
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

int func_65(int iParam0)
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

void func_66(var uParam0)
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

int func_67(int iParam0)
{
	if ((((((((((!unk_0x765F6FEEFF39224F(iParam0) || !unk_0x91D5C8283D19AF49(iParam0, 0)) || func_83(iParam0, 0, 0)) || func_83(iParam0, 1, 0)) || func_83(iParam0, 2, 0)) || func_82(iParam0) != 145) || func_81(iParam0)) || func_80(iParam0)) || func_79(iParam0)) || func_78(iParam0)) || !func_68(unk_0x541D5C57194E73C4(iParam0)))
	{
		if (func_80(iParam0))
		{
		}
		if (func_80(iParam0))
		{
		}
		if (func_83(iParam0, 0, 0))
		{
		}
		if (func_83(iParam0, 1, 0))
		{
		}
		if (func_83(iParam0, 2, 0))
		{
		}
		if (func_82(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_68(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_69(iParam0, 0))
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

int func_69(int iParam0, bool bParam1)
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
		if (!func_77())
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
		if ((((!func_76() && !func_75()) && !func_74()) && !func_73()) && !func_77())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDB36A8F522CBC12D() || unk_0x4CE1DD5CFC1F941E()) || unk_0xF5DB888C353E2BED())
		{
		}
		else if (!func_74())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_72(iParam0))
		{
			return 0;
		}
	}
	if (!func_70(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_71())
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

int func_71()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		return unk_0xFCAD2CB678396284();
	}
	return 0;
}

int func_72(int iParam0)
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

int func_73()
{
	return 0;
}

int func_74()
{
	return 1;
}

int func_75()
{
	return 1;
}

int func_76()
{
	if (unk_0xE9D7B652961D4AA3(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_77()
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

int func_78(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x541D5C57194E73C4(iParam0);
	sVar1 = unk_0x00D614EBCFFD919D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xCE3CFF625BEBAA04(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_69(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_79(int iParam0)
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

int func_80(int iParam0)
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

int func_81(int iParam0)
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

int func_82(int iParam0)
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

int func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x765F6FEEFF39224F(iParam0) || !unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_84(iParam1, iVar0, &sVar1, &iVar2))
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

int func_84(int iParam0, int iParam1, char* sParam2, var uParam3)
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

Vector3 func_85()
{
	return 1967.042f, 3116.005f, 45.8901f;
}

float func_86()
{
	return 194.8257f;
}

Vector3 func_87()
{
	return 1964.038f, 3114.635f, 46.1319f;
}

int func_88(struct<13> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, var uParam10)
{
	int iVar0;
	struct<2> Var1;
	char cVar2[16];
	
	switch (iLocal_65)
	{
		case 0:
			func_129(uParam8);
			func_126(iParam9, 1);
			iVar0 = 0;
			switch (Param0.f_7)
			{
				case 1:
					iVar0 = 3;
					break;
				
				case 2:
					iVar0 = 2;
					break;
				
				case 3:
					iVar0 = 1;
					break;
				
				default:
					iVar0 = 0;
					break;
			}
			StringCopy(&Var1, "CRACEP", 16);
			StringIntConCat(&Var1, Param0.f_7, 16);
			StringCopy(&cVar2, "CRACETRACK", 16);
			StringIntConCat(&cVar2, Global_106565.f_25067 + 1, 16);
			func_125(uParam8, &Var1, &cVar2, 0);
			if (Param0.f_12 != 0)
			{
				func_124(uParam8, 18, "CRACETIME", "", Param0.f_12, 0, 0, 0);
			}
			if (Global_106565.f_25067.f_1 != 0)
			{
				func_124(uParam8, 18, "CRACEBTIME", "", Global_106565.f_25067.f_1, 0, 0, 0);
			}
			uParam8->f_561 = 1;
			if (Param0.f_7 <= 3)
			{
				func_123(uParam8, 1, "CRACERES", Param0.f_7, 9, 1, iVar0, 0);
			}
			else
			{
				func_123(uParam8, 0, "CRACERES", Param0.f_7, 9, 1, iVar0, 0);
			}
			settimerb(0);
			if (Param0.f_7 <= 1)
			{
				unk_0x0F8EAEEC97DDBCB3(-1, "MEDAL_UP", "HUD_MINI_GAME_SOUNDSET", 1);
			}
			else
			{
				unk_0x0F8EAEEC97DDBCB3(-1, "RACE_PLACED", "HUD_AWARDS", 1);
			}
			iLocal_65 = 1;
			func_119(uParam8, 1, 0);
			uParam8->f_566 = 1;
			break;
		
		case 1:
			unk_0xF3F3DC87D7163212();
			func_94(uParam8, 0, 1065353216, 0, 0, 0);
			func_93(iParam9);
			if (timerb() > 2000)
			{
				if (unk_0x5D79F3D06EB318A0(2))
				{
					unk_0x0817B4F2C156A62D();
				}
				if (unk_0x833B1A3D9F713E03(2, 216))
				{
					func_92(uParam8);
					iLocal_65 = 2;
					*uParam10 = 1;
				}
				else if (unk_0x833B1A3D9F713E03(2, 215))
				{
					func_92(uParam8);
					iLocal_65 = 2;
					*uParam10 = 0;
				}
			}
			break;
		
		case 2:
			if (func_94(uParam8, 0, 1065353216, 0, 0, 0))
			{
				func_89(uParam8);
				func_29(iParam9);
				return 1;
			}
			break;
	}
	return 0;
}

void func_89(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x83A1D480DB0B52CC(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x4CE1DD5CFC1F941E())
		{
			unk_0xBB698266C5FDF0A7(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x295B86DE57A0721D(false);
			unk_0x818901B332D5541D();
		}
		unk_0x83A1D480DB0B52CC(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x05CFB4D665C2A88D(false);
		uParam0->f_564 = 0;
	}
	if (!Global_71858)
	{
		if (!unk_0xB59A1CE271CEA093(unk_0x3EE1295CEFBEFED4()))
		{
			if (!Global_71859)
			{
				if (unk_0xBB5E373390A5F824() && !func_91(0))
				{
					unk_0xACCDA78123DB57B0(800);
				}
			}
		}
	}
	func_90(0);
}

void func_90(int iParam0)
{
	Global_71850 = iParam0;
	Global_71851 = iParam0;
}

bool func_91(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

void func_92(var uParam0)
{
	uParam0->f_562 = 0;
	uParam0->f_561 = 0;
	uParam0->f_558 = uParam0->f_572 + 500;
}

void func_93(var uParam0)
{
	func_30(uParam0, 1128792064, 1, 0, 1, 1065353216);
}

int func_94(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0xE77FA521699F639C() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0xE77FA521699F639C();
	if (!unk_0xB331FCEB94EB05C8())
	{
		if (unk_0xDFB97818AD6C09CC(unk_0x378BD4B3881338C2(unk_0x3EE1295CEFBEFED4()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0xA7772238DA986E33(unk_0x378BD4B3881338C2(unk_0x3EE1295CEFBEFED4())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0xBB5E373390A5F824() || unk_0x75A50A9E5219C397())
		{
			unk_0x05CFB4D665C2A88D(true);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			if (unk_0xB73BBE22563E911A(unk_0x95B959F18401C09A()))
			{
				unk_0x111AE40E9C93AF52(unk_0x95B959F18401C09A());
			}
		}
	}
	unk_0x581AE7724ACAD410(7);
	unk_0x581AE7724ACAD410(8);
	unk_0x581AE7724ACAD410(9);
	unk_0x581AE7724ACAD410(6);
	unk_0x581AE7724ACAD410(19);
	unk_0x3FD9339AA95E323F(2, 19, 1);
	unk_0x3FD9339AA95E323F(0, 37, 1);
	unk_0x3FD9339AA95E323F(0, 21, 1);
	unk_0x3FD9339AA95E323F(0, 28, 1);
	unk_0x3FD9339AA95E323F(0, 29, 1);
	unk_0x3FD9339AA95E323F(0, 171, 1);
	func_52(0);
	if (unk_0x5D79F3D06EB318A0(2))
	{
		if (unk_0x8DA50A8C94BED8B2() || (unk_0xBB5E373390A5F824() && !unk_0xD33DAC8D0D70A78C()))
		{
			unk_0x0817B4F2C156A62D();
		}
	}
	Global_36975 = 1;
	if (!uParam0->f_563)
	{
		switch (func_46(unk_0x378BD4B3881338C2(unk_0x3EE1295CEFBEFED4())))
		{
			case 1:
				unk_0x0B1F8038F56C12B7("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0x0B1F8038F56C12B7("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0x0B1F8038F56C12B7("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + floor((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_118(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_118(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_118((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_118(30f) - func_118(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_90(1);
		uParam0->f_572 = (uParam0->f_572 + round((0f + (1000f * timestep()))));
		func_97(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * timestep())));
			}
		}
		uParam0->f_30 = func_96(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					unk_0xBB698266C5FDF0A7(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x818901B332D5541D();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * timestep())));
			}
		}
		uParam0->f_547 = func_96(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0xBB698266C5FDF0A7(uParam0->f_1, "TRANSITION_OUT");
			unk_0x818901B332D5541D();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * timestep())));
				}
			}
		}
		uParam0->f_548 = func_96(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (unk_0xEABBA3F8727C0FE7(2))
			{
				if (unk_0x11AE7F6A404414C9(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_95(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0x833B1A3D9F713E03(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0x11AE7F6A404414C9(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0xBB698266C5FDF0A7(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x818901B332D5541D();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0xBB698266C5FDF0A7(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x818901B332D5541D();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_95(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					unk_0xBB698266C5FDF0A7(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x818901B332D5541D();
				}
				uParam0->f_559 = func_96((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * timestep())), 0f, 1f);
				uParam0->f_573 = func_96((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_96((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * timestep())), 0f, 1f);
			uParam0->f_573 = func_96((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (unk_0x833B1A3D9F713E03(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			wait(0);
		}
		else
		{
			if (!bVar0)
			{
				func_90(0);
			}
			return !bVar0;
		}
	}
	func_90(0);
	return 1;
}

void func_95(var uParam0, bool bParam1)
{
	unk_0xBB698266C5FDF0A7(uParam0->f_4, "CLEAR_ALL");
	unk_0x818901B332D5541D();
	if (unk_0x4CE1DD5CFC1F941E())
	{
		unk_0xBB698266C5FDF0A7(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x295B86DE57A0721D(true);
		unk_0x818901B332D5541D();
	}
	unk_0xBB698266C5FDF0A7(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4D9DA18AB3C2A466(0);
	func_34(unk_0x4464D5595CEED843(2, 215, true));
	func_50("ES_HELP");
	if (unk_0x4CE1DD5CFC1F941E())
	{
		unk_0x295B86DE57A0721D(true);
		unk_0x4D9DA18AB3C2A466(215);
	}
	unk_0x818901B332D5541D();
	if (bParam1)
	{
		unk_0xBB698266C5FDF0A7(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x4D9DA18AB3C2A466(1);
		func_34(unk_0x4464D5595CEED843(2, 216, true));
		func_50("ES_XPAND");
		if (unk_0x4CE1DD5CFC1F941E())
		{
			unk_0x295B86DE57A0721D(true);
			unk_0x4D9DA18AB3C2A466(216);
		}
		unk_0x818901B332D5541D();
	}
	unk_0xBB698266C5FDF0A7(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x818901B332D5541D();
}

float func_96(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_97(var uParam0, float fParam1, bool bParam2)
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = round((uParam0->f_547 * 255f));
	fVar1 = (func_117() * 0.25f);
	if (unk_0x11AE7F6A404414C9(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0xBB698266C5FDF0A7(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_50(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_116(&(uParam0->f_13));
				}
				else
				{
					func_50(&(uParam0->f_13));
				}
				if (unk_0xB331FCEB94EB05C8())
				{
					unk_0x4D9DA18AB3C2A466(150);
				}
				else
				{
					unk_0x4D9DA18AB3C2A466(100);
				}
				unk_0x295B86DE57A0721D(true);
				if (uParam0->f_556 == 4)
				{
					unk_0x4D9DA18AB3C2A466((uParam0->f_56 - 1));
				}
				else
				{
					unk_0x4D9DA18AB3C2A466(uParam0->f_56);
				}
				unk_0x295B86DE57A0721D(bParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					unk_0x4D9DA18AB3C2A466(2);
				}
				else
				{
					unk_0x4D9DA18AB3C2A466(69);
				}
				unk_0x818901B332D5541D();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0xBB698266C5FDF0A7(uParam0->f_1, "TRANSITION_UP");
				unk_0x8DAB5B12D7B9AD29(0.15f);
				unk_0x295B86DE57A0721D(true);
				unk_0x818901B332D5541D();
				uParam0->f_3 = 1;
			}
		}
		func_115();
		unk_0xFF524AE40FB6301A(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_118((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_117());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_114(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0x63151314B8B4D6EB(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_114(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_117()) / 2.5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0x144904D2EAA84341(2, 215);
	unk_0x144904D2EAA84341(2, 216);
	unk_0x144904D2EAA84341(2, 200);
	unk_0x3FD9339AA95E323F(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_111((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * timestep())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (unk_0xBB5E373390A5F824())
			{
				unk_0x58355301CBA19400();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0x581AE7724ACAD410(7);
				unk_0x581AE7724ACAD410(8);
				unk_0x581AE7724ACAD410(9);
				unk_0x581AE7724ACAD410(6);
				unk_0xFF524AE40FB6301A(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0x3FD9339AA95E323F(0, 140, 1);
				unk_0x3FD9339AA95E323F(0, 141, 1);
				unk_0x3FD9339AA95E323F(0, 142, 1);
				unk_0x3FD9339AA95E323F(2, 188, 1);
				if (unk_0x5EBE50D55314CEAD(2, 188))
				{
					unk_0x0F8EAEEC97DDBCB3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0x0F8EAEEC97DDBCB3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x3FD9339AA95E323F(2, 187, 1);
				if (unk_0x5EBE50D55314CEAD(2, 187))
				{
					unk_0x0F8EAEEC97DDBCB3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0x0F8EAEEC97DDBCB3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x3FD9339AA95E323F(2, 202, 1);
				if (unk_0x5EBE50D55314CEAD(2, 202))
				{
					unk_0x0F8EAEEC97DDBCB3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0x0F8EAEEC97DDBCB3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0x581AE7724ACAD410(7);
				unk_0x581AE7724ACAD410(8);
				unk_0x581AE7724ACAD410(9);
				unk_0x581AE7724ACAD410(6);
				unk_0x3FD9339AA95E323F(0, 140, 1);
				unk_0x3FD9339AA95E323F(0, 141, 1);
				unk_0x3FD9339AA95E323F(0, 142, 1);
				if (unk_0x833B1A3D9F713E03(2, 215) || unk_0x5EBE50D55314CEAD(2, 200))
				{
					unk_0x0F8EAEEC97DDBCB3(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0x0F8EAEEC97DDBCB3(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0x1256E5EA03020804(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0x762F7A52B1325903(iVar13, iVar14, iVar15, iVar0);
	unk_0x1C500BB2E1897008(fVar9, fVar10);
	unk_0x5E831B95C8BE4F09(0);
	unk_0xC56FB1634FB1F447(1f, 0.4f);
	fVar1 = (fVar1 - func_118(6f));
	fVar1 = (fVar1 + (func_118(30f) - func_118((2f * 2f))));
	fVar11 = (fVar2 - func_118((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_96((fVar11 / (0.6f * func_118(25f))), 0f, 1f);
		func_115();
		unk_0x5263FF82360FF7E2(0.5f, (fVar1 - (func_118((2f - 0.5f)) - 0.001388889f)), fVar6, func_110(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_118((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_118((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_117())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_96((fVar11 / (0.8f * func_118(25f))), 0f, 1f);
			func_107(uParam0, iVar17, (fVar1 + func_118(2f)), fVar9, fVar10, round((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_118(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_118((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_117())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_118(2f));
					fVar12 = func_96((fVar11 / (0.6f * func_118(25f))), 0f, 1f);
					func_115();
					unk_0x5263FF82360FF7E2(0.5f, (fVar1 + func_118((2f * 0.5f))), fVar6, func_110(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_118((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_118((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_118((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_117())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_118(2f));
			fVar12 = func_96((fVar11 / (0.6f * func_118(25f))), 0f, 1f);
			func_115();
			unk_0x5263FF82360FF7E2(0.5f, (fVar1 + func_118((2f * 0.5f))), fVar6, func_110(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_118((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_117())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_96((fVar11 / (0.8f * func_118(25f))), 0f, 1f);
			unk_0x762F7A52B1325903(iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar0))));
			func_100(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x97B6A6696D936191() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_117()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_117()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_117()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_117()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				unk_0x1C500BB2E1897008(fVar20, fVar21);
				unk_0x5E831B95C8BE4F09(1);
			}
			else
			{
				fVar20 = 0.5f;
				unk_0x5E831B95C8BE4F09(0);
			}
			unk_0xC56FB1634FB1F447(1f, 0.4f);
			func_99(&(uParam0->f_550), fVar20, (fVar1 + func_118((2f * 2f))), 0, 0, 0);
			unk_0x1C500BB2E1897008(fVar20, fVar21);
			unk_0x5E831B95C8BE4F09(2);
			unk_0xC56FB1634FB1F447(1f, 0.4f);
			unk_0x2775439F06235586(0);
			func_115();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0x1C500BB2E1897008(fVar20, fVar22);
			unk_0x762F7A52B1325903(iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0xAA70163B3B48EEE4("PERCENTAGE");
					unk_0xE800DC85FDF60F85(uParam0->f_554);
					unk_0xCCA49CAF391D1A15(fVar20, (fVar1 + func_118((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0xAA70163B3B48EEE4("FO_TWO_NUM");
					unk_0xE800DC85FDF60F85(uParam0->f_554);
					unk_0xE800DC85FDF60F85(uParam0->f_555);
					unk_0xCCA49CAF391D1A15(fVar20, (fVar1 + func_118((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0xAA70163B3B48EEE4("MTPHPER_XPNO");
					unk_0xE800DC85FDF60F85(uParam0->f_554);
					unk_0xCCA49CAF391D1A15(fVar20, (fVar1 + func_118((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0xAA70163B3B48EEE4("ESDOLLA");
					unk_0x9454B3D676754D96(uParam0->f_554, 1);
					unk_0xCCA49CAF391D1A15(fVar20, (fVar1 + func_118((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						unk_0x1256E5EA03020804(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						unk_0x1256E5EA03020804(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						unk_0x1256E5EA03020804(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0.001388889f * 5f);
				fVar30 = ((0.00078125f * 16f) * 2f);
				fVar31 = ((0.001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_98(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_118(10f)) + fVar29);
				if (uParam0->f_556 == -1)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				unk_0x281206A3ED9B7B48(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, round((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_118(30f) - 2f));
		}
	}
}

float func_98(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_99(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0x2775439F06235586(iParam3);
	unk_0xBED53673591D764E(iParam5);
	func_115();
	if (bParam4)
	{
		unk_0xAA70163B3B48EEE4("STRING");
		unk_0xD61E5ED1D4E687A5(sParam0);
	}
	else
	{
		unk_0xAA70163B3B48EEE4(sParam0);
	}
	unk_0xCCA49CAF391D1A15(fParam1, fParam2, 0);
}

int func_100(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_106(iParam0), 64);
	StringCopy(&cVar1, func_103(iParam0, bParam1), 64);
	if (unk_0x36163153849DFDA1(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x3A5E614EC752B188(&iVar2, &iVar3);
			fVar5 = unk_0x63151314B8B4D6EB(0);
			if (func_102())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_102())
			{
				fVar4 = 1f;
			}
			if (unk_0x1BCDA92AD0A7835B(joaat("director_mode")) > 0)
			{
				unk_0x6521432F7BEAC16C(&iVar2, &iVar3);
			}
			iVar2 = round((to_float(iVar2) / fVar4));
			iVar3 = round((to_float(iVar3) / fVar4));
		}
		else
		{
			unk_0x6521432F7BEAC16C(&iVar2, &iVar3);
		}
		vVar7 = { unk_0x5B78EE936879124F(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_101(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_101(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && unk_0x36163153849DFDA1(&(Global_17411.f_6997[29 /*16*/])) == -1487683087)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x9E7AB96D7830E5B1() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17410)
			{
				*fParam4 = (*fParam4 * (Global_17410 / *fParam3));
				*fParam3 = Global_17410;
			}
		}
		return 1;
	}
	return 0;
}

float func_101(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 51:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 0.5f;
			break;
		
		case 60:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_102()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x3A5E614EC752B188(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_103(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0x786AF4A44E1B5B4B(&(Global_17411.f_6997[iParam0 /*16*/])))
	{
		if (unk_0x36163153849DFDA1(&(Global_17411.f_6997[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_105(unk_0x95B959F18401C09A()) };
			if (unk_0x5E6D03D528D40F43(&Var2, &uVar1))
			{
				return func_104(&uVar1);
			}
		}
		else
		{
			return func_104(&(Global_17411.f_6997[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 50:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 51:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 53:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 54:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 55:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 59:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 60:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_104(var uParam0)
{
	return uParam0;
}

struct<13> func_105(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBC1B3D38C4BB38F4(iParam0, &Var0, 13);
	return Var0;
}

char* func_106(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0x786AF4A44E1B5B4B(&(Global_17411.f_6020[iParam0 /*16*/])))
	{
		if (unk_0x36163153849DFDA1(&(Global_17411.f_6020[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_105(unk_0x95B959F18401C09A()) };
			unk_0x5E6D03D528D40F43(&Var1, &uVar0);
			return func_104(&uVar0);
		}
		else
		{
			return func_104(&(Global_17411.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 50)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_107(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0x1256E5EA03020804(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, iParam5);
	unk_0x1C500BB2E1897008(fParam3, fParam4);
	unk_0x5E831B95C8BE4F09(1);
	unk_0xC56FB1634FB1F447(1f, func_109(14f));
	unk_0x2775439F06235586(0);
	unk_0xBED53673591D764E(0);
	func_115();
	if (uParam0->f_531[iParam1])
	{
		unk_0xAA70163B3B48EEE4("STRING");
		unk_0xD61E5ED1D4E687A5(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0xAA70163B3B48EEE4(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0xE800DC85FDF60F85(uParam0->f_489[iParam1]);
		}
	}
	unk_0xCCA49CAF391D1A15(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_100(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0x281206A3ED9B7B48("CommonMenu", func_103(7, 0), (fParam4 - 0.006f), ((fParam2 + func_118(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_100(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0x281206A3ED9B7B48("CommonMenu", func_103(5, 0), (fParam4 - 0.006f), ((fParam2 + func_118(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_100(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0x281206A3ED9B7B48("CommonMenu", func_103(6, 0), (fParam4 - 0.006f), ((fParam2 + func_118(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0x5E831B95C8BE4F09(1);
	}
	else
	{
		unk_0x5E831B95C8BE4F09(2);
	}
	unk_0xC56FB1634FB1F447(1f, func_109(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0x1C500BB2E1897008(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x1C500BB2E1897008(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, iParam5);
	func_108(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_108(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0x2775439F06235586(0);
	unk_0xBED53673591D764E(0);
	func_115();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0xC56FB1634FB1F447(1f, func_109(18f));
			unk_0xBED53673591D764E(4);
			if (iParam0 < 0)
			{
				unk_0xCAE35308CC49F0CC("ESMINDOLLA");
				unk_0x9454B3D676754D96((-1 * iParam0), 1);
				fVar1 = unk_0x201339347519B9A8(0);
			}
			else
			{
				unk_0xCAE35308CC49F0CC("ESDOLLA");
				unk_0x9454B3D676754D96(iParam0, 1);
				fVar1 = unk_0x201339347519B9A8(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0x281206A3ED9B7B48("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x281206A3ED9B7B48("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x281206A3ED9B7B48("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xC56FB1634FB1F447(1f, func_109(14f));
			break;
	}
	unk_0x75D3F9044123D4F9(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0xAA70163B3B48EEE4("PERCENTAGE");
			unk_0xE800DC85FDF60F85(iParam0);
			break;
		
		case 1:
			unk_0xBED53673591D764E(5);
			unk_0xAA70163B3B48EEE4("FO_NUM");
			unk_0xE800DC85FDF60F85(iParam0);
			break;
		
		case 2:
			unk_0xBED53673591D764E(5);
			unk_0xAA70163B3B48EEE4("FO_TWO_NUM");
			unk_0xE800DC85FDF60F85(iParam0);
			unk_0xE800DC85FDF60F85(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0xC56FB1634FB1F447(1f, func_109(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0xAA70163B3B48EEE4("ESMINDOLLA");
				unk_0x9454B3D676754D96((-1 * iParam0), 1);
			}
			else
			{
				unk_0xAA70163B3B48EEE4("ESDOLLA");
				unk_0x9454B3D676754D96(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0xAA70163B3B48EEE4(sParam4);
			break;
		
		case 7:
			unk_0xAA70163B3B48EEE4("STRING");
			unk_0xD61E5ED1D4E687A5(sParam4);
			break;
		
		case 8:
			unk_0xBED53673591D764E(5);
			unk_0xAA70163B3B48EEE4("STRING");
			unk_0xDC97362660946DF9(iParam0, 14);
			break;
		
		case 9:
			unk_0xBED53673591D764E(5);
			unk_0xAA70163B3B48EEE4("STRING");
			unk_0xDC97362660946DF9(iParam0, 6);
			break;
		
		case 10:
			unk_0xBED53673591D764E(5);
			unk_0xAA70163B3B48EEE4("STRING");
			unk_0xDC97362660946DF9(iParam0, 2055);
			break;
		
		case 18:
			unk_0xBED53673591D764E(5);
			unk_0xAA70163B3B48EEE4("STRING");
			unk_0xDC97362660946DF9(iParam0, 2055);
			break;
		
		case 12:
			unk_0xAA70163B3B48EEE4("AHD_DIST");
			unk_0xE800DC85FDF60F85(iParam0);
			break;
		
		case 13:
			unk_0xAA70163B3B48EEE4(sParam4);
			unk_0xE800DC85FDF60F85(iParam0);
			unk_0xE800DC85FDF60F85(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0xAA70163B3B48EEE4(sParam4);
			unk_0xE800DC85FDF60F85(iParam0);
			unk_0xE800DC85FDF60F85(iParam1);
			break;
		
		case 16:
			unk_0xAA70163B3B48EEE4(sParam4);
			unk_0xE800DC85FDF60F85(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0xCCA49CAF391D1A15((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0xC56FB1634FB1F447(1f, func_109(14f));
		}
		else
		{
			unk_0xCCA49CAF391D1A15(fParam2, fParam3, 0);
		}
	}
}

float func_109(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_110(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_111(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_113(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_112(7, iVar0);
		Global_1373453.f_4453[iVar0] = iParam0;
		StringCopy(&(Global_1373453.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1373453.f_4453.f_172[iVar0] = iParam2;
		Global_1373453.f_4453.f_216[iVar0] = iParam3;
		Global_1373453.f_4453.f_183[iVar0] = iParam4;
		Global_1373453.f_4453.f_194[iVar0] = iParam5;
		Global_1373453.f_4453.f_249[iVar0] = iParam6;
		Global_1373453.f_4453.f_260[iVar0] = iParam7;
		Global_1373453.f_4453.f_205[iVar0] = iParam8;
		Global_1373453.f_4453.f_314[iVar0] = iParam9;
		Global_1373453.f_4453.f_325[iVar0] = iParam10;
		Global_1373453.f_4453.f_357[iVar0] = bParam11;
		Global_1373453.f_4453.f_238[iVar0] = iParam12;
		Global_1373453.f_4453.f_271[iVar0] = iParam13;
		Global_1373453.f_4453.f_368[iVar0] = iParam14;
		Global_1373453.f_4453.f_379[iVar0] = iParam15;
		Global_1373453.f_4453.f_390[iVar0] = iParam16;
		Global_1373453.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_112(int iParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(&(Global_1373453.f_6184[iParam0]), iParam1);
}

bool func_113(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1373453.f_6184[iParam0], iParam1);
}

float func_114(char* sParam0)
{
	unk_0xCAE35308CC49F0CC(sParam0);
	return (unk_0x201339347519B9A8(1) / 2f);
}

void func_115()
{
	unk_0x5C58D0ADA22491FA(1);
	if (unk_0x75A50A9E5219C397() || unk_0xBB5E373390A5F824())
	{
		unk_0x5C58D0ADA22491FA(7);
	}
	unk_0xF01D71D732A00CE6(0);
}

void func_116(char* sParam0)
{
	unk_0x3EFC6497702202D6(sParam0);
}

float func_117()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x4CE1DD5CFC1F941E())
	{
	}
	return fVar0;
}

float func_118(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

int func_119(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_122(uParam0);
	func_121(uParam0);
	if (unk_0xCE3CFF625BEBAA04(&(uParam0->f_550), "SPR_RESULT") || (unk_0xCE3CFF625BEBAA04(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		unk_0x0A06DEFFF267C21E("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x0A06DEFFF267C21E("CommonMenu", false);
		unk_0x0A06DEFFF267C21E("MPLeaderboard", false);
		unk_0x0A06DEFFF267C21E("MPHud", false);
		uParam0->f_1 = unk_0x199B24FF79A52CCF("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0x9E4935AAC82732AB("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x11AE7F6A404414C9(uParam0->f_1) || !unk_0xD83C9F072D059CC4("CommonMenu")) || !unk_0xD83C9F072D059CC4("MPLeaderboard")) || !unk_0xD83C9F072D059CC4("MPHud"))
		{
			wait(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0x11AE7F6A404414C9(uParam0->f_4))
			{
				wait(0);
			}
		}
	}
	else
	{
		if (((!unk_0x11AE7F6A404414C9(uParam0->f_1) || !unk_0xD83C9F072D059CC4("CommonMenu")) || !unk_0xD83C9F072D059CC4("MPLeaderboard")) || !unk_0xD83C9F072D059CC4("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0x11AE7F6A404414C9(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_120(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_95(uParam0, 1);
		}
		else
		{
			func_95(uParam0, 0);
		}
	}
	Global_71851 = 1;
	return 1;
}

void func_120(var uParam0)
{
	unk_0xBB698266C5FDF0A7(uParam0->f_4, "CLEAR_ALL");
	unk_0x818901B332D5541D();
	if (unk_0x4CE1DD5CFC1F941E())
	{
		unk_0xBB698266C5FDF0A7(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x295B86DE57A0721D(true);
		unk_0x818901B332D5541D();
	}
	unk_0xBB698266C5FDF0A7(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4D9DA18AB3C2A466(2);
	func_34(unk_0x4464D5595CEED843(2, 188, true));
	func_50("ES_HELP_TU");
	unk_0x818901B332D5541D();
	unk_0xBB698266C5FDF0A7(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4D9DA18AB3C2A466(1);
	func_34(unk_0x4464D5595CEED843(2, 187, true));
	func_50("ES_HELP_TD");
	unk_0x818901B332D5541D();
	unk_0xBB698266C5FDF0A7(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4D9DA18AB3C2A466(0);
	func_34(unk_0x4464D5595CEED843(2, 202, true));
	func_50("ES_HELP_AB");
	unk_0x818901B332D5541D();
	unk_0xBB698266C5FDF0A7(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x818901B332D5541D();
}

void func_121(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x5E831B95C8BE4F09(0);
	unk_0xC56FB1634FB1F447(1f, func_109(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0xCAE35308CC49F0CC("STRING");
			unk_0xD61E5ED1D4E687A5(&(uParam0->f_13));
			fVar0 = unk_0x201339347519B9A8(1);
		}
		else
		{
			unk_0xCAE35308CC49F0CC(&(uParam0->f_13));
			fVar0 = unk_0x201339347519B9A8(1);
		}
	}
	else
	{
		unk_0xCAE35308CC49F0CC("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0xE800DC85FDF60F85(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0xFA6BEE2B1507FF1E(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0xD61E5ED1D4E687A5(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x201339347519B9A8(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_122(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_123(var uParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = uParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

void func_124(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = uParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_125(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_126(var uParam0, bool bParam1)
{
	func_49(uParam0, 0, 0, 1, 1);
	func_48(uParam0, "CRACECONT", 2, 215, 1, 1, 0);
	if (bParam1)
	{
		func_48(uParam0, "CRACERET", 2, 216, 1, 1, 0);
	}
	func_128(uParam0, 1);
	func_127(uParam0, 1);
}

void func_127(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_32(&(uParam0->f_1), 16);
	}
	else
	{
		func_31(&(uParam0->f_1), 16);
	}
}

void func_128(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_32(&(uParam0->f_1), 1024);
	}
	else
	{
		func_31(&(uParam0->f_1), 1024);
	}
}

void func_129(var uParam0)
{
	func_122(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_130(int iParam0, bool bParam1)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		if (!unk_0xD62C4419A41F106A(*iParam0, 0))
		{
			if (unk_0x4278060E716E1226(*iParam0))
			{
				unk_0x8D50B2BEF003AB31(*iParam0);
			}
			unk_0x0C6BB9365C4A5F6E(*iParam0, -8f, 1);
			if (unk_0x9F4718FD61B07058(*iParam0))
			{
				unk_0x35F11A916FDFCF32(*iParam0, 1, 1);
			}
		}
		if (bParam1)
		{
			unk_0x7AC8DF0B83EB4C6B(iParam0);
		}
		else
		{
			unk_0x65F544B458249682(iParam0);
		}
	}
}

void func_131(int iParam0, bool bParam1)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(*iParam0))
		{
			if (!unk_0xF0D230FB550CD6EB(*iParam0, 0) && !unk_0x707FFB0E65C1C546(*iParam0))
			{
				if ((unk_0x8248367EE2A51F1D(*iParam0) || unk_0x47904E0914F5B5C6(*iParam0)) || unk_0x67E42C11097164BA(*iParam0))
				{
					unk_0x35F11A916FDFCF32(*iParam0, 1, 1);
				}
				unk_0xF70578F5CD9822CB(*iParam0, false);
			}
			if (!unk_0xF0D230FB550CD6EB(*iParam0, 0))
			{
				unk_0x23298AB8A7D0F403(*iParam0, true, 0);
			}
			if (unk_0x731F434EAFE6E9FE(*iParam0, func_132()))
			{
				unk_0x5D94F4D6FE7DA516(*iParam0);
			}
			if (!bParam1)
			{
				unk_0x897EF720254BBEA3(*iParam0, true);
			}
		}
		if (bParam1)
		{
			unk_0x4B8B69DAE5BAC592(iParam0);
		}
		else
		{
			unk_0x1F45B4626AC4A4C0(iParam0);
		}
	}
}

var func_132()
{
	return unk_0x733DE09777D47CD6(unk_0x3EE1295CEFBEFED4());
}

void func_133(int iParam0)
{
	if (unk_0xE38E3CF1625A4145(*iParam0))
	{
		unk_0x1C316779E36C1967(*iParam0, false);
		unk_0x1ABDB383C83A336A(iParam0);
	}
}

int func_134()
{
	switch (Global_106565.f_25067)
	{
		case 0:
			return joaat("stalion2");
			break;
		
		case 1:
			return joaat("gauntlet2");
			break;
		
		case 2:
			return joaat("dominator2");
			break;
		
		case 3:
			return joaat("buffalo3");
			break;
		
		case 4:
			return joaat("marshall");
			break;
	}
	return joaat("buffalo3");
}

void func_135(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam4)
	{
		unk_0xF93137A2ACF7BAA4(bParam0, 0);
		unk_0x63F0B040CE6EDF0F(bParam0, iParam2, iParam3, 1, 0, 0);
	}
	unk_0xEDF90B96BED57BCE(1);
	func_138(bParam0, 1, 1, 0, 0, 0);
	func_136(bParam0);
	unk_0x35675D19812BDF22(!bParam0);
	unk_0xDFF589A2149528CE(!bParam0);
	if (func_8(unk_0x33CD235DF1E6A94E()))
	{
		if (bParam5)
		{
			unk_0x098757942E2F9D44(unk_0x33CD235DF1E6A94E(), bParam0);
		}
		else if (!bParam0)
		{
			unk_0x098757942E2F9D44(unk_0x33CD235DF1E6A94E(), false);
		}
	}
	if (!bParam1)
	{
		unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), !bParam0, 0);
	}
	else if (!unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
	{
		unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
	}
}

void func_136(bool bParam0)
{
	if (bParam0)
	{
		func_137();
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			unk_0x8950ED5730F62EE8(&Global_2424, 16);
		}
		Global_14553.f_1 = 1;
		if (func_56(0))
		{
			func_53(0);
		}
	}
	else if (Global_14553.f_1 == 1)
	{
		if (!Global_14553.f_1 == 0)
		{
			Global_14553.f_1 = 3;
		}
	}
}

void func_137()
{
	if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
	{
		Global_15919 = 0;
		Global_15915 = 1;
	}
}

void func_138(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 1);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 1);
		func_146(1);
		unk_0x9F86AEF7DC996029();
		unk_0x68F7298CC6F16961();
		if (Global_14553.f_1 > 3)
		{
			if (unk_0xA30F14B621E3269D())
			{
				unk_0xD92171BC6C48DB90(false);
			}
			if (!func_54())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_145(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_146(0);
		unk_0xD384C2E6BE0D5ABF();
		Global_56500 = 0;
		if (bParam1)
		{
			unk_0x36296F11E96E764D();
		}
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 0);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 0);
		func_145(0, iParam3, iParam2, 0);
		if (unk_0xB331FCEB94EB05C8())
		{
			if (((((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_143(unk_0x95B959F18401C09A())) && !func_140(unk_0x95B959F18401C09A(), 0)) && !func_139()) && !bParam4) && !bParam5)
			{
				unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
			}
		}
		else if (((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_143(unk_0x95B959F18401C09A())) && !bParam4) && !bParam5)
		{
			unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
		}
		Global_71588 = 0;
	}
}

bool func_139()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
}

bool func_140(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_141(-1, 0) == 8;
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

int func_141(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_142();
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

int func_142()
{
	return Global_1312745;
}

int func_143(int iParam0)
{
	if (func_140(iParam0, 0))
	{
		return 1;
	}
	if (func_144())
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

bool func_144()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

int func_145(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_146(int iParam0)
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

void func_147(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!unk_0xCE3CFF625BEBAA04("FinaleC2", unk_0xD178EF744F20B712()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_93719)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_93719)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_224(1);
		if (iParam0 <= Global_93719)
		{
		}
		iVar1 = func_222(unk_0xD178EF744F20B712(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_106565.f_9079.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_220(iVar1);
			cVar3 = { Global_84500[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_106565.f_9079.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x4F729C0B5CCB6FEE(&cVar3, iVar2, Global_93719, iParam0);
		}
		else
		{
			iVar4 = func_215(unk_0xD178EF744F20B712(), 1);
			if (iVar4 != -1)
			{
				Global_106565.f_18568[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_214(iVar4)}, 4);
				unk_0x4F729C0B5CCB6FEE(&uVar5, 0, Global_93719, iParam0);
			}
			else
			{
				iVar6 = func_213(&(Global_93682.f_3));
				if (iVar6 > -1)
				{
					Global_106565.f_24980.f_4[iVar6] = 0;
				}
			}
		}
		Global_87890 = iParam2;
		Global_93719 = iParam0;
		func_148(iParam0, sParam1, iParam4, iParam5);
		if (unk_0xCE3CFF625BEBAA04(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_93719)
	{
	}
}

void func_148(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_149(&Global_100114, unk_0xD178EF744F20B712(), iParam0, uParam1, iParam3, iParam2);
}

void func_149(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_42();
	uParam0->f_1 = func_202();
	unk_0x615E8CCE4183DFB7(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		func_175(&(uParam0->f_2884), 0);
		func_174(unk_0x33CD235DF1E6A94E());
		func_167(unk_0x33CD235DF1E6A94E(), 0);
		unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_106565.f_2357.f_539.f_294[iVar1];
		if (iVar1 == func_166())
		{
			func_160(unk_0x33CD235DF1E6A94E(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_93407[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_93407[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_93407[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_93407[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_93407[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_93407[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_93407[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_93407[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_93407[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_93407[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_106565.f_2357.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_106565.f_2357.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_106565.f_20558.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_53668[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_106565.f_2357.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_106565.f_2357.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_106565.f_2357.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_106565.f_2357.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_106565.f_2357.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_106565.f_2357[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x75D54ED6C1AD1642(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	unk_0x75D54ED6C1AD1642(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	unk_0x75D54ED6C1AD1642(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_151(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_150(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_150(var uParam0)
{
	*uParam0 = Global_89561;
	uParam0->f_1 = Global_89562;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_151(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x33CD235DF1E6A94E();
	}
	if (unk_0x765F6FEEFF39224F(iParam2))
	{
		uParam1->f_5 = func_46(iParam2);
	}
	if (func_159(iParam2, &iVar0, iParam3, iParam5))
	{
		func_152(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x765F6FEEFF39224F(iVar0))
	{
		if (!unk_0xD62C4419A41F106A(iVar0, 0))
		{
			if (unk_0xD470A4E16E9AAE0E(iVar0, joaat("skylift")) && unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iVar0, 0))
			{
				func_152(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_152(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x91D5C8283D19AF49(iParam2, 0))
	{
		func_154(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_153(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_153(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_93682.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_154(var uParam0, int iParam1, int iParam2)
{
	func_62(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_156(iParam1, 145, 0);
	uParam0->f_11 = func_82(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_155(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xFBB1F99A825CAB09(iParam1, true) };
		uParam0->f_6 = unk_0xC472E34C8FBEC678(iParam1);
		uParam0->f_3 = { unk_0x43D8A2CCB19FE8A8(iParam1) };
		if (unk_0xD4B4F68F3449CBEC(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_71314 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_155(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x765F6FEEFF39224F(Global_70409.f_484[iVar0]))
		{
			if (iParam0 == Global_70409.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_156(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	if (!unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x765F6FEEFF39224F(Global_91043[iVar0]))
		{
			if (Global_91043[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_91053[iVar0])
				{
					if (iParam2 == 0 || unk_0x541D5C57194E73C4(iParam0) == func_157(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_157(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_45(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_158(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_158(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_106565.f_9079.f_99.f_58[128] && !Global_106565.f_9079.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_106565.f_9079.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_106565.f_9079.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_159(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam0))
		{
			if (iParam0 == unk_0x33CD235DF1E6A94E())
			{
				*uParam1 = unk_0x8918EC905FC8975D();
			}
			else
			{
				*uParam1 = unk_0xF2C96862595654B4(iParam0, 1);
			}
			if (unk_0x765F6FEEFF39224F(*uParam1))
			{
				if (unk_0x91D5C8283D19AF49(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(*uParam1, true), unk_0xFBB1F99A825CAB09(iParam0, true), true) < 100f)
					{
						if (unk_0xD470A4E16E9AAE0E(*uParam1, joaat("taxi")))
						{
							if (unk_0x7BDC41A7CA0C77A2(*uParam1, -1, 0) != iParam0 && unk_0x7BDC41A7CA0C77A2(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_83(*uParam1, func_42(), 1))
						{
							sVar0 = unk_0xD178EF744F20B712();
							if (!unk_0xCE3CFF625BEBAA04(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0xF0D230FB550CD6EB(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xA0EDFFB6CF5B314A(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x821D9C8EA372B2F8(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0xD470A4E16E9AAE0E(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_160(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		iVar0 = func_46(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_165(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_164(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_45(iVar0))
		{
			uParam1->f_59 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0xB331FCEB94EB05C8() && unk_0x541D5C57194E73C4(iParam0) == unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			if (func_163(161, iParam3))
			{
				uParam1->f_59 = func_161(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_161(752, iParam3, 0);
			}
			uParam1->f_60 = func_161(753, iParam3, 0);
			uParam1->f_61 = func_161(754, iParam3, 0);
		}
		if (unk_0xB331FCEB94EB05C8() && iParam0 == unk_0x33CD235DF1E6A94E())
		{
			if (func_163(161, iParam3))
			{
				uParam1->f_59 = func_161(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_161(752, iParam3, 0);
			}
		}
	}
}

int func_161(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_162(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_162(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_142();
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

int func_163(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2571340[iParam0 /*3*/][func_162(iParam1)];
	if (unk_0x0F0A07F7B2FAAE06(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_164(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x063A77907C209DC4(iParam0, iParam1);
		*uParam3 = unk_0x5856CD5A7124DF2D(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0xFB6FED41DB480F1C(iParam0) && unk_0x5692743CF44411A6(iParam0) != -1)
				{
					*uParam2 = unk_0x5692743CF44411A6(iParam0);
					*uParam3 = unk_0xB0A641F421F4D8CB(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_165(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xA603FBA9F3C17D3A(iParam0, iParam1);
		*uParam3 = unk_0xCEB55689C694866C(iParam0, iParam1);
		*uParam4 = unk_0x8069BBC84D092E17(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_166()
{
	func_43();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_167(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_46(iParam0);
	if (func_45(iVar0) && !unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (iParam0 == unk_0x33CD235DF1E6A94E())
		{
			func_168(iParam0, &(Global_106565.f_2357.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_106565.f_2357.f_539.f_1730[iVar2 /*4*/][iVar0] = unk_0x6FB61E0E6BCC8486(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xE208BE5EDCD25485();
					if (Global_106565.f_2357.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_106565.f_2357.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x6F8F62A5243893D1(unk_0x95B959F18401C09A(), &iVar3);
			if (iVar0 == 0)
			{
				unk_0x12B6E23F244DDB0F(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x12B6E23F244DDB0F(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x12B6E23F244DDB0F(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_168(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_173(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0x7D8E16FB3C783D5E(iParam0, func_173(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0xFAF00EC53D4815FE(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x4A37FD3869B2D716(iParam0, Var4);
					Var4.f_4 = unk_0x47098D39C996AE48(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x29577D0C92766C53(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_171(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xCC2C88B9353CAF70(iParam0, Var4, iVar2))
						{
							unk_0x8950ED5730F62EE8(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_171(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0xEE9976E9D3881F89();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0x078B659F6F2C8960(iVar5, &Var7) && !func_170(Var7.f_1)) && iVar9 < 51)
			{
				if (!unk_0xC4ED190294E9E658(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0xFAF00EC53D4815FE(iParam0, Var4);
					if (unk_0xEAF6E82C7BDE5A4C(iParam0, Var4, 0))
					{
						Var4.f_3 = unk_0x4A37FD3869B2D716(iParam0, Var4);
						Var4.f_4 = unk_0x47098D39C996AE48(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x29577D0C92766C53(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x333B87730CE53032(iVar5))
					{
						if (unk_0xB94227C531A24A5C(iVar5, iVar1, &Var8))
						{
							if (!func_169(Var8.f_3))
							{
								if (unk_0xCC2C88B9353CAF70(iParam0, Var4, Var8.f_3))
								{
									unk_0x8950ED5730F62EE8(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!unk_0xEAF6E82C7BDE5A4C(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_169(int iParam0)
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_170(int iParam0)
{
	if (unk_0xB331FCEB94EB05C8())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
			case 1198256469:
			case -1238556825:
			case -1355376991:
				return 1;
				break;
			}
	}
	return 0;
}

int func_171(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_172(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x333B87730CE53032(iVar1))
					{
						if (unk_0xB94227C531A24A5C(iVar1, iVar2, &Var5))
						{
							if (!func_169(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_172(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xEE9976E9D3881F89();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x078B659F6F2C8960(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_173(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_174(int iParam0)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (func_45(iVar0) && !unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		Global_106565.f_2357.f_539.f_294[iVar0] = unk_0xEB5DD88FB5DFC736(iParam0);
	}
}

void func_175(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
	uParam0->f_3 = unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E());
	uParam0->f_5 = unk_0xDBAC1EFC22D74E44(unk_0x33CD235DF1E6A94E());
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		uParam0->f_4 = unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A());
	}
	if (vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x1BCDA92AD0A7835B(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0x0E4018692D92041D(Global_71838, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0x0E4018692D92041D(Global_71838, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0x0E4018692D92041D(Global_71838, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0x0E4018692D92041D(Global_71838, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == unk_0x30B9FCF52BAAEB11(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_179(&iVar0))
		{
			if (func_177(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar3 = func_42();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_176(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_176(vector3 vParam0, char* sParam1, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xA4EE7D490EB4E0C9(vParam0))
	{
		iVar0 = unk_0x30B9FCF52BAAEB11(vParam2, sParam1);
		if (!unk_0xDE9B75BB528AC06E(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x09D41AEC5DBEC2D9(vParam0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_177(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_178(*uParam1, 0f, 0f, 0f, 0);
}

bool func_178(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_179(var uParam0)
{
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (func_201())
		{
			*uParam0 = func_184(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), 6, -1, 0, 1, -1);
			if (func_183(*uParam0) && !func_180(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_180(int iParam0)
{
	return func_181(iParam0, 0, 1);
}

int func_181(int iParam0, int iParam1, bool bParam2)
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
		if (func_18() == 0)
		{
			return unk_0x0E4018692D92041D(func_161(func_182(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x0E4018692D92041D(Global_106565.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_182(int iParam0)
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

int func_183(int iParam0)
{
	return func_181(iParam0, 5, 1);
}

int func_184(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 51)
	{
		if (iParam1 == 6 || iParam1 == func_200(iVar0))
		{
			if (!bParam3 || func_199(iVar0))
			{
				fVar1 = unk_0x16E00F066AFFEA0D(vParam0, func_185(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_185(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_196(Global_95769);
			break;
		
		case 46:
			if (Global_1589661 != func_195())
			{
				if (func_194(Global_1589661))
				{
					return func_187(2, 2);
				}
				else if (func_186(Global_1589661))
				{
					return func_187(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 50:
			return Global_1689895;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_186(int iParam0)
{
	if (iParam0 != func_195())
	{
		if ((unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 0) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 1)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_187(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1589661 != func_195())
	{
		if (iParam1 == 3)
		{
			if (func_188(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0x0E4018692D92041D(Global_1589819[Global_1589661 /*818*/].f_273.f_253, 4))
			{
				if (func_188(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[Global_1589661 /*818*/].f_273.f_253, 5))
			{
				if (func_188(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_188(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_193(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_193(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_191(iParam0) };
	}
	else
	{
		Var2 = { func_190(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_189(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_189(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0xCD1EDCB38767B47C(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_189(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = sin(fParam1);
	fVar2 = cos(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_190(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_191(int iParam0)
{
	return func_192(iParam0);
}

struct<6> func_192(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_193(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_194(int iParam0)
{
	if (iParam0 != func_195())
	{
		if ((unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 3) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 4)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_195()
{
	return -1;
}

Vector3 func_196(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_197() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_197()
{
	return func_198(unk_0x95B959F18401C09A());
}

var func_198(int iParam0)
{
	return unk_0xA8B379916562FD8E(Global_2424047[iParam0 /*416*/].f_309.f_3, 28, 31);
}

int func_199(int iParam0)
{
	return func_181(iParam0, 0, 0);
}

int func_200(int iParam0)
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

bool func_201()
{
	return Global_93734.f_339 > 0;
}

var func_202()
{
	var uVar0;
	
	func_212(&uVar0, unk_0xE6A7CE90720B9037());
	func_211(&uVar0, unk_0x7EA67BD818402745());
	func_210(&uVar0, unk_0x13348E86D5B8A052());
	func_205(&uVar0, unk_0x020A28FAE1C09250());
	func_204(&uVar0, unk_0x2C02CAA9C4127339());
	func_203(&uVar0, unk_0xED3F08F762AAA55A());
	return uVar0;
}

void func_203(var uParam0, int iParam1)
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

void func_204(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_205(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_209(*uParam0);
	iVar1 = func_207(*uParam0);
	if (iParam1 < 1 || iParam1 > func_206(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_206(int iParam0, int iParam1)
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

int func_207(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_208(unk_0x0E4018692D92041D(iParam0, 31), -1, 1)) + 2011;
}

int func_208(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_209(int iParam0)
{
	return iParam0 & 15;
}

void func_210(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_211(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_213(char* sParam0)
{
	if (unk_0xCE3CFF625BEBAA04("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0xCE3CFF625BEBAA04("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0xCE3CFF625BEBAA04("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0xCE3CFF625BEBAA04("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_214(int iParam0)
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

int func_215(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x36163153849DFDA1(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_216(iVar0, &sVar1);
		if (unk_0x36163153849DFDA1(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_216(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_217(uParam1, "Abigail1", func_219(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_218(iParam0), 1, 0);
			break;
		
		case 1:
			func_217(uParam1, "Abigail2", func_219(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_218(iParam0), 1, 0);
			break;
		
		case 2:
			func_217(uParam1, "Barry1", func_219(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_218(iParam0), 1, 0);
			break;
		
		case 3:
			func_217(uParam1, "Barry2", func_219(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_218(iParam0), 1, 1);
			break;
		
		case 4:
			func_217(uParam1, "Barry3", func_219(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_218(iParam0), 0, 0);
			break;
		
		case 5:
			func_217(uParam1, "Barry3A", func_219(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 6:
			func_217(uParam1, "Barry3C", func_219(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 7:
			func_217(uParam1, "Barry4", func_219(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_218(iParam0), 0, 0);
			break;
		
		case 8:
			func_217(uParam1, "Dreyfuss1", func_219(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_218(iParam0), 0, 0);
			break;
		
		case 9:
			func_217(uParam1, "Epsilon1", func_219(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_218(iParam0), 0, 0);
			break;
		
		case 10:
			func_217(uParam1, "Epsilon2", func_219(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_218(iParam0), 1, 0);
			break;
		
		case 11:
			func_217(uParam1, "Epsilon3", func_219(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_218(iParam0), 0, 0);
			break;
		
		case 12:
			func_217(uParam1, "Epsilon4", func_219(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_218(iParam0), 0, 0);
			break;
		
		case 13:
			func_217(uParam1, "Epsilon5", func_219(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_218(iParam0), 1, 0);
			break;
		
		case 14:
			func_217(uParam1, "Epsilon6", func_219(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 15:
			func_217(uParam1, "Epsilon7", func_219(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_218(iParam0), 0, 0);
			break;
		
		case 16:
			func_217(uParam1, "Epsilon8", func_219(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_218(iParam0), 1, 0);
			break;
		
		case 17:
			func_217(uParam1, "Extreme1", func_219(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 18:
			func_217(uParam1, "Extreme2", func_219(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 19:
			func_217(uParam1, "Extreme3", func_219(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 20:
			func_217(uParam1, "Extreme4", func_219(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_218(iParam0), 0, 0);
			break;
		
		case 21:
			func_217(uParam1, "Fanatic1", func_219(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_218(iParam0), 1, 0);
			break;
		
		case 22:
			func_217(uParam1, "Fanatic2", func_219(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_218(iParam0), 1, 0);
			break;
		
		case 23:
			func_217(uParam1, "Fanatic3", func_219(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_218(iParam0), 0, 1);
			break;
		
		case 24:
			func_217(uParam1, "Hao1", func_219(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_218(iParam0), 0, 1);
			break;
		
		case 25:
			func_217(uParam1, "Hunting1", func_219(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 26:
			func_217(uParam1, "Hunting2", func_219(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 27:
			func_217(uParam1, "Josh1", func_219(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_218(iParam0), 1, 0);
			break;
		
		case 28:
			func_217(uParam1, "Josh2", func_219(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_218(iParam0), 1, 1);
			break;
		
		case 29:
			func_217(uParam1, "Josh3", func_219(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_218(iParam0), 1, 1);
			break;
		
		case 30:
			func_217(uParam1, "Josh4", func_219(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_218(iParam0), 1, 0);
			break;
		
		case 31:
			func_217(uParam1, "Maude1", func_219(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 32:
			func_217(uParam1, "Minute1", func_219(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 33:
			func_217(uParam1, "Minute2", func_219(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 34:
			func_217(uParam1, "Minute3", func_219(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 35:
			func_217(uParam1, "MrsPhilips1", func_219(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_218(iParam0), 0, 0);
			break;
		
		case 36:
			func_217(uParam1, "MrsPhilips2", func_219(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_218(iParam0), 0, 0);
			break;
		
		case 37:
			func_217(uParam1, "Nigel1", func_219(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_218(iParam0), 1, 0);
			break;
		
		case 38:
			func_217(uParam1, "Nigel1A", func_219(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_218(iParam0), 1, 1);
			break;
		
		case 39:
			func_217(uParam1, "Nigel1B", func_219(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_218(iParam0), 1, 1);
			break;
		
		case 40:
			func_217(uParam1, "Nigel1C", func_219(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_218(iParam0), 1, 1);
			break;
		
		case 41:
			func_217(uParam1, "Nigel1D", func_219(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_218(iParam0), 1, 1);
			break;
		
		case 42:
			func_217(uParam1, "Nigel2", func_219(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_218(iParam0), 1, 1);
			break;
		
		case 43:
			func_217(uParam1, "Nigel3", func_219(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_218(iParam0), 1, 1);
			break;
		
		case 44:
			func_217(uParam1, "Omega1", func_219(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_218(iParam0), 0, 0);
			break;
		
		case 45:
			func_217(uParam1, "Omega2", func_219(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_218(iParam0), 0, 0);
			break;
		
		case 46:
			func_217(uParam1, "Paparazzo1", func_219(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 47:
			func_217(uParam1, "Paparazzo2", func_219(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 48:
			func_217(uParam1, "Paparazzo3", func_219(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_218(iParam0), 0, 0);
			break;
		
		case 49:
			func_217(uParam1, "Paparazzo3A", func_219(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 50:
			func_217(uParam1, "Paparazzo3B", func_219(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 51:
			func_217(uParam1, "Paparazzo4", func_219(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_218(iParam0), 0, 0);
			break;
		
		case 52:
			func_217(uParam1, "Rampage1", func_219(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_218(iParam0), 0, 0);
			break;
		
		case 54:
			func_217(uParam1, "Rampage3", func_219(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_218(iParam0), 1, 0);
			break;
		
		case 55:
			func_217(uParam1, "Rampage4", func_219(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_218(iParam0), 1, 0);
			break;
		
		case 56:
			func_217(uParam1, "Rampage5", func_219(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_218(iParam0), 0, 0);
			break;
		
		case 53:
			func_217(uParam1, "Rampage2", func_219(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_218(iParam0), 1, 0);
			break;
		
		case 57:
			func_217(uParam1, "TheLastOne", func_219(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 58:
			func_217(uParam1, "Tonya1", func_219(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 59:
			func_217(uParam1, "Tonya2", func_219(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 60:
			func_217(uParam1, "Tonya3", func_219(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 61:
			func_217(uParam1, "Tonya4", func_219(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		case 62:
			func_217(uParam1, "Tonya5", func_219(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_218(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_217(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_218(int iParam0)
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

struct<2> func_219(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_214(iParam0) };
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

int func_220(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_221(Global_106565.f_9079.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_221(Global_106565.f_9079.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_221(Global_106565.f_9079.f_99.f_205[11]);
			break;
		
		case 90:
			return func_221(Global_106565.f_9079.f_99.f_205[7]);
			break;
		
		case 93:
			return func_221(Global_106565.f_9079.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_222(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x36163153849DFDA1(sParam0);
	iVar1 = func_223(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_223(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_84500[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_224(bool bParam0)
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

void func_225()
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_107)
	{
		case 0:
			func_147(1, sLocal_70, 0, 1, 0, 1);
			func_3(500);
			unk_0x3C05A6D663EA1B6A("HUD_321_GO", false, -1);
			func_258(&(Local_46.f_1), 8);
			func_258(&(Local_46.f_1), 4);
			func_258(&(Local_46.f_1), 2);
			func_258(&(Local_46.f_1), 1);
			func_257();
			uLocal_356 = func_256();
			func_255(&uLocal_217, 1050253722, 1073741824);
			if (Global_106565.f_25067.f_2 < 2)
			{
				func_254("FM_IHELP_SLP", -1);
				Global_106565.f_25067.f_2++;
			}
			iLocal_107++;
			break;
		
		case 1:
			unk_0x5A2C46836B4DF5B3(Local_46, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
			if (func_248(&Local_46, 1, 0, 1, 3, 1, 0, 0))
			{
				unk_0x151D1B83673FCE66();
				func_247(&Local_46);
				iLocal_110 = unk_0xE3903F59E2F22150();
				iLocal_107++;
			}
			if (!Local_46.f_5)
			{
				if (func_246(Local_46.f_1, 8))
				{
					Local_46.f_5 = 1;
					if (func_8(iLocal_365))
					{
						unk_0x9700629998A577D7(unk_0x541D5C57194E73C4(iLocal_365));
					}
					func_244(&Local_210, 0, 1, 2000, 1, 0, 0, 1);
					unk_0xE2AE4E6F010FA5C5(0);
					if (func_8(unk_0x8918EC905FC8975D()))
					{
						unk_0x2EE596932F00971D(unk_0x8918EC905FC8975D(), 0);
					}
					unk_0x35675D19812BDF22(true);
					unk_0xDFF589A2149528CE(true);
					unk_0x7CED302277C0F3D3("RACE_INTRO_GENERIC");
					unk_0x1E76B6E2B806EE0F(1);
					Local_46.f_7 = unk_0xE3903F59E2F22150();
					Local_209.f_10 = Local_46.f_7;
					unk_0xDEFB5E2E5CBD460A("STREET_RACE_DURING_RACE");
					iVar0 = 0;
					while (iVar0 <= 7)
					{
						Local_119[iVar0 /*50*/].f_43 = 1;
						unk_0x7B1011A61F402324(Local_119[iVar0 /*50*/].f_5, "STREET_RACE_NPC_GENERAL", 0);
						iVar0++;
					}
				}
				else if (timera() > 2800 && iLocal_111 == 5)
				{
					if (unk_0xCB75C331DD5DDCCC(1) == 4)
					{
						if (!func_243(2, &iLocal_106))
						{
							if (func_8(iLocal_365))
							{
								unk_0x9700629998A577D7(unk_0x541D5C57194E73C4(iLocal_365));
							}
							unk_0x0B1F8038F56C12B7("CamPushInNeutral", 0, 0);
							unk_0x0F8EAEEC97DDBCB3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							func_242(2, &iLocal_106);
						}
					}
				}
			}
			break;
		
		case 2:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_119[iVar0 /*50*/].f_17.f_13)
				{
					iVar1++;
				}
				iVar0++;
			}
			if (iVar1 == 8)
			{
				if (iLocal_112 == 0)
				{
					iLocal_112 = unk_0xE3903F59E2F22150();
				}
			}
			if (Local_209.f_13)
			{
				Local_46.f_6 = 1;
				Local_209.f_7 = Local_209.f_6;
				func_241(&Local_209);
				iLocal_107++;
			}
			if (iLocal_112 != 0 && unk_0xE3903F59E2F22150() > iLocal_112 + 30000)
			{
				func_240(3);
				sLocal_113 = "CRACEFAIL1";
			}
			if (func_239(unk_0x33CD235DF1E6A94E()))
			{
				if (iLocal_369 < 0)
				{
					iLocal_369 = (unk_0xE3903F59E2F22150() + unk_0x9EC3B269A34A2BEE(2500, 5000));
				}
				else if (unk_0xE3903F59E2F22150() > iLocal_369)
				{
					unk_0xE9739440E5BF08EE(iLocal_370, "DISTANT_RACERS", Local_119[func_236() /*50*/].f_5, "ROAD_RACE_SOUNDSET", 0, 0);
					iLocal_369 = -1;
				}
			}
			else if (iLocal_369 > 0)
			{
				iLocal_369 = -1;
			}
			func_229(Local_209);
			func_226();
			break;
		
		case 3:
			unk_0x7CED302277C0F3D3("STREET_RACE_DURING_RACE");
			func_240(2);
			break;
	}
}

void func_226()
{
	if (Local_46.f_5 && !Local_46.f_6)
	{
		if (unk_0xF1CDE9FD207C4CD8(2, 190))
		{
			if (unk_0xE3903F59E2F22150() > iLocal_110 + 500)
			{
				func_228(((unk_0xE3903F59E2F22150() - iLocal_110) - 500), 3000, "CRACEQUIT", 6, 0, 10, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1);
				if (unk_0xE3903F59E2F22150() > iLocal_110 + 3500)
				{
					func_227("CRACEFAIL1");
				}
			}
		}
		else
		{
			iLocal_110 = unk_0xE3903F59E2F22150();
		}
	}
}

void func_227(char* sParam0)
{
	func_240(3);
	sLocal_113 = sParam0;
}

void func_228(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_113(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_112(0, iVar0);
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

void func_229(struct<5> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	if (func_235(unk_0x33CD235DF1E6A94E()))
	{
		unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 272, 1);
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			unk_0xD7BB6EC772196237(Local_47.f_64, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), &iVar0);
			unk_0xFF6E5EAB585ABA6A(Local_47.f_64, iVar0, &vVar1);
			if (!unk_0x91D5C8283D19AF49(unk_0x8918EC905FC8975D(), 0))
			{
				iLocal_61 = 1;
				iLocal_64 = 3;
			}
			if (!func_234("CRACESTUCK"))
			{
				if (unk_0x8AE34E8B10270D31(unk_0x8918EC905FC8975D()))
				{
					func_233("CRACESTUCK");
					iLocal_62 = unk_0xE3903F59E2F22150() + 1000;
				}
				if (((unk_0x67001C5CC88C66A8(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 2, 15000) || unk_0x67001C5CC88C66A8(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 3, 30000)) || unk_0x67001C5CC88C66A8(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0, 10000)) || unk_0x67001C5CC88C66A8(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 1, 3000))
				{
					func_233("CRACESTUCK");
					iLocal_62 = unk_0xE3903F59E2F22150() + 1000;
				}
				if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vVar1) > 900f)
				{
					func_233("CRACESTUCK");
					iLocal_62 = unk_0xE3903F59E2F22150() + 1000;
				}
			}
			else if (unk_0xE3903F59E2F22150() > iLocal_62)
			{
				if (((((!unk_0x8AE34E8B10270D31(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)) && !unk_0x67001C5CC88C66A8(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 2, 15000)) && !unk_0x67001C5CC88C66A8(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 3, 30000)) && !unk_0x67001C5CC88C66A8(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0, 10000)) && !unk_0x67001C5CC88C66A8(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 1, 3000)) && vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vVar1) < 400f)
				{
					unk_0xEDF90B96BED57BCE(1);
				}
			}
		}
	}
	if ((unk_0xF1CDE9FD207C4CD8(0, 75) || unk_0x1CAA347A3C84C225(0, 75)) || iLocal_61 == 1)
	{
		switch (iLocal_64)
		{
			case 0:
				iLocal_63 = unk_0xE3903F59E2F22150();
				iLocal_64 = 1;
				break;
			
			case 1:
				if ((unk_0xE3903F59E2F22150() - iLocal_63) > 500)
				{
					iLocal_63 = unk_0xE3903F59E2F22150();
					iLocal_64 = 2;
				}
				break;
			
			case 2:
				func_228((unk_0xE3903F59E2F22150() - iLocal_63), 1500, "RACES_RMETER", 6, 0, 10, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1);
				if ((unk_0xE3903F59E2F22150() - iLocal_63) >= 1500)
				{
					unk_0x3FD9339AA95E323F(0, 75, 1);
					iLocal_64 = 3;
				}
				break;
			
			case 3:
				if (unk_0x765F6FEEFF39224F(unk_0x8918EC905FC8975D()))
				{
					if (Param0.f_4 > 0)
					{
						vVar6 = { Local_47[(Param0.f_4 - 1) /*3*/] };
					}
					else
					{
						vVar6 = { Local_47[5 /*3*/] };
					}
					unk_0xD7BB6EC772196237(Local_47.f_64, vVar6, &iVar2);
					iVar3 = iVar2 + 1;
					unk_0xF62CD3B9A6291969(Local_47.f_64, &iVar7);
					if (iVar3 >= iVar7)
					{
						iVar3 = 0;
					}
					unk_0xFF6E5EAB585ABA6A(Local_47.f_64, iVar2, &vVar4);
					unk_0xFF6E5EAB585ABA6A(Local_47.f_64, iVar3, &vVar5);
					if (!unk_0x7E0147E36EF8D6AC(vVar4, 5f) || func_232(unk_0x8918EC905FC8975D(), vVar4, 1) < 5f)
					{
						func_231(500);
						func_23(unk_0x8918EC905FC8975D(), vVar4, func_230(vVar4, vVar5), 0, 1);
						unk_0x1A56D9C73BA20091(unk_0x8918EC905FC8975D());
						if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), unk_0x8918EC905FC8975D(), 0))
						{
							unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), unk_0x8918EC905FC8975D(), -1);
						}
						unk_0xD6EDA274D82E8678(0f, 1065353216);
						unk_0xC7E6A5D90DED6E0B(0f);
						if (func_234("CRACESTUCK"))
						{
							unk_0xEDF90B96BED57BCE(1);
						}
						func_3(500);
						iLocal_64 = 4;
					}
				}
				break;
			
			case 4:
				if (!unk_0xF1CDE9FD207C4CD8(0, 75) && !unk_0x1CAA347A3C84C225(0, 75))
				{
					unk_0xAE4810E427AD9203(0, 75, 1);
					iLocal_63 = -1;
					iLocal_61 = 0;
					iLocal_64 = 0;
				}
				break;
		}
	}
	else
	{
		iLocal_63 = -1;
		iLocal_61 = 0;
		iLocal_64 = 0;
	}
}

float func_230(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3)
{
	return unk_0x174C48E9E544E9A8((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_231(int iParam0)
{
	if (unk_0x73DA1542B2F0C458())
	{
		if (!unk_0x75A50A9E5219C397())
		{
			unk_0x7EDEAEAED85BEE4F(iParam0);
			while (!unk_0xBB5E373390A5F824())
			{
				unk_0xC5565C10067F0E40(0f);
				unk_0x453924F2AAE93AD9(0f);
				unk_0x2E6EC0FAB080C550(0f, 0f);
				wait(0);
			}
		}
	}
}

float func_232(int iParam0, vector3 vParam1, bool bParam2)
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

void func_233(char* sParam0)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 1, true, -1);
}

int func_234(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

int func_235(int iParam0)
{
	if (func_8(iParam0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_236()
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar1 = 0f;
	fVar2 = 1E+10f;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_238(Local_119[iVar0 /*50*/].f_5))
		{
			fVar1 = func_237(unk_0x33CD235DF1E6A94E(), Local_119[iVar0 /*50*/].f_5, 1);
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar3;
}

float func_237(int iParam0, int iParam1, bool bParam2)
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

int func_238(int iParam0)
{
	if (func_8(iParam0))
	{
		if (unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			if (!unk_0x17260B4EA0652E1C(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_239(int iParam0)
{
	float fVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		fVar0 = unk_0x8BB475EA09C9A0EB(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

void func_240(int iParam0)
{
	iLocal_107 = 0;
	iLocal_212 = iParam0;
}

void func_241(var uParam0)
{
	if (unk_0xE38E3CF1625A4145(uParam0->f_14))
	{
		unk_0x1ABDB383C83A336A(&(uParam0->f_14));
	}
	if (unk_0xE38E3CF1625A4145(uParam0->f_15))
	{
		unk_0x1ABDB383C83A336A(&(uParam0->f_15));
	}
	if (uParam0->f_16 != 0)
	{
		unk_0x177FDBE7D68BB089(uParam0->f_16);
	}
	if (uParam0->f_17 != 0)
	{
		unk_0x177FDBE7D68BB089(uParam0->f_17);
	}
}

void func_242(int iParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(iParam1, iParam0);
}

bool func_243(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(*iParam1, iParam0);
}

void func_244(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()), 64);
	}
	if (!unk_0x286C823E0969F22A())
	{
		unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			unk_0x50E893C437D3AC10(unk_0x33CD235DF1E6A94E(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0x3AAF29F17A3F9825(0, 0, 3, 0);
	}
	else
	{
		unk_0x63F0B040CE6EDF0F(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0xEDF90B96BED57BCE(1);
	}
	else
	{
		if (unk_0x117DAF3BF7232886(uParam0->f_4))
		{
			if (unk_0x49D25022440E65EE(uParam0->f_4))
			{
				unk_0x189377BFBDC9127F(uParam0->f_4, false);
			}
			unk_0x2F8A4DF7D0DFF0A8(uParam0->f_4, 1);
		}
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			unk_0x0CDD28A9DFCE2FCE(unk_0x33CD235DF1E6A94E(), true, 0);
		}
		iVar0 = unk_0x8918EC905FC8975D();
		if (unk_0x765F6FEEFF39224F(iVar0))
		{
			unk_0x0CDD28A9DFCE2FCE(iVar0, true, 0);
		}
		unk_0xB4F447A5639E2006("TIME_LAPSE");
		if (unk_0x7C71681384076318("TOD_SHIFT_SCENE"))
		{
			unk_0xCBE6AF58552C63B2(uParam0->f_10);
			unk_0xB4F447A5639E2006("TIME_LAPSE");
			unk_0x7CED302277C0F3D3("TOD_SHIFT_SCENE");
		}
	}
	func_138(bParam1, 1, 0, 0, 0, 0);
	func_245();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0xE58124354EC682AC(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xE58124354EC682AC(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0xBB5E373390A5F824())
		{
			unk_0xACCDA78123DB57B0(250);
		}
	}
	if (!bParam1)
	{
		if (Global_106565.f_32743.f_4801 != -15)
		{
			Global_106565.f_32743.f_4801 = func_202();
		}
	}
}

void func_245()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0x98E765CB9E761233(Global_106565.f_14135[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

bool func_246(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_247(int iParam0)
{
	unk_0x83A1D480DB0B52CC(iParam0);
	unk_0xC16C998D785ABF3A();
}

int func_248(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	
	if (bParam7)
	{
		func_253(&(iParam0->f_2), 1);
	}
	if (!func_41(&(iParam0->f_2)))
	{
		func_26(&(iParam0->f_2));
	}
	unk_0x5C58D0ADA22491FA(1);
	unk_0x5A2C46836B4DF5B3(*iParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	if (bParam5)
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	if (bParam7)
	{
		if (func_41(&(iParam0->f_2)))
		{
			if (func_37(&(iParam0->f_2)))
			{
				fVar3 = iParam0->f_2.f_2;
			}
			else
			{
				fVar3 = (func_28(1) - iParam0->f_2.f_1);
				if (fVar3 < 0f)
				{
					fVar3 = 0f;
					func_39(&(iParam0->f_2));
					if (func_246(iParam0->f_1, 1))
					{
						func_251(&(iParam0->f_1), 8);
						unk_0x1256E5EA03020804(18, &iVar5, &iVar6, &iVar7, &uVar8);
						unk_0xBB698266C5FDF0A7(*iParam0, "SET_MESSAGE");
						func_50("CNTDWN_GO");
						unk_0x4D9DA18AB3C2A466(iVar5);
						unk_0x4D9DA18AB3C2A466(iVar6);
						unk_0x4D9DA18AB3C2A466(iVar7);
						unk_0x295B86DE57A0721D(true);
						unk_0x818901B332D5541D();
						return 1;
					}
					func_26(&(iParam0->f_2));
				}
			}
		}
		else
		{
			fVar3 = iParam0->f_2.f_1;
		}
		iVar4 = floor(fVar3);
	}
	else
	{
		iVar4 = floor(func_36(&(iParam0->f_2)));
	}
	iVar9 = (iVar4 - iParam4);
	bVar10 = false;
	if (!func_246(iParam0->f_1, 8))
	{
		if (iVar9 >= -3 && !func_246(iParam0->f_1, 1))
		{
			func_251(&(iParam0->f_1), 1);
			unk_0x0F8EAEEC97DDBCB3(-1, sVar0, sVar2, 1);
			func_250(iParam0, iVar9);
		}
		else if (iVar9 >= -2 && !func_246(iParam0->f_1, 2))
		{
			func_251(&(iParam0->f_1), 2);
			unk_0x0F8EAEEC97DDBCB3(-1, sVar0, sVar2, 1);
			func_250(iParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_246(iParam0->f_1, 4))
		{
			func_251(&(iParam0->f_1), 4);
			unk_0x0F8EAEEC97DDBCB3(-1, sVar0, sVar2, 1);
			func_250(iParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_246(iParam0->f_1, 16))
		{
			if (unk_0x7EECA16E87982278((func_36(&(iParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_251(&(iParam0->f_1), 16);
					unk_0x0F8EAEEC97DDBCB3(-1, sVar1, sVar2, 1);
				}
			}
		}
		else if (iVar9 >= 0 && !func_246(iParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				unk_0x0F8EAEEC97DDBCB3(-1, sVar1, sVar2, 1);
			}
			func_251(&(iParam0->f_1), 8);
			unk_0x1256E5EA03020804(18, &iVar11, &iVar12, &iVar13, &uVar14);
			unk_0xBB698266C5FDF0A7(*iParam0, "SET_MESSAGE");
			func_50("CNTDWN_GO");
			unk_0x4D9DA18AB3C2A466(iVar11);
			unk_0x4D9DA18AB3C2A466(iVar12);
			unk_0x4D9DA18AB3C2A466(iVar13);
			unk_0x295B86DE57A0721D(true);
			unk_0x818901B332D5541D();
			if (!bParam1)
			{
				bVar10 = true;
			}
		}
	}
	else if (iVar9 == 1)
	{
		bVar10 = true;
	}
	if ((iParam2 && func_249()) || iVar4 > 5)
	{
		bVar10 = true;
	}
	if (bVar10)
	{
		if (bParam3)
		{
			iParam0->f_1 = 0;
			func_39(&(iParam0->f_2));
		}
		return 1;
	}
	return 0;
}

int func_249()
{
	if (unk_0xD9C92B0885A075F8())
	{
		return 0;
	}
	if (unk_0xF1CDE9FD207C4CD8(0, 18) || unk_0xF1CDE9FD207C4CD8(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_250(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	unk_0x1256E5EA03020804(12, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0xBB698266C5FDF0A7(*uParam0, "SET_MESSAGE");
	unk_0x75D3F9044123D4F9(-1);
	unk_0x713FEBE56D2BD403("NUMBER");
	unk_0xE800DC85FDF60F85(unk_0xEE14D9A9F531ADDC(iParam1));
	unk_0x36F3AA9FFAAF8606();
	unk_0x4D9DA18AB3C2A466(iVar0);
	unk_0x4D9DA18AB3C2A466(iVar1);
	unk_0x4D9DA18AB3C2A466(iVar2);
	unk_0x295B86DE57A0721D(true);
	unk_0x818901B332D5541D();
}

void func_251(var uParam0, int iParam1)
{
	func_252(uParam0, iParam1);
}

void func_252(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_253(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x8950ED5730F62EE8(iParam0, 4);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(iParam0, 4);
	}
	if (unk_0x0E4018692D92041D(*iParam0, 4))
	{
	}
}

void func_254(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

void func_255(var uParam0, int iParam1, int iParam2)
{
	if (func_41(&(uParam0->f_1)))
	{
		func_39(&(uParam0->f_1));
	}
	if (func_41(&(uParam0->f_4)))
	{
		func_39(&(uParam0->f_4));
	}
	func_29(&(uParam0->f_10));
	uParam0->f_134 = iParam1;
	uParam0->f_135 = iParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

int func_256()
{
	return unk_0x199B24FF79A52CCF("MP_BIG_MESSAGE_FREEMODE");
}

void func_257()
{
	iLocal_370 = unk_0x8CCC0A0504C52531();
	iLocal_369 = -1;
}

void func_258(var uParam0, int iParam1)
{
	func_259(uParam0, iParam1);
}

void func_259(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_260()
{
	int iVar0;
	
	switch (iLocal_107)
	{
		case 0:
			func_147(0, sLocal_69, 0, 1, 0, 1);
			iLocal_111 = 0;
			iLocal_107++;
			break;
		
		case 1:
			if (func_261())
			{
				unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
				unk_0x9611832841071B69(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), false);
				iVar0 = 0;
				while (iVar0 <= 7)
				{
					if (func_8(Local_119[iVar0 /*50*/]))
					{
						unk_0x9611832841071B69(Local_119[iVar0 /*50*/], false);
					}
					if (func_8(Local_119[iVar0 /*50*/].f_5))
					{
						unk_0x9611832841071B69(Local_119[iVar0 /*50*/].f_5, false);
					}
					iVar0++;
				}
				func_3(500);
				iLocal_107++;
			}
			else if (func_243(0, &iLocal_106))
			{
				func_21(&Local_46);
				unk_0xBC6AA949398C551E(Local_47.f_64);
				func_12(197, 1, 0, 1, 0);
				unk_0xEABEE41AE38D3281("STOCK_RACE_INTRO", "ROAD_RACE_SOUNDSET");
				iVar0 = 0;
				while (iVar0 <= 7)
				{
					if (func_8(Local_119[iVar0 /*50*/]))
					{
						unk_0x9611832841071B69(Local_119[iVar0 /*50*/], true);
					}
					if (func_8(Local_119[iVar0 /*50*/].f_5))
					{
						unk_0x9611832841071B69(Local_119[iVar0 /*50*/].f_5, true);
					}
					iVar0++;
				}
				if (!unk_0x765F6FEEFF39224F(iLocal_365))
				{
					if (!unk_0x73E7A21FD53144AB(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 2f) && !unk_0x73E7A21FD53144AB(Local_47.f_26[8 /*3*/], 2f))
					{
						if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
						{
							iLocal_365 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
							unk_0x0D21E1FDE062ED99(iLocal_365, true, 0);
							func_23(iLocal_365, Local_47.f_26[8 /*3*/] + vLocal_114, Local_47.f_54[8], 0, 1);
						}
						else
						{
							unk_0xB815670C37E03CDE(joaat("gauntlet"));
							if (unk_0x5D98D654CDC2165A(joaat("gauntlet")))
							{
								iLocal_365 = unk_0xC651C43AB13A15E5(joaat("gauntlet"), Local_47.f_26[8 /*3*/] + vLocal_114, Local_47.f_54[8], 1, 1, 0);
							}
						}
						if (func_8(iLocal_365))
						{
							unk_0x1A56D9C73BA20091(iLocal_365);
						}
					}
				}
				else if (func_8(iLocal_365))
				{
					if (!unk_0xEE984ED4E4A374BE(unk_0x33CD235DF1E6A94E(), iLocal_365))
					{
						unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iLocal_365, -1);
					}
					if (unk_0xAF60E30B2CC603B2(iLocal_365) != 4)
					{
						unk_0xD303E20CB0AE4AD0(iLocal_365, 4);
					}
					unk_0xC7E6A5D90DED6E0B(0f);
					unk_0xD6EDA274D82E8678(0f, 1065353216);
				}
			}
			break;
		
		case 2:
			func_240(1);
			break;
	}
}

int func_261()
{
	bool bVar0;
	int iVar1;
	
	switch (iLocal_111)
	{
		case 0:
			if (unk_0xBE799439B122CA21("TIME_LAPSE", 0, -1))
			{
				Local_210.f_4 = unk_0x00E62F31D05EB2AC("DEFAULT_SPLINE_CAMERA", 0);
				unk_0x9A24838D46B52597(Local_210.f_4, 2002.693f, 3097.819f, 50.8232f, 5.4256f, 0.0276f, -170.9332f, 10000, 0, 2);
				unk_0x9A24838D46B52597(Local_210.f_4, 2002.818f, 3097.488f, 48.0966f, 7.3944f, 0.0276f, -159.5117f, 10000, 0, 2);
				unk_0x63B608CD1957089E(Local_210.f_4, 40f);
				unk_0x189377BFBDC9127F(Local_210.f_4, true);
				unk_0x0F8EAEEC97DDBCB3(-1, "TIME_LAPSE_MASTER", 0, 1);
				func_244(&Local_210, 1, 0, 2000, 1, 0, 0, 1);
				unk_0xCE04CE961AF41AB9(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 1000f, 1, 0, 0, false);
				unk_0x35675D19812BDF22(false);
				unk_0xDFF589A2149528CE(false);
				settimera(0);
				func_242(0, &iLocal_106);
				switch (func_42())
				{
					case 0:
						unk_0x0B1F8038F56C12B7("MinigameEndMichael", 5000, 0);
						break;
					
					case 1:
						unk_0x0B1F8038F56C12B7("MinigameEndFranklin", 5000, 0);
						break;
					
					case 2:
						unk_0x0B1F8038F56C12B7("MinigameEndTrevor", 5000, 0);
						break;
				}
				iLocal_111++;
			}
			break;
		
		case 1:
			if (func_267(func_283(), 0, "", "", &Local_210, -1082130432, 0, 1, 1065353216))
			{
				unk_0xE0EAA5C6AE73CD58();
				settimera(0);
				iLocal_111++;
			}
			break;
		
		case 2:
			if (timera() > 1500)
			{
				if (func_8(iLocal_365))
				{
					unk_0x77C4189A8E5C57C2(unk_0x33CD235DF1E6A94E(), iLocal_365, Local_47.f_26[5 /*3*/], 0.95f, 0, unk_0x541D5C57194E73C4(iLocal_365), 786469, 3.5f, -1f);
					unk_0x9D8C631256FC1C8F("RADIO_01_CLASS_ROCK");
				}
				if (unk_0x7C71681384076318("TOD_SHIFT_SCENE"))
				{
					unk_0xCBE6AF58552C63B2(Local_210.f_10);
					unk_0xB4F447A5639E2006("TIME_LAPSE");
					unk_0x7CED302277C0F3D3("TOD_SHIFT_SCENE");
				}
				unk_0x75B136CE1E1EF4A5("RADIO_01_CLASS_ROCK", 1);
				iVar1 = 0;
				while (iVar1 <= 7)
				{
					if (func_8(Local_119[iVar1 /*50*/].f_5))
					{
						unk_0x902CC10ED3851CA2(Local_119[iVar1 /*50*/].f_5, 3);
					}
					iVar1++;
				}
				if (func_266())
				{
					vLocal_115 = { -0.7054f, 6.3148f, 2.0821f };
					vLocal_116 = { 0.9495f, 3.9011f, 2.7419f };
					vLocal_117 = { -0.567f, 2.6724f, 1.2077f };
					vLocal_118 = { 0.094f, -0.2423f, 0.7483f };
				}
				else if (func_265())
				{
					vLocal_115 = { -1.6831f, 6.0271f, 4.2228f };
					vLocal_116 = { -0.0245f, 3.5705f, 4.6855f };
					vLocal_117 = { -1.0281f, 4.6872f, 1.1868f };
					vLocal_118 = { -0.185f, 1.8112f, 1.1221f };
				}
				else
				{
					vLocal_115 = { -1.5802f, 5.8398f, 2.2274f };
					vLocal_116 = { 0.197f, 3.5006f, 2.8356f };
					vLocal_117 = { -0.6678f, 1.974f, 0.8876f };
					vLocal_118 = { 0.144f, -0.9013f, 0.417f };
				}
				iLocal_361 = unk_0x00E62F31D05EB2AC("DEFAULT_SCRIPTED_CAMERA", 0);
				unk_0x63B608CD1957089E(iLocal_361, 40f);
				unk_0x5A488F57F21B3451(iLocal_361, iLocal_365, vLocal_115, 1);
				unk_0x1C98D51D7C424A85(iLocal_361, iLocal_365, vLocal_116, 1);
				iLocal_362 = unk_0x00E62F31D05EB2AC("DEFAULT_SCRIPTED_CAMERA", 0);
				unk_0x63B608CD1957089E(iLocal_362, 40f);
				unk_0x5A488F57F21B3451(iLocal_362, iLocal_365, vLocal_117, 1);
				unk_0x1C98D51D7C424A85(iLocal_362, iLocal_365, vLocal_118, 1);
				unk_0x189377BFBDC9127F(iLocal_361, true);
				unk_0x8EB023915CEEDB99(iLocal_362, iLocal_361, 4000, 1, 1);
				unk_0x63F0B040CE6EDF0F(true, 0, 0, 1, 0, 0);
				unk_0x083F68B89E3EA476(iLocal_361, "ROAD_VIBRATION_SHAKE", 0.5f);
				unk_0x083F68B89E3EA476(iLocal_362, "ROAD_VIBRATION_SHAKE", 0.5f);
				settimera(0);
				unk_0xDEFB5E2E5CBD460A("RACE_INTRO_GENERIC");
				if (unk_0xEABEE41AE38D3281("STOCK_RACE_INTRO", "ROAD_RACE_SOUNDSET"))
				{
					unk_0x67EB575EFCCB9AD1();
				}
				iLocal_111++;
			}
			break;
		
		case 3:
			if (timera() > 6000)
			{
				unk_0xE2AE4E6F010FA5C5(0);
				iLocal_361 = unk_0xB1A92B63D6757EEF(26379945, 1960.154f, 3125.919f, 47.8242f, -2.4987f, 0.0002f, -95.2875f, 25f, 0, 2);
				iLocal_362 = unk_0xB1A92B63D6757EEF(26379945, 1963.017f, 3129.43f, 47.481f, -3.0689f, 0.0002f, -114.3019f, 25f, 0, 2);
				unk_0x189377BFBDC9127F(iLocal_361, true);
				unk_0x8EB023915CEEDB99(iLocal_362, iLocal_361, 7000, 0, 1);
				unk_0x083F68B89E3EA476(iLocal_361, "HAND_SHAKE", 0.1f);
				unk_0x083F68B89E3EA476(iLocal_362, "HAND_SHAKE", 0.1f);
				settimera(0);
				iLocal_111++;
			}
			break;
		
		case 4:
			if (timera() > 4900)
			{
				if (func_264(unk_0x33CD235DF1E6A94E(), -1817882002, 1))
				{
					unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
					if (func_8(iLocal_365))
					{
						unk_0x2EE596932F00971D(iLocal_365, 1);
					}
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
				}
			}
			if (timera() > 7000)
			{
				unk_0xE2AE4E6F010FA5C5(0);
				unk_0xC7E6A5D90DED6E0B(0f);
				unk_0xD6EDA274D82E8678(0f, 1065353216);
				iLocal_361 = unk_0xB1A92B63D6757EEF(26379945, 1990.664f, 3113.482f, 47.1558f, 0.8047f, 0.0484f, 56.7722f, 50f, 1, 2);
				iLocal_362 = unk_0xB1A92B63D6757EEF(26379945, unk_0x69E12C716D4FB8BB(), unk_0x4AE56AB92160A4AB(2), unk_0xD718803088B91796(), 0, 2);
				unk_0x8EB023915CEEDB99(iLocal_362, iLocal_361, 4000, 3, 1);
				settimera(0);
				iLocal_111++;
			}
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			if (timera() > 3000)
			{
				bVar0 = true;
				iVar1 = 0;
				while (iVar1 <= 7)
				{
					if (!unk_0x765F6FEEFF39224F(Local_119[iVar1 /*50*/]))
					{
						bVar0 = false;
					}
					iVar1++;
				}
				if (!unk_0x765F6FEEFF39224F(iLocal_365))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					func_244(&Local_210, 0, 0, 2000, 1, 0, 0, 1);
					if (unk_0x7C71681384076318("TOD_SHIFT_SCENE"))
					{
						unk_0xCBE6AF58552C63B2(Local_210.f_10);
						unk_0xB4F447A5639E2006("TIME_LAPSE");
						unk_0x7CED302277C0F3D3("TOD_SHIFT_SCENE");
					}
					unk_0x9D8C631256FC1C8F("RADIO_01_CLASS_ROCK");
					unk_0x75B136CE1E1EF4A5("RADIO_01_CLASS_ROCK", 1);
					unk_0xDEFB5E2E5CBD460A("RACE_INTRO_GENERIC");
					unk_0xE2AE4E6F010FA5C5(0);
					unk_0x151D1B83673FCE66();
					return 1;
				}
			}
			break;
	}
	if (func_262(1000))
	{
		func_231(500);
		unk_0xE58124354EC682AC(func_283(), 0, 0);
		settimera(0);
		if (func_8(iLocal_365))
		{
			unk_0x2EE596932F00971D(iLocal_365, 1);
			unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
			func_23(iLocal_365, Local_47.f_26[8 /*3*/], Local_47.f_54[8], 1, 1);
			unk_0x1B2303F9DC2D90D5(iLocal_365, 1084227584);
		}
		iLocal_111 = 6;
	}
	return 0;
}

int func_262(int iParam0)
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
			if (func_263())
			{
				Global_27 = unk_0xE3903F59E2F22150();
				return 1;
			}
		}
	}
	return 0;
}

int func_263()
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

int func_264(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD76D6BCC14B95CE1(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_265()
{
	int iVar0;
	
	if (func_238(iLocal_365))
	{
		iVar0 = unk_0x541D5C57194E73C4(iLocal_365);
		if (iVar0 == unk_0x36163153849DFDA1("MONSTER") || iVar0 == unk_0x36163153849DFDA1("MARSHALL"))
		{
			return 1;
		}
	}
	return 0;
}

int func_266()
{
	int iVar0;
	
	if (func_238(iLocal_365))
	{
		iVar0 = unk_0x541D5C57194E73C4(iLocal_365);
		if (((((((((((((((((((((((((((((((iVar0 == joaat("baller") || iVar0 == joaat("baller2")) || iVar0 == joaat("bison")) || iVar0 == joaat("bison2")) || iVar0 == joaat("bison3")) || iVar0 == joaat("bobcatxl")) || iVar0 == joaat("cavalcade")) || iVar0 == joaat("cavalcade2")) || iVar0 == joaat("crusader")) || iVar0 == joaat("dubsta")) || iVar0 == joaat("dubsta2")) || iVar0 == joaat("fq2")) || iVar0 == joaat("granger")) || iVar0 == joaat("gresley")) || iVar0 == joaat("landstalker")) || iVar0 == joaat("mesa")) || iVar0 == joaat("mesa2")) || iVar0 == joaat("mesa3")) || iVar0 == joaat("patriot")) || iVar0 == joaat("radi")) || iVar0 == joaat("rancherxl")) || iVar0 == joaat("rancherxl2")) || iVar0 == joaat("rebel")) || iVar0 == joaat("rocoto")) || iVar0 == joaat("sadler")) || iVar0 == joaat("sadler2")) || iVar0 == joaat("sandking")) || iVar0 == joaat("sandking2")) || iVar0 == joaat("seminole")) || iVar0 == joaat("superd")) || iVar0 == unk_0x36163153849DFDA1("huntley")) || iVar0 == unk_0x36163153849DFDA1("DUBSTA3"))
		{
			return 1;
		}
	}
	return 0;
}

int func_267(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_202();
			iVar5 = func_202();
			func_210(&iVar5, iParam0);
			func_211(&iVar5, iParam1);
			func_212(&iVar5, 0);
			if (func_281(*uParam4, iVar5))
			{
				func_279(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_277(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_275((to_float(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				unk_0x8D0EAE4AED63F187(0.6f);
				unk_0x9588A6F5FFD48F00(0);
				unk_0x2A06B27D1473E9ED(0);
			}
			func_274();
			uParam4->f_10 = unk_0x8CCC0A0504C52531();
			unk_0x0F8EAEEC97DDBCB3(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			unk_0xDEFB5E2E5CBD460A("TOD_SHIFT_SCENE");
			func_245();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((unk_0x117DAF3BF7232886(uParam4->f_4) && unk_0x6010B3CAC53496C3(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (unk_0x117DAF3BF7232886(uParam4->f_4) && unk_0x6010B3CAC53496C3(uParam4->f_4))
				{
					fVar0 = unk_0x4EBEDEC1791E2255(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (unk_0x36163153849DFDA1(sParam2) != 0)
						{
							unk_0x10D261962C02BE0E(sParam2, fParam8);
						}
						if (unk_0x36163153849DFDA1(sParam3) != 0)
						{
							unk_0x261B7B698CB4C8D9();
							unk_0x3A8A5929FA4D6472(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_279(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0xE58124354EC682AC(func_273(iVar5), func_272(iVar5), func_271(iVar5));
				if (bParam7)
				{
					unk_0x36296F11E96E764D();
				}
				unk_0xCBE6AF58552C63B2(uParam4->f_10);
				unk_0xB4F447A5639E2006("TIME_LAPSE");
				if (bParam7)
				{
					unk_0x2A06B27D1473E9ED(1);
					unk_0x9588A6F5FFD48F00(1);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_96(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = round((IntToFloat(uParam4->f_11) * fVar12));
			iVar5 = *uParam4;
			func_279(&iVar5, iVar4, 0, 0, 0, 0, 0);
			unk_0xE58124354EC682AC(func_273(iVar5), func_272(iVar5), func_271(iVar5));
			if (func_270(iVar5) != unk_0x020A28FAE1C09250())
			{
				unk_0x671D2AE4291F252E(func_270(iVar5), func_209(iVar5), func_207(iVar5));
			}
			func_268();
			unk_0xB01645ECF87D883F(6);
			break;
	}
	return 0;
}

void func_268()
{
	unk_0x818D1850BE9E44A9();
	func_269();
}

void func_269()
{
	Global_17272.f_134 = 1;
}

int func_270(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_271(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_272(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_273(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_274()
{
	int iVar0;
	
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		return 0;
	}
	if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
	{
		return 0;
	}
	iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
	if (!unk_0xD62C4419A41F106A(iVar0, 0))
	{
		return 0;
	}
	unk_0xE3040995362DF6F7(iVar0, "OFF");
	return 1;
}

void func_275(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_41(&(Global_106565.f_18097.f_175[iVar0 /*19*/].f_5)))
		{
			func_276(&(Global_106565.f_18097.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_41(&(Global_106565.f_18097.f_362[iVar1 /*3*/])))
		{
			func_276(&(Global_106565.f_18097.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x532ED5E669993A8A();
}

void func_276(int iParam0, float fParam1)
{
	if (func_41(iParam0))
	{
		func_27(iParam0, (func_36(iParam0) + fParam1));
	}
}

void func_277(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_281(iParam0, iParam1))
	{
		iVar0 = func_209(iParam1);
		iVar1 = func_207(iParam0);
		iVar2 = (func_207(iParam0) - func_207(iParam1));
		iVar3 = (func_209(iParam0) - func_209(iParam1));
		iVar4 = (func_270(iParam0) - func_270(iParam1));
		iVar5 = (func_273(iParam0) - func_273(iParam1));
		iVar6 = (func_272(iParam0) - func_272(iParam1));
		iVar7 = (func_271(iParam0) - func_271(iParam1));
	}
	else
	{
		iVar0 = func_209(iParam0);
		iVar1 = func_207(iParam1);
		iVar2 = (func_207(iParam1) - func_207(iParam0));
		iVar3 = (func_209(iParam1) - func_209(iParam0));
		iVar4 = (func_270(iParam1) - func_270(iParam0));
		iVar5 = (func_273(iParam1) - func_273(iParam0));
		iVar6 = (func_272(iParam1) - func_272(iParam0));
		iVar7 = (func_271(iParam1) - func_271(iParam0));
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
		iVar4 = (iVar4 + func_206(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_278(to_float(iVar0 + 1), 0f, 12f));
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

float func_278(float fParam0, float fParam1, float fParam2)
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

void func_279(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_207(*iParam0);
	iVar1 = func_209(*iParam0);
	iVar2 = func_270(*iParam0);
	iVar3 = func_273(*iParam0);
	iVar4 = func_272(*iParam0);
	iVar5 = func_271(*iParam0);
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
	iVar6 = func_206(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_206(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_280(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_280(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_212(uParam0, iParam1);
	func_211(uParam0, iParam2);
	func_210(uParam0, iParam3);
	func_204(uParam0, iParam5);
	func_205(uParam0, iParam4);
	func_203(uParam0, iParam6);
}

int func_281(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_282(iParam1) || !func_282(iParam0))
	{
		return 1;
	}
	iVar0 = func_207(iParam0);
	iVar1 = func_207(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_209(iParam0);
	iVar1 = func_209(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_270(iParam0);
	iVar1 = func_270(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_273(iParam0);
	iVar1 = func_273(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_272(iParam0);
	iVar1 = func_272(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_271(iParam0);
	iVar1 = func_271(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_282(int iParam0)
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
	iVar0 = func_271(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_272(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_273(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_207(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_209(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_270(iParam0);
	if (iVar5 < 1 || iVar5 > func_206(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_283()
{
	switch (Global_106565.f_25067)
	{
		case 0:
			return 20;
			break;
		
		case 1:
			return 17;
			break;
		
		case 2:
			return 12;
			break;
		
		case 3:
			return 21;
			break;
		
		case 4:
			return 12;
			break;
	}
	return 18;
}

void func_284()
{
	func_330();
	func_306();
	func_291();
	func_287();
	func_286(&Local_119, &Local_209);
	func_285(&uLocal_148, &uLocal_108);
	func_5();
	func_52(0);
	unk_0x3FD9339AA95E323F(0, 69, 1);
	unk_0x3FD9339AA95E323F(0, 68, 1);
	unk_0x3FD9339AA95E323F(0, 25, 1);
	unk_0x3FD9339AA95E323F(0, 70, 1);
	unk_0x3FD9339AA95E323F(0, 99, 1);
	unk_0x3FD9339AA95E323F(0, 100, 1);
	unk_0xC5565C10067F0E40(0f);
	unk_0x453924F2AAE93AD9(0f);
	unk_0x2E6EC0FAB080C550(0f, 0f);
}

void func_285(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (((((*uParam0)[*uParam1 /*6*/] != 0 && unk_0x765F6FEEFF39224F((*uParam0)[*uParam1 /*6*/])) && (uParam0[*uParam1 /*6*/])->f_1 != 0) && unk_0x765F6FEEFF39224F((uParam0[*uParam1 /*6*/])->f_1)) && (uParam0[*uParam1 /*6*/])->f_4)
	{
		if (func_51((uParam0[*uParam1 /*6*/])->f_2, 2))
		{
			(uParam0[*uParam1 /*6*/])->f_5 = unk_0xC4BA1231BBAF1161((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1);
		}
		else
		{
			(uParam0[*uParam1 /*6*/])->f_5 = unk_0x72F7FAFD0710100C((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1, (uParam0[*uParam1 /*6*/])->f_3);
		}
	}
	iVar0++;
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0;
	}
	while ((((*uParam0)[*uParam1 /*6*/] == 0 || !unk_0x765F6FEEFF39224F((*uParam0)[*uParam1 /*6*/])) || ((uParam0[*uParam1 /*6*/])->f_1 == 0 || !unk_0x765F6FEEFF39224F((uParam0[*uParam1 /*6*/])->f_1))) && iVar0 < *uParam0)
	{
		iVar0++;
		*uParam1++;
		if (*uParam1 >= *uParam0)
		{
			*uParam1 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!(uParam0[iVar1 /*6*/])->f_4)
		{
			(*uParam0)[iVar1 /*6*/] = 0;
			(uParam0[iVar1 /*6*/])->f_1 = 0;
			(uParam0[iVar1 /*6*/])->f_2 = 0;
			(uParam0[iVar1 /*6*/])->f_3 = 0;
			(uParam0[iVar1 /*6*/])->f_5 = 0;
		}
		(uParam0[iVar1 /*6*/])->f_4 = 0;
		iVar1++;
	}
}

void func_286(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		if (func_8((*iParam0)[iVar1 /*50*/]))
		{
			if ((iParam0[iVar1 /*50*/])->f_17.f_13)
			{
				iVar0++;
			}
			else if ((iParam0[iVar1 /*50*/])->f_17.f_3 > uParam1->f_3)
			{
				iVar0++;
			}
			else if ((iParam0[iVar1 /*50*/])->f_17.f_3 == uParam1->f_3)
			{
				if ((iParam0[iVar1 /*50*/])->f_17.f_2 > uParam1->f_2)
				{
					iVar0++;
				}
				else if ((iParam0[iVar1 /*50*/])->f_17.f_2 == uParam1->f_2)
				{
					fVar2 = func_232((*iParam0)[iVar1 /*50*/], Local_47[(iParam0[iVar1 /*50*/])->f_17.f_4 /*3*/], 1);
					fVar3 = func_232(unk_0x33CD235DF1E6A94E(), Local_47[uParam1->f_4 /*3*/], 1);
					if (fVar2 < fVar3)
					{
						iVar0++;
					}
				}
			}
		}
		iVar1++;
	}
	uParam1->f_6 = iVar0;
}

void func_287()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_120)
	{
		if (!Local_120[iVar0 /*50*/].f_42)
		{
			if (Local_120[iVar0 /*50*/].f_41)
			{
				if (func_8(Local_120[iVar0 /*50*/]))
				{
					if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(Local_120[iVar0 /*50*/], true)) > 40000f)
					{
						func_131(&(Local_120[iVar0 /*50*/]), 1);
						Local_120[iVar0 /*50*/].f_41 = 0;
					}
				}
				else
				{
					func_131(&(Local_120[iVar0 /*50*/]), 0);
					Local_120[iVar0 /*50*/].f_42 = 1;
				}
			}
			else if (func_243(0, &iLocal_106) && !Local_46.f_6)
			{
				if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), Local_120[iVar0 /*50*/].f_37) < 22500f)
				{
					func_290(&(Local_120[iVar0 /*50*/]), 0);
				}
			}
		}
		iVar0++;
	}
	func_288(&Local_120);
}

void func_288(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (func_8((*iParam0)[iVar0 /*50*/]))
		{
			if ((!unk_0x71E0DAA57FE7D5C7((*iParam0)[iVar0 /*50*/], 0) && !unk_0xD82CBCB7E04DDA8A((*iParam0)[iVar0 /*50*/])) && !unk_0x3AF2B3B68DD52355((*iParam0)[iVar0 /*50*/]))
			{
				unk_0xC87D718F567156BE((*iParam0)[iVar0 /*50*/], 1, unk_0x33CD235DF1E6A94E(), 0, 0f, 0f, 0f, 0, -1, -1);
				if (!func_264((*iParam0)[iVar0 /*50*/], 242628503, 1))
				{
					unk_0x99414FB2D30425C1(&((iParam0[iVar0 /*50*/])->f_2));
					unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 2000);
					unk_0xF6D940C3CF409665(0, func_289(iVar0), -1, 1);
					unk_0xC734F59A13D39AEF((iParam0[iVar0 /*50*/])->f_2);
					unk_0x13A2D602CD10CBAC((*iParam0)[iVar0 /*50*/], (iParam0[iVar0 /*50*/])->f_2);
					unk_0xA7A57E7757ED035E(&((iParam0[iVar0 /*50*/])->f_2));
					(iParam0[iVar0 /*50*/])->f_45 = unk_0xE3903F59E2F22150();
				}
				else if (iVar0 != 10)
				{
					if ((unk_0xC472E34C8FBEC678((*iParam0)[iVar0 /*50*/]) - func_230(unk_0xFBB1F99A825CAB09((*iParam0)[iVar0 /*50*/], true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true))) > 60f || (unk_0xC472E34C8FBEC678((*iParam0)[iVar0 /*50*/]) - func_230(unk_0xFBB1F99A825CAB09((*iParam0)[iVar0 /*50*/], true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true))) < -60f)
					{
						if (unk_0xE3903F59E2F22150() > (iParam0[iVar0 /*50*/])->f_45 + 5000)
						{
							unk_0xED68CDDDE25A144E((*iParam0)[iVar0 /*50*/]);
						}
					}
					else if (unk_0x24CA7139A01083BE((*iParam0)[iVar0 /*50*/]) > 0)
					{
						if (unk_0xE3903F59E2F22150() > (iParam0[iVar0 /*50*/])->f_45 + 4000)
						{
							if ((((iVar0 == 2 || iVar0 == 5) || iVar0 == 18) || iVar0 == 7) || iVar0 == 14)
							{
								unk_0xC87D718F567156BE((*iParam0)[iVar0 /*50*/], 4, unk_0x33CD235DF1E6A94E(), 0, 0f, 0f, 0f, 0, 500, 300);
							}
						}
					}
				}
			}
			else if (unk_0x3AF2B3B68DD52355((*iParam0)[iVar0 /*50*/]))
			{
				unk_0x7FC2040EB34E0E31((*iParam0)[iVar0 /*50*/], 0, 0);
			}
			else
			{
				func_131(iParam0[iVar0 /*50*/], 0);
			}
		}
		iVar0++;
	}
}

char* func_289(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 3:
		case 4:
		case 15:
		case 16:
		case 17:
		case 6:
		case 8:
		case 9:
		case 11:
		case 12:
		case 13:
		case 19:
		case 20:
		case 21:
		case 22:
			return "WORLD_HUMAN_CHEERING";
			break;
		
		case 2:
		case 5:
		case 18:
		case 7:
		case 14:
			return "WORLD_HUMAN_MOBILE_FILM_SHOCKING";
			break;
		
		case 10:
			return "WORLD_HUMAN_STAND_IMPATIENT";
			break;
	}
	return "";
}

void func_290(var uParam0, bool bParam1)
{
	if (!uParam0->f_41)
	{
		unk_0xB815670C37E03CDE(uParam0->f_3);
		if (bParam1)
		{
			while (!unk_0x5D98D654CDC2165A(uParam0->f_3))
			{
				wait(0);
			}
		}
		if (unk_0x5D98D654CDC2165A(uParam0->f_3))
		{
			*uParam0 = unk_0x9BA5CF280376EEA4(26, uParam0->f_3, uParam0->f_37, uParam0->f_40, 1, true);
			if (unk_0x765F6FEEFF39224F(*uParam0))
			{
				unk_0xC6CDB5F78F0E3592(*uParam0, &(uParam0->f_46));
				uParam0->f_41 = 1;
				uParam0->f_44 = 0;
				unk_0x71CA80D41E1338B4(uParam0->f_3);
			}
		}
	}
}

void func_291()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (!Local_119[iVar0 /*50*/].f_42)
		{
			if (Local_119[iVar0 /*50*/].f_41)
			{
				if (func_8(Local_119[iVar0 /*50*/]))
				{
					bVar1 = true;
					if (iLocal_111 < 3)
					{
						bVar1 = false;
					}
					func_295(&(Local_119[iVar0 /*50*/]), Local_209, bVar1);
					func_294();
					if (func_8(Local_119[iVar0 /*50*/].f_5))
					{
						if (!unk_0xE38E3CF1625A4145(Local_119[iVar0 /*50*/].f_1))
						{
							func_292(&(Local_119[iVar0 /*50*/].f_1), Local_119[iVar0 /*50*/].f_5, 1, 10f, 1);
							unk_0x1C95CD840303FC37(Local_119[iVar0 /*50*/].f_1, "CRACEBLIP");
						}
						else
						{
							func_292(&(Local_119[iVar0 /*50*/].f_1), Local_119[iVar0 /*50*/].f_5, 1, 10f, 0);
						}
					}
				}
				else
				{
					func_131(&(Local_119[iVar0 /*50*/]), 0);
					func_133(&(Local_119[iVar0 /*50*/].f_1));
					Local_119[iVar0 /*50*/].f_42 = 1;
				}
			}
			else if (!Local_46.f_6 && func_243(0, &iLocal_106))
			{
				func_9(&(Local_119[iVar0 /*50*/]), 0, 1);
			}
		}
		iVar0++;
	}
}

void func_292(var uParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (iParam4 == 1 && !unk_0xE38E3CF1625A4145(*uParam0))
	{
		*uParam0 = func_293(unk_0xFBB1F99A825CAB09(iParam1, true), 0);
		if (bParam2)
		{
			unk_0xB9E84A421C105943(*uParam0, 3);
			unk_0x1C95CD840303FC37(*uParam0, "BLIP_FRIEND");
		}
		else
		{
			unk_0xB9E84A421C105943(*uParam0, 1);
			unk_0x1C95CD840303FC37(*uParam0, "BLIP_ENEMY");
		}
		if (unk_0x068481DAF84B9654(iParam1))
		{
			unk_0xCE5C49921A521962(*uParam0, 0.7f);
		}
	}
	if (unk_0xE38E3CF1625A4145(*uParam0))
	{
		vVar0 = { unk_0x7BC3899BF7085A7D(*uParam0) };
		vVar1 = { unk_0xFBB1F99A825CAB09(iParam1, true) };
		vVar0.x = (vVar0.x + ((vVar1.x - vVar0.x) / fParam3));
		vVar0.y = (vVar0.y + ((vVar1.y - vVar0.y) / fParam3));
		vVar0.z = (vVar0.z + ((vVar1.z - vVar0.z) / fParam3));
		unk_0xA0220BF0AB292278(*uParam0, vVar0);
	}
}

int func_293(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x2C0ED4741A007C6A(vParam0);
	unk_0xCE5C49921A521962(iVar0, func_33(unk_0xB331FCEB94EB05C8(), 1f, 1f));
	unk_0x1C316779E36C1967(iVar0, bParam1);
	return iVar0;
}

void func_294()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xE3903F59E2F22150() > iLocal_368)
	{
		fVar1 = 1E+07f;
		iVar3 = 0;
		while (iVar3 <= 7)
		{
			if (func_238(Local_119[iVar3 /*50*/].f_5))
			{
				fVar0 = func_237(unk_0x33CD235DF1E6A94E(), Local_119[iVar3 /*50*/].f_5, 1);
				if (fVar0 < fVar1)
				{
					fVar0 = fVar1;
					iVar2 = iVar3;
				}
			}
			iVar3++;
		}
		if (iLocal_367 > -1 && func_238(Local_119[iLocal_367 /*50*/].f_5))
		{
			unk_0xA6E32819044BBB6A(Local_119[iLocal_367 /*50*/].f_5, 0);
			unk_0x7B1011A61F402324(Local_119[iLocal_367 /*50*/].f_5, "STREET_RACE_NPC_GENERAL", 0);
		}
		if (func_238(Local_119[iVar2 /*50*/].f_5))
		{
			unk_0x7B1011A61F402324(Local_119[iVar2 /*50*/].f_5, "STREET_RACE_NPC_CLOSEST", 0);
		}
		iLocal_367 = iVar2;
		iLocal_368 = unk_0xE3903F59E2F22150() + 2000;
	}
}

void func_295(var uParam0, struct<20> Param1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	vector3 vVar9;
	
	if (unk_0x765F6FEEFF39224F(uParam0->f_5) && !unk_0xD62C4419A41F106A(uParam0->f_5, 0))
	{
		iVar0 = 0;
		fVar2 = func_305(*uParam0);
		if (Param1.f_4 < 6)
		{
			uParam0->f_17 = func_232(*uParam0, Local_47[uParam0->f_17.f_4 /*3*/], 1);
			if (unk_0xE3903F59E2F22150() > Local_46.f_7 + 7500)
			{
				if (uParam0->f_17.f_2 > Param1.f_2 + 1)
				{
					if (vdist2(unk_0xFBB1F99A825CAB09(uParam0->f_5, true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) > 2500f)
					{
						fVar2 = (fVar2 - (fVar2 * 0.5f));
					}
					else if (vdist2(unk_0xFBB1F99A825CAB09(uParam0->f_5, true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) > 625f)
					{
						fVar2 = (fVar2 - (fVar2 * 0.4f));
					}
					else
					{
						fVar2 = (fVar2 - (fVar2 * 0.2f));
					}
				}
				else if (uParam0->f_17.f_2 == Param1.f_2 + 1)
				{
					fVar4 = func_232(unk_0x33CD235DF1E6A94E(), Local_47[uParam0->f_17.f_4 /*3*/], 1);
					fVar3 = (fVar4 - uParam0->f_17);
					if (fVar3 > 50f)
					{
						fVar2 = (fVar2 - (fVar2 * 0.4f));
					}
					else if (fVar3 > 25f)
					{
						fVar2 = (fVar2 - (fVar2 * 0.2f));
					}
				}
				else if (uParam0->f_17.f_2 == Param1.f_2)
				{
					if (Param1 > uParam0->f_17)
					{
						fVar3 = (Param1 - uParam0->f_17);
						if (fVar3 > 50f)
						{
							fVar2 = (fVar2 - (fVar2 * 0.4f));
						}
						else if (fVar3 > 25f)
						{
							fVar2 = (fVar2 - (fVar2 * 0.2f));
						}
					}
					else if (Param1 < uParam0->f_17)
					{
						fVar3 = (uParam0->f_17 - Param1);
						if (fVar3 > 50f)
						{
							fVar2 = (fVar2 + (fVar2 * 1.5f));
							iVar0 = 1;
							vVar1 = { 0f, 3f, 0f };
						}
						else if (fVar3 > 25f)
						{
							fVar2 = (fVar2 + (fVar2 * 1f));
							iVar0 = 1;
							vVar1 = { 0f, 1.5f, 0f };
						}
						else if (fVar3 > 0f)
						{
							fVar2 = (fVar2 + (fVar2 * 0.5f));
						}
					}
				}
				else if (uParam0->f_17.f_2 == (Param1.f_2 - 1))
				{
					fVar5 = func_232(*uParam0, Local_47[Param1.f_4 /*3*/], 1);
					fVar3 = (fVar5 - Param1);
					if (fVar3 > 50f)
					{
						fVar2 = (fVar2 + (fVar2 * 1.5f));
						iVar0 = 1;
						vVar1 = { 0f, 3f, 0f };
					}
					else if (fVar3 > 25f)
					{
						fVar2 = (fVar2 + (fVar2 * 1f));
						iVar0 = 1;
						vVar1 = { 0f, 1.5f, 0f };
					}
					else if (fVar3 > 0f)
					{
						fVar2 = (fVar2 + (fVar2 * 0.5f));
					}
				}
				else
				{
					fVar2 = (fVar2 + (fVar2 * 1.7f));
					iVar0 = 1;
					vVar1 = { 0f, 4f, 0f };
				}
			}
			else
			{
				fVar2 = 40f;
				if (unk_0xE3903F59E2F22150() < Local_46.f_7 + 1000)
				{
					vVar1 = { 0f, 10f, 0f };
				}
				else
				{
					vVar1 = { 0f, 6f, 0f };
				}
				iVar0 = 1;
			}
			uParam0->f_17.f_1 = func_303(uParam0->f_17.f_1, fVar2, 0.1f, 0);
			unk_0xB225487E62B643CA(*uParam0, uParam0->f_17.f_1);
			unk_0x3F1EBCFED4923B07(*uParam0, fVar2);
		}
		switch (uParam0->f_44)
		{
			case 0:
				if (func_41(&(Local_46.f_2)))
				{
					uParam0->f_44++;
				}
				else if (bParam2)
				{
					if (!func_264(*uParam0, 242628503, 1))
					{
						unk_0x99414FB2D30425C1(&(uParam0->f_2));
						unk_0x838F76C6C0AB6849(0, unk_0x9EC3B269A34A2BEE(200, 500));
						unk_0x78893508441AD74F(0, uParam0->f_5, 31, unk_0x9EC3B269A34A2BEE(500, 2000));
						unk_0xC734F59A13D39AEF(uParam0->f_2);
						unk_0x13A2D602CD10CBAC(*uParam0, uParam0->f_2);
						unk_0xA7A57E7757ED035E(&(uParam0->f_2));
					}
				}
				break;
			
			case 1:
				unk_0x9718FFCE41FF74D1(uParam0->f_5, 1);
				unk_0xD303E20CB0AE4AD0(uParam0->f_5, 2);
				unk_0x4A852F02088ECC9D(*uParam0, 1);
				unk_0xA155CCFA52A9A0C4(uParam0->f_5, 1);
				unk_0x09993E7216CF52C4(uParam0->f_5, true);
				unk_0x43D47AD82DA3C6EC(uParam0->f_5, 1, 1);
				unk_0x9FABD0AB045A5D6E(uParam0->f_5, true, 0, 0);
				unk_0x8D54C34A115696E6(uParam0->f_5, 0);
				unk_0x99414FB2D30425C1(&(uParam0->f_2));
				iVar6 = unk_0x9EC3B269A34A2BEE(1100, 1300);
				unk_0x838F76C6C0AB6849(0, iVar6);
				iVar6 = unk_0x9EC3B269A34A2BEE(100, 250);
				if (uParam0->f_17.f_11 == 1)
				{
					unk_0x78893508441AD74F(0, uParam0->f_5, 30, 600);
				}
				else if (uParam0->f_17.f_11 == 2)
				{
					unk_0x78893508441AD74F(0, uParam0->f_5, 30, 1100);
				}
				else if (uParam0->f_17.f_11 == 5)
				{
					unk_0x78893508441AD74F(0, uParam0->f_5, 30, 1200);
				}
				else
				{
					unk_0x78893508441AD74F(0, uParam0->f_5, 30, (1300 + (uParam0->f_17.f_11 + 1 * iVar6)));
				}
				unk_0xC734F59A13D39AEF(uParam0->f_2);
				unk_0x13A2D602CD10CBAC(*uParam0, uParam0->f_2);
				unk_0xA7A57E7757ED035E(&(uParam0->f_2));
				uParam0->f_17.f_1 = func_305(*uParam0);
				uParam0->f_44++;
				break;
			
			case 2:
				switch (uParam0->f_17.f_4)
				{
					case 5:
						if (unk_0xD4B4F68F3449CBEC(*uParam0, Local_47.f_19, Local_47.f_22, Local_47.f_25, 0, true, 0))
						{
							uParam0->f_17.f_3++;
							uParam0->f_17.f_2++;
							uParam0->f_17.f_4 = 0;
							if (uParam0->f_17.f_3 == Local_47.f_65)
							{
								uParam0->f_17.f_13 = 1;
							}
						}
						break;
					
					default:
						if (Local_46.f_5)
						{
							if (!func_264(*uParam0, 242628503, 1))
							{
								unk_0x99414FB2D30425C1(&(uParam0->f_2));
								unk_0xF606706197A2C3A5(0, uParam0->f_5, Local_47.f_64, 786468, 0, 540, -1, uParam0->f_17.f_1, 1, 1073741824);
								unk_0xC734F59A13D39AEF(uParam0->f_2);
								unk_0x13A2D602CD10CBAC(*uParam0, uParam0->f_2);
								unk_0xA7A57E7757ED035E(&(uParam0->f_2));
							}
							bVar7 = false;
							if (uParam0->f_17 < 20f)
							{
								bVar7 = true;
							}
							unk_0xD7BB6EC772196237(Local_47.f_64, unk_0xFBB1F99A825CAB09(uParam0->f_5, true), &iVar8);
							unk_0xFF6E5EAB585ABA6A(Local_47.f_64, iVar8, &vVar9);
							if (vdist2(vVar9, Local_47[uParam0->f_17.f_4 /*3*/]) < 400f)
							{
								bVar7 = true;
							}
							if (bVar7)
							{
								uParam0->f_17.f_2++;
								uParam0->f_17.f_4++;
							}
						}
						else if (!func_264(*uParam0, 242628503, 1) && !func_264(*uParam0, -1817882002, 1))
						{
							unk_0x77C4189A8E5C57C2(*uParam0, uParam0->f_5, unk_0x2CA911E7569D12EA(*uParam0, 0f, 100f, 0f), 40f, 0, uParam0->f_5.f_2, 786468, 20f, 9999f);
						}
						break;
				}
				if (func_302(uParam0))
				{
					if (!unk_0x73E7A21FD53144AB(unk_0xFBB1F99A825CAB09(uParam0->f_5, true), 3f))
					{
						func_301(uParam0);
					}
				}
				if (uParam0->f_17.f_11 == 1)
				{
					if (func_300(uParam0, Param1))
					{
						func_299(uParam0, Param1);
					}
				}
				if (iLocal_60 > unk_0xE3903F59E2F22150())
				{
					unk_0x4AC1EB89981AFAFD();
				}
				break;
			
			case 999:
				break;
		}
		if (Local_46.f_5 && !Local_46.f_6)
		{
			if (iVar0 && !func_298(vVar1))
			{
				if (func_297(uParam0->f_5))
				{
					if (unk_0xE3903F59E2F22150() > Local_46.f_7 + 1000)
					{
						vVar1 = { vVar1 * FtoV((IntToFloat(Global_106565.f_25067 + 1) * 0.75f)) };
					}
					unk_0x8CCAABEAD6EE0A13(uParam0->f_5, 0, vVar1, 0, 1, 1, 1);
				}
			}
			if ((func_296(*uParam0) && unk_0x156573D1AADB54ED(uParam0->f_5)) && !unk_0x7DD221C91135596A(uParam0->f_5))
			{
				unk_0x8CCAABEAD6EE0A13(uParam0->f_5, 0, 0f, 0f, -10f, 0, 1, 1, 1);
				unk_0xE4D75345359AD13C(uParam0->f_5, 2f);
			}
		}
	}
}

int func_296(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49)
{
	if ((unk_0xD4B4F68F3449CBEC(iParam0, 1863.932f, 3234.403f, 42.03159f, 1907.052f, 3184.802f, 50.18943f, 25f, 0, true, 0) || unk_0xD4B4F68F3449CBEC(iParam0, 2249.526f, 3235.603f, 45.0114f, 2191.436f, 3247.169f, 51.67255f, 25f, 0, true, 0)) || unk_0xD4B4F68F3449CBEC(iParam0, 2276.412f, 2998.594f, 42.96453f, 2299.795f, 3059.603f, 50.52016f, 25f, 0, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_297(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	
	if (func_238(iParam0))
	{
		bVar4 = false;
		iVar5 = 0;
		if (unk_0xD7BB6EC772196237(Local_47.f_64, unk_0xFBB1F99A825CAB09(iParam0, true), &iVar0))
		{
			if (unk_0xFF6E5EAB585ABA6A(Local_47.f_64, iVar0, &vVar1))
			{
				if (unk_0xF62CD3B9A6291969(Local_47.f_64, &iVar2))
				{
					if (iVar0 < iVar2)
					{
						bVar4 = unk_0xFF6E5EAB585ABA6A(Local_47.f_64, iVar0 + 1, &vVar3);
					}
					else
					{
						bVar4 = unk_0xFF6E5EAB585ABA6A(Local_47.f_64, 0, &vVar3);
					}
				}
			}
		}
		if (bVar4)
		{
			if ((func_230(vVar1, vVar3) - unk_0xC472E34C8FBEC678(iParam0)) < 10f && (func_230(vVar1, vVar3) - unk_0xC472E34C8FBEC678(iParam0)) > -10f)
			{
				iVar5 = 1;
			}
		}
		if (((unk_0x156573D1AADB54ED(iParam0) && iVar5) && !unk_0x7DD221C91135596A(iParam0)) && vdist2(unk_0xFBB1F99A825CAB09(iParam0, true), vVar1) < 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_298(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_299(var uParam0, struct<5> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	vector3 vVar0;
	
	if (Param1.f_4 == 0)
	{
		vVar0 = { Local_47[4 /*3*/] };
	}
	else if (Param1.f_4 == 1)
	{
		vVar0 = { Local_47[5 /*3*/] };
	}
	else
	{
		vVar0 = { Local_47[(Param1.f_4 - 2) /*3*/] };
	}
	if (!func_298(vVar0))
	{
		if (!unk_0x73E7A21FD53144AB(vVar0, 3f) && !unk_0x73E7A21FD53144AB(unk_0xFBB1F99A825CAB09(uParam0->f_5, true), 3f))
		{
			if (unk_0xE3903F59E2F22150() > uParam0->f_5.f_11 + 2000 && uParam0->f_5.f_11 != 0)
			{
				if (!unk_0x7E0147E36EF8D6AC(vVar0, 4f))
				{
					if (Param1.f_4 != 0)
					{
						uParam0->f_17.f_3 = Param1.f_3;
						uParam0->f_17.f_4 = (Param1.f_4 - 1);
					}
					else
					{
						uParam0->f_17.f_3 = (Param1.f_3 - 1);
						uParam0->f_17.f_4 = 5;
					}
					uParam0->f_17.f_2 = (Param1.f_2 - 1);
					func_23(uParam0->f_5, vVar0, func_230(vVar0, Local_47[uParam0->f_17.f_4 /*3*/]), 1, 1);
					unk_0x4522AD7364B6AA54(uParam0->f_5, 20f);
					unk_0xF606706197A2C3A5(*uParam0, uParam0->f_5, Local_47.f_64, 786469, 0, 540, -1, uParam0->f_17.f_1, 1, 1073741824);
					iLocal_60 = unk_0xE3903F59E2F22150() + 1000;
				}
			}
		}
		else
		{
			uParam0->f_5.f_11 = unk_0xE3903F59E2F22150();
		}
	}
}

int func_300(var uParam0, struct<5> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	if (uParam0->f_17.f_2 < (Param1.f_2 - 1) && (uParam0->f_17.f_3 != (Local_47.f_65 - 1) || (uParam0->f_17.f_3 == (Local_47.f_65 - 1) && Param1.f_4 < 4)))
	{
		return 1;
	}
	return 0;
}

void func_301(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	unk_0xD7BB6EC772196237(Local_47.f_64, unk_0xFBB1F99A825CAB09(uParam0->f_5, true), &iVar0);
	unk_0xFF6E5EAB585ABA6A(Local_47.f_64, iVar0, &vVar1);
	unk_0xFF6E5EAB585ABA6A(Local_47.f_64, iVar0 + 1, &vVar2);
	if (!unk_0x73E7A21FD53144AB(vVar1, 3f))
	{
		if (!unk_0x7E0147E36EF8D6AC(vVar1, 5f) || func_232(uParam0->f_5, vVar1, 1) < 5f)
		{
			func_23(uParam0->f_5, vVar1, func_230(vVar1, vVar2), 0, 1);
			if (!unk_0x10930B9CAD4111C2(*uParam0, uParam0->f_5, 0))
			{
				unk_0x094626C0798AE1F8(*uParam0, uParam0->f_5, -1);
			}
			iLocal_60 = unk_0xE3903F59E2F22150() + 1000;
		}
	}
}

int func_302(var uParam0)
{
	if ((unk_0x95BBE5C8D52FE24B(uParam0->f_5) || unk_0x67001C5CC88C66A8(uParam0->f_5, 0, 7000)) || unk_0x67001C5CC88C66A8(uParam0->f_5, 1, 40000))
	{
		return 1;
	}
	if (unk_0x8AE34E8B10270D31(uParam0->f_5))
	{
		return 1;
	}
	if (unk_0x67001C5CC88C66A8(uParam0->f_5, 2, 7000) || unk_0x67001C5CC88C66A8(uParam0->f_5, 3, 7000))
	{
		return 1;
	}
	if (uParam0->f_17.f_4 == uParam0->f_17.f_5)
	{
		if (unk_0xE3903F59E2F22150() > (uParam0->f_5.f_10 + 45000))
		{
			return 1;
		}
	}
	else
	{
		uParam0->f_5.f_10 = unk_0xE3903F59E2F22150();
		uParam0->f_17.f_5 = uParam0->f_17.f_4;
	}
	return 0;
}

float func_303(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = pow(fParam2, 2f);
			break;
		
		case 2:
		case 7:
			fParam2 = (1f - pow((1f - fParam2), 2f));
			break;
		
		case 3:
		case 8:
			fParam2 = ((-cos(func_304((3.141593f * fParam2))) / 2f) + 0.5f);
			break;
		
		case 4:
		case 9:
			fParam2 = (pow(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_303(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_303(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_304(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_305(struct<18> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32)
{
	float fVar0;
	
	switch (Param0.f_17.f_19)
	{
		case 0:
			fVar0 = 32f;
			break;
		
		case 1:
			fVar0 = 36f;
			break;
		
		case 2:
			fVar0 = 40f;
			break;
		
		case 3:
			fVar0 = 44f;
			break;
	}
	fVar0 = (fVar0 + IntToFloat((3 * Global_106565.f_25067)));
	return fVar0;
}

void func_306()
{
	if (Local_46.f_5 && !Local_46.f_6)
	{
		if (Local_209.f_4 < 6)
		{
			Local_209 = func_232(iLocal_363, Local_47[Local_209.f_4 /*3*/], 1);
		}
		switch (Local_209.f_4)
		{
			case 5:
				if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), Local_47.f_19, Local_47.f_22, Local_47.f_25, 0, true, 0))
				{
					Local_209.f_3++;
					Local_209.f_2++;
					if (Local_209.f_3 < Local_47.f_65)
					{
						Local_209.f_9 = (unk_0xE3903F59E2F22150() - Local_209.f_10);
						if (Local_209.f_9 < Local_209.f_8)
						{
							Local_209.f_8 = Local_209.f_9;
						}
						Local_209.f_10 = unk_0xE3903F59E2F22150();
						Local_209.f_4 = 0;
						Local_215 = 1;
					}
					else
					{
						Local_209.f_12 = (unk_0xE3903F59E2F22150() - Local_46.f_7);
						if (Local_209.f_12 < Global_106565.f_25067.f_1 || Global_106565.f_25067.f_1 == 0)
						{
							Global_106565.f_25067.f_1 = Local_209.f_12;
						}
						Local_209.f_13 = 1;
						Local_46.f_6 = 1;
					}
					unk_0x0F8EAEEC97DDBCB3(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
					func_241(&Local_209);
				}
				break;
			
			default:
				if (Local_209 < 20f)
				{
					Local_209.f_2++;
					Local_209.f_4++;
					unk_0x0F8EAEEC97DDBCB3(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
					func_241(&Local_209);
				}
				break;
		}
		if (!Local_46.f_6)
		{
			if (!iLocal_73)
			{
				if (unk_0xE3903F59E2F22150() < Local_46.f_7 + 500)
				{
					if (func_297(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
					{
						if (unk_0xF1CDE9FD207C4CD8(0, 71))
						{
							if (unk_0x0C2E237744BA0026(unk_0x541D5C57194E73C4(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0))))
							{
								unk_0xF2FD56CCA8BCB2CA(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 1);
							}
							iLocal_109 = unk_0xE3903F59E2F22150() + 2000;
							unk_0x0B1F8038F56C12B7("RaceTurbo", 0, 0);
							iLocal_73 = 1;
						}
					}
				}
			}
			else if (unk_0xE3903F59E2F22150() > iLocal_109 || !unk_0xF1CDE9FD207C4CD8(0, 71))
			{
				if (unk_0x0C2E237744BA0026(unk_0x541D5C57194E73C4(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0))))
				{
					unk_0xF2FD56CCA8BCB2CA(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0);
				}
				iLocal_73 = 0;
			}
			else
			{
				unk_0x0848C95091F9ECB9(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0, 0f, 20f, 0f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			}
			func_329();
			func_328(&Local_215, Local_209);
			func_316((unk_0xE3903F59E2F22150() - Local_46.f_7), 0, "", Local_209.f_3 + 1, Local_47.f_65, "", Local_209.f_6, 9, "", 0, 1, Local_209.f_2 + 1, 30, "", 1, -1, -1, "", 6, Global_106565.f_25067.f_1, "CRACEBTIME", (unk_0xE3903F59E2F22150() - Local_209.f_10), "", 0, 1, -1, "", -1f, 1, 1, -1f, -1, 0, -1, -1, "", 1);
			if (unk_0xF1CDE9FD207C4CD8(0, 20))
			{
				if (!Global_1574174)
				{
					Global_1574174 = 1;
				}
			}
			else if (Global_1574174)
			{
				Global_1574174 = 0;
			}
			func_307(&Local_209);
		}
	}
}

void func_307(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_4 + 1;
	if (uParam0->f_4 == 5)
	{
		if (uParam0->f_3 + 1 == Local_47.f_65)
		{
			func_309(uParam0, 1, 1);
		}
		else
		{
			func_309(uParam0, 0, 1);
			func_308(uParam0, Local_47[0 /*3*/], 0);
		}
	}
	else
	{
		if (uParam0->f_2 < 1)
		{
			func_309(uParam0, 0, 0);
		}
		else
		{
			func_309(uParam0, 0, 1);
		}
		if (iVar0 == 5)
		{
			func_308(uParam0, Local_47[iVar0 /*3*/], 1);
		}
		else
		{
			func_308(uParam0, Local_47[iVar0 /*3*/], 0);
		}
	}
}

void func_308(var uParam0, vector3 vParam1, bool bParam2)
{
	if (!unk_0xE38E3CF1625A4145(uParam0->f_15))
	{
		uParam0->f_15 = unk_0x2C0ED4741A007C6A(vParam1);
		unk_0x983D75D9630FD905(uParam0->f_15, 0);
		if (!bParam2)
		{
			unk_0xB9E84A421C105943(uParam0->f_15, 5);
			unk_0xCE5C49921A521962(uParam0->f_15, 0.7f);
		}
		else if (uParam0->f_3 == Local_47.f_65)
		{
			unk_0xA20C1DE21F2F071C(uParam0->f_15, 38);
			unk_0xCE5C49921A521962(uParam0->f_15, 1.2f);
		}
		unk_0x1C95CD840303FC37(uParam0->f_15, "BLIP_CPOINT");
	}
}

void func_309(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	vector3 vVar12;
	float fVar13;
	float fVar14;
	
	iVar9 = func_315(uParam0->f_4);
	unk_0x1256E5EA03020804(12, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x1256E5EA03020804(134, &uVar4, &uVar5, &uVar6, &uVar7);
	iVar3 = func_314(uParam0->f_4);
	if (unk_0xE38E3CF1625A4145(uParam0->f_14))
	{
		if (uParam0->f_16 != 0)
		{
			unk_0x4DC3F82ACA7C9BB9(uParam0->f_16, iVar0, iVar1, iVar2, iVar3);
			unk_0xAD3DB344AAC22BF7(uParam0->f_16, uVar4, uVar5, uVar6, iVar3);
		}
	}
	else
	{
		fVar13 = (8.5f * 1.333f);
		fVar14 = 6f;
		if (uParam0->f_4 == 5)
		{
			vVar11 = { Local_47[0 /*3*/] };
		}
		else
		{
			vVar11 = { Local_47[uParam0->f_4 + 1 /*3*/] };
		}
		if (uParam0->f_4 == 0)
		{
			iVar8 = 5;
		}
		else
		{
			iVar8 = (uParam0->f_4 - 1);
		}
		vVar10 = { Local_47[uParam0->f_4 /*3*/] };
		vVar12 = { Local_47[iVar8 /*3*/] };
		vVar10.z = (vVar10.z - 1f);
		vVar12.z = (vVar12.z - 1f);
		if (iVar8 == 5)
		{
			vVar12.z = (vVar12.z - 2f);
		}
		if (uParam0->f_4 == 5)
		{
			vVar10.z = (vVar10.z - 2f);
		}
		uParam0->f_14 = unk_0x2C0ED4741A007C6A(vVar10);
		unk_0x983D75D9630FD905(uParam0->f_14, 0);
		if (!bParam1)
		{
			unk_0xB9E84A421C105943(uParam0->f_14, 5);
			unk_0xCE5C49921A521962(uParam0->f_14, 1.2f);
			unk_0xC51C58C963968740(uParam0->f_14, 9);
			uParam0->f_16 = unk_0x253E2A687ABB3993(iVar9, vVar10 + Vector(fVar14, 0f, 0f), vVar11, fVar13, iVar0, iVar1, iVar2, iVar3, 0);
			unk_0xAD3DB344AAC22BF7(uParam0->f_16, uVar4, uVar5, uVar6, iVar3);
			func_310(uParam0->f_16, vVar10);
		}
		else
		{
			unk_0xA20C1DE21F2F071C(uParam0->f_14, 38);
			unk_0xCE5C49921A521962(uParam0->f_14, 1.2f);
			unk_0xC51C58C963968740(uParam0->f_14, 9);
			uParam0->f_16 = unk_0x253E2A687ABB3993(9, vVar10 + Vector(fVar14, 0f, 0f), vVar11, fVar13, iVar0, iVar1, iVar2, iVar3, 0);
			unk_0xAD3DB344AAC22BF7(uParam0->f_16, uVar4, uVar5, uVar6, iVar3);
			func_310(uParam0->f_16, vVar10);
		}
		if (bParam2)
		{
			iVar9 = func_315(iVar8);
			unk_0x1256E5EA03020804(1, &iVar0, &iVar1, &iVar2, &(uParam0->f_18));
			uParam0->f_18 = 180;
			if (uParam0->f_17 != 0)
			{
				unk_0x177FDBE7D68BB089(uParam0->f_17);
			}
			vVar12 = { vVar12 };
			uParam0->f_17 = unk_0x253E2A687ABB3993(iVar9, vVar12 + Vector(fVar14, 0f, 0f), vVar10, fVar13, iVar0, iVar1, iVar2, uParam0->f_18, 0);
			func_310(uParam0->f_17, vVar12);
		}
		unk_0x4136F4541FD3A564(uParam0->f_16, 9.5f, 9.5f, 30f);
		unk_0x4136F4541FD3A564(uParam0->f_17, 9.5f, 9.5f, 30f);
		unk_0x1C95CD840303FC37(uParam0->f_14, "BLIP_CPOINT");
	}
	if (uParam0->f_17 != 0)
	{
		uParam0->f_18 = (uParam0->f_18 - 10);
		if (uParam0->f_18 > 0)
		{
			unk_0x1256E5EA03020804(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x4DC3F82ACA7C9BB9(uParam0->f_17, iVar0, iVar1, iVar2, uParam0->f_18);
		}
		else
		{
			unk_0x177FDBE7D68BB089(uParam0->f_17);
		}
	}
}

void func_310(var uParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1[8];
	float fVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		vVar1[iVar0 /*3*/] = { vParam1 + func_313(iVar0) };
		unk_0x8C1596BAD35D957A(vVar1[iVar0 /*3*/], &fVar2, 0, 0);
		if (fVar2 < (vParam1.z - 2f) || fVar2 > (vParam1.z + 2f))
		{
			vVar1[iVar0 /*3*/].f_2 = vParam1.z;
		}
		else
		{
			vVar1[iVar0 /*3*/].f_2 = fVar2;
		}
		iVar0++;
	}
	vVar3 = { func_311(&vVar1) };
	unk_0xA7A6BA984BD6731A(uParam0, vParam1 - Vector(0.3f, 0f, 0f), vVar3);
}

Vector3 func_311(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		vVar1 = { *(uParam0[iVar0 /*3*/]) };
		vVar2 = { *(uParam0[(iVar0 + 1 % *uParam0) /*3*/]) };
		vVar3.x = (vVar3.x + ((vVar1.y - vVar2.y) * (vVar1.z + vVar2.z)));
		vVar3.y = (vVar3.y + ((vVar1.z - vVar2.z) * (vVar1.x + vVar2.x)));
		vVar3.z = (vVar3.z + ((vVar1.x - vVar2.x) * (vVar1.y + vVar2.y)));
		iVar0++;
	}
	return func_312(vVar3);
}

Vector3 func_312(vector3 vParam0)
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

Vector3 func_313(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 1f;
		
		case 1:
			return (7.5f / 2f), 0f, 1f;
		
		case 2:
			return (-7.5f / 2f), 0f, 1f;
		
		case 3:
			return 0f, (7.5f / 2f), 1f;
		
		case 4:
			return 0f, (-7.5f / 2f), 1f;
		
		case 5:
			return (7.5f / 2f), (7.5f / 2f), 1f;
		
		case 6:
			return (-7.5f / 2f), (-7.5f / 2f), 1f;
		
		case 7:
			return (7.5f / 2f), (-7.5f / 2f), 1f;
		
		case 8:
			return (-7.5f / 2f), (7.5f / 2f), 1f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_314(int iParam0)
{
	float fVar0;
	int iVar1;
	
	iVar1 = 240;
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		fVar0 = unk_0x16E00F066AFFEA0D(Local_47[iParam0 /*3*/], unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), true);
		if (fVar0 > 100f)
		{
			iVar1 = 240;
		}
		else
		{
			iVar1 = round((fVar0 * 2.4f));
		}
	}
	return iVar1;
}

int func_315(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	vVar0 = { Local_47[iParam0 /*3*/] };
	if (iParam0 + 1 == 6)
	{
		vVar1 = { Local_47[0 /*3*/] };
	}
	else
	{
		vVar1 = { Local_47[iParam0 + 1 /*3*/] };
	}
	if ((iParam0 - 1) >= 0)
	{
		vVar2 = { Local_47[(iParam0 - 1) /*3*/] };
	}
	vVar3 = { vVar2 - vVar0 };
	vVar4 = { vVar1 - vVar0 };
	fVar5 = unk_0x989A68339D9F80C4(vVar3.x, vVar3.y, vVar4.x, vVar4.y);
	if (fVar5 > 180f)
	{
		fVar5 = (360f - fVar5);
	}
	if (fVar5 < fLocal_30)
	{
		return 7;
	}
	else if (fVar5 < fLocal_31)
	{
		return 6;
	}
	else if (fVar5 < fLocal_32)
	{
		return 5;
	}
	else
	{
		return 5;
	}
	return 5;
}

void func_316(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, char* sParam17, int iParam18, int iParam19, char* sParam20, int iParam21, char* sParam22, int iParam23, bool bParam24, int iParam25, char* sParam26, float fParam27, int iParam28, int iParam29, float fParam30, int iParam31, bool bParam32, int iParam33, int iParam34, char* sParam35, bool bParam36)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	char* sVar9;
	char* sVar10;
	char* sVar11;
	
	if (bParam24)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam34 != -1)
	{
		func_111(iParam34, "TIMER_CHALLTIME", iParam9, iVar0, iParam25, 0, 10, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	func_327();
	if (fParam27 > -1f)
	{
		func_324(0, "", iParam25, iParam28, 10, 0, sParam26, 1, fParam27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam15 > -1)
	{
		sVar1 = sParam17;
		if (func_323(sVar1))
		{
			sVar1 = "TIM_DAMAGE";
		}
		func_228(iParam15, iParam16, sVar1, iParam18, iParam25, 10, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1);
	}
	if (!bParam32 || func_322())
	{
		if (iParam6 > -1 && iParam7 > 0)
		{
			sVar2 = sParam8;
			if (func_323(sVar2))
			{
				sVar2 = "TIM_POSIT";
			}
			func_321(iParam6, iParam7, sVar2, iParam10, iParam25, 7, 0, 0, 0, iParam10, 0);
		}
	}
	if (iParam3 > -1)
	{
		sVar3 = sParam5;
		if (func_323(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam3 = iParam3;
		iParam4 = iParam4;
		if (Global_1574174)
		{
			if (func_320())
			{
				func_319(iParam3, iParam4, sVar3, iParam25, 1, 8, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
			}
		}
	}
	if (iParam11 > -1 && iParam12 > -1)
	{
		sVar4 = sParam13;
		if (func_323(sVar4))
		{
			sVar4 = "TIM_CHECKPOIN";
		}
		iParam14 = iParam14;
		if (Global_1574174)
		{
			func_321(iParam11, iParam12, sVar4, iParam14, iParam25, 7, 0, 0, 0, 1, 0);
		}
	}
	if (fParam30 > -1f)
	{
		sVar5 = "TIM_DISTANCE";
		sVar6 = "FMMC_LENGTHM";
		func_324(0, sVar5, -1, 1, 7, 0, sVar6, 1, fParam30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam19 > -1)
	{
		sVar7 = sParam20;
		if (func_323(sVar7))
		{
			sVar7 = "TIMER_BESLAP";
		}
	}
	if ((((Global_4456448.f_55685 != 1 && Global_4456448.f_55685 != 3) && Global_4456448.f_55685 != 5) && Global_4456448.f_55685 != 7) && Global_4456448.f_55685 != 19)
	{
		if (iParam21 > -1)
		{
			if (!func_143(unk_0x95B959F18401C09A()))
			{
				sVar8 = sParam22;
				if (func_323(sVar8))
				{
					sVar8 = "TIMER_CURLAP";
				}
				func_111(iParam21, sVar8, 0, 1, iParam25, iParam23, 6, 0, iParam29, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
	if (func_323(sVar9))
	{
		sVar9 = func_318(iParam1);
	}
	if (!bParam36)
	{
		if ((bParam32 || Global_1574174) || func_317() == 2)
		{
			if (bParam32)
			{
				if (Global_1574174 && !unk_0x786AF4A44E1B5B4B(sParam35))
				{
					func_111(iParam31, sParam35, iParam9, 1, iParam25, 0, 5, 1, 1, 0, 0, iParam31 <= 0, 0, 0, 0, 0, 0, -1);
				}
				else if (iParam31 <= 0)
				{
					func_111(iParam31, sVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_111(iParam31, sVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			else if (func_317() == 2 && !unk_0x786AF4A44E1B5B4B(sParam35))
			{
				func_111(iParam31, sParam35, iParam9, 1, iParam25, 0, 5, 1, 1, 0, 0, iParam31 <= 0, 0, 0, 0, 0, 0, -1);
			}
			else if (iParam31 <= 0)
			{
				func_111(iParam31, sVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_111(iParam31, sVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
	else if (Global_1574174 || func_317() == 2)
	{
		if (iParam19 <= 0)
		{
			func_111(iParam19, sParam20, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, -1);
		}
		else
		{
			func_111(iParam19, sParam20, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
	}
	sVar10 = sParam2;
	if (func_323(sVar10))
	{
		sVar10 = "TIMER_TIME_RCE";
	}
	if (iParam0 > -1)
	{
		func_111(iParam0, sVar10, iParam9, iVar0, iParam25, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if (func_323(sVar11))
	{
		sVar11 = "TIMER_CHALLTIME";
	}
	iParam33 = iParam33;
}

int func_317()
{
	return Global_1371947.f_68;
}

char* func_318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TIMER_WORLDTIME";
			break;
		
		case 1:
			return "FRIEND_WORLDTIME";
			break;
		
		case 2:
			return "CREW_WORLDTIME";
			break;
		
		case 3:
			return "PERS_WORLDTIME";
			break;
	}
	return "";
}

void func_319(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_113(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_112(4, iVar0);
		Global_1373453.f_3163[iVar0] = iParam0;
		Global_1373453.f_3163.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1373453.f_3163.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1373453.f_3163.f_183[iVar0] = iParam3;
		Global_1373453.f_3163.f_216[iVar0] = iParam5;
		Global_1373453.f_3163.f_194[iVar0] = iParam4;
		Global_1373453.f_3163.f_227[iVar0] = iParam6;
		Global_1373453.f_3163.f_270[iVar0] = iParam7;
		Global_1373453.f_3163.f_281[iVar0] = iParam8;
		Global_1373453.f_3163.f_292[iVar0] = iParam9;
		Global_1373453.f_3163.f_303[iVar0] = iParam10;
		Global_1373453.f_3163.f_314[iVar0] = iParam11;
		Global_1373453.f_3163.f_325[iVar0] = iParam13;
		Global_1373453.f_3163.f_336[iVar0] = iParam14;
		Global_1373453.f_3163.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x4CE1DD5CFC1F941E()) && iParam12)
		{
			Global_1373453.f_1109 = 1;
		}
	}
}

int func_320()
{
	return 1;
	return 0;
}

void func_321(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_113(5, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_112(5, iVar0);
		Global_1373453.f_3521[iVar0] = iParam0;
		Global_1373453.f_3521.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1373453.f_3521.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1373453.f_3521.f_194[iVar0] = uParam3;
		Global_1373453.f_3521.f_183[iVar0] = iParam4;
		Global_1373453.f_3521.f_216[iVar0] = iParam5;
		Global_1373453.f_3521.f_227[iVar0] = iParam6;
		Global_1373453.f_3521.f_270[iVar0] = iParam7;
		Global_1373453.f_3521.f_281[iVar0] = iParam8;
		Global_1373453.f_3521.f_292[iVar0] = iParam9;
		Global_1373453.f_3521.f_303[iVar0] = iParam10;
	}
}

bool func_322()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_142, 2);
}

int func_323(char* sParam0)
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

void func_324(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_113(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_112(6, iVar0);
		Global_1373453.f_3835[iVar0] = iParam0;
		StringCopy(&(Global_1373453.f_3835.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1373453.f_3835.f_183[iVar0] = iParam3;
		Global_1373453.f_3835.f_172[iVar0] = iParam2;
		Global_1373453.f_3835.f_260[iVar0] = iParam4;
		Global_1373453.f_3835.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1373453.f_3835.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1373453.f_3835.f_443[iVar0] = iParam7;
		Global_1373453.f_3835.f_454[iVar0] = fParam8;
		Global_1373453.f_3835.f_497[iVar0] = iParam9;
		Global_1373453.f_3835.f_508[iVar0] = iParam10;
		Global_1373453.f_3835.f_205[iVar0] = iParam11;
		Global_1373453.f_3835.f_216[iVar0] = iParam12;
		Global_1373453.f_3835.f_227[iVar0] = iParam13;
		Global_1373453.f_3835.f_238[iVar0] = iParam14;
		Global_1373453.f_3835.f_249[iVar0] = iParam15;
		Global_1373453.f_3835.f_519[iVar0] = iParam16;
		Global_1373453.f_3835.f_530[iVar0] = iParam17;
		Global_1373453.f_3835.f_541[iVar0] = iParam18;
		Global_1373453.f_3835.f_552[iVar0] = iParam19;
		Global_1373453.f_3835.f_563[iVar0] = iParam20;
		Global_1373453.f_3835.f_574[iVar0] = iParam21;
		Global_1373453.f_3835.f_585[iVar0] = iParam22;
		Global_1373453.f_3835.f_596[iVar0] = iParam23;
		Global_1373453.f_3835.f_607[iVar0] = iParam24;
		Global_1373453.f_3835.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_326())
		{
			Global_1373453.f_1109 = 1;
		}
		if (unk_0x4CE1DD5CFC1F941E())
		{
			iVar2 = 0;
			unk_0x3A5E614EC752B188(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1373453.f_1113 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1373453.f_1112 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1373453.f_1109 = 1;
			}
			if (func_325())
			{
				Global_1373453.f_1113 = 1;
			}
		}
	}
}

int func_325()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x4CE1DD5CFC1F941E())
	{
		unk_0x3A5E614EC752B188(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_326()
{
	if (((unk_0x97B6A6696D936191() == 8 || unk_0x97B6A6696D936191() == 9) || unk_0x97B6A6696D936191() == 10) || unk_0x97B6A6696D936191() == 12)
	{
		return 1;
	}
	return 0;
}

void func_327()
{
	char* sVar0;
	int iVar1;
	
	if ((Global_1312323 == 1 || Global_1312330 == 1) || Global_1312319.f_3 == 1)
	{
		if (Global_1312323 == 1)
		{
			sVar0 = "HUD_SPIKES";
			iVar1 = 1;
		}
		else if (Global_1312330 == 1)
		{
			switch (Global_1312330.f_1)
			{
				case 0:
					iVar1 = 2;
					sVar0 = "HUD_ROCKET";
					break;
				
				case 1:
					iVar1 = 3;
					sVar0 = "HUD_ROCKET_H";
					break;
				
				case 2:
					iVar1 = 2;
					sVar0 = "HUD_ROCKET_NH";
					break;
			}
		}
		else if (Global_1312319.f_3 == 1)
		{
			sVar0 = "HUD_BOOSTS";
			iVar1 = 4;
		}
		func_324(1, sVar0, -1, 1, 5, 0, "", 0, 0f, 0, 0, 0, 0, 0, 0, iVar1, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	else if (Global_1312346 == 1)
	{
		sVar0 = "HUD_VEH_GUN";
		iVar1 = 9;
		func_324(Global_1312346.f_1, sVar0, -1, 1, 5, 0, "", 0, 0f, 0, 0, 0, 0, 0, 0, iVar1, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
}

void func_328(int iParam0, struct<4> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	switch (*iParam0)
	{
		case 1:
			iParam0->f_2 = unk_0x199B24FF79A52CCF("MIDSIZED_MESSAGE");
			if (unk_0x11AE7F6A404414C9(iParam0->f_2))
			{
				*iParam0 = 2;
			}
			break;
		
		case 2:
			unk_0xBB698266C5FDF0A7(iParam0->f_2, "SHOW_SHARD_MIDSIZED_MESSAGE");
			unk_0x713FEBE56D2BD403("BM_LAP_STR");
			unk_0x75D3F9044123D4F9(1);
			unk_0xFA6BEE2B1507FF1E("BM_LAP");
			unk_0x75D3F9044123D4F9(1);
			unk_0xE800DC85FDF60F85(Param1.f_3 + 1);
			unk_0x75D3F9044123D4F9(1);
			unk_0xE800DC85FDF60F85(Local_47.f_65);
			unk_0x36F3AA9FFAAF8606();
			unk_0x614EE52A69097A4C();
			iParam0->f_1 = unk_0xE3903F59E2F22150() + 3000;
			*iParam0 = 3;
			break;
		
		case 3:
			if (unk_0xE3903F59E2F22150() < (iParam0->f_1 - 500))
			{
				if (unk_0x11AE7F6A404414C9(iParam0->f_2))
				{
					unk_0xFF524AE40FB6301A(iParam0->f_2, 255, 255, 255, 255, 0);
					unk_0x5C58D0ADA22491FA(4);
				}
			}
			else
			{
				unk_0xBB698266C5FDF0A7(iParam0->f_2, "SHARD_ANIM_OUT");
				unk_0x4D9DA18AB3C2A466(1);
				unk_0x8DAB5B12D7B9AD29(0.33f);
				unk_0x818901B332D5541D();
				*iParam0 = 4;
			}
			break;
		
		case 4:
			if (unk_0xE3903F59E2F22150() < iParam0->f_1)
			{
				if (unk_0x11AE7F6A404414C9(iParam0->f_2))
				{
					unk_0xFF524AE40FB6301A(iParam0->f_2, 255, 255, 255, 255, 0);
					unk_0x5C58D0ADA22491FA(4);
				}
			}
			else
			{
				if (unk_0x11AE7F6A404414C9(iParam0->f_2))
				{
					unk_0x83A1D480DB0B52CC(&(iParam0->f_2));
				}
				unk_0x83A1D480DB0B52CC(&(iParam0->f_2));
				*iParam0 = 0;
			}
			break;
	}
}

void func_329()
{
	Global_1373453.f_1109 = 1;
}

void func_330()
{
	if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 1688.299f, 3336.851f, 24.68442f, 2475.163f, 2991.082f, 120.0549f, 480f, 0, true, 0))
	{
		func_240(3);
		sLocal_113 = "CRACEFAIL1";
	}
}

void func_331()
{
	iLocal_106 = 0;
	iLocal_107 = 0;
	iLocal_112 = 0;
	iLocal_109 = 0;
	iLocal_73 = 0;
	iLocal_111 = 0;
	func_339(&Local_47);
	func_338(&Local_121);
	func_337(&Local_119, &Local_121);
	func_336(&Local_120);
	func_335(&Local_122);
	func_334(&Local_209);
	func_333(&Local_46);
	func_332();
}

void func_332()
{
	Local_215 = 0;
	Local_215.f_1 = 0;
}

void func_333(int iParam0)
{
	iParam0->f_5 = 0;
	iParam0->f_6 = 0;
	iParam0->f_7 = 0;
}

void func_334(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0f;
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
	uParam0->f_6 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	if (Global_106565.f_25067 != 4)
	{
		iVar0 = unk_0x9EC3B269A34A2BEE(0, 3);
		if (iVar0 == 0)
		{
			uParam0->f_19 = 1;
		}
		else if (iVar0 == 1)
		{
			uParam0->f_19 = 0;
		}
		else if (iVar0 == 2)
		{
			uParam0->f_19 = 2;
		}
	}
	else
	{
		iVar0 = unk_0x9EC3B269A34A2BEE(0, 6);
		if (iVar0 == 0)
		{
			uParam0->f_19 = 1;
		}
		else if (iVar0 == 1 || iVar0 == 2)
		{
			uParam0->f_19 = 0;
		}
		else if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			uParam0->f_19 = 2;
		}
	}
}

void func_335(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		(iParam0[iVar0 /*11*/])->f_9 = 0;
		(iParam0[iVar0 /*11*/])->f_10 = 0;
		iVar0++;
	}
}

void func_336(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 23)
	{
		(iParam0[iVar0 /*50*/])->f_41 = 0;
		(iParam0[iVar0 /*50*/])->f_42 = 0;
		(iParam0[iVar0 /*50*/])->f_44 = 0;
		(iParam0[iVar0 /*50*/])->f_45 = 0;
		(iParam0[iVar0 /*50*/])->f_43 = 0;
		iVar1 = unk_0x9EC3B269A34A2BEE(0, 4);
		if (iVar1 == 0)
		{
			(iParam0[iVar0 /*50*/])->f_3 = joaat("a_f_y_tourist_01");
		}
		else if (iVar1 == 1)
		{
			(iParam0[iVar0 /*50*/])->f_3 = joaat("a_f_y_tourist_02");
		}
		else if (iVar1 == 2)
		{
			(iParam0[iVar0 /*50*/])->f_3 = joaat("a_m_m_tourist_01");
		}
		else if (iVar1 == 3)
		{
			(iParam0[iVar0 /*50*/])->f_3 = joaat("a_m_m_hillbilly_02");
		}
		StringCopy(&((iParam0[iVar0 /*50*/])->f_46), "Ambient Ped ", 16);
		StringIntConCat(&((iParam0[iVar0 /*50*/])->f_46), iVar0, 16);
		switch (iVar0)
		{
			case 0:
				(iParam0[iVar0 /*50*/])->f_37 = { 1977.843f, 3129.412f, 45.9792f };
				(iParam0[iVar0 /*50*/])->f_40 = 122.9084f;
				break;
			
			case 1:
				(iParam0[iVar0 /*50*/])->f_37 = { 1969.595f, 3115.701f, 45.8988f };
				(iParam0[iVar0 /*50*/])->f_40 = -32.152f;
				break;
			
			case 2:
				(iParam0[iVar0 /*50*/])->f_37 = { 1986.622f, 3123.347f, 46.0496f };
				(iParam0[iVar0 /*50*/])->f_40 = 143.293f;
				break;
			
			case 3:
				(iParam0[iVar0 /*50*/])->f_37 = { 1968.123f, 3117.722f, 45.9001f };
				(iParam0[iVar0 /*50*/])->f_40 = 182.6841f;
				break;
			
			case 4:
				(iParam0[iVar0 /*50*/])->f_37 = { 1866.502f, 3220.542f, 44.2959f };
				(iParam0[iVar0 /*50*/])->f_40 = 283.4628f;
				break;
			
			case 5:
				(iParam0[iVar0 /*50*/])->f_37 = { 1866.734f, 3226.219f, 44.2235f };
				(iParam0[iVar0 /*50*/])->f_40 = 253.3484f;
				break;
			
			case 6:
				(iParam0[iVar0 /*50*/])->f_37 = { 1932.064f, 3262.209f, 44.7989f };
				(iParam0[iVar0 /*50*/])->f_40 = 184.9414f;
				break;
			
			case 7:
				(iParam0[iVar0 /*50*/])->f_37 = { 1939.296f, 3269.148f, 45.2262f };
				(iParam0[iVar0 /*50*/])->f_40 = 196.2922f;
				break;
			
			case 8:
				(iParam0[iVar0 /*50*/])->f_37 = { 1936.04f, 3264.806f, 44.8089f };
				(iParam0[iVar0 /*50*/])->f_40 = 179.3959f;
				break;
			
			case 9:
				(iParam0[iVar0 /*50*/])->f_37 = { 1938.14f, 3266.329f, 44.8089f };
				(iParam0[iVar0 /*50*/])->f_40 = 208.0957f;
				break;
			
			case 10:
				(iParam0[iVar0 /*50*/])->f_37 = { 1969.938f, 3262.41f, 44.5866f };
				(iParam0[iVar0 /*50*/])->f_40 = 135.3289f;
				break;
			
			case 11:
				(iParam0[iVar0 /*50*/])->f_37 = { 2129.336f, 3274.596f, 45.093f };
				(iParam0[iVar0 /*50*/])->f_40 = 158.6073f;
				break;
			
			case 12:
				(iParam0[iVar0 /*50*/])->f_37 = { 2131.781f, 3273.956f, 45.093f };
				(iParam0[iVar0 /*50*/])->f_40 = 144.4747f;
				break;
			
			case 13:
				(iParam0[iVar0 /*50*/])->f_37 = { 2135.285f, 3273.007f, 45.1832f };
				(iParam0[iVar0 /*50*/])->f_40 = 164.2929f;
				break;
			
			case 14:
				(iParam0[iVar0 /*50*/])->f_37 = { 2135.561f, 3274.741f, 45.6104f };
				(iParam0[iVar0 /*50*/])->f_40 = 166.3804f;
				break;
			
			case 15:
				(iParam0[iVar0 /*50*/])->f_37 = { 2243.927f, 3247.596f, 47.1535f };
				(iParam0[iVar0 /*50*/])->f_40 = 113.5077f;
				break;
			
			case 16:
				(iParam0[iVar0 /*50*/])->f_37 = { 2242.918f, 3248.862f, 47.1472f };
				(iParam0[iVar0 /*50*/])->f_40 = 94.3813f;
				break;
			
			case 17:
				(iParam0[iVar0 /*50*/])->f_37 = { 2276.538f, 2995.181f, 44.9018f };
				(iParam0[iVar0 /*50*/])->f_40 = 343.2186f;
				break;
			
			case 18:
				(iParam0[iVar0 /*50*/])->f_37 = { 2272.339f, 2995.217f, 44.7997f };
				(iParam0[iVar0 /*50*/])->f_40 = 354.5168f;
				break;
			
			case 19:
				(iParam0[iVar0 /*50*/])->f_37 = { 2008.773f, 3110.642f, 45.9644f };
				(iParam0[iVar0 /*50*/])->f_40 = 212.1216f;
				break;
			
			case 20:
				(iParam0[iVar0 /*50*/])->f_37 = { 1993.863f, 3099.198f, 45.9635f };
				(iParam0[iVar0 /*50*/])->f_40 = 336.9819f;
				break;
			
			case 21:
				(iParam0[iVar0 /*50*/])->f_37 = { 1991.992f, 3100.387f, 45.9819f };
				(iParam0[iVar0 /*50*/])->f_40 = 332.381f;
				break;
			
			case 22:
				(iParam0[iVar0 /*50*/])->f_37 = { 1987.643f, 3102.67f, 46.0614f };
				(iParam0[iVar0 /*50*/])->f_40 = 327.4696f;
				break;
		}
		iVar0++;
	}
}

void func_337(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		(iParam0[iVar0 /*50*/])->f_41 = 0;
		(iParam0[iVar0 /*50*/])->f_42 = 0;
		(iParam0[iVar0 /*50*/])->f_44 = 0;
		(iParam0[iVar0 /*50*/])->f_45 = 0;
		(iParam0[iVar0 /*50*/])->f_43 = 1;
		(iParam0[iVar0 /*50*/])->f_4 = iLocal_59;
		iVar1 = unk_0x9EC3B269A34A2BEE(0, 2);
		if (iVar1 == 0)
		{
			(iParam0[iVar0 /*50*/])->f_3 = joaat("a_m_y_motox_01");
		}
		else if (iVar1 == 1)
		{
			(iParam0[iVar0 /*50*/])->f_3 = joaat("a_m_y_motox_02");
		}
		iVar1 = unk_0x9EC3B269A34A2BEE(0, 6);
		if (iVar1 == 0)
		{
			(iParam0[iVar0 /*50*/])->f_17.f_19 = 1;
		}
		else if (iVar1 == 1 || iVar1 == 2)
		{
			(iParam0[iVar0 /*50*/])->f_17.f_19 = 0;
		}
		else if ((iVar1 == 3 || iVar1 == 4) || iVar1 == 5)
		{
			(iParam0[iVar0 /*50*/])->f_17.f_19 = 2;
		}
		StringCopy(&((iParam0[iVar0 /*50*/])->f_46), "Racer ", 16);
		StringIntConCat(&((iParam0[iVar0 /*50*/])->f_46), iVar0, 16);
		(iParam0[iVar0 /*50*/])->f_5 = { *(iParam1[iVar0 /*12*/]) };
		(iParam0[iVar0 /*50*/])->f_43 = 0;
		func_334(&((iParam0[iVar0 /*50*/])->f_17));
		(iParam0[iVar0 /*50*/])->f_17.f_11 = iVar0;
		(iParam0[iVar0 /*50*/])->f_37 = { Local_47.f_26[iVar0 /*3*/] };
		(iParam0[iVar0 /*50*/])->f_40 = Local_47.f_54[iVar0];
		if (iVar0 == 1)
		{
			(iParam0[iVar0 /*50*/])->f_17.f_19 = 3;
			(iParam0[iVar0 /*50*/])->f_3 = joaat("a_m_y_motox_02");
		}
		iVar0++;
	}
}

void func_338(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		(iParam0[iVar0 /*12*/])->f_7 = 0;
		(iParam0[iVar0 /*12*/])->f_8 = 0;
		switch (Global_106565.f_25067)
		{
			case 0:
				switch (iVar0)
				{
					case 0:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("buccaneer");
						break;
					
					case 1:
						(iParam0[iVar0 /*12*/])->f_2 = func_134();
						break;
					
					case 2:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("manana");
						break;
					
					case 3:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("tornado");
						break;
					
					case 4:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("blade");
						break;
					
					case 5:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("vigero");
						break;
					
					case 6:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("warrener");
						break;
					
					case 7:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("peyote");
						break;
				}
				break;
			
			case 1:
				switch (iVar0)
				{
					case 0:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("dominator");
						break;
					
					case 1:
						(iParam0[iVar0 /*12*/])->f_2 = func_134();
						break;
					
					case 2:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("sabregt");
						break;
					
					case 3:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("buffalo");
						break;
					
					case 4:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("ruiner");
						break;
					
					case 5:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("coquette2");
						break;
					
					case 6:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("dukes");
						break;
					
					case 7:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("phoenix");
						break;
				}
				break;
			
			case 2:
				switch (iVar0)
				{
					case 0:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("pigalle");
						break;
					
					case 1:
						(iParam0[iVar0 /*12*/])->f_2 = func_134();
						break;
					
					case 2:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("futo");
						break;
					
					case 3:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("rapidgt");
						break;
					
					case 4:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("sultan");
						break;
					
					case 5:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("phoenix");
						break;
					
					case 6:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("vigero");
						break;
					
					case 7:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("sabregt");
						break;
				}
				break;
			
			case 3:
				switch (iVar0)
				{
					case 0:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("gauntlet2");
						break;
					
					case 1:
						(iParam0[iVar0 /*12*/])->f_2 = func_134();
						break;
					
					case 2:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("gauntlet2");
						break;
					
					case 3:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("dominator2");
						break;
					
					case 4:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("dominator2");
						break;
					
					case 5:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("stalion2");
						break;
					
					case 6:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("stalion2");
						break;
					
					case 7:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("dominator2");
						break;
				}
				break;
			
			case 4:
				switch (iVar0)
				{
					case 0:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("gauntlet2");
						break;
					
					case 1:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("dominator2");
						break;
					
					case 2:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("stalion2");
						break;
					
					case 3:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("buffalo3");
						break;
					
					case 4:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("gauntlet2");
						break;
					
					case 5:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("buffalo3");
						break;
					
					case 6:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("dominator2");
						break;
					
					case 7:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("buffalo3");
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_339(var uParam0)
{
	uParam0->f_64 = "CountryTrack2Backwards";
	uParam0->f_65 = 5;
	uParam0->f_19 = { 1952.027f, 3120.291f, 45.15582f };
	uParam0->f_22 = { 1967.819f, 3145.207f, 50.28004f };
	uParam0->f_25 = 20f;
	*(uParam0[0 /*3*/]) = { 1874f, 3219.9f, 45.4f };
	*(uParam0[1 /*3*/]) = { 2003.4f, 3300.5f, 45.7f };
	*(uParam0[2 /*3*/]) = { 2238.1f, 3239.8f, 48.1f };
	*(uParam0[3 /*3*/]) = { 2280.9f, 3007f, 46f };
	*(uParam0[4 /*3*/]) = { 2144.7f, 3034.1f, 45.4f };
	*(uParam0[5 /*3*/]) = { 1968.9f, 3127.1f, 46.9f };
	uParam0->f_26[0 /*3*/] = { 1969.251f, 3122.565f, 46.0076f };
	uParam0->f_54[0] = 53.7102f;
	uParam0->f_26[1 /*3*/] = { 1971f, 3125.064f, 46.036f };
	uParam0->f_54[1] = 52.6994f;
	uParam0->f_26[2 /*3*/] = { 1972.986f, 3128.541f, 46.0069f };
	uParam0->f_54[2] = 54.9611f;
	uParam0->f_26[3 /*3*/] = { 1975.501f, 3117.38f, 46.0271f };
	uParam0->f_54[3] = 56.1329f;
	uParam0->f_26[4 /*3*/] = { 1977.609f, 3120.305f, 46.0576f };
	uParam0->f_54[4] = 52.8064f;
	uParam0->f_26[5 /*3*/] = { 1979.872f, 3123.513f, 46.0285f };
	uParam0->f_54[5] = 54.0832f;
	uParam0->f_26[6 /*3*/] = { 1981.754f, 3112.13f, 46.0491f };
	uParam0->f_54[6] = 47.3411f;
	uParam0->f_26[7 /*3*/] = { 1984.234f, 3115.164f, 46.0766f };
	uParam0->f_54[7] = 58.6868f;
	uParam0->f_26[8 /*3*/] = { 1986.348f, 3118.184f, 46.0478f };
	uParam0->f_54[8] = 55.8988f;
}

void func_340()
{
	if (func_349())
	{
		func_231(500);
	}
	unk_0xCB7F618CC6FABC72(1);
	unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
	unk_0xDFF589A2149528CE(true);
	unk_0x35675D19812BDF22(true);
	unk_0xCBDC8BC7A589C76E(1f);
	unk_0xD362430CD61A9B08();
	unk_0xEDF90B96BED57BCE(1);
	func_348();
	func_344(&iLocal_123, 1, 0);
	iLocal_212 = 0;
	iLocal_363 = unk_0x33CD235DF1E6A94E();
	func_343(sLocal_72, 11, 0);
	func_342(Local_47[0 /*3*/], 1000f);
	unk_0x0335D8135051EA56(2270.041f, 3007f, 44.1942f, 2276.215f, 3010.543f, 48.0713f, 0, 1, 1, 1);
	unk_0x10CDB55C8473F547(1);
	unk_0x5856B9BF2B4E98C4(-7000f, -7000f, -100f, 7000f, 7000f, 100f, false, 1);
	unk_0x7F327D8D184FAB7F(-7000f, -7000f, -100f, 7000f, 7000f, 100f, 0);
	func_341(1);
	unk_0xAF9EA4E314ED45C2(2565.207f, 2896.662f, 29.9408f, 1654.53f, 3420.822f, 63.94006f, 470f, 0, 0, 1);
	unk_0xCC323859A8DA2B88("WORLD_VEHICLE_BIKER", 0);
	unk_0xCC323859A8DA2B88("DRIVE", 0);
	unk_0xCC323859A8DA2B88("WORLD_VEHICLE_DRIVE_SOLO", 0);
	unk_0xCC323859A8DA2B88("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
	unk_0x243EAE2C2AB53805(0);
	unk_0x7E4AFA4B2F43AECE(true);
	unk_0x53799D1CAEE0AAB6(0);
	unk_0x8533470BD0E6CD59(true);
	unk_0xDF9905432E81DC6E(unk_0x95B959F18401C09A(), 0);
	unk_0x379324D4CAF6C2D1(0);
	unk_0x4B06B5746CBEC99F(0f);
	unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 0, 0);
	unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
	unk_0x3D1D49E6BA088FFB(1);
	if (unk_0x8D255802EBF1DA76())
	{
		unk_0x3754CDF254D9F523(0);
	}
	unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 32, false);
}

void func_341(int iParam0)
{
	Global_70409.f_138 = iParam0;
}

int func_342(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	
	vVar0 = { (fParam1 / 2f), (fParam1 / 2f), (fParam1 / 2f) };
	return unk_0x0335D8135051EA56(vParam0 - vVar0, vParam0 + vVar0, 0, 1, 1, 1);
}

void func_343(char* sParam0, int iParam1, bool bParam2)
{
	unk_0xD3B8030CB4E487C9(sParam0, iParam1);
	if (bParam2)
	{
		while (!unk_0x8A7F864DAB908749(iParam1))
		{
			wait(0);
		}
	}
}

void func_344(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x0E4018692D92041D(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_347(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE38E3CF1625A4145(iParam0->f_1[iVar0]))
		{
			unk_0x1ABDB383C83A336A(&(iParam0->f_1[iVar0]));
		}
		func_346(iVar0, iParam0);
		func_345(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0xCE689A8E8C42ED78(&(iParam0->f_13), iVar0);
			unk_0xCE689A8E8C42ED78(&(iParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xE38E3CF1625A4145(*iParam0))
	{
		unk_0x1ABDB383C83A336A(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam0->f_17[iVar0]))
		{
			unk_0x990A34F9DA8E506D(iParam0->f_17[iVar0], 1);
			unk_0xCBDEE923F851F500(iParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x5FEE418CE11E6DDE(iParam0->f_17[iVar0], 32, true);
				unk_0x5FEE418CE11E6DDE(iParam0->f_17[iVar0], 305, false);
			}
			unk_0x5FEE418CE11E6DDE(iParam0->f_17[iVar0], 268, false);
			if (bParam1)
			{
				if (unk_0x731F434EAFE6E9FE(iParam0->f_17[iVar0], func_132()) && iParam0->f_17[iVar0] != unk_0x33CD235DF1E6A94E())
				{
					unk_0x5D94F4D6FE7DA516(iParam0->f_17[iVar0]);
				}
			}
			if (!unk_0x0E4018692D92041D(iParam0->f_13, 29))
			{
				unk_0x92A2FAFA76B7EC9B(iParam0->f_17[iVar0], 0, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		unk_0x990A34F9DA8E506D(unk_0x33CD235DF1E6A94E(), 1);
		unk_0xCBDEE923F851F500(unk_0x33CD235DF1E6A94E(), 1);
	}
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (bParam2)
		{
			unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 32, true);
		}
	}
	iParam0->f_21 = 0;
}

void func_345(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xCE689A8E8C42ED78(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xCE689A8E8C42ED78(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xCE689A8E8C42ED78(&(uParam1->f_13), 19);
			break;
	}
}

void func_346(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xCE689A8E8C42ED78(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xCE689A8E8C42ED78(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xCE689A8E8C42ED78(&(uParam1->f_13), 16);
			break;
	}
}

void func_347(var uParam0)
{
	if (unk_0xE38E3CF1625A4145(uParam0->f_5))
	{
		unk_0x1ABDB383C83A336A(&(uParam0->f_5));
	}
}

void func_348()
{
	unk_0x9315FCF6CFE2AB41("ENEMIES", &iLocal_213);
	unk_0x9315FCF6CFE2AB41("BUDDIES", &iLocal_214);
	unk_0x9315FCF6CFE2AB41("RACERS", &iLocal_59);
	unk_0xD2E80177F27FD43F(5, 1862763509, iLocal_213);
	unk_0xD2E80177F27FD43F(1, 1862763509, iLocal_214);
	unk_0xD2E80177F27FD43F(255, 1862763509, iLocal_59);
	unk_0xD2E80177F27FD43F(5, iLocal_214, iLocal_213);
	unk_0xD2E80177F27FD43F(1, iLocal_214, 1862763509);
	unk_0xD2E80177F27FD43F(255, iLocal_214, iLocal_59);
	unk_0xD2E80177F27FD43F(5, iLocal_213, 1862763509);
	unk_0xD2E80177F27FD43F(5, iLocal_213, iLocal_214);
	unk_0xD2E80177F27FD43F(255, iLocal_213, iLocal_59);
	unk_0xD2E80177F27FD43F(255, iLocal_59, iLocal_213);
	unk_0xD2E80177F27FD43F(255, iLocal_59, iLocal_214);
	unk_0xD2E80177F27FD43F(255, iLocal_59, 1862763509);
}

int func_349()
{
	if (Global_93682 == 10 || Global_93682 == 9)
	{
		return 1;
	}
	return 0;
}

void func_350(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	unk_0xC16C998D785ABF3A();
	func_364(bParam1);
	func_363(bParam1, iParam2);
	func_361(bParam1);
	func_360();
	func_359();
	func_358();
	if (Local_209.f_16 != 0)
	{
		unk_0x177FDBE7D68BB089(Local_209.f_16);
	}
	if (Local_209.f_17 != 0)
	{
		unk_0x177FDBE7D68BB089(Local_209.f_17);
	}
	func_357(&uLocal_75);
	func_344(&iLocal_123, 1, 0);
	func_355();
	func_353();
	unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
	unk_0xDFF589A2149528CE(true);
	unk_0x35675D19812BDF22(true);
	unk_0xCBDC8BC7A589C76E(1f);
	func_135(0, 0, 0, 2000, 1, 0);
	unk_0x3DE34B8864800B14();
	unk_0x0CDD28A9DFCE2FCE(iLocal_363, true, 0);
	func_247(&Local_46);
	func_241(&Local_209);
	if (bParam1)
	{
		unk_0xCE04CE961AF41AB9(unk_0xFBB1F99A825CAB09(iLocal_363, true), 1000f, 1, 0, 0, false);
	}
	unk_0x1E76B6E2B806EE0F(1);
	if (func_8(iLocal_365))
	{
		unk_0x2EE596932F00971D(iLocal_365, 0);
	}
	unk_0xC6FB169E3887184D();
	unk_0x61BEDEFE36C609A9();
	unk_0x151D1B83673FCE66();
	if (bParam0)
	{
		unk_0x3D1D49E6BA088FFB(0);
		func_352();
		unk_0xD875615F72CD34A6(5);
		unk_0xA53C1C92EE35EC0E(5, 1);
		unk_0xA53C1C92EE35EC0E(3, 1);
		unk_0x9F9B47D8AB616A7C();
		unk_0x243EAE2C2AB53805(2);
		unk_0x7E4AFA4B2F43AECE(false);
		unk_0xCC323859A8DA2B88("WORLD_VEHICLE_BIKER", 1);
		unk_0xCC323859A8DA2B88("DRIVE", 1);
		unk_0xCC323859A8DA2B88("WORLD_VEHICLE_DRIVE_SOLO", 1);
		unk_0xCC323859A8DA2B88("WORLD_VEHICLE_DRIVE_PASSENGERS", 1);
		unk_0x53799D1CAEE0AAB6(2);
		unk_0x8533470BD0E6CD59(false);
		unk_0xDF9905432E81DC6E(unk_0x95B959F18401C09A(), 1);
		unk_0x379324D4CAF6C2D1(1);
		unk_0x4B06B5746CBEC99F(1f);
		unk_0xAF9EA4E314ED45C2(2565.207f, 2896.662f, 29.9408f, 1654.53f, 3420.822f, 63.94006f, 470f, 0, 1, 1);
		unk_0x3D1D49E6BA088FFB(0);
		if (func_8(unk_0x8918EC905FC8975D()))
		{
			unk_0xD303E20CB0AE4AD0(unk_0x8918EC905FC8975D(), 1);
			unk_0x2EE596932F00971D(unk_0x8918EC905FC8975D(), 0);
		}
		unk_0xC4DE350111884249(0);
		unk_0x05CFB4D665C2A88D(false);
		if (!bParam3)
		{
			func_12(197, 0, 0, 1, 0);
		}
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && func_8(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
		{
			unk_0xF70578F5CD9822CB(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), false);
		}
		else
		{
			unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), false);
		}
		func_3(500);
		func_351(&Global_106563);
		unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 32, true);
		unk_0x052830EE89C97404(1);
		unk_0x5894DC159447E10A();
	}
}

void func_351(var uParam0)
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

void func_352()
{
	unk_0xCEE359851F3C8198(iLocal_213);
	unk_0xCEE359851F3C8198(iLocal_214);
	unk_0xCEE359851F3C8198(iLocal_59);
}

void func_353()
{
	Global_14732 = 0;
	func_354();
}

void func_354()
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

void func_355()
{
	Global_14732 = 0;
	func_356();
}

void func_356()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(false);
		Global_15866 = 6;
	}
}

void func_357(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_358()
{
}

void func_359()
{
}

void func_360()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_119)
	{
		func_133(&(Local_119[iVar0 /*50*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_121)
	{
		func_133(&(Local_121[iVar0 /*12*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_122)
	{
		func_133(&(Local_122[iVar0 /*11*/].f_1));
		iVar0++;
	}
	func_133(&(Local_209.f_14));
	func_133(&(Local_209.f_15));
}

void func_361(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_122)
	{
		func_362(&(Local_122[iVar0 /*11*/]), bParam0);
		iVar0++;
	}
}

void func_362(int iParam0, bool bParam1)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		if (unk_0x9F4718FD61B07058(*iParam0))
		{
			unk_0x35F11A916FDFCF32(*iParam0, 1, 1);
		}
		if (bParam1)
		{
			unk_0xEC26F4BFC9942A0C(iParam0);
		}
		else
		{
			unk_0x26ABAE1D971CEACD(iParam0);
		}
	}
}

void func_363(bool bParam0, var uParam1)
{
	int iVar0;
	
	if (uParam1 && bParam0)
	{
		if (func_8(iLocal_363) && unk_0xF0D230FB550CD6EB(iLocal_363, 0))
		{
			func_24();
		}
		func_130(&iLocal_365, bParam0);
	}
	iVar0 = 0;
	while (iVar0 < Local_119)
	{
		func_130(&(Local_119[iVar0 /*50*/].f_5), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_121)
	{
		func_130(&(Local_121[iVar0 /*12*/]), bParam0);
		iVar0++;
	}
	func_130(&iLocal_364, bParam0);
	func_130(&iLocal_366, bParam0);
}

void func_364(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_119)
	{
		func_131(&(Local_119[iVar0 /*50*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_120)
	{
		func_131(&(Local_120[iVar0 /*50*/]), 1);
		iVar0++;
	}
}

