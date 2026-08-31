#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_807EE548(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807EE548;

loc_807EE548:
{
    MemoryInline::FlatWriteRam32((r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    MemoryInline::FlatWriteRam32((r1 + 284), r31);
    MemoryInline::FlatWriteRam32((r1 + 280), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 276), r29);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x807EE574u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r30;
    ctx->lr = 0x807EE57Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807EC7F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r30 + 412));
    r5 = MemoryInline::FlatRead32((r4 + -10448));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & 1020);
}

loc_807EE590:
{
    r3 = 0;
    r5 = MemoryInline::FlatRead32((r5 + 12));
    r5_addr_0 = (r5 + r4);
    r4 = MemoryInline::FlatRead32(r5_addr_0);
    r31 = MemoryInline::FlatRead8((r4 + 38));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807EE5B4;
    }
}

loc_807EE5A4:
{
    r0 = MemoryInline::FlatRead32((r30 + 624));
}

loc_807EE5AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807EE5B4;
    }
}

loc_807EE5B0:
{
    r3 = 1;
}

loc_807EE5B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807EE5B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807EE7A4;
    }
}

loc_807EE5BC:
{
    r3 = MemoryInline::FlatRead8((r30 + 409));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r31));
}

loc_807EE5C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807EE7A4;
    }
}

loc_807EE5C8:
{
    r0 = (r3 + -1);
    r3 = (r1 + 44);
    r0 = (r0 * 12);
    r4 = (r30 + 640);
    r5 = (r30 + r0);
    r5 = (r5 + 516);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x807EE7C0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead16((r1 + 48));
    r4 = 0x808B0000u;
    MemoryInline::FlatWrite16((r30 + 644), static_cast<uint16_t>(r0));
    r4 = (r4 + 11588);
    r0 = 0;
    r3 = r30;
    r5 = MemoryInline::FlatRead8((r1 + 50));
    MemoryInline::FlatWrite8((r30 + 646), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead16((r1 + 52));
    MemoryInline::FlatWrite16((r30 + 648), static_cast<uint16_t>(r5));
    r5 = MemoryInline::FlatRead8((r1 + 54));
    MemoryInline::FlatWrite8((r30 + 650), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 56), r4);
    MemoryInline::FlatWriteRam8((r1 + 66), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 62), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 64), static_cast<uint16_t>(r0));
    r29 = MemoryInline::FlatRead8((r30 + 409));
    ctx->lr = 0x807EE630u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807EC7F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r4 = r29;
    r5 = (r1 + 56);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    InvokeDirectCpu<0x8053572Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    r3 = (r1 + 32);
    r4 = (r30 + 628);
    r5 = (r1 + 56);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x807EE7C0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead16((r1 + 36));
    r3 = (r1 + 68);
    MemoryInline::FlatWrite16((r30 + 632), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 38));
    MemoryInline::FlatWrite8((r30 + 634), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 40));
    MemoryInline::FlatWrite16((r30 + 636), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 42));
    MemoryInline::FlatWrite8((r30 + 638), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_227E = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_227E[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_227E[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805CD94Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r30 + 638));
}

loc_807EE690:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807EE69C;
    }
}

loc_807EE694:
{
    r0 = 0;
    goto loc_807EE704;
}

loc_807EE69C:
{
    r0 = MemoryInline::FlatRead8((r30 + 650));
}

loc_807EE6A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807EE6B0;
    }
}

loc_807EE6A8:
{
    r0 = 1;
    goto loc_807EE704;
}

loc_807EE6B0:
{
    r0 = MemoryInline::FlatRead16((r30 + 644));
    r3 = MemoryInline::FlatRead16((r30 + 632));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_807EE6BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807EE6C8;
    }
}

loc_807EE6C0:
{
    r0 = 1;
    goto loc_807EE704;
}

loc_807EE6C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807EE700;
    }
}

loc_807EE6CC:
{
    r0 = MemoryInline::FlatRead8((r30 + 646));
    r3 = MemoryInline::FlatRead8((r30 + 634));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_807EE6D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807EE6E4;
    }
}

loc_807EE6DC:
{
    r0 = 1;
    goto loc_807EE704;
}

loc_807EE6E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807EE700;
    }
}

loc_807EE6E8:
{
    r3 = MemoryInline::FlatRead16((r30 + 636));
    r0 = MemoryInline::FlatRead16((r30 + 648));
}

loc_807EE6F4:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_807EE700;
    }
}

loc_807EE6F8:
{
    r0 = 1;
    goto loc_807EE704;
}

loc_807EE700:
{
    r0 = 0;
}

loc_807EE704:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807EE708:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807EE758;
    }
}

