/* 802817D8 0027E718  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802817DC 0027E71C  DB E1 00 08 */	stfd f31, 8(r1)
/* 802817E0 0027E720  C8 C4 00 00 */	lfd f6, 0(r4)
/* 802817E4 0027E724  C8 A4 00 08 */	lfd f5, 8(r4)
/* 802817E8 0027E728  C8 E4 00 10 */	lfd f7, 0x10(r4)
/* 802817EC 0027E72C  C9 04 00 18 */	lfd f8, 0x18(r4)
/* 802817F0 0027E730  C9 24 00 20 */	lfd f9, 0x20(r4)
/* 802817F4 0027E734  C9 44 00 28 */	lfd f10, 0x28(r4)
/* 802817F8 0027E738  FD 61 28 28 */	fsub f11, f1, f5
/* 802817FC 0027E73C  FD 81 38 28 */	fsub f12, f1, f7
/* 80281800 0027E740  FC 08 08 28 */	fsub f0, f8, f1
/* 80281804 0027E744  FC 49 08 28 */	fsub f2, f9, f1
/* 80281808 0027E748  C8 82 BA 08 */	lfd f4, lbl_80455408-_SDA2_BASE_(r2)
/* 8028180C 0027E74C  FC 68 38 28 */	fsub f3, f8, f7
/* 80281810 0027E750  FD A4 18 24 */	fdiv f13, f4, f3
/* 80281814 0027E754  FC 80 03 72 */	fmul f4, f0, f13
/* 80281818 0027E758  FC 68 28 28 */	fsub f3, f8, f5
/* 8028181C 0027E75C  FF E4 18 24 */	fdiv f31, f4, f3
/* 80281820 0027E760  FC 8C 03 72 */	fmul f4, f12, f13
/* 80281824 0027E764  FC 69 38 28 */	fsub f3, f9, f7
/* 80281828 0027E768  FD A4 18 24 */	fdiv f13, f4, f3
/* 8028182C 0027E76C  FC 80 07 F2 */	fmul f4, f0, f31
/* 80281830 0027E770  FC 68 30 28 */	fsub f3, f8, f6
/* 80281834 0027E774  FD 04 18 24 */	fdiv f8, f4, f3
/* 80281838 0027E778  FC 8B 07 F2 */	fmul f4, f11, f31
/* 8028183C 0027E77C  FC 62 03 72 */	fmul f3, f2, f13
/* 80281840 0027E780  FC 84 18 2A */	fadd f4, f4, f3
/* 80281844 0027E784  FC 69 28 28 */	fsub f3, f9, f5
/* 80281848 0027E788  FD 24 18 24 */	fdiv f9, f4, f3
/* 8028184C 0027E78C  FC 8C 03 72 */	fmul f4, f12, f13
/* 80281850 0027E790  FC 6A 38 28 */	fsub f3, f10, f7
/* 80281854 0027E794  FC E4 18 24 */	fdiv f7, f4, f3
/* 80281858 0027E798  FC 8C 01 F2 */	fmul f4, f12, f7
/* 8028185C 0027E79C  C8 63 00 18 */	lfd f3, 0x18(r3)
/* 80281860 0027E7A0  FC A4 00 F2 */	fmul f5, f4, f3
/* 80281864 0027E7A4  FC 8B 02 72 */	fmul f4, f11, f9
/* 80281868 0027E7A8  FC 6A 08 28 */	fsub f3, f10, f1
/* 8028186C 0027E7AC  FC 63 01 F2 */	fmul f3, f3, f7
/* 80281870 0027E7B0  FC 84 18 2A */	fadd f4, f4, f3
/* 80281874 0027E7B4  C8 63 00 10 */	lfd f3, 0x10(r3)
/* 80281878 0027E7B8  FC 84 00 F2 */	fmul f4, f4, f3
/* 8028187C 0027E7BC  FC 60 02 32 */	fmul f3, f0, f8
/* 80281880 0027E7C0  C8 03 00 00 */	lfd f0, 0(r3)
/* 80281884 0027E7C4  FC 63 00 32 */	fmul f3, f3, f0
/* 80281888 0027E7C8  FC 01 30 28 */	fsub f0, f1, f6
/* 8028188C 0027E7CC  FC 20 02 32 */	fmul f1, f0, f8
/* 80281890 0027E7D0  FC 02 02 72 */	fmul f0, f2, f9
/* 80281894 0027E7D4  FC 21 00 2A */	fadd f1, f1, f0
/* 80281898 0027E7D8  C8 03 00 08 */	lfd f0, 8(r3)
/* 8028189C 0027E7DC  FC 01 00 32 */	fmul f0, f1, f0
/* 802818A0 0027E7E0  FC 03 00 2A */	fadd f0, f3, f0
/* 802818A4 0027E7E4  FC 04 00 2A */	fadd f0, f4, f0
/* 802818A8 0027E7E8  FC 25 00 2A */	fadd f1, f5, f0
/* 802818AC 0027E7EC  CB E1 00 08 */	lfd f31, 8(r1)
/* 802818B0 0027E7F0  38 21 00 10 */	addi r1, r1, 0x10
/* 802818B4 0027E7F4  4E 80 00 20 */	blr 
/* 802818B8 0027E7F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802818BC 0027E7FC  7C 08 02 A6 */	mflr r0
/* 802818C0 0027E800  90 01 00 24 */	stw r0, 0x24(r1)
/* 802818C4 0027E804  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 802818C8 0027E808  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 802818CC 0027E80C  FF C0 10 90 */	fmr f30, f2
/* 802818D0 0027E810  C8 02 BA 38 */	lfd f0, 0x80455438 - 0x80459A00(r2) /*SDA HACK; original: lbl_80455438-_SDA2_BASE_(r2)*/
/* 802818D4 0027E814  FF E0 07 B2 */	fmul f31, f0, f30
/* 802818D8 0027E818  FC 40 F8 90 */	fmr f2, f31
/* 802818DC 0027E81C  48 0E AE 85 */	bl fmod
/* 802818E0 0027E820  C8 02 BA 00 */	lfd f0, 0x80455400 - 0x80459A00(r2) /*SDA HACK; original: lbl_80455400-_SDA2_BASE_(r2)*/
/* 802818E4 0027E824  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802818E8 0027E828  40 80 00 08 */	bge lbl_802818F0
/* 802818EC 0027E82C  FC 21 F8 2A */	fadd f1, f1, f31
lbl_802818F0:
/* 802818F0 0027E830  FC 01 F0 40 */	fcmpo cr0, f1, f30
/* 802818F4 0027E834  4C 41 13 82 */	cror 2, 1, 2
/* 802818F8 0027E838  40 82 00 08 */	bne lbl_80281900
/* 802818FC 0027E83C  FC 3F 08 28 */	fsub f1, f31, f1
lbl_80281900:
/* 80281900 0027E840  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80281904 0027E844  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 80281908 0027E848  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8028190C 0027E84C  7C 08 03 A6 */	mtlr r0
/* 80281910 0027E850  38 21 00 20 */	addi r1, r1, 0x20
/* 80281914 0027E854  4E 80 00 20 */	blr 