#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_806212FC_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_806212FC_statefree_v0(uint32_t, uint32_t);

extern "C" void func_805D7658(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805D7658;

loc_805D7658:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r31 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_805D7678:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805D7954;
    }
}

loc_805D767C:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_805D7680:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_805D7954;
    }
}

loc_805D7684:
{
    r0 = MemoryInline::FlatRead32((r3 + 1200));
}

loc_805D768C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805D76B4;
    }
}

loc_805D7690:
{
}

loc_805D7694:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805D772C;
    }
}

loc_805D7698:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_805D769C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D782C;
    }
}

loc_805D76A0:
{
}

loc_805D76A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_805D7894;
    }
}

loc_805D76A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_805D76AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D7934;
    }
}

loc_805D76B0:
{
    goto loc_805D7954;
}

loc_805D76B4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D294C (7 guest instruction(s))
}

loc_inl1_0x805D294C:
{
    r0 = MemoryInline::FlatRead8((r3 + 14168));
}

loc_inl1_0x805D2954:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x805D2960;
    }
}

loc_inl1_0x805D2958:
{
    r3 = 1;
    goto loc_inl1_cont_805D294C;
}

loc_inl1_0x805D2960:
{
    r3 = MemoryInline::FlatRead8((r3 + 14424));
}

loc_inl1_cont_805D294C:
{
    // end of inlined leaf 0x805D294C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805D76CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D7954;
    }
}

loc_805D76D0:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D76E0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805D7700;
    }
}

loc_805D76E4:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_805D7704;
}

loc_805D7700:
{
    r3 = 0;
}

loc_805D7704:
{
    r4 = 0x809C0000u;
    r3 = (r3 + 65536);
    r4 = MemoryInline::FlatRead32((r4 + 8464));
    r5 = 360;
    r3 = (r3 + -29104);
    r4 = (r4 + 516);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 1200), r0);
    goto loc_805D7954;
}

loc_805D772C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805D7740:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D774C;
    }
}

loc_805D7744:
{
    r29 = 0;
    goto loc_805D77A0;
}

loc_805D774C:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7248);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D779C;
    }
}

loc_805D7758:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805D776Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805D7784;
}

loc_805D7770:
{
}

loc_805D7774:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_805D7780;
    }
}

loc_805D7778:
{
    r0 = 1;
    goto loc_805D7790;
}

loc_805D7780:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805D7784:
{
}

loc_805D7788:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805D7770;
    }
}

loc_805D778C:
{
    r0 = 0;
}

loc_805D7790:
{
}

loc_805D7794:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805D779C;
    }
}

loc_805D7798:
{
    goto loc_805D77A0;
}

loc_805D779C:
{
    r29 = 0;
}

loc_805D77A0:
{
    r0 = MemoryInline::FlatRead32((r29 + 148));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D77A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D7954;
    }
}

loc_805D77AC:
{
    r3 = (r29 + 160);
    ctx->lr = 0x805D77B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805E2198u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 1204));
    r28 = -1;
    r27 = 0;
    r30 = (r3 + 7);
    goto loc_805D77EC;
}

loc_805D77C8:
{
    r4 = r27;
    r3 = (r29 + 160);
    // inline leaf 0x805E2500 (10 guest instruction(s))
}

loc_inl2_0x805E2500:
{
}

loc_inl2_0x805E2504:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl2_0x805E2520;
    }
}

loc_inl2_0x805E2508:
{
    r0 = MemoryInline::FlatRead32((r3 + 608));
}

loc_inl2_0x805E2510:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_inl2_0x805E2520;
    }
}

loc_inl2_0x805E2514:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    goto loc_inl2_cont_805E2500;
}

loc_inl2_0x805E2520:
{
    r3 = 0;
}

loc_inl2_cont_805E2500:
{
    // end of inlined leaf 0x805E2500
    r0 = MemoryInline::FlatRead32((r3 + 196));
}

loc_805D77DC:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(r0))) {
        goto loc_805D77E8;
    }
}

loc_805D77E0:
{
    r28 = r27;
    goto loc_805D77F8;
}

loc_805D77E8:
{
    r27 = (r27 + 1);
}

loc_805D77EC:
{
    r0 = MemoryInline::FlatRead32((r29 + 768));
}

loc_805D77F4:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_805D77C8;
    }
}

loc_805D77F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805D77FC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805D7810;
    }
}

loc_805D7800:
{
    r4 = r28;
    r3 = (r29 + 160);
    ctx->lr = 0x805D780Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805E2610u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_805D7954;
}

loc_805D7810:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x806213E4 (11 guest instruction(s))
}

loc_inl3_0x806213E4:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl3_0x806213EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x806213F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl3_0x806213F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x806213FC:
{
    r4 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl3_cont_806213E4;
}

loc_inl3_return:
{
}

loc_inl3_cont_806213E4:
{
    // end of inlined leaf 0x806213E4
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 1200), r0);
    goto loc_805D7954;
}

loc_805D782C:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x806212FCu) && KnownTranslatedCpuCall<0x806212FCu>::kAvailable && !KnownTranslatedCpuCall<0x806212FCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x806212FCu>()) {
        const auto state_free_result_806212FC_3088 = func_806212FC_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_806212FC_3088[0]);
        r3 = static_cast<uint32_t>(state_free_result_806212FC_3088[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x806212FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805D7840:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D7954;
    }
}

loc_805D7844:
{
    r3 = 0x809C0000u;
    r4 = (r31 + 1208);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    ctx->lr = 0x805D7854u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066EA80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805D7858:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D7868;
    }
}

loc_805D785C:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 1200), r0);
    goto loc_805D7954;
}

loc_805D7868:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r0 = 4;
    r3 = MemoryInline::FlatRead16((r3 + 54));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r4 + r3);
    MemoryInline::FlatWrite8((r3 + 1216), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r31 + 1200), r0);
    goto loc_805D7954;
}

loc_805D7894:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FA4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x80668FA4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_805D78A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D7954;
    }
}

loc_805D78A8:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_805D78B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D78E4;
    }
}

loc_805D78B8:
{
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r5 = MemoryInline::FlatRead16((r4 + 54));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead32((r3 + 152));
    r4 = (r31 + r5);
    r3 = (r0 + r5);
    r0 = MemoryInline::FlatRead8((r4 + 1208));
    MemoryInline::FlatWrite8((r3 + 1216), static_cast<uint8_t>(r0));
    goto loc_805D7928;
}

loc_805D78E4:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(7));
}

loc_805D78F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D7904;
    }
}

loc_805D78F4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x806213B8 (5 guest instruction(s))
    r4 = 6;
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806213B8
}

loc_805D7904:
{
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r0 = MemoryInline::FlatRead16((r3 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r4 + r0);
    MemoryInline::FlatWrite8((r3 + 1216), static_cast<uint8_t>(r5));
}

loc_805D7928:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 1200), r0);
    goto loc_805D7954;
}

loc_805D7934:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_805D7954;
    }
}

loc_805D7938:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(30));
}

loc_805D7940:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805D7954;
    }
}

loc_805D7944:
{
    r5 = 0x80890000u;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 17044));
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl8_0x80602488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl8_0x8060248C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl8_0x80602494;
    }
}

loc_inl8_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl8_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl8_cont_80602488:
{
    // end of inlined leaf 0x80602488
}

loc_805D7954:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
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
// RECOMP_REGISTRATION base 0x805D7658 func_805D7658 preserves=true fpr_mask=0x00000000
