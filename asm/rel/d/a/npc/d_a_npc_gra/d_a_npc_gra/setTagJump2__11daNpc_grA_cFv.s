lbl_809BF8A0:
/* 809BF8A0  88 03 14 9E */	lbz r0, 0x149e(r3)
/* 809BF8A4  28 00 00 00 */	cmplwi r0, 0
/* 809BF8A8  41 82 00 EC */	beq lbl_809BF994
/* 809BF8AC  C0 03 14 A0 */	lfs f0, 0x14a0(r3)
/* 809BF8B0  D0 03 04 A8 */	stfs f0, 0x4a8(r3)
/* 809BF8B4  C0 03 14 A4 */	lfs f0, 0x14a4(r3)
/* 809BF8B8  D0 03 04 AC */	stfs f0, 0x4ac(r3)
/* 809BF8BC  C0 03 14 A8 */	lfs f0, 0x14a8(r3)
/* 809BF8C0  D0 03 04 B0 */	stfs f0, 0x4b0(r3)
/* 809BF8C4  C0 03 04 A8 */	lfs f0, 0x4a8(r3)
/* 809BF8C8  D0 03 04 BC */	stfs f0, 0x4bc(r3)
/* 809BF8CC  C0 03 04 AC */	lfs f0, 0x4ac(r3)
/* 809BF8D0  D0 03 04 C0 */	stfs f0, 0x4c0(r3)
/* 809BF8D4  C0 03 04 B0 */	lfs f0, 0x4b0(r3)
/* 809BF8D8  D0 03 04 C4 */	stfs f0, 0x4c4(r3)
/* 809BF8DC  C0 03 04 BC */	lfs f0, 0x4bc(r3)
/* 809BF8E0  D0 03 04 D0 */	stfs f0, 0x4d0(r3)
/* 809BF8E4  C0 03 04 C0 */	lfs f0, 0x4c0(r3)
/* 809BF8E8  D0 03 04 D4 */	stfs f0, 0x4d4(r3)
/* 809BF8EC  C0 03 04 C4 */	lfs f0, 0x4c4(r3)
/* 809BF8F0  D0 03 04 D8 */	stfs f0, 0x4d8(r3)
/* 809BF8F4  A8 03 14 AC */	lha r0, 0x14ac(r3)
/* 809BF8F8  B0 03 04 B4 */	sth r0, 0x4b4(r3)
/* 809BF8FC  A8 03 14 AE */	lha r0, 0x14ae(r3)
/* 809BF900  B0 03 04 B6 */	sth r0, 0x4b6(r3)
/* 809BF904  A8 03 14 B0 */	lha r0, 0x14b0(r3)
/* 809BF908  B0 03 04 B8 */	sth r0, 0x4b8(r3)
/* 809BF90C  A8 03 04 B4 */	lha r0, 0x4b4(r3)
/* 809BF910  B0 03 04 C8 */	sth r0, 0x4c8(r3)
/* 809BF914  A8 03 04 B6 */	lha r0, 0x4b6(r3)
/* 809BF918  B0 03 04 CA */	sth r0, 0x4ca(r3)
/* 809BF91C  A8 03 04 B8 */	lha r0, 0x4b8(r3)
/* 809BF920  B0 03 04 CC */	sth r0, 0x4cc(r3)
/* 809BF924  A8 03 04 C8 */	lha r0, 0x4c8(r3)
/* 809BF928  B0 03 04 DC */	sth r0, 0x4dc(r3)
/* 809BF92C  A8 03 04 CA */	lha r0, 0x4ca(r3)
/* 809BF930  B0 03 04 DE */	sth r0, 0x4de(r3)
/* 809BF934  A8 03 04 CC */	lha r0, 0x4cc(r3)
/* 809BF938  B0 03 04 E0 */	sth r0, 0x4e0(r3)
/* 809BF93C  A8 03 04 DC */	lha r0, 0x4dc(r3)
/* 809BF940  B0 03 08 F6 */	sth r0, 0x8f6(r3)
/* 809BF944  A8 03 04 DE */	lha r0, 0x4de(r3)
/* 809BF948  B0 03 08 F8 */	sth r0, 0x8f8(r3)
/* 809BF94C  A8 03 04 E0 */	lha r0, 0x4e0(r3)
/* 809BF950  B0 03 08 FA */	sth r0, 0x8fa(r3)
/* 809BF954  A8 03 08 F6 */	lha r0, 0x8f6(r3)
/* 809BF958  B0 03 08 F0 */	sth r0, 0x8f0(r3)
/* 809BF95C  A8 03 08 F8 */	lha r0, 0x8f8(r3)
/* 809BF960  B0 03 08 F2 */	sth r0, 0x8f2(r3)
/* 809BF964  A8 03 08 FA */	lha r0, 0x8fa(r3)
/* 809BF968  B0 03 08 F4 */	sth r0, 0x8f4(r3)
/* 809BF96C  A8 03 08 F0 */	lha r0, 0x8f0(r3)
/* 809BF970  B0 03 04 E4 */	sth r0, 0x4e4(r3)
/* 809BF974  A8 03 08 F2 */	lha r0, 0x8f2(r3)
/* 809BF978  B0 03 04 E6 */	sth r0, 0x4e6(r3)
/* 809BF97C  A8 03 08 F4 */	lha r0, 0x8f4(r3)
/* 809BF980  B0 03 04 E8 */	sth r0, 0x4e8(r3)
/* 809BF984  38 00 00 00 */	li r0, 0
/* 809BF988  98 03 14 D0 */	stb r0, 0x14d0(r3)
/* 809BF98C  38 60 00 01 */	li r3, 1
/* 809BF990  4E 80 00 20 */	blr 
lbl_809BF994:
/* 809BF994  38 60 00 00 */	li r3, 0
/* 809BF998  4E 80 00 20 */	blr 