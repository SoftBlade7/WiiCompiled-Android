#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80631C68_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_8085A9B0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
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

    goto loc_8085A9B0;

loc_8085A9B0:
{
    r0 = 6;
    r6 = (r3 + 40);
    r7 = (r3 + 3096);
    r10 = 0;
    r11 = 0;
    r12 = 0;
    r27 = 0;
    ctr = r0;
}

loc_8085A9D0:
{
    r0 = (r27 & 255);
    r9 = (r0 * 240);
    r8 = (r6 + r9);
    r0 = MemoryInline::FlatRead32((r8 + 16));
}

loc_8085A9E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8085AA14;
    }
}

loc_8085A9E8:
{
    r5 = MemoryInline::FlatRead32((r8 + 204));
}

loc_8085A9F0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8085AA00;
    }
}

loc_8085A9F4:
{
    r3 = (r7 + r9);
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r10 = (r10 + r0);
}

loc_8085AA00:
{
}

loc_8085AA04:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8085AA14;
    }
}

loc_8085AA08:
{
    r3 = (r7 + r9);
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r11 = (r11 + r0);
}

loc_8085AA14:
{
    r3 = (r7 + r9);
    r5 = MemoryInline::FlatRead16((r8 + 216));
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r0 = (r0 - r5);
}

loc_8085AA28:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r12))) {
        goto loc_8085AA30;
    }
}

loc_8085AA2C:
{
    r12 = r0;
}

loc_8085AA30:
{
    r27 = (r27 + 1);
    r0 = (r27 & 255);
    r9 = (r0 * 240);
    r8 = (r6 + r9);
    r0 = MemoryInline::FlatRead32((r8 + 16));
}

loc_8085AA48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8085AA78;
    }
}

loc_8085AA4C:
{
    r5 = MemoryInline::FlatRead32((r8 + 204));
}

loc_8085AA54:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8085AA64;
    }
}

loc_8085AA58:
{
    r3 = (r7 + r9);
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r10 = (r10 + r0);
}

loc_8085AA64:
{
}

loc_8085AA68:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8085AA78;
    }
}

loc_8085AA6C:
{
    r3 = (r7 + r9);
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r11 = (r11 + r0);
}

loc_8085AA78:
{
    r3 = (r7 + r9);
    r5 = MemoryInline::FlatRead16((r8 + 216));
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r0 = (r0 - r5);
}

loc_8085AA8C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r12))) {
        goto loc_8085AA94;
    }
}

loc_8085AA90:
{
    r12 = r0;
}

loc_8085AA94:
{
    r27 = (r27 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8085A9D0;
    }
}

loc_8085AA9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(r11));
}

loc_8085AAA0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8085AAAC;
    }
}

loc_8085AAA4:
{
    r6 = 0;
    goto loc_8085AAB8;
}

loc_8085AAAC:
{
    r6 = 2;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085AAB8;
    }
}

loc_8085AAB4:
{
    r6 = 1;
}

loc_8085AAB8:
{
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r3 = 0x809C0000u;
    r0 = 2;
    r7 = 0;
    MemoryInline::FlatWrite32((r4 + 112), r6);
    r8 = 0;
    r5 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = (r5 + 40);
    ctr = r0;
}

loc_8085AADC:
{
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085AAF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085AB08;
    }
}

loc_8085AAF4:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085AAFC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085AB08;
    }
}

loc_8085AB00:
{
    r7 = 1;
    goto loc_8085AC00;
}

loc_8085AB08:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085AB20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085AB38;
    }
}

loc_8085AB24:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085AB2C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085AB38;
    }
}

loc_8085AB30:
{
    r7 = 1;
    goto loc_8085AC00;
}

loc_8085AB38:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085AB50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085AB68;
    }
}

loc_8085AB54:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085AB5C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085AB68;
    }
}

loc_8085AB60:
{
    r7 = 1;
    goto loc_8085AC00;
}

loc_8085AB68:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085AB80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085AB98;
    }
}

loc_8085AB84:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085AB8C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085AB98;
    }
}

loc_8085AB90:
{
    r7 = 1;
    goto loc_8085AC00;
}

loc_8085AB98:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085ABB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085ABC8;
    }
}

loc_8085ABB4:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085ABBC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085ABC8;
    }
}

loc_8085ABC0:
{
    r7 = 1;
    goto loc_8085AC00;
}

loc_8085ABC8:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085ABE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085ABF8;
    }
}

loc_8085ABE4:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085ABEC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085ABF8;
    }
}

loc_8085ABF0:
{
    r7 = 1;
    goto loc_8085AC00;
}

loc_8085ABF8:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8085AADC;
    }
}

loc_8085AC00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8085AC04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085AC24;
    }
}

loc_8085AC08:
{
    r0 = 9;
    MemoryInline::FlatWrite32((r5 + 5988), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = 55;
    MemoryInline::FlatWrite32((r3 + 5976), r0);
    goto loc_8085AC3C;
}

loc_8085AC24:
{
    r0 = 12;
    MemoryInline::FlatWrite32((r5 + 5988), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = 56;
    MemoryInline::FlatWrite32((r3 + 5976), r0);
}

loc_8085AC3C:
{
    r3 = 0x809C0000u;
    r0 = 11;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r31 = 55;
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
        const auto state_free_result_80631C68_276D = func_80631C68_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80631C68_276D[0]);
        cr = static_cast<uint32_t>(state_free_result_80631C68_276D[1]);
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
        ctx->gpr[10] = r10;
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
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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

// RECOMP_GUEST_ABI gpr_read=0x7FFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFD fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8085A9B0 func_8085A9B0 preserves=false fpr_mask=0x80000000
