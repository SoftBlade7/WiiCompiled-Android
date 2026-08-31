#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80631C68_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_8085B18C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_8085B18C;

loc_8085B18C:
{
    r29 = 0x809C0000u;
    r30 = 0;
    r3 = MemoryInline::FlatRead32((r29 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 296));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8085B1A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085B1F4;
    }
}

loc_8085B1A4:
{
    r6 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r6 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r30 = MemoryInline::FlatRead8((r3 + 976));
}

loc_8085B1B8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8085B280;
    }
}

loc_8085B1BC:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 964), r0);
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r6 + 7736));
    r5 = MemoryInline::FlatRead32((r29 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r5 + 2920));
    MemoryInline::FlatWrite32((r3 + 968), r0);
    r3 = MemoryInline::FlatRead32((r6 + 7736));
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead16((r4 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 972), r0);
    goto loc_8085B280;
}

loc_8085B1F4:
{
    r3 = (r1 + 8);
    ctx->lr = 0x8085B1FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x8051C270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    r4 = MemoryInline::FlatRead32((r29 + -10456));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r4 + 3084));
    ctx->lr = 0x8085B20Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8051C790u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r3 = 0;
}

loc_8085B218:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8085B22C;
    }
}

loc_8085B21C:
{
    r0 = MemoryInline::FlatRead32((r1 + 220));
}

loc_8085B224:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8085B22C;
    }
}

loc_8085B228:
{
    r3 = 1;
}

loc_8085B22C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8085B230:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085B268;
    }
}

loc_8085B234:
{
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r0 = MemoryInline::FlatRead16((r3 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead32((r4 + 972));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8085B254:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8085B268;
    }
}

loc_8085B258:
{
    r0 = MemoryInline::FlatRead32((r4 + 964));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8085B260:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8085B268;
    }
}

loc_8085B264:
{
    r30 = MemoryInline::FlatRead8((r4 + 976));
}

loc_8085B268:
{
    r4 = 0x80520000u;
    r3 = (r1 + 112);
    r4 = (r4 + -15564);
    r5 = 12;
    r6 = 5;
    ctx->lr = 0x8085B280u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x800210ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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

loc_8085B280:
{
}

loc_8085B284:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8085B2A0;
    }
}

loc_8085B288:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8085B28C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085B2A0;
    }
}

loc_8085B290:
{
    r3 = r31;
    r4 = 1;
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805E1748u>(ctx);
    r0 = ctx->gpr[0];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
}

loc_8085B2A0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8085B2B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(31))) {
        goto loc_8085B2DC;
    }
}

loc_8085B2B8:
{
}

loc_8085B2BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(47))) {
        goto loc_8085B2DC;
    }
}

loc_8085B2C0:
{
}

loc_8085B2C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(30))) {
        goto loc_8085B2E4;
    }
}

loc_8085B2C8:
{
}

loc_8085B2CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(46))) {
        goto loc_8085B2E4;
    }
}

loc_8085B2D0:
{
}

loc_8085B2D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_8085B2EC;
    }
}

loc_8085B2D8:
{
    goto loc_8085B2F0;
}

loc_8085B2DC:
{
    r0 = 31;
    goto loc_8085B2F0;
}

loc_8085B2E4:
{
    r0 = 30;
    goto loc_8085B2F0;
}

loc_8085B2EC:
{
    r0 = 48;
}

loc_8085B2F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(30));
}

loc_8085B2F4:
{
    r0 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8085B300;
    }
}

loc_8085B2FC:
{
    r0 = 5;
}

loc_8085B300:
{
    r5 = 0x809C0000u;
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r5 + -10456));
    MemoryInline::FlatWrite32((r4 + 5988), r0);
    r4 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2920));
    MemoryInline::FlatWrite32((r4 + 5976), r0);
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    ctx->lr = 0x8085B324u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x80715FF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    r29 = 0x809C0000u;
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r29 + 7736));
    r27 = MemoryInline::FlatRead32((r4 + 9000));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80631C68u) && KnownTranslatedCpuCall<0x80631C68u>::kAvailable && !KnownTranslatedCpuCall<0x80631C68u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80631C68u>()) {
        const auto state_free_result_80631C68_2787 = func_80631C68_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80631C68_2787[0]);
        cr = static_cast<uint32_t>(state_free_result_80631C68_2787[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
    ctx->lr = 0x8085B350u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r3 = MemoryInline::FlatRead32((r29 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(31));
}

loc_8085B360:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085B388;
    }
}

loc_8085B364:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(47));
}

loc_8085B368:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085B388;
    }
}

loc_8085B36C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(30));
}

loc_8085B370:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085B390;
    }
}

loc_8085B374:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(46));
}

loc_8085B378:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085B390;
    }
}

loc_8085B37C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(48));
}

loc_8085B380:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085B398;
    }
}

loc_8085B384:
{
    goto loc_8085B39C;
}

loc_8085B388:
{
    r4 = 31;
    goto loc_8085B39C;
}

loc_8085B390:
{
    r4 = 30;
    goto loc_8085B39C;
}

loc_8085B398:
{
    r4 = 48;
}

loc_8085B39C:
{
    r12 = MemoryInline::FlatRead32(r28);
    f1.d = f31.d;
    r3 = r28;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x8085B3B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8085B18C func_8085B18C preserves=false fpr_mask=0x80000000