loc_807EE70C:
{
    r3 = (r30 + 152);
    r4 = 0;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r5 = 0x808B0000u;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -25976));
    ctx->lr = 0x807EE728u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 20);
    r4 = (r30 + 640);
    r5 = (r30 + 628);
    // inline leaf 0x807EE860 (32 guest instruction(s))
}

loc_inl1_0x807EE860:
{
    r6 = MemoryInline::FlatRead16((r5 + 8));
    r7 = 0;
    r0 = MemoryInline::FlatRead16((r4 + 8));
    r8 = 0;
    r9 = (r0 - r6);
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(0))) {
        goto loc_inl1_0x807EE880;
    }
}

loc_inl1_0x807EE878:
{
    r8 = -1;
    r9 = (r9 + 1000);
}

loc_inl1_0x807EE880:
{
    r6 = MemoryInline::FlatRead8((r5 + 6));
    r0 = MemoryInline::FlatRead8((r4 + 6));
    r0 = (r0 - r6);
    r8 = (r8 + r0);
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_inl1_0x807EE89C;
    }
}

loc_inl1_0x807EE894:
{
    r7 = -1;
    r8 = (r8 + 60);
}

loc_inl1_0x807EE89C:
{
    r5 = MemoryInline::FlatRead16((r5 + 4));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0 = (r0 - r5);
    r7 = (r7 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl1_0x807EE8BC;
    }
}

loc_inl1_0x807EE8B0:
{
    r7 = 0;
    r8 = 0;
    r9 = 0;
}

loc_inl1_0x807EE8BC:
{
    r4 = 0x808B0000u;
    r0 = 1;
    r4 = (r4 + 11588);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r7));
    MemoryInline::FlatWriteRam8((r3 + 6), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r9));
}

loc_inl1_cont_807EE860:
{
    // end of inlined leaf 0x807EE860
    r3 = (r1 + 20);
    r4 = (r1 + 68);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    InvokeDirectCpu<0x808608E4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r30;
    r5 = (r1 + 68);
    r4 = 9651;
    ctx->lr = 0x807EE754u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807EE7A0;
}

loc_807EE758:
{
    r3 = (r1 + 8);
    r4 = (r30 + 628);
    r5 = (r30 + 640);
    // inline leaf 0x807EE860 (32 guest instruction(s))
}

loc_inl2_0x807EE860:
{
    r6 = MemoryInline::FlatRead16((r5 + 8));
    r7 = 0;
    r0 = MemoryInline::FlatRead16((r4 + 8));
    r8 = 0;
    r9 = (r0 - r6);
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(0))) {
        goto loc_inl2_0x807EE880;
    }
}

loc_inl2_0x807EE878:
{
    r8 = -1;
    r9 = (r9 + 1000);
}

loc_inl2_0x807EE880:
{
    r6 = MemoryInline::FlatRead8((r5 + 6));
    r0 = MemoryInline::FlatRead8((r4 + 6));
    r0 = (r0 - r6);
    r8 = (r8 + r0);
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_inl2_0x807EE89C;
    }
}

loc_inl2_0x807EE894:
{
    r7 = -1;
    r8 = (r8 + 60);
}

loc_inl2_0x807EE89C:
{
    r5 = MemoryInline::FlatRead16((r5 + 4));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0 = (r0 - r5);
    r7 = (r7 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl2_0x807EE8BC;
    }
}

loc_inl2_0x807EE8B0:
{
    r7 = 0;
    r8 = 0;
    r9 = 0;
}

loc_inl2_0x807EE8BC:
{
    r4 = 0x808B0000u;
    r0 = 1;
    r4 = (r4 + 11588);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r7));
    MemoryInline::FlatWriteRam8((r3 + 6), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r9));
}

loc_inl2_cont_807EE860:
{
    // end of inlined leaf 0x807EE860
    r3 = (r1 + 8);
    r4 = (r1 + 68);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    InvokeDirectCpu<0x808608E4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r30 + 152);
    r4 = 0;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r5 = 0x808B0000u;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -25976));
    ctx->lr = 0x807EE790u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r30;
    r5 = (r1 + 68);
    r4 = 9652;
    ctx->lr = 0x807EE7A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807EE7A0:
{
    MemoryInline::FlatWrite8((r30 + 409), static_cast<uint8_t>(r31));
}

loc_807EE7A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 292));
    r31 = MemoryInline::FlatRead32((r1 + 284));
    r30 = MemoryInline::FlatRead32((r1 + 280));
    r29 = MemoryInline::FlatRead32((r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807EE548 func_807EE548 preserves=true fpr_mask=0x00000000
