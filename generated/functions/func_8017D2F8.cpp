#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8017D2F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8017D2F8;

loc_8017D2F8:
{
}

loc_8017D2FC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8017D58C;
    }
}

loc_8017D300:
{
    r3 = 0x80250000u;
    r0 = 37;
    r3 = (r3 + 10224);
    r31 = 0;
    ctr = r0;
}

loc_8017D314:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8017D31C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8017D330;
    }
}

loc_8017D320:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8017D328:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8017D330;
    }
}

loc_8017D32C:
{
    goto loc_8017D360;
}

loc_8017D330:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r31 = (r31 + 1);
}

loc_8017D33C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8017D350;
    }
}

loc_8017D340:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8017D348:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_8017D350;
    }
}

loc_8017D34C:
{
    goto loc_8017D360;
}

loc_8017D350:
{
    r3 = (r3 + 16);
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D314;
    }
}

loc_8017D35C:
{
    r31 = -1;
}

loc_8017D360:
{
    r5 = 0x80250000u;
    r3 = 37;
    r5 = (r5 + 10224);
    r0 = 1;
    r8 = 0;
    ctr = r3;
}

loc_8017D378:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017D380:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017D394;
    }
}

loc_8017D384:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017D38C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8017D394;
    }
}

loc_8017D390:
{
    goto loc_8017D3C4;
}

loc_8017D394:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r8 = (r8 + 1);
}

loc_8017D3A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017D3B4;
    }
}

loc_8017D3A4:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017D3AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8017D3B4;
    }
}

loc_8017D3B0:
{
    goto loc_8017D3C4;
}

loc_8017D3B4:
{
    r5 = (r5 + 16);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D378;
    }
}

loc_8017D3C0:
{
    r8 = -1;
}

loc_8017D3C4:
{
    r5 = 0x80250000u;
    r3 = 37;
    r5 = (r5 + 10224);
    r7 = 0;
    ctr = r3;
}

loc_8017D3D8:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017D3E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017D3F4;
    }
}

loc_8017D3E4:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017D3EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_8017D3F4;
    }
}

loc_8017D3F0:
{
    goto loc_8017D424;
}

loc_8017D3F4:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r7 = (r7 + 1);
}

loc_8017D400:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017D414;
    }
}

loc_8017D404:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017D40C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_8017D414;
    }
}

loc_8017D410:
{
    goto loc_8017D424;
}

loc_8017D414:
{
    r5 = (r5 + 16);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D3D8;
    }
}

loc_8017D420:
{
    r7 = -1;
}

loc_8017D424:
{
    r5 = 0x80250000u;
    r3 = 37;
    r5 = (r5 + 10224);
    r6 = 0;
    ctr = r3;
}

loc_8017D438:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017D440:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017D454;
    }
}

loc_8017D444:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017D44C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_8017D454;
    }
}

loc_8017D450:
{
    goto loc_8017D484;
}

loc_8017D454:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r6 = (r6 + 1);
}

loc_8017D460:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017D474;
    }
}

loc_8017D464:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017D46C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_8017D474;
    }
}

loc_8017D470:
{
    goto loc_8017D484;
}

loc_8017D474:
{
    r5 = (r5 + 16);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D438;
    }
}

loc_8017D480:
{
    r6 = -1;
}

loc_8017D484:
{
    r9 = 0x80250000u;
    r3 = 37;
    r9 = (r9 + 10224);
    r5 = 0;
    ctr = r3;
}

loc_8017D498:
{
    r3 = MemoryInline::FlatRead32(r9);
}

loc_8017D4A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017D4B4;
    }
}

loc_8017D4A4:
{
    r3 = MemoryInline::FlatRead32((r9 + 4));
}

loc_8017D4AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_8017D4B4;
    }
}

loc_8017D4B0:
{
    goto loc_8017D4E4;
}

loc_8017D4B4:
{
    r3 = MemoryInline::FlatRead32((r9 + 8));
    r5 = (r5 + 1);
}

loc_8017D4C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017D4D4;
    }
}

loc_8017D4C4:
{
    r3 = MemoryInline::FlatRead32((r9 + 12));
}

loc_8017D4CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_8017D4D4;
    }
}

loc_8017D4D0:
{
    goto loc_8017D4E4;
}

loc_8017D4D4:
{
    r9 = (r9 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D498;
    }
}

loc_8017D4E0:
{
    r5 = -1;
}

loc_8017D4E4:
{
}

loc_8017D4E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8017D54C;
    }
}

loc_8017D4EC:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D500:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017D54C;
    }
}

loc_8017D504:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D518:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017D54C;
    }
}

loc_8017D51C:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r3 = (r3_rot_3 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D530:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017D54C;
    }
}

loc_8017D534:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D548:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8017D550;
    }
}

loc_8017D54C:
{
    r0 = 0;
}

loc_8017D550:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017D554:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017D584;
    }
}

loc_8017D558:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r29;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl0_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl0_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x80173E54;
    }
}

loc_inl0_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl0_0x80173E58;
}

loc_inl0_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl0_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl0_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 20), r3);
    MemoryInline::FlatWrite32((r30 + 116), r31);
    MemoryInline::FlatWrite32((r30 + 108), r0);
    goto loc_8017DBD4;
}

loc_8017D584:
{
    MemoryInline::FlatWrite32((r30 + 108), r31);
    goto loc_8017DBD4;
}

loc_8017D58C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_8017D590:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017DBD4;
    }
}

