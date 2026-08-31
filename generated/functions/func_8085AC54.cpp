#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80631C68_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_8085AC54(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8085AC54;

loc_8085AC54:
{
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r0 = 2;
    r5 = (r3 + 40);
    r7 = 0;
    r6 = MemoryInline::FlatRead32((r4 + 112));
    r8 = 0;
    ctr = r0;
}

loc_8085AC70:
{
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085AC84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085AC9C;
    }
}

loc_8085AC88:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085AC90:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085AC9C;
    }
}

loc_8085AC94:
{
    r7 = 1;
    goto loc_8085AD94;
}

loc_8085AC9C:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085ACB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085ACCC;
    }
}

loc_8085ACB8:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085ACC0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085ACCC;
    }
}

loc_8085ACC4:
{
    r7 = 1;
    goto loc_8085AD94;
}

loc_8085ACCC:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085ACE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085ACFC;
    }
}

loc_8085ACE8:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085ACF0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085ACFC;
    }
}

loc_8085ACF4:
{
    r7 = 1;
    goto loc_8085AD94;
}

loc_8085ACFC:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085AD14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085AD2C;
    }
}

loc_8085AD18:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085AD20:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085AD2C;
    }
}

loc_8085AD24:
{
    r7 = 1;
    goto loc_8085AD94;
}

loc_8085AD2C:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085AD44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085AD5C;
    }
}

loc_8085AD48:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085AD50:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085AD5C;
    }
}

loc_8085AD54:
{
    r7 = 1;
    goto loc_8085AD94;
}

loc_8085AD5C:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085AD74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085AD8C;
    }
}

loc_8085AD78:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085AD80:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085AD8C;
    }
}

loc_8085AD84:
{
    r7 = 1;
    goto loc_8085AD94;
}

loc_8085AD8C:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8085AC70;
    }
}

loc_8085AD94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8085AD98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085ADB8;
    }
}

loc_8085AD9C:
{
    r0 = 10;
    MemoryInline::FlatWrite32((r3 + 5988), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = 55;
    MemoryInline::FlatWrite32((r3 + 5976), r0);
    goto loc_8085ADD0;
}

loc_8085ADB8:
{
    r0 = 12;
    MemoryInline::FlatWrite32((r3 + 5988), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = 56;
    MemoryInline::FlatWrite32((r3 + 5976), r0);
}

loc_8085ADD0:
{
    r3 = 0x809C0000u;
    r0 = 11;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r31 = 56;
    MemoryInline::FlatWrite32((r3 + 5984), r0);
}

loc_8085AFE0:
{
    r12 = MemoryInline::FlatRead32(r28);
    f1.d = f31.d;
    r3 = r28;
    r4 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x8085B000u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x809C0000u;
    r3 = r31;
    r27 = MemoryInline::FlatRead32((r4 + 9000));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80631C68u) && KnownTranslatedCpuCall<0x80631C68u>::kAvailable && !KnownTranslatedCpuCall<0x80631C68u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80631C68u>()) {
        const auto state_free_result_80631C68_1AB3 = func_80631C68_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80631C68_1AB3[0]);
        cr = static_cast<uint32_t>(state_free_result_80631C68_1AB3[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80631C68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = r27;
    r5 = 1;
    ctx->lr = 0x8085B020u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806F8DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8085BBE0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621410 (9 guest instruction(s))
}

loc_inl0_0x80621410:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80621418:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8062141C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80621424:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80621428:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl0_cont_80621410;
}

loc_inl0_return:
{
}

loc_inl0_cont_80621410:
{
    // end of inlined leaf 0x80621410
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 256);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 256));
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x7FFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFD fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8085AC54 func_8085AC54 preserves=false fpr_mask=0x80000000
