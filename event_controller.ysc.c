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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	float fLocal_47 = 0f;
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
	var uLocal_61 = 0;
	var uLocal_62 = 10;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 2;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
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
	int iLocal_96 = 0;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x9EC5BDC006623C42(34))
	{
		unk_0x5894DC159447E10A();
	}
	while (true)
	{
		wait(0);
		func_134();
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	if (unk_0x28D5F9AC3E7BC48B())
	{
		iVar2 = 0;
		while (iVar2 < unk_0x77BABFD1D75AA582(1))
		{
			iVar7 = unk_0x5487531DB7DA4AB5(1, iVar2);
			switch (iVar7)
			{
				case 189:
					func_131();
					break;
				
				case 190:
					func_130();
					break;
				
				case 191:
					func_124(iVar2);
					break;
				
				case 192:
					func_123(iVar2);
					break;
				
				case 193:
					func_113(iVar2);
					break;
				
				case 211:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < unk_0x77BABFD1D75AA582(0))
	{
		iVar0 = unk_0x5487531DB7DA4AB5(0, iVar2);
		iLocal_96 = 1;
		switch (iVar0)
		{
			case 139:
				unk_0x286A5F0670063839(0, iVar2, &iVar1, 1);
				if (unk_0x765F6FEEFF39224F(iVar1))
				{
					if (unk_0x680558231C80291D(iVar1))
					{
						if (func_2(iVar3))
						{
							Global_48745.f_1[iVar3] = iVar1;
							iVar3++;
						}
					}
					else if (unk_0x068481DAF84B9654(iVar1))
					{
						if (func_2(iVar5))
						{
							Global_48745.f_25[iVar5] = iVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 140:
				unk_0x286A5F0670063839(0, iVar2, &iVar1, 1);
				if (unk_0x765F6FEEFF39224F(iVar1))
				{
					if (unk_0x680558231C80291D(iVar1))
					{
						if (func_2(iVar4))
						{
							Global_48745.f_13[iVar4] = iVar1;
							iVar4++;
						}
					}
					else if (unk_0x068481DAF84B9654(iVar1))
					{
						if (func_2(iVar6))
						{
							Global_48745.f_37[iVar6] = iVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_48745 = iVar3;
	Global_48745.f_12 = iVar4;
	Global_48745.f_24 = iVar5;
	Global_48745.f_36 = iVar6;
}

bool func_2(int iParam0)
{
	return iParam0 < 10;
}

void func_3(int iParam0)
{
	struct<39> Var0;
	int iVar1;
	
	if (unk_0x286A5F0670063839(1, iParam0, &Var0, 39))
	{
		iVar1 = unk_0x40909DE15107FAE6(Var0.f_38);
		if (iVar1 >= 0 && iVar1 < unk_0xAF1075BE3D8A79F7())
		{
			if (unk_0xC0BD3C838BD70BED(iVar1) || unk_0x9B711F524A4E1658(iVar1))
			{
				if (unk_0x9B711F524A4E1658(iVar1))
				{
					func_55(iVar1);
				}
				else
				{
					unk_0xC60C28D3A2893957(iVar1);
				}
				func_54(Var0.f_37, -1);
			}
			else if (func_47())
			{
				func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
			}
		}
	}
}

int func_4(struct<6> Param0, struct<16> Param1, var uParam2, struct<13> Param3, var uParam4, int iParam5)
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<16> Var12;
	struct<16> Var13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	
	bVar0 = false;
	if (iParam5 >= 1000000)
	{
		iParam5 = (iParam5 - 1000000);
		bVar0 = true;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		if (func_46())
		{
			func_45(uParam2);
			return 0;
		}
		if (func_44())
		{
			func_45(uParam2);
			return 0;
		}
	}
	if (!unk_0xB331FCEB94EB05C8())
	{
		if (bVar0)
		{
		}
		else if (!unk_0xFC40DD2526841632(&Param3))
		{
			func_45(uParam2);
			return 0;
		}
		if (Global_14496)
		{
			func_45(uParam2);
			return 0;
		}
		bVar1 = true;
		if (!func_43())
		{
			if (!func_42(0))
			{
				if (bVar1)
				{
					func_45(uParam2);
					return 0;
				}
			}
		}
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		if (!func_41(unk_0x95B959F18401C09A()))
		{
			func_45(uParam2);
			return 0;
		}
	}
	if (unk_0x786AF4A44E1B5B4B(&Param1))
	{
		func_45(uParam2);
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(&Param0))
	{
		func_45(uParam2);
		return 0;
	}
	Var2 = { Param1 };
	iVar3 = func_40(Var2);
	if (iVar3 != -1)
	{
		func_37(iVar3);
	}
	uVar4 = unk_0x40909DE15107FAE6(uParam2);
	iVar5 = unk_0x79A4DCB5325955AD(uVar4);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 11)
	{
		if (iVar5 == Global_2395292[iVar6 /*4*/].f_3 && unk_0xE3903F59E2F22150() < Global_2395292[iVar6 /*4*/].f_2)
		{
			Global_2395292[iVar6 /*4*/].f_2 = unk_0xE3903F59E2F22150() + 30000;
			iVar6 = 12;
			func_45(uParam2);
			return 0;
		}
		iVar6++;
	}
	Var7.f_1 = -1;
	Var7.f_2 = -1;
	Var7.f_9 = -1;
	func_36(&Var7);
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 63;
	iVar11 = 0;
	StringCopy(&Var12, "", 64);
	StringCopy(&Var13, "", 64);
	iVar14 = 0;
	iVar15 = 0;
	iVar16 = 0;
	iVar17 = 1;
	iVar18 = 0;
	iVar19 = 0;
	if (func_35(&Param0, &iVar8, &iVar11))
	{
		iVar10 = 40;
		iVar15 = 0;
		iVar11 = iVar11;
	}
	else if (func_33(&Param0, &Var7, 0))
	{
		iVar10 = Var7.f_2;
		iVar8 = func_32(iVar10, Var7.f_1);
		iVar9 = func_31(&Var7);
		Var12 = { func_30(&Var7, 0) };
		Var13 = { func_29(&Var7) };
		iVar15 = 1;
		iVar14 = func_28(&Var7, 0);
		iVar19 = func_27(&Var7);
		uVar20 = func_25(&Var7);
		uVar21 = func_24(&Var7);
		bVar22 = func_19(&Var7);
		if (!bVar22)
		{
			iVar18 = 1;
		}
	}
	else
	{
		bVar23 = false;
		if (func_17(unk_0x95B959F18401C09A(), Param3))
		{
			if (!unk_0xB331FCEB94EB05C8())
			{
				bVar23 = true;
			}
			else
			{
				func_45(uParam2);
				func_15(0);
				return 0;
			}
		}
		if (!unk_0xDB36A8F522CBC12D())
		{
			if (!bVar23)
			{
				if (func_13(unk_0x95B959F18401C09A(), Param3))
				{
					func_45(uParam2);
					func_15(0);
					return 0;
				}
			}
		}
		if (!func_12())
		{
			func_45(uParam2);
			bVar24 = true;
			func_15(bVar24);
			return 0;
		}
		bVar25 = false;
		if (!bVar23)
		{
			if (func_7(Param3, &bVar25, 1))
			{
				func_45(uParam2);
				func_15(bVar25);
				return 0;
			}
		}
		iVar16 = 1;
		iVar17 = 0;
		iVar15 = 1;
	}
	iVar26 = Global_1382405;
	if (iVar26 >= 12)
	{
		iVar26 = (iVar26 - 1);
	}
	iVar27 = (iVar26 - 1);
	while (iVar27 >= 0)
	{
		Global_2392991[iVar26 /*99*/] = { Global_2392991[iVar27 /*99*/] };
		iVar26 = (iVar26 - 1);
		iVar27 = (iVar27 - 1);
	}
	Global_1382405++;
	if (Global_1382405 > 12)
	{
		Global_1382405 = 12;
	}
	iVar28 = 0;
	Global_2392991[iVar28 /*99*/] = 0;
	Global_2392991[iVar28 /*99*/].f_1 = 0;
	Global_2392991[iVar28 /*99*/].f_5 = 0;
	Global_2392991[iVar28 /*99*/].f_2 = iVar16;
	Global_2392991[iVar28 /*99*/].f_3 = 0;
	Global_2392991[iVar28 /*99*/].f_4 = iVar17;
	Global_2392991[iVar28 /*99*/].f_6 = { Param0 };
	Global_2392991[iVar28 /*99*/].f_12 = uVar20;
	Global_2392991[iVar28 /*99*/].f_13 = uVar21;
	Global_2392991[iVar28 /*99*/].f_15 = { Param1 };
	StringCopy(&(Global_2392991[iVar28 /*99*/].f_31), "", 64);
	Global_2392991[iVar28 /*99*/].f_49 = iVar10;
	Global_2392991[iVar28 /*99*/].f_50 = iVar8;
	Global_2392991[iVar28 /*99*/].f_51 = iVar9;
	Global_2392991[iVar28 /*99*/].f_91 = uParam2;
	Global_2392991[iVar28 /*99*/].f_57 = { Var12 };
	Global_2392991[iVar28 /*99*/].f_73 = { Var13 };
	Global_2392991[iVar28 /*99*/].f_52 = iVar14;
	Global_2392991[iVar28 /*99*/].f_53 = 0;
	Global_2392991[iVar28 /*99*/].f_53.f_1 = 0;
	Global_2392991[iVar28 /*99*/].f_53.f_2 = 0;
	Global_2392991[iVar28 /*99*/].f_56 = iVar15;
	Global_2392991[iVar28 /*99*/].f_90 = uParam4;
	Global_2392991[iVar28 /*99*/].f_92 = -1;
	Global_2392991[iVar28 /*99*/].f_93 = iVar18;
	Global_2392991[iVar28 /*99*/].f_94 = Global_2395344;
	Global_2392991[iVar28 /*99*/].f_95 = iVar19;
	Global_2392991[iVar28 /*99*/].f_98 = unk_0xFC40DD2526841632(&Param3);
	if (Global_2392991[iVar28 /*99*/].f_50 == 0)
	{
		if (Global_2392991[iVar28 /*99*/].f_51 == 1)
		{
			Global_2392991[iVar28 /*99*/].f_56 = 0;
		}
	}
	Global_2392991[iVar28 /*99*/].f_96 = func_6(Param3, iVar28);
	Global_2392991[iVar28 /*99*/].f_97 = 0;
	Global_2392991[iVar28 /*99*/].f_89 = iParam5;
	Global_2395344++;
	Global_2392991[iVar28 /*99*/].f_47 = func_5(Param3);
	if (Global_2392991[iVar28 /*99*/].f_47 != -1)
	{
		Global_2392991[iVar28 /*99*/].f_48 = unk_0xE3903F59E2F22150() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)
{
	struct<13> Var0[1];
	int iVar1;
	
	if (!unk_0xDB36A8F522CBC12D())
	{
		return -1;
	}
	Var0[0 /*13*/] = { Param0 };
	iVar1 = unk_0xDC2C9A6A33594251(&Var0, 1);
	if (iVar1 < 0)
	{
		return -1;
	}
	return iVar1;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	if (!unk_0xFC40DD2526841632(&uParam0))
	{
		return 0;
	}
	if (Global_2392991[iParam13 /*99*/].f_90 > 0)
	{
		return 0;
	}
	return 1;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, bool bParam14)
{
	struct<13> Var0;
	
	*iParam13 = 0;
	if (func_11(0))
	{
		return 0;
	}
	if (unk_0xDB36A8F522CBC12D())
	{
		if (!func_10())
		{
			*iParam13 = 1;
			return 1;
		}
	}
	if (!func_9(1) && !bParam14)
	{
		return 1;
	}
	Var0 = { func_8(unk_0x95B959F18401C09A()) };
	if (!bParam14 && !unk_0x99FFDA3C390A9838(&Var0, &uParam0))
	{
		if (!unk_0xFC40DD2526841632(&uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_8(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBC1B3D38C4BB38F4(iParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)
{
	if (unk_0xF3622D832771D4B9() || (unk_0xF5DB888C353E2BED() && iParam0 == 0))
	{
		if (unk_0xE9FD52A86479B22B(1) == 0 || unk_0x61CF9D8DFE799C12(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xE9FD52A86479B22B(1) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (unk_0xF3622D832771D4B9() && unk_0x8553BFC970AE2EC8())
	{
		return 1;
	}
	if (unk_0xD88B24C279C15EA1() && unk_0x8553BFC970AE2EC8())
	{
		return 1;
	}
	if ((unk_0xF5DB888C353E2BED() && unk_0xA71A137E08393E8F() == 0) && unk_0x8553BFC970AE2EC8())
	{
		return 1;
	}
	if (unk_0xDB36A8F522CBC12D() && unk_0x8553BFC970AE2EC8())
	{
		return 1;
	}
	if (unk_0x4CE1DD5CFC1F941E() && unk_0x8553BFC970AE2EC8())
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)
{
	if (unk_0xF3622D832771D4B9() || (unk_0xF5DB888C353E2BED() && iParam0 == 0))
	{
		if (unk_0xE9FD52A86479B22B(0) == 0 || unk_0x61CF9D8DFE799C12(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xE9FD52A86479B22B(0) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_12()
{
	if (!unk_0xD88B24C279C15EA1())
	{
		return 1;
	}
	return unk_0x8553BFC970AE2EC8();
}

int func_13(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_14(iParam0))
	{
		if (unk_0xDB36A8F522CBC12D())
		{
			if (unk_0x8CB86A22FA87265D(&uParam1))
			{
				return 0;
			}
		}
		if (!unk_0xE9FD52A86479B22B(0))
		{
			if (!unk_0xE9FD52A86479B22B(1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

void func_15(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (!unk_0xD88B24C279C15EA1())
		{
			return;
		}
	}
	if (unk_0xDB36A8F522CBC12D())
	{
		return;
	}
	iVar0 = unk_0xE3903F59E2F22150();
	if (iVar0 < Global_2395341)
	{
		return;
	}
	if (unk_0xFAC8F20FBC764F4D())
	{
		return;
	}
	if (bParam0)
	{
		func_16("INV_NO_XBOXLIVE", -1);
	}
	else
	{
		func_16("INV_RESTRICT", -1);
	}
	Global_2395341 = (iVar0 + 1800000);
}

void func_16(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

int func_17(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_14(iParam0))
	{
		if (unk_0xDB36A8F522CBC12D())
		{
			if (unk_0x8CB86A22FA87265D(&uParam1))
			{
				return 0;
			}
		}
		if (!func_18())
		{
			return 1;
		}
	}
	return 0;
}

int func_18()
{
	if (unk_0x530DC7BB39D842FD() == 0)
	{
		return 0;
	}
	if (unk_0xF3622D832771D4B9())
	{
		if (unk_0x61CF9D8DFE799C12(1, -1))
		{
			if (unk_0x8553BFC970AE2EC8())
			{
				return 1;
			}
		}
	}
	if (unk_0xF5DB888C353E2BED())
	{
		if (unk_0xE9FD52A86479B22B(1))
		{
			if (unk_0x8553BFC970AE2EC8())
			{
				return 1;
			}
		}
	}
	if (unk_0xD88B24C279C15EA1() || unk_0xDB36A8F522CBC12D())
	{
		if (unk_0x59D656DCC6383E85(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0x61CF9D8DFE799C12(0, -1))
		{
			if (unk_0x8553BFC970AE2EC8())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return unk_0x0E4018692D92041D(Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return unk_0x0E4018692D92041D(Global_2398103.f_1.f_63, 14);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return unk_0x0E4018692D92041D(Global_794709.f_4[iVar1 /*88*/].f_76, 14);
		
		case 62:
			return unk_0x0E4018692D92041D(Global_917806.f_604[iVar1 /*88*/].f_76, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x95B959F18401C09A())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_20(var uParam0)
{
	int iVar0;
	
	if (unk_0x786AF4A44E1B5B4B(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0x0E4018692D92041D(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0xCE3CFF625BEBAA04(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x0E4018692D92041D(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (unk_0x0E4018692D92041D(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0xCE3CFF625BEBAA04(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0x0E4018692D92041D(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0xCE3CFF625BEBAA04(&(Global_917806.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x0E4018692D92041D(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (unk_0x0E4018692D92041D(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0xCE3CFF625BEBAA04(&(Global_917806.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0x95B959F18401C09A())
	{
		if (unk_0x0E4018692D92041D(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0xCE3CFF625BEBAA04(&(Global_939452.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0x0E4018692D92041D(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0x0E4018692D92041D(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0xCE3CFF625BEBAA04(&(Global_939452.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_21(var uParam0)
{
	if (Global_2398103)
	{
		if (unk_0xCE3CFF625BEBAA04(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_22(int iParam0)
{
	return iParam0 == 9999;
}

int func_23(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_9;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_2395346.f_356[iVar0 /*75*/])
	{
		return 0;
	}
	if (!unk_0xCE3CFF625BEBAA04(&(Global_2395346.f_356[iVar0 /*75*/].f_10), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!unk_0x0E4018692D92041D(Global_2395346.f_356[iVar0 /*75*/].f_5, 3))
	{
		return 0;
	}
	return 1;
}

int func_24(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_80;
		
		case 62:
			return iVar0;
		
		default:
	}
	return iVar0;
}

int func_25(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = 0;
	iVar2 = func_20(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_26(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_26(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar1 /*13*/];
		
		case 62:
			return Global_917806.f_9405[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

int func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return unk_0x0E4018692D92041D(Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return unk_0x0E4018692D92041D(Global_2398103.f_1.f_63, 17);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return unk_0x0E4018692D92041D(Global_794709.f_4[iVar1 /*88*/].f_76, 17);
		
		case 62:
			return unk_0x0E4018692D92041D(Global_917806.f_604[iVar1 /*88*/].f_76, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x95B959F18401C09A())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_28(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (unk_0x0E4018692D92041D(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2398237.f_513[uParam0->f_9];
			}
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_54;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_54;
		
		case 62:
			return Global_917806.f_604[iVar1 /*88*/].f_54;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x95B959F18401C09A())
	{
		return Global_939452.f_5[iVar1 /*88*/].f_54;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_29(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_23(uParam0))
	{
		return Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_28;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_28;
		}
		return Var0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_38;
		
		case 62:
			return Global_917806.f_604[iVar1 /*88*/].f_38;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x95B959F18401C09A())
	{
		return Global_939452.f_5[iVar1 /*88*/].f_38;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

struct<16> func_30(var uParam0, bool bParam1)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (unk_0x0E4018692D92041D(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2398237[uParam0->f_9 /*16*/];
			}
			return Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_12;
		}
		return Var0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_22;
		
		case 62:
			return Global_917806.f_604[iVar1 /*88*/].f_22;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x95B959F18401C09A())
	{
		return Global_939452.f_5[iVar1 /*88*/].f_22;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (func_23(uParam0))
	{
		return Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_55;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_55;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_68;
		
		case 62:
			return Global_917806.f_604[iVar1 /*88*/].f_68;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x95B959F18401C09A())
	{
		return Global_939452.f_5[iVar1 /*88*/].f_68;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_32(int iParam0, int iParam1)
{
	if (func_22(iParam1))
	{
		if (Global_2398103)
		{
			return Global_2398103.f_1.f_53;
		}
		return 256;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794709.f_4[iParam1 /*88*/].f_65;
		
		case 62:
			return Global_917806.f_604[iParam1 /*88*/].f_65;
		
		default:
	}
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		return Global_939452.f_5[iParam1 /*88*/].f_65;
	}
	else if (iParam0 < 32)
	{
		return 256;
	}
	return 256;
}

int func_33(char* sParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xB331FCEB94EB05C8())
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 1218;
	if (!bParam2)
	{
		iVar2 = 1200;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0x0E4018692D92041D(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0xCE3CFF625BEBAA04(&(Global_794709.f_4[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_794709.f_4[iVar0 /*88*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794709.f_4[iVar0 /*88*/] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if (unk_0x0E4018692D92041D(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0xCE3CFF625BEBAA04(&(Global_917806.f_604[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_917806.f_604[iVar0 /*88*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (unk_0x0E4018692D92041D(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0xCE3CFF625BEBAA04(&(Global_939452.f_5[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_939452.f_5[iVar0 /*88*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = unk_0x95B959F18401C09A();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 143;
		
		case 14:
			return 144;
		
		case 122:
			return 148;
		
		case 11:
			return 145;
		
		case 13:
			return 146;
		
		case 12:
			return 147;
		
		case 8:
			return 150;
		
		case 1:
			return 151;
		
		case 5:
			return 149;
		
		case 6:
			return 152;
		
		case 3:
			return 155;
		
		case 0:
			return 153;
		
		case 2:
			return 154;
		
		case 148:
			return 49;
		
		case 151:
			return 52;
		
		case 152:
			return 53;
		
		case 157:
			return 54;
		
		case 153:
			return 55;
		
		case 154:
			return 56;
		
		case 155:
			return 57;
		
		case 159:
			return 58;
		
		case 162:
			return 51;
		
		case 142:
			return 60;
		
		case 160:
			return 62;
		
		case 164:
			return 63;
		
		case 163:
			return 64;
		
		case 166:
			return 65;
		
		case 167:
			return 66;
		
		case 168:
			return 67;
		
		case 169:
			return 68;
		
		case 170:
			return 69;
		
		case 171:
			return 70;
		
		case 172:
			return 71;
		
		case 173:
			return 72;
		
		case 178:
			return 73;
		
		case 188:
			return 74;
		
		case 214:
			return 75;
		
		case 215:
			return 76;
		
		case 216:
			return 77;
		
		case 217:
			return 78;
		
		case 218:
			return 79;
		
		case 219:
			return 80;
		
		case 220:
			return 81;
		
		case 221:
			return 82;
		
		case 179:
			return 84;
		
		case 189:
			return 83;
		
		case 180:
			return 85;
		
		case 182:
			return 86;
		
		case 183:
			return 87;
		
		case 185:
			return 88;
		
		case 186:
			return 89;
		
		case 190:
			return 90;
		
		case 191:
			return 91;
		
		case 192:
			return 92;
		
		case 193:
			return 93;
		
		case 205:
			return 101;
		
		case 194:
			return 94;
		
		case 197:
			return 95;
		
		case 198:
			return 96;
		
		case 195:
			return 97;
		
		case 199:
			return 98;
		
		case 200:
			return 99;
		
		case 201:
			return 100;
		
		case 207:
			return 102;
		
		case 208:
			return 103;
		
		case 209:
			return 104;
		
		case 210:
			return 105;
		
		case 225:
			return 106;
		
		case 226:
			return 107;
		
		case 227:
			return 108;
		
		case 229:
			return 109;
		
		case 230:
			return 110;
		
		case 233:
			return 112;
		
		case 237:
			return 114;
		
		case 238:
			return 115;
		
		case 249:
			return 122;
		
		case 239:
			return 116;
		
		case 240:
			return 117;
		
		case 241:
			return 118;
		
		case 242:
			return 119;
		
		case 244:
			return 120;
		
		case 248:
			return 121;
		
		case 250:
			return 123;
		
		case 243:
			return 124;
		
		default:
	}
	return 0;
}

int func_35(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	char[] cVar1[8];
	char cVar2[16];
	char[] cVar3[8];
	
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	iVar0 = unk_0x85731B98C6C759D5(sParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, unk_0x0D43A4279AE5F281(sParam0, 0, 5), 8);
	if (!unk_0xCE3CFF625BEBAA04(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar2, unk_0x0D43A4279AE5F281(sParam0, 5, 12), 16);
	if (unk_0xCE3CFF625BEBAA04(&cVar2, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (unk_0xCE3CFF625BEBAA04(&cVar2, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (unk_0xCE3CFF625BEBAA04(&cVar2, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (unk_0xCE3CFF625BEBAA04(&cVar2, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (unk_0xCE3CFF625BEBAA04(&cVar2, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (unk_0xCE3CFF625BEBAA04(&cVar2, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar3, unk_0x0D43A4279AE5F281(sParam0, 12, iVar0), 8);
	if (!unk_0x91EC70AA37CE99E8(&cVar3, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_36(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_1382405)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (unk_0xE3903F59E2F22150() > Global_2395292[iVar0 /*4*/].f_2 || Global_2395292[iVar0 /*4*/].f_2 == 0)
		{
			if (unk_0xAF1075BE3D8A79F7() > 0 && Global_2392991[iParam0 /*99*/].f_91 < unk_0xAF1075BE3D8A79F7())
			{
				Global_2395292[iVar0 /*4*/].f_3 = unk_0x79A4DCB5325955AD(Global_2392991[iParam0 /*99*/].f_91);
				Global_2395292[iVar0 /*4*/].f_2 = unk_0xE3903F59E2F22150() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_2392991[iParam0 /*99*/].f_92 != -1)
	{
		unk_0x98E765CB9E761233(Global_2392991[iParam0 /*99*/].f_92);
	}
	if (!Global_2392991[iParam0 /*99*/].f_56)
	{
		if (Global_2392991[iParam0 /*99*/].f_52 != 0)
		{
			unk_0xD886AC14357A1F58(Global_2392991[iParam0 /*99*/].f_52);
		}
	}
	func_45(Global_2392991[iParam0 /*99*/].f_91);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1382405)
	{
		Global_2392991[iVar1 /*99*/] = { Global_2392991[iVar2 /*99*/] };
		iVar1++;
		iVar2++;
	}
	func_39(iVar1);
	Global_1382405 = (Global_1382405 - 1);
	if (Global_1382378)
	{
		if (Global_1382376 > 0)
		{
			func_38();
		}
	}
}

void func_38()
{
	Global_1382378 = 0;
}

void func_39(int iParam0)
{
	Global_2392991[iParam0 /*99*/] = 0;
	Global_2392991[iParam0 /*99*/].f_1 = 0;
	Global_2392991[iParam0 /*99*/].f_5 = 0;
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_15), "", 64);
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_31), "", 64);
	Global_2392991[iParam0 /*99*/].f_47 = -1;
	Global_2392991[iParam0 /*99*/].f_48 = unk_0xE3903F59E2F22150();
	Global_2392991[iParam0 /*99*/].f_49 = -1;
	Global_2392991[iParam0 /*99*/].f_50 = -1;
	Global_2392991[iParam0 /*99*/].f_51 = -1;
	Global_2392991[iParam0 /*99*/].f_52 = 0;
	Global_2392991[iParam0 /*99*/].f_53 = 0;
	Global_2392991[iParam0 /*99*/].f_53.f_1 = 0;
	Global_2392991[iParam0 /*99*/].f_53.f_2 = 0;
	Global_2392991[iParam0 /*99*/].f_56 = 0;
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_57), "", 64);
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_73), "", 64);
	Global_2392991[iParam0 /*99*/].f_89 = 0;
	Global_2392991[iParam0 /*99*/].f_90 = 0;
	Global_2392991[iParam0 /*99*/].f_91 = -1;
	Global_2392991[iParam0 /*99*/].f_92 = -1;
	Global_2392991[iParam0 /*99*/].f_93 = 0;
	Global_2392991[iParam0 /*99*/].f_94 = -1;
	Global_2392991[iParam0 /*99*/].f_95 = 0;
	Global_2392991[iParam0 /*99*/].f_96 = 0;
	Global_2392991[iParam0 /*99*/].f_97 = 0;
	Global_2392991[iParam0 /*99*/].f_98 = 0;
}

int func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1382405)
	{
		if (unk_0xCE3CFF625BEBAA04(&uParam0, &(Global_2392991[iVar0 /*99*/].f_15)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_41(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_142, 22);
}

bool func_42(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

int func_43()
{
	if (Global_106565.f_9079.f_330[0 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_44()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_142, 2);
}

void func_45(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x40909DE15107FAE6(uParam0);
	if (iVar0 < 0 || iVar0 >= unk_0xAF1075BE3D8A79F7())
	{
		return;
	}
	if (unk_0x5365BDC6D8A34B95(iVar0))
	{
		return;
	}
}

bool func_46()
{
	return Global_1312827 == 10;
}

int func_47()
{
	if (!Global_71590)
	{
		return 1;
	}
	else if (func_48())
	{
		return 1;
	}
	return 0;
}

int func_48()
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_53())
	{
		return 1;
	}
	if (func_52())
	{
		return 1;
	}
	return func_49(120, -1);
}

int func_49(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2571340[iParam0 /*3*/][func_50(iParam1)];
	if (unk_0x0F0A07F7B2FAAE06(uVar0, &uVar1, -1))
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
		iVar1 = func_51();
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

int func_51()
{
	return Global_1312745;
}

bool func_52()
{
	return Global_1312855;
}

bool func_53()
{
	return Global_1312857;
}

void func_54(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = func_51();
	}
	Global_1312847[iVar0] = uParam0;
}

void func_55(int iParam0)
{
	func_106();
	if (func_105(1))
	{
		if (!func_96())
		{
			if (!func_85(1))
			{
				if (unk_0x289064CB38B560AA())
				{
					func_84();
				}
				func_58(1, 0);
				unk_0xC60C28D3A2893957(iParam0);
				func_57();
				func_56();
			}
		}
	}
}

void func_56()
{
	Global_1657223.f_7 = 1;
}

void func_57()
{
	Global_1657223.f_6 = 1;
}

void func_58(int iParam0, bool bParam1)
{
	if (func_105(iParam0))
	{
		Global_1657223.f_16[iParam0 /*44*/].f_5 = 1;
		func_60(iParam0, 0);
		func_59();
		if (bParam1)
		{
			Global_1657223 = 1;
		}
	}
}

void func_59()
{
	Global_1657223.f_2 = 1;
}

void func_60(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	if (!unk_0x289064CB38B560AA())
	{
		if (bParam1)
		{
			func_83();
			func_72(unk_0x95B959F18401C09A(), 0, 81920, 0);
			Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_98 = 8;
			func_71();
			func_70();
		}
		func_69(iParam0);
		func_68(iParam0);
		func_66();
		func_65();
		func_59();
	}
	Var0 = { func_64(iParam0) };
	func_63(iParam0);
	func_61(&Var0);
}

void func_61(char* sParam0)
{
	StringCopy(&(Global_2448756.f_747), sParam0, 24);
	if (func_62())
	{
		StringCopy(&(Global_959568.f_42), sParam0, 24);
	}
}

bool func_62()
{
	return unk_0x0E4018692D92041D(Global_2449538.f_1.f_2809, 5);
}

void func_63(int iParam0)
{
	Global_1657223.f_16[iParam0 /*44*/].f_3 = 1;
}

struct<6> func_64(int iParam0)
{
	return Global_1657223.f_16[iParam0 /*44*/].f_6;
}

void func_65()
{
	Global_2448756.f_6 = 100;
}

void func_66()
{
	unk_0x8950ED5730F62EE8(&Global_2448756, 5);
	func_67();
}

void func_67()
{
	unk_0x8950ED5730F62EE8(&Global_2448756, 8);
}

void func_68(var uParam0)
{
	Global_1657223.f_8 = uParam0;
}

void func_69(var uParam0)
{
	Global_1657223.f_9 = uParam0;
}

void func_70()
{
	Global_2456885.f_1 = 0;
}

void func_71()
{
	char* sVar0;
	
	StringCopy(&(Global_2448756.f_747), sVar0, 24);
}

void func_72(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0xC78552DAEE19D97B())
		{
			unk_0x05CFB4D665C2A88D(false);
		}
	}
	if (func_82())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0xB331FCEB94EB05C8())
	{
		iVar0 = iParam2;
		unk_0x3449EA232F9B8EAD(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_80())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0xC4DEA49C5B465481(iParam0) && (unk_0xF272A2699B521CE6(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0xD62C4419A41F106A(unk_0x378BD4B3881338C2(iParam0), 0))
			{
				return;
			}
			iVar25 = unk_0x378BD4B3881338C2(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0xB331FCEB94EB05C8())
				{
					unk_0x7FB656A6AFE2A7A8(1);
				}
				else if (bVar13 || (!func_78(unk_0x95B959F18401C09A(), 0) && !func_77()))
				{
					unk_0x0CDD28A9DFCE2FCE(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0xB331FCEB94EB05C8() && !bVar18)
					{
						unk_0x7FB656A6AFE2A7A8(0);
					}
					Global_2424047[iParam0 /*416*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_76(iVar25) && !unk_0x67E42C11097164BA(iVar25))
				{
					if (!bVar21)
					{
						unk_0x23298AB8A7D0F403(iVar25, true, 0);
					}
				}
				if (!unk_0x9F4718FD61B07058(iVar25))
				{
					if (!bVar20)
					{
						unk_0xF70578F5CD9822CB(iVar25, false);
					}
					unk_0xFE8201EFB515D77B(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xF70578F5CD9822CB(iVar25, false);
				}
				unk_0xF0BE7CB40DE62A2F(iVar25, true);
				unk_0xF23201C524E43F1C(iParam0, 0);
				unk_0x1B9C92466C9CAC2A(iParam0, 0);
				if (unk_0x055C6611FF8B993C(iVar25) && unk_0x7B3767E83E6F888A(iVar25))
				{
					unk_0x1130EB06CDE2ECD0(iVar25);
				}
				unk_0xC2A270E9C5578803(iVar25, 1);
				if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()) == 0)
				{
					func_75();
					func_74();
				}
				if (unk_0x5D1B43675B257F3A())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xE980BAFD70E8A4B3())
				{
				}
				Global_2424047[iParam0 /*416*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405071.f_2668)
				{
					Global_2405071.f_2668 = 0;
				}
			}
			else
			{
				if (!func_76(iVar25) && !unk_0x67E42C11097164BA(iVar25))
				{
					if (!bVar21)
					{
						unk_0x23298AB8A7D0F403(iVar25, !bVar14, 0);
					}
					if (!unk_0x9F4718FD61B07058(iVar25))
					{
						if (!bVar20)
						{
							unk_0xF70578F5CD9822CB(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xFE8201EFB515D77B(iVar25, 1);
						}
					}
					if (func_73(Global_4456448.f_161209))
					{
						unk_0xF70578F5CD9822CB(iVar25, true);
					}
				}
				if (Global_1312844)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0xF23201C524E43F1C(iParam0, 0);
				}
				else
				{
					unk_0xF23201C524E43F1C(iParam0, 1);
				}
				unk_0xF0BE7CB40DE62A2F(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x691E8EF7DCB53AAD(iVar25) && !unk_0xF0D230FB550CD6EB(iVar25, 0))
					{
						unk_0x31826EF4A8BC8E9F(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x3449EA232F9B8EAD(iParam0, bParam1, iVar26);
		}
	}
}

bool func_73(int iParam0)
{
	return iParam0 == 17;
}

void func_74()
{
	vector3 vVar0;
	
	Global_2437364.f_1232 = 0;
	Global_2437364.f_1233 = 0;
	Global_2437364.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437364.f_1239 = -1;
	Global_2437364.f_1240 = 0;
	Global_2405071.f_2679 = { vVar0 };
}

void func_75()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2722 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 0;
	Global_2405071.f_2677 = 0;
}

int func_76(int iParam0)
{
	int iVar0;
	
	if (unk_0xF0D230FB550CD6EB(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xD76D6BCC14B95CE1(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_77()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

bool func_78(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_79(-1, 0) == 8;
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

int func_79(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_51();
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

int func_80()
{
	if (func_81() == 0)
	{
		return 1;
	}
	return 0;
}

int func_81()
{
	return Global_1312467.f_18;
}

int func_82()
{
	if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_35 && !Global_2449538.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

void func_83()
{
	unk_0x8950ED5730F62EE8(&Global_2448756, 7);
}

void func_84()
{
	unk_0x8950ED5730F62EE8(&(Global_2448756.f_2), 15);
}

int func_85(int iParam0)
{
	if (iParam0 || func_95())
	{
		if (!func_87(1))
		{
			return 1;
		}
		if (!func_86())
		{
			return 1;
		}
		if (unk_0x148E92E2B2454BC6())
		{
			return 1;
		}
	}
	return 0;
}

bool func_86()
{
	return Global_1657223.f_4;
}

int func_87(bool bParam0)
{
	if (!func_92())
	{
		return 0;
	}
	if ((func_90(func_91(-1), 0) >= 1 || func_49(123, -1)) && func_49(133, -1))
	{
		func_89();
		return 1;
	}
	else if (bParam0)
	{
		func_88();
	}
	return 0;
}

void func_88()
{
	Global_1657223.f_5 = 1;
}

void func_89()
{
	Global_1657223.f_4 = 1;
}

int func_90(int iParam0, int iParam1)
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

int func_91(int iParam0)
{
	return Global_1382702[func_50(iParam0)];
}

int func_92()
{
	if (func_94() && func_93(0))
	{
		return 1;
	}
	return 0;
}

var func_93(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_94()
{
	return func_93(func_51() + 1);
}

var func_95()
{
	return Global_1657223.f_2;
}

int func_96()
{
	if (((((func_104() || !func_102(-1)) || !func_100()) || !func_99()) || !func_98()) || func_97())
	{
		return 1;
	}
	return 0;
}

var func_97()
{
	return Global_2458626;
}

int func_98()
{
	if (unk_0x37FBC14B2F5D54DB(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_99()
{
	int iVar0;
	
	if (unk_0x613545EB27EE259C(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

int func_100()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_101(iVar0) == 1)
		{
			iVar0 = 2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_101(int iParam0)
{
	if (func_49(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_103(iParam0);
	iVar1 = unk_0x37FBC14B2F5D54DB(iVar0);
	if (unk_0x0E4018692D92041D(iVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_103(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_51();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

var func_104()
{
	return Global_2448756.f_631;
}

bool func_105(int iParam0)
{
	return Global_1657223.f_16[iParam0 /*44*/].f_4;
}

void func_106()
{
	int iVar0;
	int iVar1;
	
	func_112();
	if (unk_0xBE05F1F3B28865E3() && !func_109())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = unk_0x88C4C02836F71CC6(func_108(iVar0));
			if (iVar1 > 0)
			{
				Global_1657223.f_16[iVar0 /*44*/] = iVar1;
				func_107(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1657223.f_16[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_107(int iParam0, int iParam1)
{
	bool bVar0;
	struct<16> Var1;
	var uVar2;
	
	bVar0 = true;
	if (unk_0x7E940CA1A7F72FB6(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_1657223.f_16[iParam0 /*44*/].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0x7E940CA1A7F72FB6(iParam1, "playlist", &Var1))
	{
		Global_1657223.f_16[iParam0 /*44*/].f_12 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0xE45AD664299F8768(iParam1, &Var1))
	{
		Global_1657223.f_16[iParam0 /*44*/].f_28 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (unk_0xCD1D6D98E59A09B0(iParam1, "coronaCountdown", &uVar2))
		{
			Global_1657223.f_16[iParam0 /*44*/].f_1 = uVar2;
		}
		else
		{
			Global_1657223.f_16[iParam0 /*44*/].f_1 = 120000;
		}
		Global_1657223.f_16[iParam0 /*44*/].f_2 = 0;
		if (unk_0xCD1D6D98E59A09B0(iParam1, "eventSubType", &uVar2))
		{
			Global_1657223.f_16[iParam0 /*44*/].f_2 = uVar2;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_1657223.f_1 = 1;
		}
		Global_1657223.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_1657223.f_16[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
		
		case 1:
			return "Tournament";
		
		case 2:
			return "LiveStreaming";
		
		case 3:
			return "Sweepstakes";
		
		case 4:
			return "FeaturedPlaylist";
		
		default:
	}
	return "";
}

int func_109()
{
	if (!func_110())
	{
		return 1;
	}
	return 0;
}

int func_110()
{
	if (func_111())
	{
		return 0;
	}
	if (unk_0xB16BC34F6CB4A57A() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_111()
{
	return Global_2459114;
}

void func_112()
{
	struct<281> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1657223 = { Var0 };
}

void func_113(int iParam0)
{
	var uVar0;
	
	if (Global_71590)
	{
		unk_0x0F8EAEEC97DDBCB3(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
	}
	else
	{
		unk_0x0F8EAEEC97DDBCB3(-1, "Hang_Up", &Global_14542, 1);
	}
	if (unk_0x286A5F0670063839(1, iParam0, &uVar0, 21))
	{
		func_115();
	}
	Global_2534821.f_1 = 0;
	Global_2534821.f_33 = -1;
	Global_2534821.f_34 = -1;
	StringCopy(&(Global_2534821.f_4), "", 64);
	func_114(&(Global_2534821.f_20));
}

void func_114(var uParam0)
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

void func_115()
{
	Global_2534821.f_2 = 1;
	Global_2534821.f_38 = 1;
	if (unk_0x43E505744A9B715D())
	{
		if (unk_0x7DEC10D4DA1DCC2C())
		{
			while (unk_0x7A7E39C1A0C7651C())
			{
				wait(0);
			}
			unk_0x44EFDF16AE23D81B();
			Global_2534821 = 0;
			Global_2534821.f_2 = 0;
		}
		else if (func_122(Global_2534821.f_20))
		{
			if (unk_0xFC40DD2526841632(&(Global_2534821.f_20)))
			{
				if (!unk_0xE97D3E05A6165D8D(&(Global_2534821.f_20)))
				{
					func_121();
				}
			}
		}
		else
		{
			func_121();
		}
	}
	else
	{
		func_121();
	}
	if (Global_2534821.f_37)
	{
		func_116(0);
	}
	Global_2534821.f_37 = 0;
	Global_2534821.f_3 = 0;
}

void func_116(int iParam0)
{
	if (func_120())
	{
		return;
	}
	if (Global_14725)
	{
		func_118(0, 0);
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
	if (!func_117())
	{
		Global_14553.f_1 = 3;
	}
}

int func_117()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_118(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_119(0))
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

int func_119(int iParam0)
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

bool func_120()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

void func_121()
{
	Global_2534821.f_1 = 0;
	Global_2534821 = 0;
	Global_2534821.f_2 = 0;
	Global_2534821.f_33 = -1;
	Global_2534821.f_34 = -1;
	StringCopy(&(Global_2534821.f_4), "", 64);
	StringCopy(&(Global_2534821.f_39[0 /*16*/]), "", 64);
	Global_2534821.f_38 = 0;
	Global_2534821.f_56 = 0;
	Global_2534821.f_57 = 0;
	Global_2534821.f_58 = -2;
	Global_2534821.f_3 = 0;
	func_114(&(Global_2534821.f_20));
}

bool func_122(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xEC566F0D860729D3(&uParam0, 13);
}

void func_123(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0x286A5F0670063839(1, iParam0, &Var0, 15))
	{
		Global_2534821.f_33 = Var0.f_1;
		Global_2534821.f_34 = Var0;
	}
}

void func_124(int iParam0)
{
	struct<9> Var0;
	
	if (unk_0x286A5F0670063839(1, iParam0, &Var0, 21))
	{
		if (Global_2534821.f_3 == 0)
		{
			if (!func_125(&(Var0.f_8)))
			{
				unk_0x63A666B5708422B3(0, 2);
			}
			else
			{
				Global_2534821.f_3 = 1;
				MemCopy(&(Global_2534821.f_4), {Var0}, 16);
				Global_2534821.f_20 = { Var0.f_8 };
				StringCopy(&(Global_2534821.f_39[0 /*16*/]), "", 64);
				Global_2534821.f_58 = -2;
				Global_2534821.f_56 = 0;
				Global_2534821.f_57 = 0;
			}
		}
		else if (!func_125(&(Var0.f_8)))
		{
			unk_0x63A666B5708422B3(0, 2);
		}
		else
		{
			Global_2534821.f_3 = 1;
			MemCopy(&(Global_2534821.f_4), {Var0}, 16);
			Global_2534821.f_20 = { Var0.f_8 };
			StringCopy(&(Global_2534821.f_39[0 /*16*/]), "", 64);
			Global_2534821.f_58 = -2;
			Global_2534821.f_56 = 0;
			Global_2534821.f_57 = 0;
		}
	}
}

int func_125(var uParam0)
{
	if (Global_71590)
	{
		if (func_48() == 0)
		{
			return 0;
		}
		if (func_129(unk_0x95B959F18401C09A(), 1, 1))
		{
			if (unk_0x8AE34E8B10270D31(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0x073F9A78D00FB9C0(unk_0x33CD235DF1E6A94E()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (unk_0xB16BC34F6CB4A57A() == 0)
	{
		return 0;
	}
	if (Global_2534821.f_1)
	{
	}
	if (Global_14733 == 1)
	{
		return 0;
	}
	if (Global_1574422)
	{
		return 0;
	}
	if (Global_2534821.f_36)
	{
		return 0;
	}
	if (func_117())
	{
		return 0;
	}
	if (((Global_36425 != 6 && Global_36425 != 8) && Global_36425 != 12) && Global_36425 != 15)
	{
		return 0;
	}
	if (func_128() && !func_127(12))
	{
		return 0;
	}
	if (unk_0xA30F14B621E3269D())
	{
		return 0;
	}
	if (unk_0x15DFB209D94E0277())
	{
		return 0;
	}
	if (!func_126(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (unk_0xD9C92B0885A075F8())
	{
		return 0;
	}
	if (Global_71850)
	{
		return 0;
	}
	if (unk_0x64FD995A31C98928())
	{
		if (!unk_0x95130A9E973D4EF7(unk_0x95B959F18401C09A()))
		{
			return 0;
		}
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 0;
	}
	if (unk_0x2B1E6E274DDA8154(uParam0) || unk_0x18995D0BCBC9767E(uParam0))
	{
		return 0;
	}
	if (unk_0xE0C12BCC1EF902BD(uParam0) || unk_0xE6F35ECD6F6BB112(uParam0))
	{
		return 0;
	}
	if (unk_0x68EDB4A170416007())
	{
		if (unk_0xDB36A8F522CBC12D())
		{
			if (unk_0x033532D1E20D7B54())
			{
				return 0;
			}
		}
		else if (unk_0xF5DB888C353E2BED())
		{
			return 0;
		}
	}
	return 1;
}

int func_126(int iParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (unk_0x530DC7BB39D842FD() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0x95B959F18401C09A())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0xF3622D832771D4B9() || unk_0xF5DB888C353E2BED())
	{
		if (unk_0x61CF9D8DFE799C12(0, iVar0))
		{
			if (unk_0x8553BFC970AE2EC8())
			{
				return 1;
			}
		}
	}
	if (unk_0xD88B24C279C15EA1() || unk_0xDB36A8F522CBC12D())
	{
		if (iParam0 == unk_0x95B959F18401C09A())
		{
			if (unk_0x51D2C61FFB4872C9(0, -3, 1) || unk_0x61CF9D8DFE799C12(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_8(iParam0) };
			if (unk_0x61CF9D8DFE799C12(0, -1) || (unk_0x61CF9D8DFE799C12(1, -1) && unk_0xFC40DD2526841632(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0x61CF9D8DFE799C12(0, iVar0))
		{
			if (unk_0x8553BFC970AE2EC8())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_127(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_128()
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	return 1;
}

int func_129(int iParam0, bool bParam1, bool bParam2)
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

void func_130()
{
	func_121();
}

void func_131()
{
	Global_2534821.f_1 = 1;
	Global_2534821.f_33 = -1;
	Global_2534821.f_34 = -1;
	if (unk_0x11AE7F6A404414C9(Global_14534) == 1)
	{
		if (Global_14541)
		{
			func_132(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_14496)
			{
				func_132(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_132(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_132(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xBB698266C5FDF0A7(iParam0, sParam1);
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
		func_133(sParam7);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam8))
	{
		func_133(sParam8);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam9))
	{
		func_133(sParam9);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam10))
	{
		func_133(sParam10);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam11))
	{
		func_133(sParam11);
	}
	unk_0x818901B332D5541D();
}

void func_133(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

void func_134()
{
	int iVar0;
	
	if (iLocal_96)
	{
		Global_48745 = 0;
		Global_48745.f_12 = 0;
		Global_48745.f_24 = 0;
		Global_48745.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_48745.f_1[iVar0] = 0;
			Global_48745.f_13[iVar0] = 0;
			Global_48745.f_25[iVar0] = 0;
			Global_48745.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_96 = 0;
	}
}

