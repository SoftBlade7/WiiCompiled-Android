#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808496A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_808496A4;

loc_808496A4:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r0 = 2;
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = 0x808E0000u;
    r31 = (r31 + -25960);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 48), r28);
    r28 = 0;
    MemoryInline::FlatWrite32((r3 + 1732), r28);
    MemoryInline::FlatWrite32((r3 + 1944), r0);
    // inline leaf 0x808605FC (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 292));
    r3 = (r0 & 255);
    // end of inlined leaf 0x808605FC
    r30 = (r3 & 255);
    r3 = (r30 * 388);
    r3 = (r3 + 16);
    ctx->lr = 0x808496F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x805F0000u;
    r5 = 0x805F0000u;
    r7 = r30;
    r6 = 388;
    r4 = (r4 + 14780);
    r5 = (r5 + 14840);
    ctx->lr = 0x8084970Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80020E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80849710:
{
    MemoryInline::FlatWrite32((r29 + 16244), r3);
    r3 = 0;
    MemoryInline::FlatWrite32((r29 + 1724), r28);
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80849800;
    }
}

loc_80849720:
{
}

loc_80849724:
{
    r5 = (r30 + -8);
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(8))) {
        goto loc_808497D4;
    }
}

loc_8084972C:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80849748;
    }
}

loc_80849734:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_80849740:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r0))) {
        goto loc_80849748;
    }
}

loc_80849744:
{
    r6 = 1;
}

loc_80849748:
{
}

loc_8084974C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_808497D4;
    }
}

loc_80849750:
{
    r4 = (r5 + 7);
    r0 = 1;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r4 = (r4_rot_1 & 536870911);
    ctr = r4;
}

loc_80849764:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_808497D4;
    }
}

loc_80849768:
{
    r7 = MemoryInline::FlatRead32((r29 + 1724));
    r4 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    r6 = (r3 + 1);
    r5 = (r3 + 2);
    r7 = (r7 | r4);
    r4 = (r3 + 3);
    r6 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r5 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r9 = (r7 | r6);
    r7 = (r3 + 4);
    r8 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r6 = (r3 + 5);
    r9 = (r9 | r5);
    r5 = (r3 + 6);
    r4 = (r3 + 7);
    r7 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r8 = (r9 | r8);
    r6 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r7 = (r8 | r7);
    r5 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r6 = (r7 | r6);
    r4 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r5 = (r6 | r5);
    r3 = (r3 + 8);
    r4 = (r5 | r4);
    MemoryInline::FlatWrite32((r29 + 1724), r4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80849768;
    }
}

loc_808497D4:
{
    r0 = (r30 - r3);
    r4 = 1;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r30));
}

loc_808497E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80849800;
    }
}

loc_808497E8:
{
    r5 = MemoryInline::FlatRead32((r29 + 1724));
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
    r3 = (r3 + 1);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r29 + 1724), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808497E8;
    }
}

loc_80849800:
{
    r0 = MemoryInline::FlatRead32((r29 + 1724));
    r3 = 20;
    MemoryInline::FlatWrite32((r29 + 1728), r0);
    ctx->lr = 0x80849810u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80849814:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80849850;
    }
}

loc_80849818:
{
    r5 = (r31 + 0);
    r7 = MemoryInline::FlatRead32(r31);
    r6 = MemoryInline::FlatRead32((r5 + 4));
    r4 = 0x808E0000u;
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + -25876);
    MemoryInline::FlatWriteRam32((r1 + 32), r7);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r29);
    MemoryInline::FlatWriteRam32((r3 + 8), r7);
    MemoryInline::FlatWriteRam32((r3 + 12), r6);
    MemoryInline::FlatWriteRam32((r1 + 36), r6);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
}

loc_80849850:
{
    MemoryInline::FlatWrite32((r29 + 16232), r3);
    r3 = 20;
    ctx->lr = 0x8084985Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80849860:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084989C;
    }
}

loc_80849864:
{
    r5 = (r31 + 12);
    r7 = MemoryInline::FlatRead32((r31 + 12));
    r6 = MemoryInline::FlatRead32((r5 + 4));
    r4 = 0x808E0000u;
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + -25900);
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r29);
    MemoryInline::FlatWriteRam32((r3 + 8), r7);
    MemoryInline::FlatWriteRam32((r3 + 12), r6);
    MemoryInline::FlatWriteRam32((r1 + 24), r6);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
}

loc_8084989C:
{
    MemoryInline::FlatWrite32((r29 + 16240), r3);
    r3 = 20;
    ctx->lr = 0x808498A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808498AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808498E8;
    }
}

loc_808498B0:
{
    r5 = (r31 + 24);
    r7 = MemoryInline::FlatRead32((r31 + 24));
    r6 = MemoryInline::FlatRead32((r5 + 4));
    r4 = 0x808E0000u;
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + -25924);
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r29);
    MemoryInline::FlatWriteRam32((r3 + 8), r7);
    MemoryInline::FlatWriteRam32((r3 + 12), r6);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
}

loc_808498E8:
{
    MemoryInline::FlatWrite32((r29 + 16236), r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = r29;
    MemoryInline::FlatWrite32((r29 + 984), r0);
    ctx->lr = 0x808498FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80836B9Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = (r29 + 3472);
    r29 = 0;
}

loc_80849904:
{
    r3 = r28;
    r4 = 8;
    // inline leaf 0x806405B8 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 1476), r4);
    // end of inlined leaf 0x806405B8
    r29 = (r29 + 1);
    r28 = (r28 + 1480);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(4));
}

loc_8084991C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80849904;
    }
}

loc_80849920:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x808496A4 func_808496A4 preserves=true fpr_mask=0x00000000
