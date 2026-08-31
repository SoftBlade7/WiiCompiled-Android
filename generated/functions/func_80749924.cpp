#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8074AFE0_statefree(uint32_t, uint32_t);

extern "C" void func_80749924(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80749924;

loc_80749924:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = (r3 + 232);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    ctx->lr = 0x80749944u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80748D98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    ctx->lr = 0x8074994Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x807476D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    ctx->lr = 0x80749954u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x807475DCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = r31;
    // inline leaf 0x80747404 (36 guest instruction(s))
    r4 = MemoryInline::FlatRead16((r3 + 44));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    r0 = (r4 | 4);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 264));
    MemoryInline::FlatWriteFloat32((r3 + 88), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 268));
    MemoryInline::FlatWriteFloat32((r3 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 272));
    MemoryInline::FlatWriteFloat32((r3 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 276));
    MemoryInline::FlatWriteFloat32((r3 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 280));
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 284));
    MemoryInline::FlatWriteFloat32((r3 + 108), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 288));
    MemoryInline::FlatWriteFloat32((r3 + 112), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 292));
    MemoryInline::FlatWriteFloat32((r3 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 296));
    MemoryInline::FlatWriteFloat32((r3 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 300));
    MemoryInline::FlatWriteFloat32((r3 + 124), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 304));
    MemoryInline::FlatWriteFloat32((r3 + 128), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 308));
    MemoryInline::FlatWriteFloat32((r3 + 132), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 276));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 292));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 308));
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f2.d);
    // end of inlined leaf 0x80747404
    r0 = MemoryInline::FlatRead8((r31 + 843));
}

loc_80749964:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807499A0;
    }
}

loc_80749968:
{
    r0 = MemoryInline::FlatRead8((r31 + 841));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80749970:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80749984;
    }
}

loc_80749974:
{
    r3 = (r31 + 176);
    r4 = (r31 + 680);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_80749AD0;
}

loc_80749984:
{
    r0 = MemoryInline::FlatRead8((r31 + 840));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8074998C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80749AD0;
    }
}

loc_80749990:
{
    r3 = (r31 + 176);
    r4 = (r31 + 548);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_80749AD0;
}

loc_807499A0:
{
    r0 = MemoryInline::FlatRead8((r31 + 841));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807499A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807499BC;
    }
}

loc_807499AC:
{
    r3 = (r31 + 176);
    r4 = (r31 + 592);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_80749AD0;
}

loc_807499BC:
{
    r0 = MemoryInline::FlatRead8((r31 + 840));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807499C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807499D8;
    }
}

loc_807499C8:
{
    r3 = (r31 + 176);
    r4 = (r31 + 504);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_80749AD0;
}

loc_807499D8:
{
    r3 = MemoryInline::FlatRead32((r31 + 236));
    // inline leaf 0x80747BFC (7 guest instruction(s))
}

loc_inl5_0x80747BFC:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl5_0x80747C04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl5_0x80747C10;
    }
}

loc_inl5_0x80747C08:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    goto loc_inl5_cont_80747BFC;
}

loc_inl5_0x80747C10:
{
    r3 = -1;
}

loc_inl5_cont_80747BFC:
{
    // end of inlined leaf 0x80747BFC
    r5 = MemoryInline::FlatRead32((r31 + 828));
    r4 = 0x808D0000u;
    r30 = r3;
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r31 + 828), r5);
    r6 = MemoryInline::FlatRead16((r4 + -18120));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
}

loc_807499FC:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r6))) {
        goto loc_80749A08;
    }
}

loc_80749A00:
{
    r5 = r6;
    goto loc_80749A14;
}

loc_80749A08:
{
}

loc_80749A0C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_80749A14;
    }
}

loc_80749A10:
{
    r5 = 0;
}

loc_80749A14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80749A18:
{
    MemoryInline::FlatWrite32((r31 + 828), r5);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80749AD0;
    }
}

loc_80749A20:
{
    r4 = 0x808D0000u;
    r0 = MemoryInline::FlatRead16((r4 + -18118));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80749A2C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80749AD0;
    }
}

loc_80749A30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r6));
}

loc_80749A34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80749A44;
    }
}

loc_80749A38:
{
    r0 = MemoryInline::FlatRead32((r31 + 824));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_80749A40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80749AD0;
    }
}

loc_80749A44:
{
    r4 = r31;
    r3 = (r1 + 20);
    // inline leaf 0x80747308 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 276));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 292));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 308));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80747308
    r3 = (r1 + 8);
    r4 = (r1 + 20);
    r5 = (r31 + 748);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x8051486Cu>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 11320));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f3.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x80749A8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 820));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80749A94:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80749AA0;
    }
}

loc_80749A98:
{
    r0 = 1;
    goto loc_80749AA4;
}

loc_80749AA0:
{
    r0 = 0;
}

loc_80749AA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80749AA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80749AD0;
    }
}

loc_80749AAC:
{
    MemoryInline::FlatWrite32((r31 + 824), r30);
    r0 = 2;
    r5 = MemoryInline::FlatRead32((r31 + 236));
    r3 = (r31 + 176);
    r4 = (r31 + 460);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    r5 = MemoryInline::FlatRead32((r31 + 236));
    MemoryInline::FlatWrite32((r5 + 32), r30);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8074AFE0u) && KnownTranslatedCpuCall<0x8074AFE0u>::kAvailable && !KnownTranslatedCpuCall<0x8074AFE0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8074AFE0u>()) {
        const auto state_free_result_8074AFE0_3004 = func_8074AFE0_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_8074AFE0_3004);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8074AFE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80749AD0:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFCFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80749924 func_80749924 preserves=true fpr_mask=0x00000000