loc_8017D594:
{
    r3 = 0x80250000u;
    r0 = 37;
    r3 = (r3 + 10224);
    r31 = 0;
    ctr = r0;
}

loc_8017D5A8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8017D5B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8017D5C4;
    }
}

loc_8017D5B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8017D5BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(20))) {
        goto loc_8017D5C4;
    }
}

loc_8017D5C0:
{
    goto loc_8017D5F4;
}

loc_8017D5C4:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r31 = (r31 + 1);
}

loc_8017D5D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8017D5E4;
    }
}

loc_8017D5D4:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8017D5DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(20))) {
        goto loc_8017D5E4;
    }
}

loc_8017D5E0:
{
    goto loc_8017D5F4;
}

loc_8017D5E4:
{
    r3 = (r3 + 16);
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D5A8;
    }
}

loc_8017D5F0:
{
    r31 = -1;
}

loc_8017D5F4:
{
    r5 = 0x80250000u;
    r3 = 37;
    r5 = (r5 + 10224);
    r0 = 1;
    r8 = 0;
    ctr = r3;
}

loc_8017D60C:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017D614:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017D628;
    }
}

loc_8017D618:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017D620:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8017D628;
    }
}

loc_8017D624:
{
    goto loc_8017D658;
}

loc_8017D628:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r8 = (r8 + 1);
}

loc_8017D634:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017D648;
    }
}

loc_8017D638:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017D640:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8017D648;
    }
}

loc_8017D644:
{
    goto loc_8017D658;
}

loc_8017D648:
{
    r5 = (r5 + 16);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D60C;
    }
}

loc_8017D654:
{
    r8 = -1;
}

loc_8017D658:
{
    r5 = 0x80250000u;
    r3 = 37;
    r5 = (r5 + 10224);
    r7 = 0;
    ctr = r3;
}

loc_8017D66C:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017D674:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017D688;
    }
}

loc_8017D678:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017D680:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_8017D688;
    }
}

loc_8017D684:
{
    goto loc_8017D6B8;
}

loc_8017D688:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r7 = (r7 + 1);
}

loc_8017D694:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017D6A8;
    }
}

loc_8017D698:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017D6A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_8017D6A8;
    }
}

loc_8017D6A4:
{
    goto loc_8017D6B8;
}

loc_8017D6A8:
{
    r5 = (r5 + 16);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D66C;
    }
}

loc_8017D6B4:
{
    r7 = -1;
}

loc_8017D6B8:
{
    r5 = 0x80250000u;
    r3 = 37;
    r5 = (r5 + 10224);
    r6 = 0;
    ctr = r3;
}

loc_8017D6CC:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017D6D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017D6E8;
    }
}

loc_8017D6D8:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017D6E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_8017D6E8;
    }
}

loc_8017D6E4:
{
    goto loc_8017D718;
}

loc_8017D6E8:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r6 = (r6 + 1);
}

loc_8017D6F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017D708;
    }
}

loc_8017D6F8:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017D700:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_8017D708;
    }
}

loc_8017D704:
{
    goto loc_8017D718;
}

loc_8017D708:
{
    r5 = (r5 + 16);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D6CC;
    }
}

loc_8017D714:
{
    r6 = -1;
}

loc_8017D718:
{
    r9 = 0x80250000u;
    r3 = 37;
    r9 = (r9 + 10224);
    r5 = 0;
    ctr = r3;
}

loc_8017D72C:
{
    r3 = MemoryInline::FlatRead32(r9);
}

loc_8017D734:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017D748;
    }
}

loc_8017D738:
{
    r3 = MemoryInline::FlatRead32((r9 + 4));
}

loc_8017D740:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_8017D748;
    }
}

loc_8017D744:
{
    goto loc_8017D778;
}

loc_8017D748:
{
    r3 = MemoryInline::FlatRead32((r9 + 8));
    r5 = (r5 + 1);
}

loc_8017D754:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017D768;
    }
}

loc_8017D758:
{
    r3 = MemoryInline::FlatRead32((r9 + 12));
}

loc_8017D760:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_8017D768;
    }
}

loc_8017D764:
{
    goto loc_8017D778;
}

loc_8017D768:
{
    r9 = (r9 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017D72C;
    }
}

loc_8017D774:
{
    r5 = -1;
}

loc_8017D778:
{
}

loc_8017D77C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8017D7E0;
    }
}

loc_8017D780:
{
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r3 = (r3_rot_7 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D794:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017D7E0;
    }
}

loc_8017D798:
{
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r3 = (r3_rot_8 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D7AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017D7E0;
    }
}

loc_8017D7B0:
{
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r3 = (r3_rot_9 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D7C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017D7E0;
    }
}

loc_8017D7C8:
{
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_10 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D7DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8017D7E4;
    }
}

loc_8017D7E0:
{
    r0 = 0;
}

loc_8017D7E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017D7E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017D818;
    }
}

loc_8017D7EC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r29;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl1_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl1_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_0x80173E54;
    }
}

loc_inl1_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl1_0x80173E58;
}

loc_inl1_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl1_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl1_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 20), r3);
    MemoryInline::FlatWrite32((r30 + 116), r31);
    MemoryInline::FlatWrite32((r30 + 108), r0);
    goto loc_8017DBD4;
}

loc_8017D818:
{
    MemoryInline::FlatWrite32((r30 + 108), r31);
}

loc_8017DBD4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00003FB gpr_write=0xE00003EB gpr_return=0x00000008 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8017D2F8 func_8017D2F8 preserves=true fpr_mask=0x00000000
